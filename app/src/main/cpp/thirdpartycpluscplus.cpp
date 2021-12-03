//
// Created by Reezoo on 02-05-2021.
//
#include <jni.h>
#include <android/log.h>
#include <stdio.h>
static const char *SOME_TAG = "My_Tag";
void printSomething(const char* message) {
    __android_log_print(ANDROID_LOG_VERBOSE, SOME_TAG, "%s", message);
}
#include "thirdpartycpluscplus.h"
extern "C"{
    int add(int a, int b) {
        printSomething("Hello Reezoo");
        char buf[128];
        sprintf(buf,"%d",a+b);
        printSomething(buf);
        return a + b;
    }
}
extern "C" {
    int multiply(int a, int b) {
        return a * b;

    }
}

extern "C" {
const char *sayHello() {

    return "hello dll";
    }
}


