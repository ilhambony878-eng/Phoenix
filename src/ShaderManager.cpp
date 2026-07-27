#include "ShaderManager.h"
#include <android/log.h>

#define TAG "PHOENIX"

void ShaderManager::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Loading GLSL shaders...");
}

void ShaderManager::Load(const char* vertex,
                         const char* fragment)
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Shader Loaded");
}

void ShaderManager::Use()
{
}

void ShaderManager::Shutdown()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "ShaderManager Shutdown");
}
