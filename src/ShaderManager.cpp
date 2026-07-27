#include "ShaderManager.h"
#include <android/log.h>
#include <GLES3/gl3.h>

#define TAG "PHOENIX"

static GLuint gShaderProgram = 0;

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
    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertex, nullptr);
    glCompileShader(vertexShader);

    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragment, nullptr);
    glCompileShader(fragmentShader);

    gShaderProgram = glCreateProgram();

    glAttachShader(gShaderProgram, vertexShader);
    glAttachShader(gShaderProgram, fragmentShader);

    glLinkProgram(gShaderProgram);

    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Shader Compiled Successfully");
}

void ShaderManager::Use()
{
    if (gShaderProgram != 0)
    {
        glUseProgram(gShaderProgram);
    }

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Using Shader");
}

void ShaderManager::Shutdown()
{
    if (gShaderProgram != 0)
    {
        glDeleteProgram(gShaderProgram);
        gShaderProgram = 0;
    }

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "ShaderManager Shutdown");
}
