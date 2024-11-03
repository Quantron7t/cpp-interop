#ifndef SHARED_LIB_H
#define SHARED_LIB_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <array>

using namespace std;

#ifdef __cplusplus
    extern "C" {
        #ifdef BUILD_CPP_DLL
            #define SHARED_LIB __declspec(dllexport)
        #else 
            #define SHARED_LIB __declspec(dllexport)
        #endif
        
        void SHARED_LIB strCat(const char *str1, const char *str2, char *newStr);
        int SHARED_LIB add(int a, int b);
        void SHARED_LIB executeCommand(const char *strCmd);
        void SHARED_LIB printSomething(const char *str);
    }
#endif


#endif
