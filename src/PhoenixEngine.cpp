#include "PhoenixEngine.h"
#include <android/log.h>

#define TAG "PHOENIX"

void PhoenixEngine::Init()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Phoenix Engine Initialized");
}

void PhoenixEngine::Shutdown()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Phoenix Engine Shutdown");
}
