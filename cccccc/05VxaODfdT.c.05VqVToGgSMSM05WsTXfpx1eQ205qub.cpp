
        
        #endif  // CONTENT_NW_SRC_API_APP_APP_H_
    
    Base::~Base() {
}
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    void Menu::Create(const base::DictionaryValue& option) {
  is_menu_modified_ = true;
  menu_delegate_.reset(new MenuDelegate(object_manager()));
  menu_model_.reset(new ui::NwMenuModel(menu_delegate_.get()));
    }
    
    void MenuItem::SetIconIsTemplate(bool isTemplate) {
}
    
    
    {
  DECLARE_EXTENSION_FUNCTION('nw.App.setProxyConfig', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppSetProxyConfigFunction);
};
    
    #endif  // PYTHON_PROTO2_PYTHON_IMPL
#endif  // PYTHON_PROTO2_CPP_IMPL_V2
#endif  // PYTHON_PROTO2_CPP_IMPL_V1
    
    const char kAnyFullTypeName[] = 'google.protobuf.Any';
const char kTypeGoogleApisComPrefix[] = 'type.googleapis.com/';
const char kTypeGoogleProdComPrefix[] = 'type.googleprod.com/';
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    TEST(MovableMessageTest, SelfMoveAssignment) {
  // The `self` reference is necessary to defeat -Wself-move.
  protobuf_unittest::TestAllTypes message, &self = message;
  TestUtil::SetAllFields(&message);
  message = std::move(self);
  TestUtil::ExpectAllFieldsSet(message);
}
    
    void Context::InitializeFieldGeneratorInfoForMessage(
    const Descriptor* message) {
  for (int i = 0; i < message->nested_type_count(); ++i) {
    InitializeFieldGeneratorInfoForMessage(message->nested_type(i));
  }
  std::vector<const FieldDescriptor*> fields;
  for (int i = 0; i < message->field_count(); ++i) {
    fields.push_back(message->field(i));
  }
  InitializeFieldGeneratorInfoForFields(fields);
    }
    
    void OneofGenerator::GenerateCaseEnum(io::Printer* printer) {
  printer->Print(
      variables_,
      'typedef GPB_ENUM($enum_name$) {\n');
  printer->Indent();
  printer->Print(
      variables_,
      '$enum_name$_GPBUnsetOneOfCase = 0,\n');
  string enum_name = variables_['enum_name'];
  for (int j = 0; j < descriptor_->field_count(); j++) {
    const FieldDescriptor* field = descriptor_->field(j);
    string field_name = FieldNameCapitalized(field);
    printer->Print(
        '$enum_name$_$field_name$ = $field_number$,\n',
        'enum_name', enum_name,
        'field_name', field_name,
        'field_number', SimpleItoa(field->number()));
  }
  printer->Outdent();
  printer->Print(
      '};\n'
      '\n');
}
    
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
    
    void GzipInputStream::DoNextOutput(const void** data, int* size) {
  *data = output_position_;
  *size = ((uintptr_t)zcontext_.next_out) - ((uintptr_t)output_position_);
  output_position_ = zcontext_.next_out;
}
    
    #include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/format.hpp'
#include 'caffe/util/math_functions.hpp'
    
    template <typename Dtype>
class BasePrefetchingDataLayer :
    public BaseDataLayer<Dtype>, public InternalThread {
 public:
  explicit BasePrefetchingDataLayer(const LayerParameter& param);
  // LayerSetUp: implements common data layer setup functionality, and calls
  // DataLayerSetUp to do special data layer setup for individual layer types.
  // This method may not be overridden.
  void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      virtual inline const char* type() const { return 'Concat'; }
  virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    /**
 * @brief Takes a Blob and crop it, to the shape specified by the second input
 *  Blob, across all dimensions after the specified axis.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Expands to the name of the variable used to remember the names of
// the defined tests in the given test case.
# define GTEST_TYPED_TEST_CASE_P_STATE_(TestCaseName) \
  gtest_typed_test_case_p_state_##TestCaseName##_
    
      // Returns a pointer to the last occurence of a valid path separator in
  // the FilePath. On Windows, for example, both '/' and '\' are valid path
  // separators. Returns NULL if no path separator was found.
  const char* FindLastPathSeparator() const;
    
      void depart() {
    if (link_.depart()) delete value_;
  }
    
      // Creates an ANSI string from the given wide string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the ANSI string, or NULL if the
  // input is NULL.
  //
  // The returned string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static const char* Utf16ToAnsi(LPCWSTR utf16_str);
#endif
    
    template <GTEST_10_TYPENAMES_(T)>
struct TupleElement<true, 7, GTEST_10_TUPLE_(T) > {
  typedef T7 type;
};
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12>
struct Types12 {
  typedef T1 Head;
  typedef Types11<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> Tail;
};
    
    #include <string.h>
    
    /**
 *@brief Base class for Camera actions.
 *@ingroup Actions
 */
class CC_DLL ActionCamera : public ActionInterval
{
public:
    /**
     * @js ctor
     * @lua new
     */
    ActionCamera();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~ActionCamera(){};
    }
    
    
    {    /** Reverse the current control point array inline, without generating a new one.
     * @js NA
     */
    void reverseInline();
    /**
     * @js NA
     * @lua NA
     */
    virtual PointArray* clone() const;
    /**
     * @js NA
     */
    const std::vector<Vec2>& getControlPoints() const;
    /**
     * @js NA
     */
    void setControlPoints(std::vector<Vec2> controlPoints);
private:
    /** Array that contains the control points. */
    std::vector<Vec2> _controlPoints;
};
    
    DeccelAmplitude* DeccelAmplitude::clone() const
{
    // no copy constructor
    if (_other)
        return DeccelAmplitude::create(_other->clone(), _duration);
    
    return nullptr;
}
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(FlipY);
};
    
            if (! _currentTarget->paused)
        {
            // The 'actions' MutableArray may change while inside this loop.
            for (_currentTarget->actionIndex = 0; _currentTarget->actionIndex < _currentTarget->actions->num;
                _currentTarget->actionIndex++)
            {
                _currentTarget->currentAction = static_cast<Action*>(_currentTarget->actions->arr[_currentTarget->actionIndex]);
                if (_currentTarget->currentAction == nullptr)
                {
                    continue;
                }
    }
    }
    
        /** Returns the numbers of actions that are running in a certain target. 
     * Composable actions are counted as 1 action. Example:
     * - If you are running 1 Sequence of 7 actions, it will return 1.
     * - If you are running 7 Sequences of 2 actions, it will return 7.
     *
     * @param target    A certain target.
     * @return  The numbers of actions that are running in a certain target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActionsInTarget(const Node *target) const;
    
    /** Returns the numbers of actions that are running in all targets.
     * @return  The numbers of actions that are running in all target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActions() const;
    
        // Overrides
    virtual SplitCols* clone() const override;
    /**
     * @param time in seconds
     */
    virtual void update(float time) override;
    virtual void startWithTarget(Node *target) override;
    
CC_CONSTRUCTOR_ACCESS:
    SplitCols() {}
    virtual ~SplitCols() {}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
      // drop column family
  s = db->DropColumnFamily(handles[1]);
  assert(s.ok());
    
    // A simple compaction algorithm that always compacts everything
// to the highest level whenever possible.
class FullCompactor : public Compactor {
 public:
  explicit FullCompactor(const Options options) : options_(options) {
    compact_options_.compression = options_.compression;
    compact_options_.output_file_size_limit =
        options_.target_file_size_base;
  }
    }
    
      // Write a key OUTSIDE of this transaction.
  // Does not affect txn since this is an unrelated key.  If we wrote key 'abc'
  // here, the transaction would fail to commit.
  s = db->Put(write_options, 'xyz', 'zzz');
    
    int main() {
  DB* db;
  Options options;
  // Optimize RocksDB. This is the easiest way to get RocksDB to perform well
  options.IncreaseParallelism();
  options.OptimizeLevelStyleCompaction();
  // create the DB if it's not already present
  options.create_if_missing = true;
    }
    
      // number of corrupt keys (ParseInternalKey returned false when applied to
  // the key) encountered and written out.
  uint64_t num_corrupt_keys;
    
    #pragma once