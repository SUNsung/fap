
        
          virtual void Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh = nullptr);
  virtual void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result);
    
    
    {  RenderView* render_view = RenderView::FromWebView(view);
  return render_view;
}
    
      focus_manager_ = NULL;
  window_ = NULL;
    
      static void DoJob(AppWindowRegistry* registry, std::string id);
 protected:
  ~NwAppCloseAllWindowsFunction() override {}
    
     protected:
  ~NwClipboardReadAvailableTypesFunction() override;
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
      int NwDesktopCaptureMonitor::GetPrimaryMonitorIndex() {
  #ifdef _WIN32 
    int count=0;
    for (int i = 0;; ++i) {
      DISPLAY_DEVICE device;
      device.cb = sizeof(device);
      BOOL ret = EnumDisplayDevices(NULL, i, &device, 0);
      if(!ret)
        break;
      if (device.StateFlags & DISPLAY_DEVICE_ACTIVE){
        if (device.StateFlags & DISPLAY_DEVICE_PRIMARY_DEVICE){
          return count;
        }
        count++;
      }
    }
  #endif
    return -1;
  }
    
    /* MessageDefs: call these functions to get a ref to a msgdef. */
const upb_msgdef *upbdefs_google_protobuf_DescriptorProto_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_DescriptorProto_ExtensionRange_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_DescriptorProto_ReservedRange_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_EnumDescriptorProto_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_EnumOptions_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_EnumValueDescriptorProto_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_EnumValueOptions_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_FieldDescriptorProto_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_FieldOptions_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_FileDescriptorProto_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_FileDescriptorSet_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_FileOptions_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_MessageOptions_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_MethodDescriptorProto_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_MethodOptions_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_OneofDescriptorProto_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_ServiceDescriptorProto_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_ServiceOptions_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_SourceCodeInfo_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_SourceCodeInfo_Location_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_UninterpretedOption_get(const void *owner);
const upb_msgdef *upbdefs_google_protobuf_UninterpretedOption_NamePart_get(const void *owner);
    
    
bool GetAnyFieldDescriptors(const Message& message,
                            const FieldDescriptor** type_url_field,
                            const FieldDescriptor** value_field) {
    const Descriptor* descriptor = message.GetDescriptor();
    if (descriptor->full_name() != kAnyFullTypeName) {
      return false;
    }
    *type_url_field = descriptor->FindFieldByNumber(1);
    *value_field = descriptor->FindFieldByNumber(2);
    return (*type_url_field != NULL &&
            (*type_url_field)->type() == FieldDescriptor::TYPE_STRING &&
            *value_field != NULL &&
            (*value_field)->type() == FieldDescriptor::TYPE_BYTES);
}
    
    TEST(MovableMessageTest, MoveDifferentArenas) {
  Arena arena1, arena2;
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    
    {
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    ImmutableExtensionLiteGenerator::ImmutableExtensionLiteGenerator(
    const FieldDescriptor* descriptor, Context* context)
  : descriptor_(descriptor), context_(context),
    name_resolver_(context->GetNameResolver()) {
  if (descriptor_->extension_scope() != NULL) {
    scope_ = name_resolver_->GetImmutableClassName(
        descriptor_->extension_scope());
  } else {
    scope_ = name_resolver_->GetImmutableClassName(descriptor_->file());
  }
}
    
    #include <map>
#include <string>
#include <google/protobuf/compiler/objectivec/objectivec_field.h>
    
    class FooTest : public ::testing::TestWithParam<const char*> {
  // You can implement all the usual class fixture members here.
};
    
    // Finally, you are free to instantiate the pattern with the types you
// want.  If you put the above code in a header file, you can #include
// it in multiple C++ source files and instantiate it multiple times.
//
// To distinguish different instances of the pattern, the first
// argument to the INSTANTIATE_* macro is a prefix that will be added
// to the actual test case name.  Remember to pick unique prefixes for
// different instances.
typedef testing::Types<char, int, unsigned int> MyTypes;
INSTANTIATE_TYPED_TEST_CASE_P(My, FooTest, MyTypes);
    
    // Copyright 2009 Google Inc.
// All Rights Reserved.
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
//
// Author: wan@google.com (Zhanyong Wan)
    
    // AssertyTypeEq<T1, T2>::type is defined iff T1 and T2 are the same
// type.  This can be used as a compile-time assertion to ensure that
// two types are equal.
    
    
// Step 1. Include necessary header files such that the stuff your
// test logic needs is declared.
//
// Don't forget gtest.h, which declares the testing framework.
    
      // Gets the 0-terminated C string this MyString object represents.
  const char* c_string() const { return c_string_; }
    
    #ifndef HINGE_JOINT_BULLET_H
#define HINGE_JOINT_BULLET_H
    
    class RigidBodyBullet;
    
    #ifdef __ANDROID__
#include 'platform/android/thread_jandroid.h'
#else
#define JNIEnv void
#define jobject void *
#endif
    
            virtual Dictionary GetCheckpointState() const override;
        virtual void RestoreFromCheckpoint(const Dictionary& checkpoint) override;
    
        NDArrayViewPtr NDArrayView::DeepClone(const DeviceDescriptor& device, bool readOnly/* = false*/) const
    {
        NDArrayViewPtr newView = MakeSharedObject<NDArrayView>(this->GetDataType(), this->GetStorageFormat(), this->Shape(), device);
        switch (m_dataType)
        {
        case DataType::Float:
        {
            auto newMatrix = newView->GetWritableMatrix<float>();
            auto thisMatrix = GetMatrix<float>();
            newMatrix->AssignValuesOf(*thisMatrix);
            break;
        }
        case DataType::Double:
        {
            auto newMatrix = newView->GetWritableMatrix<double>();
            auto thisMatrix = GetMatrix<double>();
            newMatrix->AssignValuesOf(*thisMatrix);
            break;
        }
        case DataType::Float16:
        {
            auto newMatrix = newView->GetWritableMatrix<half>();
            auto thisMatrix = GetMatrix<half>();
            newMatrix->AssignValuesOf(*thisMatrix);
            break;
        }
        case DataType::Int8:
        {
            auto newMatrix = newView->GetWritableMatrix<char>();
            auto thisMatrix = GetMatrix<char>();
            newMatrix->AssignValuesOf(*thisMatrix);
            break;
        }
        case DataType::Int16:
        {
            auto newMatrix = newView->GetWritableMatrix<short>();
            auto thisMatrix = GetMatrix<short>();
            newMatrix->AssignValuesOf(*thisMatrix);
            break;
        }
        default:
            LogicError('NDArrayView::DeepClone: Unsupported DataType %s', DataTypeName(m_dataType));
            break;
        }
    }
    
        void NDMask::MarkSectionAs(const std::vector<size_t>& sectionOffset, const NDShape& sectionShape, MaskKind maskKind)
    {
        // TODO: Implement batching of masking operation for masks residing on GPUs to avoid making
        // GPU invocations for each MaskSection call.
    }
    
            static bool IsUDF(const FunctionPtr& f);
    
        public:
        template <typename ElementType>
        PackedValue(const NDShape& sampleShape, const std::vector<Axis>& sampleDynamicAxes, const std::shared_ptr<Microsoft::MSR::CNTK::Matrix<ElementType>>& packedDataMatrix, const std::shared_ptr<Microsoft::MSR::CNTK::MBLayout>& packedDataLayout, bool isReadOnly)
            : Value(nullptr), m_isPacked(true), m_sampleShape(sampleShape), m_sampleDynamicAxes(sampleDynamicAxes), m_packedData(nullptr), m_packedDataLayout(packedDataLayout), m_isReadOnly(isReadOnly)
        {
            NDShape packedMatrixShape({ packedDataMatrix->GetNumRows(), packedDataMatrix->GetNumCols() });
            auto tensorView = new Microsoft::MSR::CNTK::TensorView<ElementType>(packedDataMatrix, AsTensorViewShape(packedMatrixShape));
            m_packedData = MakeSharedObject<NDArrayView>(AsDataType<ElementType>(), AsDeviceDescriptor(packedDataMatrix->GetDeviceId()), AsStorageFormat(packedDataMatrix->GetFormat()), packedMatrixShape, m_isReadOnly, tensorView);
    }
    
            const auto& inputSampleLayout = Input(0)->GetSampleLayout();
        const auto& inputDims = inputSampleLayout.GetDims();
        SmallVector<size_t> dims;
        if (m_offset > 0)
        {
            dims.append(inputDims.begin(), inputDims.begin() + m_offset);
        }
        dims.push_back(m_num_class);
        if (m_offset != inputDims.size())
        {
            dims.append(inputDims.begin() + m_offset, inputDims.end());
        }
    
      using DBImpl::Put;
  virtual Status Put(const WriteOptions& /*options*/,
                     ColumnFamilyHandle* /*column_family*/,
                     const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  using DBImpl::Merge;
  virtual Status Merge(const WriteOptions& /*options*/,
                       ColumnFamilyHandle* /*column_family*/,
                       const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  using DBImpl::Delete;
  virtual Status Delete(const WriteOptions& /*options*/,
                        ColumnFamilyHandle* /*column_family*/,
                        const Slice& /*key*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  using DBImpl::SingleDelete;
  virtual Status SingleDelete(const WriteOptions& /*options*/,
                              ColumnFamilyHandle* /*column_family*/,
                              const Slice& /*key*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  virtual Status Write(const WriteOptions& /*options*/,
                       WriteBatch* /*updates*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  using DBImpl::CompactRange;
  virtual Status CompactRange(const CompactRangeOptions& /*options*/,
                              ColumnFamilyHandle* /*column_family*/,
                              const Slice* /*begin*/,
                              const Slice* /*end*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
    
      uint64_t sleep_debt = 0;
  uint64_t time_since_last_refill = 0;
  if (last_refill_time_ != 0) {
    if (last_refill_time_ > time_now) {
      sleep_debt = last_refill_time_ - time_now;
    } else {
      time_since_last_refill = time_now - last_refill_time_;
      bytes_left_ +=
          static_cast<uint64_t>(static_cast<double>(time_since_last_refill) /
                                kMicrosPerSecond * delayed_write_rate_);
      if (time_since_last_refill >= kRefillInterval &&
          bytes_left_ > num_bytes) {
        // If refill interval already passed and we have enough bytes
        // return without extra sleeping.
        last_refill_time_ = time_now;
        bytes_left_ -= num_bytes;
        return 0;
      }
    }
  }
    
    
    {  // Means Close() will properly take care of truncate
  // and it does not need any additional information
  virtual Status Truncate(uint64_t /*size*/) override { return Status::OK(); }
  virtual Status Close() override;
  virtual Status Append(const Slice& data) override;
  virtual Status Flush() override;
  virtual Status Sync() override;
  virtual Status Fsync() override;
  virtual uint64_t GetFileSize() override;
  virtual Status InvalidateCache(size_t offset, size_t length) override;
#ifdef ROCKSDB_FALLOCATE_PRESENT
  virtual Status Allocate(uint64_t offset, uint64_t len) override;
#endif
};
    
    class MyMerge : public rocksdb::MergeOperator {
 public:
  virtual bool FullMergeV2(const MergeOperationInput& merge_in,
                           MergeOperationOutput* merge_out) const override {
    merge_out->new_value.clear();
    if (merge_in.existing_value != nullptr) {
      merge_out->new_value.assign(merge_in.existing_value->data(),
                                  merge_in.existing_value->size());
    }
    for (const rocksdb::Slice& m : merge_in.operand_list) {
      fprintf(stderr, 'Merge(%s)\n', m.ToString().c_str());
      // the compaction filter filters out bad values
      assert(m.ToString() != 'bad');
      merge_out->new_value.assign(m.data(), m.size());
    }
    return true;
  }
    }
    
      {
    std::string string_val;
    // If it cannot pin the value, it copies the value to its internal buffer.
    // The intenral buffer could be set during construction.
    PinnableSlice pinnable_val(&string_val);
    db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
    assert(pinnable_val == 'value');
    // If the value is not pinned, the internal buffer must have the value.
    assert(pinnable_val.IsPinned() || string_val == 'value');
  }
    
    // Supported only for Leveled compaction
Status SuggestCompactRange(DB* db, ColumnFamilyHandle* column_family,
                           const Slice* begin, const Slice* end);
Status SuggestCompactRange(DB* db, const Slice* begin, const Slice* end);
    
    class FlushBlockBySizePolicyFactory : public FlushBlockPolicyFactory {
 public:
  FlushBlockBySizePolicyFactory() {}
    }
    
    void PrintDebug(ProcessStats* stats, std::string s);
    
          // The sentinel node becomes the parent node.
      size_t j_end = 2 * n - k;
      tree[j_end].total_count_ =
          tree[left].total_count_ + tree[right].total_count_;
      tree[j_end].index_left_ = static_cast<int16_t>(left);
      tree[j_end].index_right_or_value_ = static_cast<int16_t>(right);
    
    
    {}  // namespace guetzli
    
    
    {  tmp0 = in[7 * stride];
  tmp1 = kIDCTMatrix[ 7] * tmp0;
  tmp2 = kIDCTMatrix[15] * tmp0;
  tmp3 = kIDCTMatrix[23] * tmp0;
  tmp4 = kIDCTMatrix[31] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
}
    
    
    {}  // namespace guetzli
    
    // Reads the Define Quantization Table (DQT) marker segment and fills in *jpg
// with the parsed data.
bool ProcessDQT(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  const size_t start_pos = *pos;
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  if (marker_len == 2) {
    fprintf(stderr, 'DQT marker: no quantization table found\n');
    jpg->error = JPEG_EMPTY_DQT;
    return false;
  }
  while (*pos < start_pos + marker_len && jpg->quant.size() < kMaxQuantTables) {
    VERIFY_LEN(1);
    int quant_table_index = ReadUint8(data, pos);
    int quant_table_precision = quant_table_index >> 4;
    quant_table_index &= 0xf;
    VERIFY_INPUT(quant_table_index, 0, 3, QUANT_TBL_INDEX);
    VERIFY_LEN((quant_table_precision ? 2 : 1) * kDCTBlockSize);
    JPEGQuantTable table;
    table.index = quant_table_index;
    table.precision = quant_table_precision;
    for (int i = 0; i < kDCTBlockSize; ++i) {
      int quant_val = quant_table_precision ?
          ReadUint16(data, pos) :
          ReadUint8(data, pos);
      VERIFY_INPUT(quant_val, 1, 65535, QUANT_VAL);
      table.values[kJPEGNaturalOrder[i]] = quant_val;
    }
    table.is_last = (*pos == start_pos + marker_len);
    jpg->quant.push_back(table);
  }
  VERIFY_MARKER_END();
  return true;
}