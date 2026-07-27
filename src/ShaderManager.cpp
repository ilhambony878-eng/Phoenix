#include "ShaderManager.h"

#include <android/log.h>
#include <GLES3/gl3.h>

#define TAG "PHOENIX"

static GLuint gProgram = 0;

void ShaderManager::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "ShaderManager Init");
}

void ShaderManager::Load(
    const char* vertexShader,
    const char* fragmentShader)
{
    GLuint vs = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vs, 1, &vertexShader, nullptr);
    glCompileShader(vs);

    GLuint fs = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fs, 1, &fragmentShader, nullptr);
    glCompileShader(fs);

    gProgram = glCreateProgram();

    glAttachShader(gProgram, vs);
    glAttachShader(gProgram, fs);

    glLinkProgram(gProgram);

    glDeleteShader(vs);
    glDeleteShader(fs);

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Shader Linked");
}

void ShaderManager::Use()
{
    if (gProgram != 0)
    {
        glUseProgram(gProgram);
    }
}

void ShaderManager::Shutdown()
{
    if (gProgram != 0)
    {
        glDeleteProgram(gProgram);
        gProgram = 0;
    }

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "ShaderManager Shutdown");
}
