#include "FrameBuffer.h"
#include <android/log.h>

#define TAG "PHOENIX"

bool FrameBuffer::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "FrameBuffer Initialized");

    return true;
}

void FrameBuffer::Shutdown()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "FrameBuffer Shutdown");
}
