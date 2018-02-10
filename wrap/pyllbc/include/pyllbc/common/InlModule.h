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

#ifndef __PYLLBC_COM_INL_MODULE_H__
#define __PYLLBC_COM_INL_MODULE_H__

#include "pyllbc/common/LibHeader.h"
#include "pyllbc/common/PyModule.h"

/**
 * \breif The internal module class encapsulation.
 */
class _pyllbc_InlModule : public pyllbc_Module
{
public:
    _pyllbc_InlModule();
    virtual ~_pyllbc_InlModule();
};

/* The internal module singleton class encapsulation. */
#define pyllbc_s_InlModule LLBC_Singleton<_pyllbc_InlModule, LLBC_DummyLock>::Instance()

#endif // !__PYLLBC_COM_INL_MODULE_H__
