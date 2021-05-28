@echo off
setlocal enabledelayedexpansion

set Usage=%0 base_nsp {-run} {-sd}

rem check for NINTENDO_SDK_ROOT environment variable
if "%NINTENDO_SDK_ROOT%"=="" (
    echo Required environment variable NINTENDO_SDK_ROOT not set. Exiting
    goto Exit
)

rem set path to and check for ControlTarget.exe
set ControlTarget="%NINTENDO_SDK_ROOT%\Tools\CommandLineTools\ControlTarget.exe"
if not exist %ControlTarget% (
    echo Could not find required application %ControlTarget%. Exiting
    goto Exit
)

rem set path to and check for RunOnTarget.exe
set RunOnTarget="%NINTENDO_SDK_ROOT%\Tools\CommandLineTools\RunOnTarget.exe"
if not exist %RunOnTarget% (
    echo Could not find required application %RunOnTarget%. Exiting
    goto Exit
)

set BaseNSP=%~dp0DieAgain-Switch-Debug.nsp

rem read additional command line arguments
set RunAfterInstall=0
set InstallToSD=0

for %%a in (%*) do (
    if "%%~a"=="-run" (
        set RunAfterInstall=1
    )
)

for %%a in (%*) do (
    if "%%~a"=="-sd" (
        set InstallToSD=1
    )
)

rem get the application id from the base nsp
set ApplicationID=""

echo.
echo Getting application id ...
set AuthoringTool="%NINTENDO_SDK_ROOT%\Tools\CommandLineTools\AuthoringTool\AuthoringTool.exe"
set NSPPropertiesOut=AuthoringTool.out

%AuthoringTool% getproperty %BaseNSP% > %NSPPropertiesOut%

for /f "tokens=1,2* delims=:" %%i in (%NSPPropertiesOut%) do (
    call :SetApplicationID %%i %%j
)

del /q %NSPPropertiesOut%

rem ensure we were able to get the application id
if "%ApplicationID%"=="" (
    echo Unable to get Application ID. Exiting.
    goto Exit
)

rem first terminate any running processes
echo.
echo Terminating any running programs on default development kit ...
%ControlTarget% terminate

rem uninstall the application if it's installed
echo.
echo Uninstalling existing application with id %ApplicationID% ...
echo This may report [FAILURE] if application isn't currently installed
%ControlTarget% uninstall-application %ApplicationID%

rem install the base nsp
echo.
if %InstallToSD% equ 1 (
    echo Installing base nsp to SD ...
    %RunOnTarget% "%NINTENDO_SDK_ROOT%\TargetTools\NX-NXFP2-a64\DevMenuCommand\Release\DevMenuCommand.nsp" -- application install %BaseNSP% -s sdcard
) else (
    echo Installing base nsp to NAND ...
    %RunOnTarget% "%NINTENDO_SDK_ROOT%\TargetTools\NX-NXFP2-a64\DevMenuCommand\Release\DevMenuCommand.nsp" -- application install %BaseNSP%
)

if %ERRORLEVEL% neq 0 (
    echo Command returned with ERRORLEVEL %ERRORLEVEL%. Exiting.
    pause
    goto Exit
)

rem install the patch
echo.
if %InstallToSD% equ 1 (
    echo Installing patch nsp to SD ...
    %RunOnTarget% "%NINTENDO_SDK_ROOT%\TargetTools\NX-NXFP2-a64\DevMenuCommand\Release\DevMenuCommand.nsp" -- patch install %PatchNSP% -s sdcard
) else (
    echo Installing patch nsp to NAND ...
    %RunOnTarget% "%NINTENDO_SDK_ROOT%\TargetTools\NX-NXFP2-a64\DevMenuCommand\Release\DevMenuCommand.nsp" -- patch install %PatchNSP%
)

if %ERRORLEVEL% neq 0 (
    echo Command returned with ERRORLEVEL %ERRORLEVEL%. Exiting.
    pause
    goto Exit
)

rem run it if that was requested
if %RunAfterInstall% equ 1 (
    echo Running ...
    %ControlTarget% launch-application %ApplicationID%
    
    if %ERRORLEVEL% neq 0 (
        echo Command returned with ERRORLEVEL %ERRORLEVEL%. Exiting.
        pause
        goto Exit
    )    
)

echo Installation was successful...
timeout /t 5

:Exit
exit /b

:SetApplicationID
    for /f "tokens=* delims= " %%a in ("%1") do set TrimmedKey=%%a
    for /f "tokens=* delims= " %%a in ("%2") do set TrimmedValue=%%a
    if "%TrimmedKey%"== "Id" set ApplicationID=%TrimmedValue%
goto :Eof
