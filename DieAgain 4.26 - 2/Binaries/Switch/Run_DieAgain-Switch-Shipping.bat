@echo off
setlocal enabledelayedexpansion

rem check for NINTENDO_SDK_ROOT environment variable
if "%NINTENDO_SDK_ROOT%"=="" (
    echo Required environment variable NINTENDO_SDK_ROOT not set. Exiting
    goto Exit
)

rem set path to and check for RunOnTarget.exe
set RunOnTarget="%NINTENDO_SDK_ROOT%\Tools\CommandLineTools\RunOnTarget.exe"
if not exist %RunOnTarget% (
    echo Could not find required application %RunOnTarget%. Exiting
    goto Exit
)

set BaseNSP="%~dp0DieAgain-Switch-Shipping.nsp"

rem get the application id from the base nsp
set ApplicationID=""

rem run the nsp
%RunOnTarget% %BaseNSP% --reset --no-wait
