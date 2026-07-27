#include "ShaderLoader.h"
#include <android/log.h>

#define TAG "PHOENIX"

bool ShaderLoader::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Shader Loader Initialized");

    return true;
}

void ShaderLoader::Shutdown()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Shader Loader Shutdown");
}
