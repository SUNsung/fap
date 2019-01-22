
        
        // This is initialized with a default, stub implementation.
// If python-google.protobuf.cc is loaded, the function pointer is overridden
// with a full implementation.
const Message* (*GetCProtoInsidePyProtoPtr)(PyObject* msg) =
    GetCProtoInsidePyProtoStub;
Message* (*MutableCProtoInsidePyProtoPtr)(PyObject* msg) =
    MutableCProtoInsidePyProtoStub;
    
      // -----------------------------------------------------------------
  // Invoke InternalBuildGeneratedFileFrom() to build the file.
  printer->Print(
      'descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,\n');
  printer->Print('    new pbr::FileDescriptor[] { ');
  for (int i = 0; i < file_->dependency_count(); i++) {
    // descriptor.proto is special: we don't allow access to the generated code, but there's
    // a separately-exposed property to get at the file descriptor, specifically to allow this
    // kind of dependency.
    if (IsDescriptorProto(file_->dependency(i))) {
      printer->Print('pbr::FileDescriptor.DescriptorProtoFileDescriptor, ');
    } else {
      printer->Print(
      '$full_reflection_class_name$.Descriptor, ',
      'full_reflection_class_name',
      GetReflectionClassName(file_->dependency(i)));
    }
  }
  printer->Print('},\n'
      '    new pbr::GeneratedClrTypeInfo(');
  // Specify all the generated code information, recursively.
  if (file_->enum_type_count() > 0) {
      printer->Print('new[] {');
      for (int i = 0; i < file_->enum_type_count(); i++) {
          printer->Print('typeof($type_name$), ', 'type_name', GetClassName(file_->enum_type(i)));
      }
      printer->Print('}, ');
  }
  else {
      printer->Print('null, ');
  }
  if (file_->message_type_count() > 0) {
      printer->Print('new pbr::GeneratedClrTypeInfo[] {\n');
      printer->Indent();
      printer->Indent();
      printer->Indent();
      for (int i = 0; i < file_->message_type_count(); i++) {
          WriteGeneratedCodeInfo(file_->message_type(i), printer, i == file_->message_type_count() - 1);
      }
      printer->Outdent();
      printer->Print('\n}));\n');
      printer->Outdent();
      printer->Outdent();
  }
  else {
      printer->Print('null));\n');
  }
    
    std::string SourceGeneratorBase::class_access_level() {
  return (IsDescriptorProto(descriptor_) || this->options()->internal_access) ? 'internal' : 'public';
}
    
    
    {  WriteFieldDocComment(printer, descriptor_);
  if (descriptor_->is_repeated()) {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newRepeatedGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $packed$,\n'
        '      $singular_type$.class);\n');
  } else {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newSingularGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $default$,\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $singular_type$.class);\n');
  }
  printer->Annotate('name', descriptor_);
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    #include <google/protobuf/compiler/objectivec/objectivec_helpers.h>
#include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
    
      virtual io::ZeroCopyOutputStream* OpenForInsert(
      const string& filename, const string& insertion_point) {
    CodeGeneratorResponse::File* file = response_->add_file();
    file->set_name(filename);
    file->set_insertion_point(insertion_point);
    return new io::StringOutputStream(file->mutable_content());
  }
    
    bool GzipOutputStream::Close() {
  if ((zerror_ != Z_OK) && (zerror_ != Z_BUF_ERROR)) {
    return false;
  }
  do {
    zerror_ = Deflate(Z_FINISH);
  } while (zerror_ == Z_OK);
  zerror_ = deflateEnd(&zcontext_);
  bool ok = zerror_ == Z_OK;
  zerror_ = Z_STREAM_END;
  return ok;
}
    
    CallCredentials::CallCredentials() { g_gli_initializer.summon(); }
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
      // Fixed Field ID values:
  enum FieldIdValue {
    kTraceIdField = 0,
    kSpanIdField = 1,
    kTraceOptionsField = 2,
  };
    
    
    {
    {   private:
    const grpc::string name_;
    const grpc::string value_;
  };
  return std::unique_ptr<ServerBuilderOption>(new StringOption(name, value));
}
    
    void DynamicThreadPool::DynamicThread::ThreadFunc() {
  pool_->ThreadFunc();
  // Now that we have killed ourselves, we should reduce the thread count
  std::unique_lock<std::mutex> lock(pool_->mu_);
  pool_->nthreads_--;
  // Move ourselves to dead list
  pool_->dead_threads_.push_back(this);
    }
    
    // Per-thread state for concurrent executions of the same benchmark.
struct ThreadState {
  int tid;             // 0..n-1 when running in n threads
  Random rand;         // Has different seeds for different threads
  Stats stats;
  SharedState* shared;
    }
    
    void InternalKeyComparator::FindShortSuccessor(std::string* key) const {
  Slice user_key = ExtractUserKey(*key);
  std::string tmp(user_key.data(), user_key.size());
  user_comparator_->FindShortSuccessor(&tmp);
  if (tmp.size() < user_key.size() &&
      user_comparator_->Compare(user_key, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*key, tmp) < 0);
    key->swap(tmp);
  }
}
    
      ASSERT_TRUE(ParseInternalKey(in, &decoded));
  ASSERT_EQ(key, decoded.user_key.ToString());
  ASSERT_EQ(seq, decoded.sequence);
  ASSERT_EQ(vt, decoded.type);
    
      size_t WrittenBytes() const {
    return dest_.contents_.size();
  }
    
    // Encode a suitable internal key target for 'target' and return it.
// Uses *scratch as scratch space, and the returned pointer will point
// into this scratch space.
static const char* EncodeKey(std::string* scratch, const Slice& target) {
  scratch->clear();
  PutVarint32(scratch, target.size());
  scratch->append(target.data(), target.size());
  return scratch->data();
}
    
    #include 'guetzli/stats.h'
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
      if (setjmp(png_jmpbuf(png_ptr)) != 0) {
    // Ok we are here because of the setjmp.
    png_destroy_read_struct(&png_ptr, &info_ptr, nullptr);
    return false;
  }
    
    // Saves the COM marker segment as a string to *jpg.
bool ProcessCOM(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  VERIFY_INPUT(marker_len, 2, 65535, MARKER_LEN);
  VERIFY_LEN(marker_len - 2);
  std::string com_str(reinterpret_cast<const char*>(
      &data[*pos - 2]), marker_len);
  *pos += marker_len - 2;
  jpg->com_data.push_back(com_str);
  return true;
}
    
    bool WriteJpeg(const JPEGData& jpg, bool strip_metadata, JPEGOutput out) {
  static const uint8_t kSOIMarker[2] = { 0xff, 0xd8 };
  static const uint8_t kEOIMarker[2] = { 0xff, 0xd9 };
  std::vector<HuffmanCodeTable> dc_codes;
  std::vector<HuffmanCodeTable> ac_codes;
  return (JPEGWrite(out, kSOIMarker, sizeof(kSOIMarker)) &&
          EncodeMetadata(jpg, strip_metadata, out) &&
          EncodeDQT(jpg.quant, out) &&
          EncodeSOF(jpg, out) &&
          BuildAndEncodeHuffmanCodes(jpg, out, &dc_codes, &ac_codes) &&
          EncodeScan(jpg, dc_codes, ac_codes, out) &&
          JPEGWrite(out, kEOIMarker, sizeof(kEOIMarker)) &&
          (strip_metadata || JPEGWrite(out, jpg.tail_data)));
}
    
    namespace guetzli {
    }