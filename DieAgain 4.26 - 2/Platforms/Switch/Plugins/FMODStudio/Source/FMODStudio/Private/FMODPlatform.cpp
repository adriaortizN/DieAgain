// Copyright (c), Firelight Technologies Pty, Ltd. 2012-2021.
#include "FMODPlatform.h"
#include "fmod_switch.h"
#include "FMODUtils.h"

FString FMODPlatform_GetDllPath(const TCHAR *ShortName, bool bExplicitPath, bool bUseLibPrefix)
{
    return "";
}

FString FMODPlatform_PlatformName()
{
    return "Switch";
}

void FMODPlatform_SetRealChannelCount(FMOD_ADVANCEDSETTINGS* advSettings)
{
    const UFMODSettings& Settings = *GetDefault<UFMODSettings>();
    advSettings->maxVorbisCodecs = Settings.RealChannelCount;
}

int FMODPlatform_MemoryPoolSize()
{
    const UFMODSettings& Settings = *GetDefault<UFMODSettings>();
    return Settings.MemoryPoolSizes.Switch;
}

void* FMODPlatformLoadDll(const TCHAR* LibToLoad)
{
    return FPlatformProcess::GetDllHandle(LibToLoad);
}

FMOD_RESULT FMODPlatformSystemSetup()
{
    verifyfmod(FMOD::Thread_SetAttributes(FMOD_THREAD_TYPE_MIXER, FMOD_THREAD_AFFINITY_CORE_1));
    verifyfmod(FMOD::Thread_SetAttributes(FMOD_THREAD_TYPE_STUDIO_UPDATE, FMOD_THREAD_AFFINITY_CORE_0));
    verifyfmod(FMOD::Thread_SetAttributes(FMOD_THREAD_TYPE_STUDIO_LOAD_BANK, FMOD_THREAD_AFFINITY_CORE_0));
    verifyfmod(FMOD::Thread_SetAttributes(FMOD_THREAD_TYPE_STUDIO_LOAD_SAMPLE, FMOD_THREAD_AFFINITY_CORE_0));
    return FMOD_OK;
}