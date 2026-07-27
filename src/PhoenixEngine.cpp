#include "PhoenixEngine.h"
#include "Renderer.h"
#include "ShaderManager.h"
#include "FrameBuffer.h"
#include "OpenGLContext.h"
#include "ShaderLoader.h"
#include "DefaultShader.h"
#include "VertexBuffer.h"

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

    ShaderManager::Load(
        DefaultShader::Vertex(),
        DefaultShader::Fragment());

    ShaderManager::Use();

    ShaderLoader::Init();

    FrameBuffer::Init();

    VertexBuffer::Init();
}

void PhoenixEngine::Shutdown()
{
    VertexBuffer::Shutdown();

    FrameBuffer::Shutdown();

    ShaderLoader::Shutdown();

    ShaderManager::Shutdown();

    Renderer::Shutdown();

    OpenGLContext::Shutdown();

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Phoenix Engine Shutdown");
}
