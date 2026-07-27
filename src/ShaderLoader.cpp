#include "ShaderLoader.h"
#include <android/log.h>

#define TAG "PHOENIX"

static const char* gVertexShader = R"(#version 300 es
layout(location = 0) in vec3 aPos;

void main()
{
    gl_Position = vec4(aPos, 1.0);
}
)";

static const char* gFragmentShader = R"(#version 300 es
precision mediump float;

out vec4 FragColor;

void main()
{
    FragColor = vec4(1.0, 0.3, 0.1, 1.0);
}
)";

void ShaderLoader::Init()
{
    __android_log_print(ANDROID_LOG_INFO, TAG, "ShaderLoader Init");
}

void ShaderLoader::Shutdown()
{
    __android_log_print(ANDROID_LOG_INFO, TAG, "ShaderLoader Shutdown");
}

const char* ShaderLoader::GetDefaultVertexShader()
{
    return gVertexShader;
}

const char* ShaderLoader::GetDefaultFragmentShader()
{
    return gFragmentShader;
}
