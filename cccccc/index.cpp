
        
        #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    /**
 * @brief Index into the input blob along its first axis.
 *
 * This layer can be used to select, reorder, and even replicate examples in a
 * batch.  The second blob is cast to int and treated as an index into the
 * first axis of the first blob.
 */
template <typename Dtype>
class BatchReindexLayer : public Layer<Dtype> {
 public:
  explicit BatchReindexLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    /**
 * @brief Computes the contrastive loss @f$
 *          E = \frac{1}{2N} \sum\limits_{n=1}^N \left(y\right) d^2 +
 *              \left(1-y\right) \max \left(margin-d, 0\right)^2
 *          @f$ where @f$
 *          d = \left| \left| a_n - b_n \right| \right|_2 @f$. This can be
 *          used to train siamese networks.
 *
 * @param bottom input Blob vector (length 3)
 *   -# @f$ (N \times C \times 1 \times 1) @f$
 *      the features @f$ a \in [-\infty, +\infty]@f$
 *   -# @f$ (N \times C \times 1 \times 1) @f$
 *      the features @f$ b \in [-\infty, +\infty]@f$
 *   -# @f$ (N \times 1 \times 1 \times 1) @f$
 *      the binary similarity @f$ s \in [0, 1]@f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
 *      the computed contrastive loss: @f$ E =
 *          \frac{1}{2N} \sum\limits_{n=1}^N \left(y\right) d^2 +
 *          \left(1-y\right) \max \left(margin-d, 0\right)^2
 *          @f$ where @f$
 *          d = \left| \left| a_n - b_n \right| \right|_2 @f$.
 * This can be used to train siamese networks.
 */
template <typename Dtype>
class ContrastiveLossLayer : public LossLayer<Dtype> {
 public:
  explicit ContrastiveLossLayer(const LayerParameter& param)
      : LossLayer<Dtype>(param), diff_() {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #endif  // CAFFE_CUDNN_RELU_LAYER_HPP_

    
    namespace caffe {
    }
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return true; }
  virtual void compute_output_shape();
};
    
    #endif  // CAFFE_EXP_LAYER_HPP_

    
      //   The text of a paragraph typically starts with the start of an idea and
  // ends with the end of an idea.  Here we define paragraph as something that
  // may have a first line indent and a body indent which may be different.
  // Typical words that start an idea are:
  //   1. Words in western scripts that start with
  //      a capital letter, for example 'The'
  //   2. Bulleted or numbered list items, for
  //      example '2.'
  // Typical words which end an idea are words ending in punctuation marks. In
  // this vocabulary, each list item is represented as a paragraph.
  bool lword_indicates_list_item;
  bool lword_likely_starts_idea;
  bool lword_likely_ends_idea;
    
    // Computes all the cross product distances of the points perpendicular to
// the given direction, ignoring distances outside of the give distance range,
// storing the actual (signed) cross products in distances_.
void DetLineFit::ComputeConstrainedDistances(const FCOORD& direction,
                                             double min_dist, double max_dist) {
  distances_.truncate(0);
  square_length_ = direction.sqlength();
  // Compute the distance of each point from the line.
  for (int i = 0; i < pts_.size(); ++i) {
    FCOORD pt_vector = pts_[i].pt;
    // Compute |line_vector||pt_vector|sin(angle between)
    double dist = direction * pt_vector;
    if (min_dist <= dist && dist <= max_dist)
      distances_.push_back(DistPointPair(dist, pts_[i].pt));
  }
}
    
      // Computes all the cross product distances of the points from the line,
  // storing the actual (signed) cross products in distances_.
  // Ignores distances of points that are further away than the previous point,
  // and overlaps the previous point by at least half.
  void ComputeDistances(const ICOORD& start, const ICOORD& end);
    
    #ifndef TESSERACT_CCUTIL_KDPAIR_H_
#define TESSERACT_CCUTIL_KDPAIR_H_
    
    /*---------------------------------------------------------------------------
          Macros
----------------------------------------------------------------------------*/
/* macros for controlling the display of recognized characters */
#define EnableCharDisplay()   (DisplayCharacters = TRUE)
#define DisableCharDisplay()    (DisplayCharacters = FALSE)
    
    
    {
  // Total scaled error used by boosting algorithms.
  double scaled_error_;
  // Difference in result rating to be thought of as an 'equal' choice.
  double rating_epsilon_;
  // Vector indexed by font_id from the samples of error accumulators.
  GenericVector<Counts> font_counts_;
  // Counts of the results that map each unichar_id (from samples) to an
  // incorrect shape_id.
  GENERIC_2D_ARRAY<int> unichar_counts_;
  // Count of the number of times each shape_id occurs, is correct, and multi-
  // unichar.
  GenericVector<int> multi_unichar_counts_;
  // Histogram of scores (as percent) for correct answers.
  STATS ok_score_hist_;
  // Histogram of scores (as percent) for incorrect answers.
  STATS bad_score_hist_;
  // Unicharset for printing character ids in results.
  const UNICHARSET& unicharset_;
};
    
    #include 'intfeaturedist.h'
#include 'intfeaturemap.h'
    
    // Feature distance calculator designed to provide a fast distance calculation
// based on set difference between a given feature set and many other feature
// sets in turn.
// Representation of a feature set as an array of bools that are sparsely
// true, and companion arrays that allow fast feature set distance
// calculations with allowance of offsets in position.
// Init is expensive, so for greatest efficiency, to re-initialize for a new
// feature set, use Set(..., false) on the SAME feature set as was used to
// setup with Set(..., true), to return to its initialized state before
// reuse with Set(..., true) on a new feature set.
class IntFeatureDist {
 public:
  IntFeatureDist();
  ~IntFeatureDist();
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
      void addToPipeline(const std::string &s);
    
    namespace HPHP {
    }
    
      Address base() const { return m_base; }
  Address frontier() const { return m_frontier; }
  std::string name() const { return m_name; }
    
    
void Instruction::SetImmPCOffsetTarget(Instruction* target,
                                       Instruction* from) {
  auto adjusted_target = !from ? target : target + (int64_t)(this - from);
  if (IsPCRelAddressing()) {
    SetPCRelImmTarget(adjusted_target);
  } else if (IsLoadOrStore()) {
    SetPCRelLoadStoreTarget(adjusted_target);
  } else {
    SetBranchImmTarget(adjusted_target);
  }
}
    
    
    {    return true;
}
    
    // callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_API int32       ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData);
IMGUI_API int32       ImGui_Marmalade_KeyCallback(void* SystemData, void* userData);
IMGUI_API int32       ImGui_Marmalade_CharCallback(void* SystemData, void* userData);

    
    // Data
static ID3D11Device*            g_pd3dDevice = NULL;
static ID3D11DeviceContext*     g_pd3dDeviceContext = NULL;
static IDXGISwapChain*          g_pSwapChain = NULL;
static ID3D11RenderTargetView*  g_mainRenderTargetView = NULL;
    
            // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSdlGL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
        }
        ImGui_ImplSdlGL2_NewFrame(window);
    }
    
            // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui