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

#ifndef __CSLLBC_COMM_CSPACKET_HANDLER_H__
#define __CSLLBC_COMM_CSPACKET_HANDLER_H__

#include "csllbc/common/Common.h"
#include "csllbc/core/Core.h"

class CSLLBC_HIDDEN csllbc_PacketHandler
{
    typedef csllbc_Delegates::Deleg_Service_NativeCouldNotFoundDecoderReport _NotFoundDecoderReport;

    /**
     * The csharp packet handle phase enumerations.
     */
    enum
    {
        Phase_UnifyPreHandle, // packet in unify pre-handling
        Phase_PreHandle, // packet in pre-handling
        Phase_Handle, // packet in handling
    };

public:
    /**
     * Constructor.
     * @param[in] notFoundDecoderReport - not found decoder report delegate, use when decoder not found.
     */
    csllbc_PacketHandler(_NotFoundDecoderReport notFoundDecoderReport);

public:
    /**
    * The csharp packet handler.
    */
    void Handle(LLBC_Packet &packet);

    /**
    * The csharp packet pre-handler.
    */
    bool PreHandle(LLBC_Packet &packet);

    /**
    * The csharp packet unify-prehandler.
    */
    bool UnifyPreHandle(LLBC_Packet &packet);

private:
    /**
     * Report to csharp layer packet decoder not found.
     * @param[in] phase  - the phase.
     * @param[in] packet - the packet.
     */
    void ReportNotFoundDecoder(int phase, LLBC_Packet &packet);

private:
    _NotFoundDecoderReport _notFoundDecoderReport;
};

#endif // !__CSLLBC_COMM_CSPACKET_HANDLER_H__
