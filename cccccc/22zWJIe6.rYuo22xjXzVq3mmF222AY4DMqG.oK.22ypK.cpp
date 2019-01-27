
        
        // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    
    {  // Check if the optional_nested_message was actually moved (and not just
  // copied).
  EXPECT_EQ(nested, &message2.optional_nested_message());
  EXPECT_NE(nested, &message1.optional_nested_message());
}
    
    std::string SourceGeneratorBase::class_access_level() {
  return (IsDescriptorProto(descriptor_) || this->options()->internal_access) ? 'internal' : 'public';
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
namespace {
    }
    }
    }
    }
    }
    
    // Get the name of a service's Java class without package name prefix.
string ClassNameWithoutPackage(const ServiceDescriptor* descriptor,
                               bool immutable) {
  string full_name = StripPackageName(descriptor->full_name(),
                                      descriptor->file());
  // We don't allow nested service definitions.
  GOOGLE_CHECK(full_name.find('.') == string::npos);
  return full_name;
}
    
    string OneofGenerator::DescriptorName(void) const {
  return variables_.find('name')->second;
}
    
      virtual io::ZeroCopyOutputStream* Open(const string& filename) {
    CodeGeneratorResponse::File* file = response_->add_file();
    file->set_name(filename);
    return new io::StringOutputStream(file->mutable_content());
  }
    
    Contrast Example 2 with Example 1. For each data point per feature, the values
are sorted by the corresponding KEY.
)DOC')
    .Input(0, 'DATA', 'Tensor of rank 1.')
    .Input(
        1,
        'RANGES',
        'Tensor of int32/int64 ranges, of dims (N, M, 2). '
        'Where N is number of examples and M is a size of each example. '
        'Last dimention represents a range in the format (start, lengths)')
    .Input(2, 'KEY', 'Tensor of rank 1 and type int64.')
    .Output(0, 'OUTPUT', '1-D tensor of size sum of range lengths')
    .Arg('lengths', 'Expected lengths for ranges')
    .TensorInferenceFunction([](const OperatorDef& def,
                                const vector<TensorShape>& in) {
      ArgumentHelper helper(def);
      auto lengths = helper.GetRepeatedArgument<int>('lengths');
      CAFFE_ENFORCE_EQ(in[0].dims_size(), 1, 'DATA should be 1-D tensor.');
      CAFFE_ENFORCE_EQ(in[1].dims_size(), 3, 'RANGES should be 3-D tensor.');
      if (in.size() > 2) {
        CAFFE_ENFORCE_EQ(in[2].dims_size(), 1, 'KEY should be 1-D tensor.');
      }
      CAFFE_ENFORCE_GT(lengths.size(), 0, 'lengths should be non-empty.');
      std::vector<TensorShape> out(lengths.size());
      for (int i = 0; i < lengths.size(); ++i) {
        out[i].set_data_type(in[0].data_type());
        out[i].add_dims(in[1].dims(0));
        out[i].add_dims(lengths[i]);
      }
      return out;
    });
    
    NO_GRADIENT(GivenTensorFill);
NO_GRADIENT(GivenTensorDoubleFill);
NO_GRADIENT(GivenTensorBoolFill);
NO_GRADIENT(GivenTensorIntFill);
NO_GRADIENT(GivenTensorInt64Fill);
NO_GRADIENT(GivenTensorStringFill);
    
    OPERATOR_SCHEMA(Im2Col)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc('The Im2Col operator from Matlab.')
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          ArgumentHelper helper(def);
          auto pad = helper.GetSingleArgument<int>('pad', 0);
          auto kernel_h = helper.GetSingleArgument<int>(
              'kernel_h', helper.GetSingleArgument<int>('kernel', 0));
          auto kernel_w = helper.GetSingleArgument<int>(
              'kernel_w', helper.GetSingleArgument<int>('kernel', 0));
          auto dilation_h = helper.GetSingleArgument<int>(
              'dilation_h', helper.GetSingleArgument<int>('dilation', 1));
          auto dilation_w = helper.GetSingleArgument<int>(
              'dilation_w', helper.GetSingleArgument<int>('dilation', 1));
          auto stride_h = helper.GetSingleArgument<int>(
              'stride_h', helper.GetSingleArgument<int>('stride', 1));
          auto stride_w = helper.GetSingleArgument<int>(
              'stride_w', helper.GetSingleArgument<int>('stride', 1));
          auto order = StringToStorageOrder(
              helper.GetSingleArgument<string>('order', 'NCHW'));
    }
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
#define GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
    
      static void set_last_death_test_message(const std::string& message);
    
    // Returns the prefix of 'str' before the first comma in it; returns
// the entire string if it contains no comma.
inline std::string GetPrefixUntilComma(const char* str) {
  const char* comma = strchr(str, ',');
  return comma == NULL ? str : std::string(str, comma);
}
    
    
    {  template <typename U> void copy(linked_ptr<U> const* ptr) {
    value_ = ptr->get();
    if (value_)
      link_.join(&ptr->link_);
    else
      link_.join_new();
  }
};
    
    using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestCase;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;
    
    Status DBImpl::TEST_CompactMemTable() {
  // nullptr batch means just wait for earlier writes to be done
  Status s = Write(WriteOptions(), nullptr);
  if (s.ok()) {
    // Wait until the compaction completes
    MutexLock l(&mutex_);
    while (imm_ != nullptr && bg_error_.ok()) {
      background_work_finished_signal_.Wait();
    }
    if (imm_ != nullptr) {
      s = bg_error_;
    }
  }
  return s;
}
    
      // Set of table files to protect from deletion because they are
  // part of ongoing compactions.
  std::set<uint64_t> pending_outputs_ GUARDED_BY(mutex_);
    
    
    {  delete iter;
  delete table;
  delete file;
  return Status::OK();
}
    
    #include 'db/dbformat.h'
#include 'port/port.h'
#include 'util/logging.h'
#include 'util/testharness.h'
    
          case kBadRecord:
        if (in_fragmented_record) {
          ReportCorruption(scratch->size(), 'error in middle of record');
          in_fragmented_record = false;
          scratch->clear();
        }
        break;
    
      void StartReadingAt(uint64_t initial_offset) {
    delete reader_;
    reader_ = new Reader(&source_, &report_, true/*checksum*/, initial_offset);
  }
    
      // Increase reference count.
  void Ref() { ++refs_; }
    
      // Accessors/mutators for links.  Wrapped in methods so we can
  // add the appropriate barriers as necessary.
  Node* Next(int n) {
    assert(n >= 0);
    // Use an 'acquire load' so that we observe a fully initialized
    // version of the returned Node.
    return reinterpret_cast<Node*>(next_[n].Acquire_Load());
  }
  void SetNext(int n, Node* x) {
    assert(n >= 0);
    // Use a 'release store' so that anybody who reads through this
    // pointer observes a fully initialized version of the inserted node.
    next_[n].Release_Store(x);
  }
    
    OrbitCamera * OrbitCamera::create(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX)
{
    OrbitCamera * obitCamera = new (std::nothrow) OrbitCamera();
    if(obitCamera && obitCamera->initWithDuration(t, radius, deltaRadius, angleZ, deltaAngleZ, angleX, deltaAngleX))
    {
        obitCamera->autorelease();
        return obitCamera;
    }
    
    delete obitCamera;
    return nullptr;
}
    
    EASE_TEMPLATE_IMPL(EaseExponentialIn, tweenfunc::expoEaseIn, EaseExponentialOut);
EASE_TEMPLATE_IMPL(EaseExponentialOut, tweenfunc::expoEaseOut, EaseExponentialIn);
EASE_TEMPLATE_IMPL(EaseExponentialInOut, tweenfunc::expoEaseInOut, EaseExponentialInOut);
EASE_TEMPLATE_IMPL(EaseSineIn, tweenfunc::sineEaseIn, EaseSineOut);
EASE_TEMPLATE_IMPL(EaseSineOut, tweenfunc::sineEaseOut, EaseSineIn);
EASE_TEMPLATE_IMPL(EaseSineInOut, tweenfunc::sineEaseInOut, EaseSineInOut);
EASE_TEMPLATE_IMPL(EaseBounceIn, tweenfunc::bounceEaseIn, EaseBounceOut);
EASE_TEMPLATE_IMPL(EaseBounceOut, tweenfunc::bounceEaseOut, EaseBounceIn);
EASE_TEMPLATE_IMPL(EaseBounceInOut, tweenfunc::bounceEaseInOut, EaseBounceInOut);
EASE_TEMPLATE_IMPL(EaseBackIn, tweenfunc::backEaseIn, EaseBackOut);
EASE_TEMPLATE_IMPL(EaseBackOut, tweenfunc::backEaseOut, EaseBackIn);
EASE_TEMPLATE_IMPL(EaseBackInOut, tweenfunc::backEaseInOut, EaseBackInOut);
EASE_TEMPLATE_IMPL(EaseQuadraticActionIn, tweenfunc::quadraticIn, EaseQuadraticActionIn);
EASE_TEMPLATE_IMPL(EaseQuadraticActionOut, tweenfunc::quadraticOut, EaseQuadraticActionOut);
EASE_TEMPLATE_IMPL(EaseQuadraticActionInOut, tweenfunc::quadraticInOut, EaseQuadraticActionInOut);
EASE_TEMPLATE_IMPL(EaseQuarticActionIn, tweenfunc::quartEaseIn, EaseQuarticActionIn);
EASE_TEMPLATE_IMPL(EaseQuarticActionOut, tweenfunc::quartEaseOut, EaseQuarticActionOut);
EASE_TEMPLATE_IMPL(EaseQuarticActionInOut, tweenfunc::quartEaseInOut, EaseQuarticActionInOut);
EASE_TEMPLATE_IMPL(EaseQuinticActionIn, tweenfunc::quintEaseIn, EaseQuinticActionIn);
EASE_TEMPLATE_IMPL(EaseQuinticActionOut, tweenfunc::quintEaseOut, EaseQuinticActionOut);
EASE_TEMPLATE_IMPL(EaseQuinticActionInOut, tweenfunc::quintEaseInOut, EaseQuinticActionInOut);
EASE_TEMPLATE_IMPL(EaseCircleActionIn, tweenfunc::circEaseIn, EaseCircleActionIn);
EASE_TEMPLATE_IMPL(EaseCircleActionOut, tweenfunc::circEaseOut, EaseCircleActionOut);
EASE_TEMPLATE_IMPL(EaseCircleActionInOut, tweenfunc::circEaseInOut, EaseCircleActionInOut);
EASE_TEMPLATE_IMPL(EaseCubicActionIn, tweenfunc::cubicEaseIn, EaseCubicActionIn);
EASE_TEMPLATE_IMPL(EaseCubicActionOut, tweenfunc::cubicEaseOut, EaseCubicActionOut);
EASE_TEMPLATE_IMPL(EaseCubicActionInOut, tweenfunc::cubicEaseInOut, EaseCubicActionInOut);
    
        if ( x0 > x1 )
    {
        // Normal Grid
        a.setZero();
        b.set(0.0f, 1.0f);
        c.set(1.0f, 0.0f);
        d.set(1.0f, 1.0f);
        x = x0;
    }
    else
    {
        // Reversed Grid
        c.setZero();
        d.set(0.0f, 1.0f);
        a.set(1.0f, 0.0f);
        b.set(1.0f, 1.0f);
        x = x1;
    }
    
    diff.x = ( x - x * mx );
    diff.z = fabsf( floorf( (x * mz) / 4.0f ) );
    
                    _currentTarget->currentActionSalvaged = false;
    
    ActionTween* ActionTween::create(float duration, const std::string& key, float from, float to)
{
    ActionTween* ret = new (std::nothrow) ActionTween();
    if (ret && ret->initWithDuration(duration, key, from, to))
    {
        ret->autorelease();
        return ret;
    }
    
    delete ret;
    return nullptr;
}
    
    
    {                continue;
            }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions: