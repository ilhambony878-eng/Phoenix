#include "Renderer.h"

#include <android/log.h>
#include <GLES3/gl3.h>

#define TAG "PHOENIX"

void Renderer::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Renderer Init");
}

void Renderer::BeginFrame()
{
    glClearColor(
        0.1f,
        0.1f,
        0.15f,
        1.0f);

    glClear(
        GL_COLOR_BUFFER_BIT |
        GL_DEPTH_BUFFER_BIT);
}

void Renderer::EndFrame()
{
}

void Renderer::Shutdown()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Renderer Shutdown");
}
