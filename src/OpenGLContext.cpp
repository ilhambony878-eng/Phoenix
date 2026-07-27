#include "OpenGLContext.h"

#include <android/log.h>

#define TAG "PHOENIX"

static bool gReady = false;

bool OpenGLContext::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "OpenGLContext Init");

    gReady = true;

    return true;
}

void OpenGLContext::Shutdown()
{
    gReady = false;

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "OpenGLContext Shutdown");
}

bool OpenGLContext::IsReady()
{
    return gReady;
}
