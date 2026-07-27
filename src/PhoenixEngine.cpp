#include "PhoenixEngine.h"
#include "Renderer.h"
#include "ShaderManager.h"
#include "FrameBuffer.h"
#include <android/log.h>

#define TAG "PHOENIX"

void PhoenixEngine::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Phoenix Engine Initialized");

    Renderer::Init();
    ShaderManager::Init();
    FrameBuffer::Init();
}

void PhoenixEngine::Shutdown()
{
    FrameBuffer::Shutdown();
    ShaderManager::Shutdown();
    Renderer::Shutdown();

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Phoenix Engine Shutdown");
}
