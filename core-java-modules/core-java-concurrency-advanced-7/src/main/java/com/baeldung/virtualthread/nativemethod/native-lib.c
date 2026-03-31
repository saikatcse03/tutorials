#include <jni.h>
#include <unistd.h>
#include "com_baeldung_virtualthread_nativemethod_NativeDemo.h"

JNIEXPORT jstring JNICALL Java_com_baeldung_virtualthread_nativemethod_NativeDemo_nativeCall(JNIEnv *env, jobject obj) {
    sleep(3);
    return (*env)->NewStringUTF(env, "Return from native code!");
}