#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_jp_ac_jaist_cosmo_stereosoundrecorder_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
