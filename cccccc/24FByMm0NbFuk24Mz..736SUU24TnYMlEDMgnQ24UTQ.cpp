
        
        // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
      virtual void Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh = nullptr);
  virtual void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result);
    
    MenuDelegate::MenuDelegate(ObjectManager* object_manager)
    : object_manager_(object_manager) {
}
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    void Menu::Insert(MenuItem* menu_item, int pos) {
  if (pos < 0 || pos > (int)menu_items_.size()) return;
    }
    
    #include 'base/files/file_path.h'
#include 'base/strings/string_util.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/threading/thread_restrictions.h'
#include 'base/values.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menu/menu.h'
#include 'content/nw/src/nw_base.h'
#include 'content/nw/src/nw_content.h'
#include 'content/nw/src/nw_package.h'
#include 'ui/base/accelerators/accelerator.h'
#include 'ui/gfx/image/image_skia_operations.h'
#include 'ui/events/event_constants.h'//for modifier key code
#include 'base/logging.h'
    
          std::string encoded_image_base64;
      std::string encoded_image_str(encoded_image.data(), encoded_image.data() + encoded_image.size());
      base::Base64Encode(encoded_image_str, &encoded_image_base64);
    
    namespace extensions {
    }
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Datum.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<Datum> & datum_vector,
                Blob<Dtype>* transformed_blob);
    
    
    {  shared_ptr<boost::thread> thread_;
};
    
    #include <vector>
    
      virtual inline const char* type() const { return 'Accuracy'; }
  virtual inline int ExactNumBottomBlobs() const { return 2; }
    
      virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      /**
   * @brief Computes the error gradient w.r.t. the concatenate inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *        respect to the outputs
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length K), into which the top gradient
   *        @f$ \frac{\partial E}{\partial y} @f$ is deconcatenated back to the
   *        inputs @f$
   *        \left[ \begin{array}{cccc}
   *          \frac{\partial E}{\partial x_1} &
   *          \frac{\partial E}{\partial x_2} &
   *          ... &
   *          \frac{\partial E}{\partial x_K}
   *        \end{array} \right] =
   *        \frac{\partial E}{\partial y}
   *        @f$
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #endif

    
    #endif  // TESSERACT_CCMAIN_OSDETECT_H_

    
    // Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::StringParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_STRING;
  sIt = it;
  vcMap[my_id_] = this;
}
// Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::IntParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_INTEGER;
  iIt = it;
  vcMap[my_id_] = this;
}
// Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::BoolParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_BOOLEAN;
  bIt = it;
  vcMap[my_id_] = this;
}
// Constructors for the various ParamTypes.
ParamContent::ParamContent(tesseract::DoubleParam* it) {
  my_id_ = nrParams;
  nrParams++;
  param_type_ = VT_DOUBLE;
  dIt = it;
  vcMap[my_id_] = this;
}
    
    // Deletes the box with the given index, and shuffles up the rest.
// Recomputes the bounding box.
void BoxWord::DeleteBox(int index) {
  ASSERT_HOST(0 <= index && index < length_);
  boxes_.remove(index);
  --length_;
  ComputeBoundingBox();
}
    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }
    
    // Initialization funciton called by caffeOp & caffeLoss
template<typename Dtype>
void InitCaffeBlobs(std::vector< ::caffe::Blob<Dtype>*>* v, int n_num) {
  for (index_t i=0; i < n_num; ++i)
    v->push_back(new ::caffe::Blob<Dtype>());
}
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file caffe_data_iter.cc
 * \brief register mnist iterator
*/
#include <sys/time.h>
#include <caffe/proto/caffe.pb.h>
#include <dmlc/parameter.h>
#include <atomic>
    
    
    {        return dict[versionKey].Value<size_t>();
    }
    
            for (size_t i = 0; i < numSequences; ++i)
        {
            MaskKind firstMaskEntry = maskBuffer[i * maxNumTimeSteps];
            if (firstMaskEntry == MaskKind::SequenceBegin)
                sequenceBeginIndices[i] = 0;
            else if (firstMaskEntry == MaskKind::Valid)
                sequenceBeginIndices[i] = Microsoft::MSR::CNTK::SentinelValueIndicatingUnspecifedSequenceBeginIdx;
            else
                LogicError('The first entry of a Value mask must be Valid or SequenceBegin');
    }
    
    
    {                unpackedShape = unpackedShape.AppendShape({ packedDataLayout->GetNumSequences() });
            }
            else if (!sampleDynamicAxes.empty())
                LogicError('A PackedValue object that does not have a layout cannot have any dynamic axes.');
    
            if (m_valueInitializer->Contains(RandomSeedAttributeName)) {
            auto& seed = m_valueInitializer->operator[](RandomSeedAttributeName);
            if ((unsigned long)seed.Value<size_t>() == SentinelValueForAutoSelectRandomSeed)
                seed.Value<size_t>() = Internal::GenerateRandomSeed();
        }
    
    
    {        Matrix<ElemType>::VectorSum(sliceInputValue, sliceOutputValue, true);
    }
    
        virtual bool OutputUsedInComputingInputNodesGradients() const override
    {
        return false;
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    #endif //__CCINSTANT_ACTION_H__

    
    #include '2d/CCActionInterval.h'
    
    AnimationFrame* AnimationFrame::clone() const
{
    // no copy constructor
    auto frame = new (std::nothrow) AnimationFrame();
    frame->initWithSpriteFrame(_spriteFrame->clone(),
                               _delayUnits,
                               _userInfo);
    }
    
            for (auto& obj : frameArray)
        {
            ValueMap& entry = obj.asValueMap();
            std::string spriteFrameName = entry['spriteframe'].asString();
            SpriteFrame *spriteFrame = frameCache->getSpriteFrameByName(spriteFrameName);
    }