#include "Renderer.h"
#include <android/log.h>
#include <GLES3/gl3.h>

#define TAG "PHOENIX"

void Renderer::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Renderer Initialized");
}

void Renderer::Shutdown()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Renderer Shutdown");
}

void Renderer::BeginFrame()
{
}

void Renderer::EndFrame()
{
}

void Renderer::Render()
{
}
