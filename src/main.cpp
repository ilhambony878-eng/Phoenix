#include <android/log.h>

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, "PHOENIX", __VA_ARGS__)

extern "C"
void PhoenixInit()
{
    LOGI("Phoenix Engine Started!");
}
