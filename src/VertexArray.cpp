#include "VertexArray.h"

#include <android/log.h>
#include <GLES3/gl3.h>

#define TAG "PHOENIX"

static GLuint gVAO = 0;

bool VertexArray::Init()
{
    glGenVertexArrays(1, &gVAO);

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "VertexArray Init");

    return true;
}

void VertexArray::Bind()
{
    if(gVAO != 0)
    {
        glBindVertexArray(gVAO);
    }
}

void VertexArray::Shutdown()
{
    if(gVAO != 0)
    {
        glDeleteVertexArrays(1, &gVAO);
        gVAO = 0;
    }

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "VertexArray Shutdown");
}
