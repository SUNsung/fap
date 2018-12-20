
        
        #endif // BITCOIN_QT_TRANSACTIONDESCDIALOG_H

    
    static void secp256k1_sha256_finalize(secp256k1_sha256_t *hash, unsigned char *out32) {
    static const unsigned char pad[64] = {0x80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    uint32_t sizedesc[2];
    uint32_t out[8];
    int i = 0;
    sizedesc[0] = BE32(hash->bytes >> 29);
    sizedesc[1] = BE32(hash->bytes << 3);
    secp256k1_sha256_write(hash, pad, 1 + ((119 - (hash->bytes % 64)) % 64));
    secp256k1_sha256_write(hash, (const unsigned char*)sizedesc, 8);
    for (i = 0; i < 8; i++) {
        out[i] = BE32(hash->s[i]);
        hash->s[i] = 0;
    }
    memcpy(out32, (const unsigned char*)out, 32);
}
    
    int secp256k1_ecdh(const secp256k1_context* ctx, unsigned char *result, const secp256k1_pubkey *point, const unsigned char *scalar) {
    int ret = 0;
    int overflow = 0;
    secp256k1_gej res;
    secp256k1_ge pt;
    secp256k1_scalar s;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(result != NULL);
    ARG_CHECK(point != NULL);
    ARG_CHECK(scalar != NULL);
    }
    
    // This is initialized with a default, stub implementation.
// If python-google.protobuf.cc is loaded, the function pointer is overridden
// with a full implementation.
const Message* (*GetCProtoInsidePyProtoPtr)(PyObject* msg) =
    GetCProtoInsidePyProtoStub;
Message* (*MutableCProtoInsidePyProtoPtr)(PyObject* msg) =
    MutableCProtoInsidePyProtoStub;
    
    template <typename DescriptorType>
static void WriteDocCommentBody(
    io::Printer* printer, const DescriptorType* descriptor) {
    SourceLocation location;
    if (descriptor->GetSourceLocation(&location)) {
        WriteDocCommentBodyImpl(printer, location);
    }
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    std::string SourceGeneratorBase::class_access_level() {
  return (IsDescriptorProto(descriptor_) || this->options()->internal_access) ? 'internal' : 'public';
}
    
      printer->Print(
    'com.google.protobuf.Descriptors.FileDescriptor.'
    'InternalDescriptorAssigner assigner =\n'
    '    new com.google.protobuf.Descriptors.FileDescriptor.'
    '    InternalDescriptorAssigner() {\n'
    '      public com.google.protobuf.ExtensionRegistry assignDescriptors(\n'
    '          com.google.protobuf.Descriptors.FileDescriptor root) {\n'
    '        descriptor = root;\n'
    // Custom options will be handled when immutable messages' outer class is
    // loaded. Here we just return null and let custom options be unknown
    // fields.
    '        return null;\n'
    '      }\n'
    '    };\n');
    
      printer->Print(
      '#else\n');
    
      EXPECT_EXIT(TextFormatDecodeData::DecodeDataForString('', ''),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
  EXPECT_EXIT(TextFormatDecodeData::DecodeDataForString('a', ''),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
  EXPECT_EXIT(TextFormatDecodeData::DecodeDataForString('', 'a'),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
    
    // Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
// https://developers.google.com/protocol-buffers/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
    
        case URX_SETREF:
            if (fp->fInputIdx >= fActiveLimit) {
                fHitEnd = TRUE;
                fp = (REStackFrame *)fStack->popFrame(fFrameSize);
                break;
            } else {
                UTEXT_SETNATIVEINDEX(fInputText, fp->fInputIdx);
    }
    
    #if !UCONFIG_NO_FORMATTING
    
    U_NAMESPACE_BEGIN
    
        static const int32_t gDigitCount[] = {
        1,1,1,1,1,1,1,1,
        1,1,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,
        2,2,2,2,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        3,3,3,3,3,3,3,3,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4};
    
    /**
 * A representation an acceptable range of digit counts for integers.
 */
class U_I18N_API IntDigitCountRange : public UMemory {
public:
    /**
     * No constraints: 0 up to INT32_MAX
     */
    IntDigitCountRange() : fMin(0), fMax(INT32_MAX) { }
    IntDigitCountRange(int32_t min, int32_t max);
    int32_t pin(int32_t digitCount) const;
    int32_t getMax() const { return fMax; }
    int32_t getMin() const { return fMin; }
private:
    int32_t fMin;
    int32_t fMax;
};
    
    
//------------------------------------------------------------------------------
//
//   smpdtfmt_cleanup     Memory cleanup function, free/delete all
//                      cached memory.  Called by ICU's u_cleanup() function.
//
//------------------------------------------------------------------------------
UBool
SimpleDateFormatStaticSets::cleanup(void)
{
    delete gStaticSets;
    gStaticSets = NULL;
    gSimpleDateFormatStaticSetsInitOnce.reset();
    return TRUE;
}
    
    class  UnicodeSet;
    
    U_NAMESPACE_END
    
    static const UChar gZero[] = { 0x7A, 0x65, 0x72, 0x6F };
static const UChar gOne[] = { 0x6F, 0x6E, 0x65 };
static const UChar gTwo[] = { 0x74, 0x77, 0x6F };
static const UChar gFew[] = { 0x66, 0x65, 0x77 };
static const UChar gMany[] = { 0x6D, 0x61, 0x6E, 0x79 };
static const UChar gOther[] = { 0x6F, 0x74, 0x68, 0x65, 0x72 };
    
    // Timer management class
class ThreadTimer {
 public:
  ThreadTimer() = default;
    }
    
      const CPUInfo &info = context.cpu_info;
  Out << 'Run on (' << info.num_cpus << ' X '
      << (info.cycles_per_second / 1000000.0) << ' MHz CPU '
      << ((info.num_cpus > 1) ? 's' : '') << ')\n';
  if (info.caches.size() != 0) {
    Out << 'CPU Caches:\n';
    for (auto &CInfo : info.caches) {
      Out << '  L' << CInfo.level << ' ' << CInfo.type << ' '
          << (CInfo.size / 1000) << 'K';
      if (CInfo.num_sharing != 0)
        Out << ' (x' << (info.num_cpus / CInfo.num_sharing) << ')';
      Out << '\n';
    }
  }