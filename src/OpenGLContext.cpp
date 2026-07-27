#include "OpenGLContext.h"
#include <android/log.h>

#define TAG "PHOENIX"

bool OpenGLContext::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "OpenGL ES Context Initialized");

    return true;
}

void OpenGLContext::Shutdown()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "OpenGL ES Context Shutdown");
}
