#include "Renderer.h"
#include <android/log.h>

#define TAG "PHOENIX"

void Renderer::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Renderer Initialized");
}

void Renderer::RenderFrame()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Rendering Frame...");
}

void Renderer::Shutdown()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Renderer Shutdown");
}
