
        
        #ifndef TESSERACT_CCMAIN_PARAGRAPHS_H_
#define TESSERACT_CCMAIN_PARAGRAPHS_H_
    
    #ifndef TESSERACT_CCUTIL_KDPAIR_H_
#define TESSERACT_CCUTIL_KDPAIR_H_
    
    struct INT_FX_RESULT_STRUCT {
  int32_t Length;                  // total length of all outlines
  int16_t Xmean, Ymean;            // center of mass of all outlines
  int16_t Rx, Ry;                  // radius of gyration
  int16_t NumBL, NumCN;            // number of features extracted
  int16_t Width;                   // Width of blob in BLN coords.
  uint8_t YBottom;                 // Bottom of blob in BLN coords.
  uint8_t YTop;                    // Top of blob in BLN coords.
};
    
    // Classifies the given [training] sample, writing to results.
// See ShapeClassifier for a full description.
int TessClassifier::UnicharClassifySample(
    const TrainingSample& sample, Pix* page_pix, int debug,
    UNICHAR_ID keep_this, GenericVector<UnicharRating>* results) {
  const int old_matcher_level = classify_->matcher_debug_level;
  const int old_matcher_flags = classify_->matcher_debug_flags;
  const int old_classify_level = classify_->classify_debug_level;
  if (debug) {
    // Explicitly set values of various control parameters to generate debug
    // output if required, restoring the old values after classifying.
    classify_->matcher_debug_level.set_value(2);
    classify_->matcher_debug_flags.set_value(25);
    classify_->classify_debug_level.set_value(3);
  }
  classify_->CharNormTrainingSample(pruner_only_, keep_this, sample, results);
  if (debug) {
    classify_->matcher_debug_level.set_value(old_matcher_level);
    classify_->matcher_debug_flags.set_value(old_matcher_flags);
    classify_->classify_debug_level.set_value(old_classify_level);
  }
  return results->size();
}
    
      // add entry to fontFileIDs list
  if (fontFileIDLen >= fontFileIDSize) {
    fontFileIDSize += 64;
    fontFileIDs = (Ref *)greallocn(fontFileIDs, fontFileIDSize, sizeof(Ref));
  }
  fontFileIDs[fontFileIDLen++] = *id;
    
      //----- miscellaneous
  void setOffset(double x, double y)
    { tx0 = x; ty0 = y; }
  void setScale(double x, double y)
    { xScale0 = x; yScale0 = y; }
  void setRotate(int rotateA)
    { rotate0 = rotateA; }
  void setClip(double llx, double lly, double urx, double ury)
    { clipLLX0 = llx; clipLLY0 = lly; clipURX0 = urx; clipURY0 = ury; }
  void setUnderlayCbk(void (*cbk)(PSOutputDev *psOut, void *data),
		      void *data)
    { underlayCbk = cbk; underlayCbkData = data; }
  void setOverlayCbk(void (*cbk)(PSOutputDev *psOut, void *data),
		     void *data)
    { overlayCbk = cbk; overlayCbkData = data; }
  void setDisplayText(GBool display) { displayText = display; }
    
    
    {  return gTrue;
}
    
    #include 'goo/gtypes.h'
    
      // duration
  pageDict->lookupNF('Dur', &tmp);
  if (!(tmp.isNum() || tmp.isNull())) {
    error(-1, 'Page duration object (page %d) is wrong type (%s)',
	  num, tmp.getTypeName());
  } else if (tmp.isNum()) {
    duration = tmp.getNum();
  }
  tmp.free();
    
    private:
  struct Interval {
    Interval(Object *dict, int baseA);
    ~Interval();
    GooString *prefix;
    enum NumberStyle {
      None,
      Arabic,
      LowercaseRoman,
      UppercaseRoman,
      UppercaseLatin,
      LowercaseLatin
    } style;
    int first, base, length;
  };
    
    //------------------------------------------------------------------------
// PageTransition
//------------------------------------------------------------------------
    
    void PopplerCache::put(PopplerCacheKey *key, PopplerCacheItem *item)
{
  int movingStartIndex = lastValidCacheIndex + 1;
  if (lastValidCacheIndex == cacheSize - 1) {
    delete keys[lastValidCacheIndex];
    delete items[lastValidCacheIndex];
    movingStartIndex = cacheSize - 1;
  } else {
    lastValidCacheIndex++;
  }
  for (int i = movingStartIndex; i > 0; i--) {
    keys[i] = keys[i - 1];
    items[i] = items[i - 1];
  }
  keys[0] = key;
  items[0] = item;
}
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2009 Carlos Garcia Campos <carlosgc@gnome.org>
// Copyright (C) 2010 Albert Astals Cid <aacid@kde.org>
// Copyright (C) 2011 William Bader <williambader@hotmail.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
      //
  // parse Media Play Parameters
  if (obj->dictLookup('P', &tmp2)->isDict()) { // media play parameters
    Object params;
    if (tmp2.dictLookup('MH', &params)->isDict()) {
      MH.parseMediaPlayParameters(&params);
    }
    params.free();
    if (tmp2.dictLookup('BE', &params)->isDict()) {
      BE.parseMediaPlayParameters(&params);
    }
    params.free();
  } else if (hasClip) {
    error (-1, 'Invalid Media Rendition');
    ok = gFalse;
  }
  tmp2.free();
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2010 Albert Astals Cid <aacid@kde.org>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    //------------------------------------------------------------------------
// SecurityHandler
//------------------------------------------------------------------------
    
    class GooString;
class Object;
class Stream;
    
        imgData.imgStr = new ImageStream(str, width,
				     colorMap->getNumPixelComps(),
				     colorMap->getBits());
    imgData.imgStr->reset();
    imgData.colorMap = colorMap;
    imgData.mask = maskBitmap;
    imgData.colorMode = colorMode;
    imgData.width = width;
    imgData.height = height;
    imgData.y = 0;
    
    
    {  std::lock_guard<std::mutex> lock(Storage::Get()->GetMutex(Context::kGPU));
  size_t size = RoundAllocSize(handle.size);
  auto&& reuse_pool = memory_pool_[size];
  reuse_pool.push_back(handle.dptr);
}
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file storage_manager.h
 * \brief Storage manager.
 */
    
    - **data**: *(batch_size, channel, height, width)*
- **offset**: *(batch_size, num_deformable_group * kernel[0] * kernel[1] * 2, height, width)*
- **weight**: *(num_filter, channel, kernel[0], kernel[1])*
- **bias**: *(num_filter,)*
- **out**: *(batch_size, num_filter, out_height, out_width)*.
    
    
template <typename DType>
static void MKLDNNRNNForwardUnidi(bool state_outputs,
                                  const int L,
                                  const int T,
                                  const int N,
                                  const int I,
                                  const int H,
                                  DType* x_ptr,
                                  mkldnn::memory *user_src_layer_memory,
                                  DType* hx_ptr,
                                  DType* cx_ptr,
                                  DType* w_ptr,
                                  DType* b_ptr,
                                  DType* y_ptr,
                                  DType* hy_ptr,
                                  DType* cy_ptr,
                                  std::vector<mkldnn::memory> *concat_weight_memory,
                                  std::vector<mkldnn::memory> *concat_iter_memory,
                                  std::vector<mkldnn::memory> *x_memory,
                                  std::vector<mkldnn::memory> *hcx_memory,
                                  std::vector<mkldnn::memory> *wx_memory,
                                  std::vector<mkldnn::memory> *wh_memory,
                                  std::vector<mkldnn::memory> *bias_memory,
                                  std::vector<mkldnn::memory> *y_memory,
                                  std::vector<mkldnn::memory> *hcy_memory,
                                  std::vector<primitive> *rnn_forward_prim,
                                  int layer_index,
                                  bool *has_cache,
                                  int dtype,
                                  bool is_train,
                                  int mode) {
  int ngates = 0, nstates = 0;
  algorithm nalgorithm = GetMKLDNNRNNAlgo(mode, &ngates, &nstates);
  mkldnn::memory::data_type mkldnn_dtype = get_mkldnn_type(dtype);
  const int cell_size = N * H;
  const int single_cell_size = N * H;
  const int single_b_size = ngates * H;
  int w_size = (I + H) * H * ngates;
  const int omp_threads = mxnet::engine::OpenMP::Get()->GetRecommendedOMPThreadCount();
  auto cpu_engine = CpuEngine::Get()->get_engine();
  auto null_memory_ = null_memory(cpu_engine);
  int offset1 = 0, offset2 = 0;
  bool initialized = *has_cache;
    }
    
      if (ret.attrs.count(input_name) != 0) {
    const AttrVector& shape_args = ret.GetAttr<AttrVector>(input_name);
    CHECK_LE(shape_args.size(), idx.input_nodes().size())
        << 'More provided ' << attr_name << 's than number of arguments.';
    for (size_t i = 0; i < shape_args.size(); ++i) {
      rshape[idx.entry_id(idx.input_nodes()[i], 0)] = shape_args[i];
    }
  }
    
    /**
 * \brief The class sets caffe's mode before doing forward/backward
 * \tparam xpu The device that the op will be executed on.
 */
class CaffeMode {
 public:
  template<typename xpu> static void SetMode();
};
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_fieldentry.h
 * \brief Implement FieldEntry<caffe::LayerParameter>
 * \author Haoran Wang
 */
#ifndef PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
#define PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
    
    namespace aria2 {
    }
    
      static void clearData6();
    
    void DHTRoutingTable::getBuckets(
    std::vector<std::shared_ptr<DHTBucket>>& buckets) const
{
  dht::enumerateBucket(buckets, root_.get());
}
    
    namespace aria2 {
    }
    
      virtual void startup() = 0;
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
        void UserPostProcessing::doSomething(cv::Mat& output, const cv::Mat& input)
    {
        try
        {
            // Random operation on data
            cv::bitwise_not(input, output);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
        }
    }
    
            Rectangle<T>& operator/=(const T value);
    
    #ifdef USE_3D_ADAM_MODEL
    #include <adam/totalmodel.h>
#endif
#include <openpose/core/common.hpp>
#include <openpose/gui/enumClasses.hpp>
#include <openpose/gui/gui.hpp>
    
        public:
        PersonIdExtractor(const float confidenceThreshold = 0.1f, const float inlierRatioThreshold = 0.5f,
                          const float distanceThreshold = 30.f, const int numberFramesToDeletePerson = 10);
    
        template<typename T>
    void Rectangle<T>::recenter(const T newWidth, const T newHeight)
    {
        try
        {
            const auto centerPoint = center();
            x = centerPoint.x - T(newWidth / 2.f);
            y = centerPoint.y - T(newHeight / 2.f);
            width = newWidth;
            height = newHeight;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
        }
    }