#include "VertexBuffer.h"
#include <android/log.h>
#include <GLES3/gl3.h>

#define TAG "PHOENIX"

static GLuint gVBO = 0;

bool VertexBuffer::Init()
{
    glGenBuffers(1, &gVBO);

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "VertexBuffer Initialized");

    return true;
}

void VertexBuffer::Shutdown()
{
    if(gVBO != 0)
    {
        glDeleteBuffers(1, &gVBO);
        gVBO = 0;
    }

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "VertexBuffer Shutdown");
}
