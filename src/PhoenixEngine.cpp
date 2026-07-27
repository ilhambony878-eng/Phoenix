#include "PhoenixEngine.h"
#include "Renderer.h"
#include <android/log.h>

#define TAG "PHOENIX"

void PhoenixEngine::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Phoenix Engine Initialized");

    Renderer::Init();
}

void PhoenixEngine::Shutdown()
{
    Renderer::Shutdown();

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Phoenix Engine Shutdown");
}
