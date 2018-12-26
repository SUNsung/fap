
        
        EnumGenerator::EnumGenerator(const EnumDescriptor* descriptor, const Options* options) :
    SourceGeneratorBase(descriptor->file(), options),
    descriptor_(descriptor) {
}
    
      for (string::size_type i = 0; i < input.size(); i++) {
    char c = input[i];
    switch (c) {
      case '*':
        // Avoid '/*'.
        if (prev == '/') {
          result.append('&#42;');
        } else {
          result.push_back(c);
        }
        break;
      case '/':
        // Avoid '*/'.
        if (prev == '*') {
          result.append('&#47;');
        } else {
          result.push_back(c);
        }
        break;
      case '@':
        // '@' starts javadoc tags including the @deprecated tag, which will
        // cause a compile-time error if inserted before a declaration that
        // does not have a corresponding @Deprecated annotation.
        result.append('&#64;');
        break;
      case '<':
        // Avoid interpretation as HTML.
        result.append('&lt;');
        break;
      case '>':
        // Avoid interpretation as HTML.
        result.append('&gt;');
        break;
      case '&':
        // Avoid interpretation as HTML.
        result.append('&amp;');
        break;
      case '\\':
        // Java interprets Unicode escape sequences anywhere!
        result.append('&#92;');
        break;
      default:
        result.push_back(c);
        break;
    }
    }
    
    // Check whether a given message or its nested types has the given class name.
bool MessageHasConflictingClassName(const Descriptor* message,
                                    const string& classname) {
  if (message->name() == classname) return true;
  for (int i = 0; i < message->nested_type_count(); ++i) {
    if (MessageHasConflictingClassName(message->nested_type(i), classname)) {
      return true;
    }
  }
  for (int i = 0; i < message->enum_type_count(); ++i) {
    if (message->enum_type(i)->name() == classname) {
      return true;
    }
  }
  return false;
}
    
    
// Death tests do not work on Windows as of yet.
#ifdef PROTOBUF_HAS_DEATH_TEST
TEST(ObjCHelperDeathTest, TextFormatDecodeData_Failures) {
  TextFormatDecodeData decode_data;
    }
    
    static inline int internalInflateInit2(
    z_stream* zcontext, GzipInputStream::Format format) {
  int windowBitsFormat = 0;
  switch (format) {
    case GzipInputStream::GZIP: windowBitsFormat = 16; break;
    case GzipInputStream::AUTO: windowBitsFormat = 32; break;
    case GzipInputStream::ZLIB: windowBitsFormat = 0; break;
  }
  return inflateInit2(zcontext, /* windowBits */15 | windowBitsFormat);
}
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_blob.cc
 * \brief Implementations of SetDataGradToBlob given various device/dimension
 * \author Haoran Wang
*/
#include 'caffe_blob.h'
namespace mxnet {
namespace op {
namespace caffe {
    }
    }
    }
    
    template <typename Dtype>
class LayerRegistry {
 public:
  static ::caffe::Layer<Dtype> * CreateLayer(const ::caffe::LayerParameter& param) {
    ::caffe::shared_ptr< ::caffe::Layer<Dtype> > ptr =
      ::caffe::LayerRegistry<Dtype>::CreateLayer(param);
    // avoid caffe::layer destructor, which deletes the weights layer owns
    new ::caffe::shared_ptr< ::caffe::Layer<Dtype> >(ptr);
    return ptr.get();
  }
};
    
      std::vector<std::string> ListOutputs() const override {
    if (param_.num_out > 1) {
      std::vector<std::string> ret;
      for (int i = 0; i < param_.num_out; ++i)
        ret.push_back('output' + std::to_string(i));
      return ret;
    } else {
      return {'output'};
    }
  }
    
    
MXNET_DLL int MXCVResize(NDArrayHandle src, const mx_uint w, const mx_uint h,
                         const int interpolation, NDArrayHandle *out) {
  API_BEGIN();
  NDArray ndsrc = *static_cast<NDArray*>(src);
  CHECK_EQ(ndsrc.shape().ndim(), 3);
  CHECK_EQ(ndsrc.ctx(), Context::CPU());
  CHECK_EQ(ndsrc.dtype(), mshadow::kUint8);
    }
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file threaded_engine_pooled.cc
 * \brief Pooled threaded engine
 * \author Yutian Li
 */
#include <dmlc/base.h>
#include <dmlc/logging.h>
#include <dmlc/concurrency.h>
#include <cassert>
#include <utility>
#include './threaded_engine.h'
#include './thread_pool.h'
#include './stream_manager.h'
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file inplace_addto_detect_pass.cc
 * \brief Detect whether inplace addto operation is possible for certain op.
 */
#include <mxnet/base.h>
#include <mxnet/operator.h>
#include <mxnet/op_attr_types.h>
#include <nnvm/graph_attr_types.h>
    
     private:
  void create() {
    CHECK(tensor_container_ == nullptr);
    CHECK_EQ(this->dev_mask(), mshadow::cpu::kDevMask);
    MSHADOW_TYPE_SWITCH(this->type_flag_, DType, {
        auto tensor_container = new mshadow::TensorContainer<mshadow::cpu, 1, DType>(false);
        tensor_container->Resize(mshadow::Shape1(shape_.Size()));
        dptr_ = tensor_container->dptr_;
        tensor_container_ = tensor_container;
    });
  }
  void resize() {
    MSHADOW_TYPE_SWITCH(this->type_flag_, DType, {
        auto tensor_container =
          (mshadow::TensorContainer<mshadow::cpu, 1, DType>*) tensor_container_;
        tensor_container->Resize(mshadow::Shape1(shape_.Size()));
    });
  }
  void release() {
    MSHADOW_TYPE_SWITCH(this->type_flag_, DType, {
        auto tensor_container =
          (mshadow::TensorContainer<mshadow::cpu, 1, DType>*) tensor_container_;
        delete tensor_container;
    });
  }
    
    void SearchIterator::setText(const UnicodeString &text, UErrorCode &status)
{
    if (U_SUCCESS(status)) {
        if (text.length() == 0) {
            status = U_ILLEGAL_ARGUMENT_ERROR;
        }
        else {
            m_text_        = text;
            m_search_->text = m_text_.getBuffer();
            m_search_->textLength = m_text_.length();
        }
    }
}
    
    #if !UCONFIG_NO_FORMATTING
    
    class Calendar;
    
    #endif

    
    /**
 * An interval of allowed significant digit counts.
 */
class U_I18N_API SignificantDigitInterval : public UMemory {
public:
    }
    
    U_NAMESPACE_BEGIN
    
    
    {    /**
     * Formats positiveValue using the given range of digit counts.
     * Always uses standard digits '0' through '9'. Formatted value is
     * left padded with '0' as necessary to achieve minimum digit count.
     * Does not produce any grouping separators or trailing decimal point.
     * Calling format to format a value with a particular digit count range
     * when canFormat indicates that the same value and digit count range
     * cannot be formatted results in undefined behavior.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UnicodeString &format(
            int32_t positiveValue,
            const IntDigitCountRange &range,
            UnicodeString &appendTo);
    
};
    
    const char *StandardPlural::getKeyword(Form p) {
    U_ASSERT(ZERO <= p && p < COUNT);
    return gKeywords[p];
}
    
    #if !UCONFIG_NO_TRANSLITERATION
    
    //
// EaseRateAction
//
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    __CCCallFuncO * __CCCallFuncO::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) __CCCallFuncO();
    
    if( _selectorTarget)
    {
        a->initWithTarget(_selectorTarget, _callFuncO, _object);
    }
    
    a->autorelease();
    return a;
}
    
    struct _hashElement;
    
    #endif // __ACTION_CCPAGETURN3D_ACTION_H__

    
    
    {
    {
    {            setTile(Vec2(i, j), coords);
        }
    }
}
    
    AnimationFrame* AnimationFrame::create(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo)
{
    auto ret = new (std::nothrow) AnimationFrame();
    if (ret && ret->initWithSpriteFrame(spriteFrame, delayUnits, userInfo))
    {
        ret->autorelease();
    }
    else
    {
        CC_SAFE_DELETE(ret);
    }
    return ret;
}
    
    
    {    /**  A AnimationFrameDisplayedNotification notification will be broadcast when the frame is displayed with this dictionary as UserInfo. If UserInfo is nil, then no notification will be broadcast. */
    ValueMap _userInfo;
    
private:
    CC_DISALLOW_COPY_AND_ASSIGN(AnimationFrame);
};
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    int ClusterQualityInfo702::lateral_dist_rms(const std::uint8_t* bytes,
                                            int32_t length) const {
  Byte t0(bytes + 1);
  int32_t x = t0.get_byte(0, 3);
    }
    
    int RadarState201::radar_power(const std::uint8_t* bytes,
                               int32_t length) const {
  Byte t0(bytes + 3);
  uint32_t x = t0.get_byte(0, 2);
    }
    
    TEST_F(PncMapTest, GetRouteSegments_NoChangeLane) {
  auto lane = hdmap_.GetLaneById(hdmap::MakeMapId('9_1_-2'));
  ASSERT_TRUE(lane);
  auto point = lane->GetSmoothPoint(0);
  common::VehicleState state;
  state.set_x(point.x());
  state.set_y(point.y());
  state.set_z(point.y());
  state.set_heading(M_PI);
  std::list<RouteSegments> segments;
  ASSERT_TRUE(pnc_map_->GetRouteSegments(state, 10, 30, &segments));
  // first time on this passage, should not immediately change lane
  ASSERT_EQ(2, segments.size());
  EXPECT_NEAR(40, RouteLength(segments.front()), 1e-4);
  EXPECT_NEAR(40, RouteLength(segments.back()), 1e-4);
  EXPECT_EQ(routing::LEFT, segments.front().NextAction());
  EXPECT_TRUE(segments.front().IsOnSegment());
  EXPECT_EQ(routing::RIGHT, segments.back().NextAction());
  EXPECT_FALSE(segments.back().IsOnSegment());
}
    
    
    {
    {    prev_trajectory_point = trajectory_point.path_point();
  }
  return combined_trajectory;
}