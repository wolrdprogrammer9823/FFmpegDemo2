#include <jni.h>
#include <string>
#include <libavcodec/avcodec.h>

extern "C"

    JNIEXPORT jstring JNICALL
    Java_com_example_ffmpegdemo2_MainActivity_stringFromJNI(JNIEnv *env, jobject object) {

        std::string hello = "Hello from C++";
        hello += avcodec_config();
        return env->NewStringUTF(hello.c_str());
    }
