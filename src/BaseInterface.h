/***************************************************************************
 *  BaseInterface.h
 *  An example library interface
 *
 *  January 8 11:32 2014
 *  Copyright  2014  Mathieu Bouchard
 *  mathbouchard@gmail.com
 ****************************************************************************/

#include "BaseLib.h"

#ifndef BaseInterface_H
#define BaseInterface_H

#ifdef WIN64
    #define LIB_API __declspec(dllexport)
    #define STDCALL __stdcall
    #define LIB_EXTERN_C_BEGIN
    #define LIB_EXTERN_C_END
#else
    #define LIB_API
    #define STDCALL
    #define LIB_EXTERN_C_BEGIN extern "C" {
    #define LIB_EXTERN_C_END }
#endif

LIB_EXTERN_C_BEGIN

LIB_API long STDCALL _Run(long token);
LIB_API long STDCALL _Set(const char* str, long token);
LIB_API long STDCALL _CreateModule();
LIB_API long STDCALL _DeleteModel(long token);

LIB_EXTERN_C_END

#endif // BaseInterface_H
