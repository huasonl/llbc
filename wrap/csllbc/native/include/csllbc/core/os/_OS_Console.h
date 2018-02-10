// The MIT License (MIT)

// Copyright (c) 2013 lailongwei<lailongwei@126.com>
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy of 
// this software and associated documentation files (the "Software"), to deal in 
// the Software without restriction, including without limitation the rights to 
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of 
// the Software, and to permit persons to whom the Software is furnished to do so, 
// subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all 
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS 
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR 
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER 
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN 
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#ifndef __CSLLBC_CORE_OS__OS_CONSOLE_H__
#define __CSLLBC_CORE_OS__OS_CONSOLE_H__

#include "csllbc/common/Common.h"

LLBC_EXTERN_C CSLLBC_EXPORT void csllbc_Console_Trace(const char *value, int valueLen);

LLBC_EXTERN_C CSLLBC_EXPORT void csllbc_Console_SafePrint(bool toStdout, bool newLine, const char *value, int valueLen);

LLBC_EXTERN_C CSLLBC_EXPORT int csllbc_Console_GetForegroundColor();
LLBC_EXTERN_C CSLLBC_EXPORT int csllbc_Console_SetForegroundColor(int color);

LLBC_EXTERN_C CSLLBC_EXPORT int csllbc_Console_GetBackgroundColor();
LLBC_EXTERN_C CSLLBC_EXPORT int csllbc_Console_SetBackgroundColor(int color);

LLBC_EXTERN_C CSLLBC_EXPORT int csllbc_Console_ResetColor();

LLBC_EXTERN_C CSLLBC_EXPORT int csllbc_Console_SafeFlush(bool flushStdout);

#endif // !__CSLLBC_CORE_OS__OS_CONSOLE_H__
