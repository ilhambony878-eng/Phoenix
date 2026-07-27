#include "ShaderManager.h"
#include <android/log.h>

#define TAG "PHOENIX"

bool ShaderManager::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Shader Manager Initialized");

    return true;
}

void ShaderManager::Shutdown()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Shader Manager Shutdown");
}
