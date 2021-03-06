/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "android/log.h"

/* Header for class com_linecutfeng_lowpoly_Sobel */
#define TAG "icv_jni" // 这个是自定义的LOG的标识
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__) // 定义LOGI类型

static const int kernelX[3][3] = {
        {-1, 0, 1},
        {-2, 0, 2},
        {-1, 0, 1}
};
static const int kernelY[3][3] = {
        {-1, -2, -1},
        {0,  0,  0},
        {1,  2,  1}
};

#ifndef _Included_com_linecutfeng_lowpoly_Sobel
#define _Included_com_linecutfeng_lowpoly_Sobel
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_linecutfeng_lowpoly_Sobel
 * Method:    sobel
 * Signature: ([IIILjava/util/ArrayList;)V
 */
JNIEXPORT void JNICALL JNICALL Java_com_linecutfeng_lowpoly_Sobel_sobelFromNative
        (JNIEnv *, jclass, jintArray, jint, jint,jobject backList);


int getAvg(int *pixel, int width, int height, int x, int y) {
    if (x < 0 || y < 0 || x >= width || y >= height)
        return 0;
    int color = pixel[y * width + x];
    int blue = 0xFF & color;
    int green = (color >> 8) & 0xFF;
    int red = (color >> 16) & 0xFF;
    return (blue + green + red) / 3;
}
#ifdef __cplusplus
}
#endif
#endif
