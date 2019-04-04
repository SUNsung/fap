
        
        #ifndef BITCOIN_QT_OPENURIDIALOG_H
#define BITCOIN_QT_OPENURIDIALOG_H
    
        explicit reverse_lock(Lock& _lock) : lock(_lock) {
        _lock.unlock();
        _lock.swap(templock);
    }
    
    static bool CaseInsensitiveEqual(const std::string &s1, const std::string &s2)
{
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i) {
        char c1 = s1[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 -= ('A' - 'a');
        char c2 = s2[i];
        if (c2 >= 'A' && c2 <= 'Z') c2 -= ('A' - 'a');
        if (c1 != c2) return false;
    }
    return true;
}
    
        for (int argIndex = 0; argIndex < numFormatters; ++argIndex)
    {
        // Parse the format string
        fmt = printFormatStringLiteral(out, fmt);
        bool spacePadPositive = false;
        int ntrunc = -1;
        const char* fmtEnd = streamStateFromFormat(out, spacePadPositive, ntrunc, fmt,
                                                   formatters, argIndex, numFormatters);
        if (argIndex >= numFormatters)
        {
            // Check args remain after reading any variable width/precision
            TINYFORMAT_ERROR('tinyformat: Not enough format arguments');
            return;
        }
        const FormatArg& arg = formatters[argIndex];
        // Format the arg into the stream.
        if(!spacePadPositive)
            arg.format(out, fmt, fmtEnd, ntrunc);
        else
        {
            // The following is a special case with no direct correspondence
            // between stream formatting and the printf() behaviour.  Simulate
            // it crudely by formatting into a temporary string stream and
            // munging the resulting string.
            std::ostringstream tmpStream;
            tmpStream.copyfmt(out);
            tmpStream.setf(std::ios::showpos);
            arg.format(tmpStream, fmt, fmtEnd, ntrunc);
            std::string result = tmpStream.str(); // allocates... yuck.
            for(size_t i = 0, iend = result.size(); i < iend; ++i)
                if(result[i] == '+') result[i] = ' ';
            out << result;
        }
        fmt = fmtEnd;
    }
    
    ChaCha20::ChaCha20()
{
    memset(input, 0, sizeof(input));
}
    
            'Lloop1_%=:'
        'movdqa 0x0(%13),%%xmm9;'
        'paddd  %%xmm4,%%xmm9;'
        'movdqa %%xmm9,%16;'
        'movdqa %%xmm7,%%xmm0;'
        'mov    %k2,%10;'
        'ror    $0xe,%10;'
        'mov    %3,%11;'
        'palignr $0x4,%%xmm6,%%xmm0;'
        'ror    $0x9,%11;'
        'xor    %k2,%10;'
        'mov    %7,%12;'
        'ror    $0x5,%10;'
        'movdqa %%xmm5,%%xmm1;'
        'xor    %3,%11;'
        'xor    %8,%12;'
        'paddd  %%xmm4,%%xmm0;'
        'xor    %k2,%10;'
        'and    %k2,%12;'
        'ror    $0xb,%11;'
        'palignr $0x4,%%xmm4,%%xmm1;'
        'xor    %3,%11;'
        'ror    $0x6,%10;'
        'xor    %8,%12;'
        'movdqa %%xmm1,%%xmm2;'
        'ror    $0x2,%11;'
        'add    %10,%12;'
        'add    %16,%12;'
        'movdqa %%xmm1,%%xmm3;'
        'mov    %3,%10;'
        'add    %12,%9;'
        'mov    %3,%12;'
        'pslld  $0x19,%%xmm1;'
        'or     %5,%10;'
        'add    %9,%6;'
        'and    %5,%12;'
        'psrld  $0x7,%%xmm2;'
        'and    %4,%10;'
        'add    %11,%9;'
        'por    %%xmm2,%%xmm1;'
        'or     %12,%10;'
        'add    %10,%9;'
        'movdqa %%xmm3,%%xmm2;'
        'mov    %6,%10;'
        'mov    %9,%11;'
        'movdqa %%xmm3,%%xmm8;'
        'ror    $0xe,%10;'
        'xor    %6,%10;'
        'mov    %k2,%12;'
        'ror    $0x9,%11;'
        'pslld  $0xe,%%xmm3;'
        'xor    %9,%11;'
        'ror    $0x5,%10;'
        'xor    %7,%12;'
        'psrld  $0x12,%%xmm2;'
        'ror    $0xb,%11;'
        'xor    %6,%10;'
        'and    %6,%12;'
        'ror    $0x6,%10;'
        'pxor   %%xmm3,%%xmm1;'
        'xor    %9,%11;'
        'xor    %7,%12;'
        'psrld  $0x3,%%xmm8;'
        'add    %10,%12;'
        'add    4+%16,%12;'
        'ror    $0x2,%11;'
        'pxor   %%xmm2,%%xmm1;'
        'mov    %9,%10;'
        'add    %12,%8;'
        'mov    %9,%12;'
        'pxor   %%xmm8,%%xmm1;'
        'or     %4,%10;'
        'add    %8,%5;'
        'and    %4,%12;'
        'pshufd $0xfa,%%xmm7,%%xmm2;'
        'and    %3,%10;'
        'add    %11,%8;'
        'paddd  %%xmm1,%%xmm0;'
        'or     %12,%10;'
        'add    %10,%8;'
        'movdqa %%xmm2,%%xmm3;'
        'mov    %5,%10;'
        'mov    %8,%11;'
        'ror    $0xe,%10;'
        'movdqa %%xmm2,%%xmm8;'
        'xor    %5,%10;'
        'ror    $0x9,%11;'
        'mov    %6,%12;'
        'xor    %8,%11;'
        'ror    $0x5,%10;'
        'psrlq  $0x11,%%xmm2;'
        'xor    %k2,%12;'
        'psrlq  $0x13,%%xmm3;'
        'xor    %5,%10;'
        'and    %5,%12;'
        'psrld  $0xa,%%xmm8;'
        'ror    $0xb,%11;'
        'xor    %8,%11;'
        'xor    %k2,%12;'
        'ror    $0x6,%10;'
        'pxor   %%xmm3,%%xmm2;'
        'add    %10,%12;'
        'ror    $0x2,%11;'
        'add    8+%16,%12;'
        'pxor   %%xmm2,%%xmm8;'
        'mov    %8,%10;'
        'add    %12,%7;'
        'mov    %8,%12;'
        'pshufb %%xmm10,%%xmm8;'
        'or     %3,%10;'
        'add    %7,%4;'
        'and    %3,%12;'
        'paddd  %%xmm8,%%xmm0;'
        'and    %9,%10;'
        'add    %11,%7;'
        'pshufd $0x50,%%xmm0,%%xmm2;'
        'or     %12,%10;'
        'add    %10,%7;'
        'movdqa %%xmm2,%%xmm3;'
        'mov    %4,%10;'
        'ror    $0xe,%10;'
        'mov    %7,%11;'
        'movdqa %%xmm2,%%xmm4;'
        'ror    $0x9,%11;'
        'xor    %4,%10;'
        'mov    %5,%12;'
        'ror    $0x5,%10;'
        'psrlq  $0x11,%%xmm2;'
        'xor    %7,%11;'
        'xor    %6,%12;'
        'psrlq  $0x13,%%xmm3;'
        'xor    %4,%10;'
        'and    %4,%12;'
        'ror    $0xb,%11;'
        'psrld  $0xa,%%xmm4;'
        'xor    %7,%11;'
        'ror    $0x6,%10;'
        'xor    %6,%12;'
        'pxor   %%xmm3,%%xmm2;'
        'ror    $0x2,%11;'
        'add    %10,%12;'
        'add    12+%16,%12;'
        'pxor   %%xmm2,%%xmm4;'
        'mov    %7,%10;'
        'add    %12,%k2;'
        'mov    %7,%12;'
        'pshufb %%xmm11,%%xmm4;'
        'or     %9,%10;'
        'add    %k2,%3;'
        'and    %9,%12;'
        'paddd  %%xmm0,%%xmm4;'
        'and    %8,%10;'
        'add    %11,%k2;'
        'or     %12,%10;'
        'add    %10,%k2;'
        'movdqa 0x10(%13),%%xmm9;'
        'paddd  %%xmm5,%%xmm9;'
        'movdqa %%xmm9,%16;'
        'movdqa %%xmm4,%%xmm0;'
        'mov    %3,%10;'
        'ror    $0xe,%10;'
        'mov    %k2,%11;'
        'palignr $0x4,%%xmm7,%%xmm0;'
        'ror    $0x9,%11;'
        'xor    %3,%10;'
        'mov    %4,%12;'
        'ror    $0x5,%10;'
        'movdqa %%xmm6,%%xmm1;'
        'xor    %k2,%11;'
        'xor    %5,%12;'
        'paddd  %%xmm5,%%xmm0;'
        'xor    %3,%10;'
        'and    %3,%12;'
        'ror    $0xb,%11;'
        'palignr $0x4,%%xmm5,%%xmm1;'
        'xor    %k2,%11;'
        'ror    $0x6,%10;'
        'xor    %5,%12;'
        'movdqa %%xmm1,%%xmm2;'
        'ror    $0x2,%11;'
        'add    %10,%12;'
        'add    %16,%12;'
        'movdqa %%xmm1,%%xmm3;'
        'mov    %k2,%10;'
        'add    %12,%6;'
        'mov    %k2,%12;'
        'pslld  $0x19,%%xmm1;'
        'or     %8,%10;'
        'add    %6,%9;'
        'and    %8,%12;'
        'psrld  $0x7,%%xmm2;'
        'and    %7,%10;'
        'add    %11,%6;'
        'por    %%xmm2,%%xmm1;'
        'or     %12,%10;'
        'add    %10,%6;'
        'movdqa %%xmm3,%%xmm2;'
        'mov    %9,%10;'
        'mov    %6,%11;'
        'movdqa %%xmm3,%%xmm8;'
        'ror    $0xe,%10;'
        'xor    %9,%10;'
        'mov    %3,%12;'
        'ror    $0x9,%11;'
        'pslld  $0xe,%%xmm3;'
        'xor    %6,%11;'
        'ror    $0x5,%10;'
        'xor    %4,%12;'
        'psrld  $0x12,%%xmm2;'
        'ror    $0xb,%11;'
        'xor    %9,%10;'
        'and    %9,%12;'
        'ror    $0x6,%10;'
        'pxor   %%xmm3,%%xmm1;'
        'xor    %6,%11;'
        'xor    %4,%12;'
        'psrld  $0x3,%%xmm8;'
        'add    %10,%12;'
        'add    4+%16,%12;'
        'ror    $0x2,%11;'
        'pxor   %%xmm2,%%xmm1;'
        'mov    %6,%10;'
        'add    %12,%5;'
        'mov    %6,%12;'
        'pxor   %%xmm8,%%xmm1;'
        'or     %7,%10;'
        'add    %5,%8;'
        'and    %7,%12;'
        'pshufd $0xfa,%%xmm4,%%xmm2;'
        'and    %k2,%10;'
        'add    %11,%5;'
        'paddd  %%xmm1,%%xmm0;'
        'or     %12,%10;'
        'add    %10,%5;'
        'movdqa %%xmm2,%%xmm3;'
        'mov    %8,%10;'
        'mov    %5,%11;'
        'ror    $0xe,%10;'
        'movdqa %%xmm2,%%xmm8;'
        'xor    %8,%10;'
        'ror    $0x9,%11;'
        'mov    %9,%12;'
        'xor    %5,%11;'
        'ror    $0x5,%10;'
        'psrlq  $0x11,%%xmm2;'
        'xor    %3,%12;'
        'psrlq  $0x13,%%xmm3;'
        'xor    %8,%10;'
        'and    %8,%12;'
        'psrld  $0xa,%%xmm8;'
        'ror    $0xb,%11;'
        'xor    %5,%11;'
        'xor    %3,%12;'
        'ror    $0x6,%10;'
        'pxor   %%xmm3,%%xmm2;'
        'add    %10,%12;'
        'ror    $0x2,%11;'
        'add    8+%16,%12;'
        'pxor   %%xmm2,%%xmm8;'
        'mov    %5,%10;'
        'add    %12,%4;'
        'mov    %5,%12;'
        'pshufb %%xmm10,%%xmm8;'
        'or     %k2,%10;'
        'add    %4,%7;'
        'and    %k2,%12;'
        'paddd  %%xmm8,%%xmm0;'
        'and    %6,%10;'
        'add    %11,%4;'
        'pshufd $0x50,%%xmm0,%%xmm2;'
        'or     %12,%10;'
        'add    %10,%4;'
        'movdqa %%xmm2,%%xmm3;'
        'mov    %7,%10;'
        'ror    $0xe,%10;'
        'mov    %4,%11;'
        'movdqa %%xmm2,%%xmm5;'
        'ror    $0x9,%11;'
        'xor    %7,%10;'
        'mov    %8,%12;'
        'ror    $0x5,%10;'
        'psrlq  $0x11,%%xmm2;'
        'xor    %4,%11;'
        'xor    %9,%12;'
        'psrlq  $0x13,%%xmm3;'
        'xor    %7,%10;'
        'and    %7,%12;'
        'ror    $0xb,%11;'
        'psrld  $0xa,%%xmm5;'
        'xor    %4,%11;'
        'ror    $0x6,%10;'
        'xor    %9,%12;'
        'pxor   %%xmm3,%%xmm2;'
        'ror    $0x2,%11;'
        'add    %10,%12;'
        'add    12+%16,%12;'
        'pxor   %%xmm2,%%xmm5;'
        'mov    %4,%10;'
        'add    %12,%3;'
        'mov    %4,%12;'
        'pshufb %%xmm11,%%xmm5;'
        'or     %6,%10;'
        'add    %3,%k2;'
        'and    %6,%12;'
        'paddd  %%xmm0,%%xmm5;'
        'and    %5,%10;'
        'add    %11,%3;'
        'or     %12,%10;'
        'add    %10,%3;'
        'movdqa 0x20(%13),%%xmm9;'
        'paddd  %%xmm6,%%xmm9;'
        'movdqa %%xmm9,%16;'
        'movdqa %%xmm5,%%xmm0;'
        'mov    %k2,%10;'
        'ror    $0xe,%10;'
        'mov    %3,%11;'
        'palignr $0x4,%%xmm4,%%xmm0;'
        'ror    $0x9,%11;'
        'xor    %k2,%10;'
        'mov    %7,%12;'
        'ror    $0x5,%10;'
        'movdqa %%xmm7,%%xmm1;'
        'xor    %3,%11;'
        'xor    %8,%12;'
        'paddd  %%xmm6,%%xmm0;'
        'xor    %k2,%10;'
        'and    %k2,%12;'
        'ror    $0xb,%11;'
        'palignr $0x4,%%xmm6,%%xmm1;'
        'xor    %3,%11;'
        'ror    $0x6,%10;'
        'xor    %8,%12;'
        'movdqa %%xmm1,%%xmm2;'
        'ror    $0x2,%11;'
        'add    %10,%12;'
        'add    %16,%12;'
        'movdqa %%xmm1,%%xmm3;'
        'mov    %3,%10;'
        'add    %12,%9;'
        'mov    %3,%12;'
        'pslld  $0x19,%%xmm1;'
        'or     %5,%10;'
        'add    %9,%6;'
        'and    %5,%12;'
        'psrld  $0x7,%%xmm2;'
        'and    %4,%10;'
        'add    %11,%9;'
        'por    %%xmm2,%%xmm1;'
        'or     %12,%10;'
        'add    %10,%9;'
        'movdqa %%xmm3,%%xmm2;'
        'mov    %6,%10;'
        'mov    %9,%11;'
        'movdqa %%xmm3,%%xmm8;'
        'ror    $0xe,%10;'
        'xor    %6,%10;'
        'mov    %k2,%12;'
        'ror    $0x9,%11;'
        'pslld  $0xe,%%xmm3;'
        'xor    %9,%11;'
        'ror    $0x5,%10;'
        'xor    %7,%12;'
        'psrld  $0x12,%%xmm2;'
        'ror    $0xb,%11;'
        'xor    %6,%10;'
        'and    %6,%12;'
        'ror    $0x6,%10;'
        'pxor   %%xmm3,%%xmm1;'
        'xor    %9,%11;'
        'xor    %7,%12;'
        'psrld  $0x3,%%xmm8;'
        'add    %10,%12;'
        'add    4+%16,%12;'
        'ror    $0x2,%11;'
        'pxor   %%xmm2,%%xmm1;'
        'mov    %9,%10;'
        'add    %12,%8;'
        'mov    %9,%12;'
        'pxor   %%xmm8,%%xmm1;'
        'or     %4,%10;'
        'add    %8,%5;'
        'and    %4,%12;'
        'pshufd $0xfa,%%xmm5,%%xmm2;'
        'and    %3,%10;'
        'add    %11,%8;'
        'paddd  %%xmm1,%%xmm0;'
        'or     %12,%10;'
        'add    %10,%8;'
        'movdqa %%xmm2,%%xmm3;'
        'mov    %5,%10;'
        'mov    %8,%11;'
        'ror    $0xe,%10;'
        'movdqa %%xmm2,%%xmm8;'
        'xor    %5,%10;'
        'ror    $0x9,%11;'
        'mov    %6,%12;'
        'xor    %8,%11;'
        'ror    $0x5,%10;'
        'psrlq  $0x11,%%xmm2;'
        'xor    %k2,%12;'
        'psrlq  $0x13,%%xmm3;'
        'xor    %5,%10;'
        'and    %5,%12;'
        'psrld  $0xa,%%xmm8;'
        'ror    $0xb,%11;'
        'xor    %8,%11;'
        'xor    %k2,%12;'
        'ror    $0x6,%10;'
        'pxor   %%xmm3,%%xmm2;'
        'add    %10,%12;'
        'ror    $0x2,%11;'
        'add    8+%16,%12;'
        'pxor   %%xmm2,%%xmm8;'
        'mov    %8,%10;'
        'add    %12,%7;'
        'mov    %8,%12;'
        'pshufb %%xmm10,%%xmm8;'
        'or     %3,%10;'
        'add    %7,%4;'
        'and    %3,%12;'
        'paddd  %%xmm8,%%xmm0;'
        'and    %9,%10;'
        'add    %11,%7;'
        'pshufd $0x50,%%xmm0,%%xmm2;'
        'or     %12,%10;'
        'add    %10,%7;'
        'movdqa %%xmm2,%%xmm3;'
        'mov    %4,%10;'
        'ror    $0xe,%10;'
        'mov    %7,%11;'
        'movdqa %%xmm2,%%xmm6;'
        'ror    $0x9,%11;'
        'xor    %4,%10;'
        'mov    %5,%12;'
        'ror    $0x5,%10;'
        'psrlq  $0x11,%%xmm2;'
        'xor    %7,%11;'
        'xor    %6,%12;'
        'psrlq  $0x13,%%xmm3;'
        'xor    %4,%10;'
        'and    %4,%12;'
        'ror    $0xb,%11;'
        'psrld  $0xa,%%xmm6;'
        'xor    %7,%11;'
        'ror    $0x6,%10;'
        'xor    %6,%12;'
        'pxor   %%xmm3,%%xmm2;'
        'ror    $0x2,%11;'
        'add    %10,%12;'
        'add    12+%16,%12;'
        'pxor   %%xmm2,%%xmm6;'
        'mov    %7,%10;'
        'add    %12,%k2;'
        'mov    %7,%12;'
        'pshufb %%xmm11,%%xmm6;'
        'or     %9,%10;'
        'add    %k2,%3;'
        'and    %9,%12;'
        'paddd  %%xmm0,%%xmm6;'
        'and    %8,%10;'
        'add    %11,%k2;'
        'or     %12,%10;'
        'add    %10,%k2;'
        'movdqa 0x30(%13),%%xmm9;'
        'paddd  %%xmm7,%%xmm9;'
        'movdqa %%xmm9,%16;'
        'add    $0x40,%13;'
        'movdqa %%xmm6,%%xmm0;'
        'mov    %3,%10;'
        'ror    $0xe,%10;'
        'mov    %k2,%11;'
        'palignr $0x4,%%xmm5,%%xmm0;'
        'ror    $0x9,%11;'
        'xor    %3,%10;'
        'mov    %4,%12;'
        'ror    $0x5,%10;'
        'movdqa %%xmm4,%%xmm1;'
        'xor    %k2,%11;'
        'xor    %5,%12;'
        'paddd  %%xmm7,%%xmm0;'
        'xor    %3,%10;'
        'and    %3,%12;'
        'ror    $0xb,%11;'
        'palignr $0x4,%%xmm7,%%xmm1;'
        'xor    %k2,%11;'
        'ror    $0x6,%10;'
        'xor    %5,%12;'
        'movdqa %%xmm1,%%xmm2;'
        'ror    $0x2,%11;'
        'add    %10,%12;'
        'add    %16,%12;'
        'movdqa %%xmm1,%%xmm3;'
        'mov    %k2,%10;'
        'add    %12,%6;'
        'mov    %k2,%12;'
        'pslld  $0x19,%%xmm1;'
        'or     %8,%10;'
        'add    %6,%9;'
        'and    %8,%12;'
        'psrld  $0x7,%%xmm2;'
        'and    %7,%10;'
        'add    %11,%6;'
        'por    %%xmm2,%%xmm1;'
        'or     %12,%10;'
        'add    %10,%6;'
        'movdqa %%xmm3,%%xmm2;'
        'mov    %9,%10;'
        'mov    %6,%11;'
        'movdqa %%xmm3,%%xmm8;'
        'ror    $0xe,%10;'
        'xor    %9,%10;'
        'mov    %3,%12;'
        'ror    $0x9,%11;'
        'pslld  $0xe,%%xmm3;'
        'xor    %6,%11;'
        'ror    $0x5,%10;'
        'xor    %4,%12;'
        'psrld  $0x12,%%xmm2;'
        'ror    $0xb,%11;'
        'xor    %9,%10;'
        'and    %9,%12;'
        'ror    $0x6,%10;'
        'pxor   %%xmm3,%%xmm1;'
        'xor    %6,%11;'
        'xor    %4,%12;'
        'psrld  $0x3,%%xmm8;'
        'add    %10,%12;'
        'add    4+%16,%12;'
        'ror    $0x2,%11;'
        'pxor   %%xmm2,%%xmm1;'
        'mov    %6,%10;'
        'add    %12,%5;'
        'mov    %6,%12;'
        'pxor   %%xmm8,%%xmm1;'
        'or     %7,%10;'
        'add    %5,%8;'
        'and    %7,%12;'
        'pshufd $0xfa,%%xmm6,%%xmm2;'
        'and    %k2,%10;'
        'add    %11,%5;'
        'paddd  %%xmm1,%%xmm0;'
        'or     %12,%10;'
        'add    %10,%5;'
        'movdqa %%xmm2,%%xmm3;'
        'mov    %8,%10;'
        'mov    %5,%11;'
        'ror    $0xe,%10;'
        'movdqa %%xmm2,%%xmm8;'
        'xor    %8,%10;'
        'ror    $0x9,%11;'
        'mov    %9,%12;'
        'xor    %5,%11;'
        'ror    $0x5,%10;'
        'psrlq  $0x11,%%xmm2;'
        'xor    %3,%12;'
        'psrlq  $0x13,%%xmm3;'
        'xor    %8,%10;'
        'and    %8,%12;'
        'psrld  $0xa,%%xmm8;'
        'ror    $0xb,%11;'
        'xor    %5,%11;'
        'xor    %3,%12;'
        'ror    $0x6,%10;'
        'pxor   %%xmm3,%%xmm2;'
        'add    %10,%12;'
        'ror    $0x2,%11;'
        'add    8+%16,%12;'
        'pxor   %%xmm2,%%xmm8;'
        'mov    %5,%10;'
        'add    %12,%4;'
        'mov    %5,%12;'
        'pshufb %%xmm10,%%xmm8;'
        'or     %k2,%10;'
        'add    %4,%7;'
        'and    %k2,%12;'
        'paddd  %%xmm8,%%xmm0;'
        'and    %6,%10;'
        'add    %11,%4;'
        'pshufd $0x50,%%xmm0,%%xmm2;'
        'or     %12,%10;'
        'add    %10,%4;'
        'movdqa %%xmm2,%%xmm3;'
        'mov    %7,%10;'
        'ror    $0xe,%10;'
        'mov    %4,%11;'
        'movdqa %%xmm2,%%xmm7;'
        'ror    $0x9,%11;'
        'xor    %7,%10;'
        'mov    %8,%12;'
        'ror    $0x5,%10;'
        'psrlq  $0x11,%%xmm2;'
        'xor    %4,%11;'
        'xor    %9,%12;'
        'psrlq  $0x13,%%xmm3;'
        'xor    %7,%10;'
        'and    %7,%12;'
        'ror    $0xb,%11;'
        'psrld  $0xa,%%xmm7;'
        'xor    %4,%11;'
        'ror    $0x6,%10;'
        'xor    %9,%12;'
        'pxor   %%xmm3,%%xmm2;'
        'ror    $0x2,%11;'
        'add    %10,%12;'
        'add    12+%16,%12;'
        'pxor   %%xmm2,%%xmm7;'
        'mov    %4,%10;'
        'add    %12,%3;'
        'mov    %4,%12;'
        'pshufb %%xmm11,%%xmm7;'
        'or     %6,%10;'
        'add    %3,%k2;'
        'and    %6,%12;'
        'paddd  %%xmm0,%%xmm7;'
        'and    %5,%10;'
        'add    %11,%3;'
        'or     %12,%10;'
        'add    %10,%3;'
        'sub    $0x1,%1;'
        'jne    Lloop1_%=;'
        'mov    $0x2,%1;'
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
    void SparsePageWriter::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
    // This is a helpful data structure to define parameters
// You do not have to use it.
// see http://dmlc-core.readthedocs.org/en/latest/parameter.html
// for introduction of this module.
struct MyLogisticParam : public dmlc::Parameter<MyLogisticParam> {
  float scale_neg_weight;
  // declare parameters
  DMLC_DECLARE_PARAMETER(MyLogisticParam) {
    DMLC_DECLARE_FIELD(scale_neg_weight).set_default(1.0f).set_lower_bound(0.0f)
        .describe('Scale the weight of negative examples by this factor');
  }
};
    
    BatchSet SimpleDMatrix::GetSortedColumnBatches() {
  // Sorted column page doesn't exist, generate it
  if (!sorted_column_page_) {
    auto page = dynamic_cast<SimpleCSRSource*>(source_.get())->page_;
    sorted_column_page_.reset(
        new SparsePage(page.GetTranspose(source_->info.num_col_)));
    sorted_column_page_->SortRows();
  }
  auto begin_iter =
      BatchIterator(new SimpleBatchIteratorImpl(sorted_column_page_.get()));
  return BatchSet(begin_iter);
}
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
    
    
    {    // By default ImGuiFreeType will use ImGui::MemAlloc()/MemFree().
    // However, as FreeType does lots of allocations we provide a way for the user to redirect it to a separate memory heap if desired:
    IMGUI_API void SetAllocatorFunctions(void* (*alloc_func)(size_t sz, void* user_data), void (*free_func)(void* ptr, void* user_data), void* user_data = NULL);
}

    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'CIwTexture*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
// Missing features:
//  [ ] Renderer: Clipping rectangles are not honored.
    
    
    {        // [Internals]
        FontInfo        Info;               // Font descriptor of the current font.
        FT_Face         Face;
        unsigned int    UserFlags;          // = ImFontConfig::RasterizerFlags
        FT_Int32        LoadFlags;
    };
    
        // Read keyboard modifiers inputs
    io.KeyCtrl = (::GetKeyState(VK_CONTROL) & 0x8000) != 0;
    io.KeyShift = (::GetKeyState(VK_SHIFT) & 0x8000) != 0;
    io.KeyAlt = (::GetKeyState(VK_MENU) & 0x8000) != 0;
    io.KeySuper = false;
    // io.KeysDown[], io.MousePos, io.MouseDown[], io.MouseWheel: filled by the WndProc handler below.
    
    // Win32 message handler
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;
    }
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).