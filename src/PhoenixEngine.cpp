#include "PhoenixEngine.h"
#include "Renderer.h"
#include "ShaderManager.h"
#include "FrameBuffer.h"
#include "OpenGLContext.h"
#include <android/log.h>

#define TAG "PHOENIX"

void PhoenixEngine::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Phoenix Engine Initialized");

    OpenGLContext::Init();
    Renderer::Init();
    ShaderManager::Init();
    FrameBuffer::Init();
}

void PhoenixEngine::Shutdown()
{
    FrameBuffer::Shutdown();
    ShaderManager::Shutdown();
    Renderer::Shutdown();
    OpenGLContext::Shutdown();

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Phoenix Engine Shutdown");
}
