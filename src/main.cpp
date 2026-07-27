#include <jni.h>
#include "PhoenixEngine.h"

extern "C"
JNIEXPORT jint JNICALL
JNI_OnLoad(JavaVM* vm, void*)
{
    PhoenixEngine::Init();
    return JNI_VERSION_1_6;
}
