#include "OpenGLContext.h"
#include <android/log.h>

#define TAG "PHOENIX"

void OpenGLContext::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "OpenGL ES Context Initialized");
}

void OpenGLContext::Shutdown()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "OpenGL ES Context Shutdown");
}
