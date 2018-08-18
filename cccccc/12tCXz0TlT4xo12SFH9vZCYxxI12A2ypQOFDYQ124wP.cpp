
        
        Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id) {
  RenderThread::Get()->Send(new ShellViewHostMsg_Deallocate_Object(
      routing_id, object_id));
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  return v8::Undefined(isolate);
}
    
    namespace remote {
    }
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
     protected:
  ~NwClipboardSetListSyncFunction() override;
    
     protected:
  ResponseAction Run() override;
  ~NwObjCallObjectMethodAsyncFunction() override;
    
    void Classifier::Preprocess(const cv::Mat& img,
                            std::vector<cv::Mat>* input_channels) {
  /* Convert the input image to the input image format of the network. */
  cv::Mat sample;
  if (img.channels() == 3 && num_channels_ == 1)
    cv::cvtColor(img, sample, cv::COLOR_BGR2GRAY);
  else if (img.channels() == 4 && num_channels_ == 1)
    cv::cvtColor(img, sample, cv::COLOR_BGRA2GRAY);
  else if (img.channels() == 4 && num_channels_ == 3)
    cv::cvtColor(img, sample, cv::COLOR_BGRA2BGR);
  else if (img.channels() == 1 && num_channels_ == 3)
    cv::cvtColor(img, sample, cv::COLOR_GRAY2BGR);
  else
    sample = img;
    }
    
    
    {
    {    if (++count % 1000 == 0) {
      txn->Commit();
    }
  }
  // write the last batch
  if (count % 1000 != 0) {
      txn->Commit();
  }
  LOG(INFO) << 'Processed ' << count << ' files.';
  delete[] pixels;
  db->Close();
}
    
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
    
    #include 'caffe/layers/base_conv_layer.hpp'
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/sigmoid_layer.hpp'
    
    
    {  /// when divided by UINT_MAX, the randomly generated values @f$u\sim U(0,1)@f$
  Blob<unsigned int> rand_vec_;
  /// the probability @f$ p @f$ of dropping any input
  Dtype threshold_;
  /// the scale for undropped inputs at train time @f$ 1 / (1 - p) @f$
  Dtype scale_;
  unsigned int uint_thres_;
};
    
    
    {  int                  image_width_;    //< Width of source pix_.
  int                  image_height_;   //< Height of source pix_.
  int                  pix_channels_;   //< Number of 8-bit channels in pix_.
  int                  pix_wpl_;        //< Words per line of pix_.
  // Limits of image rectangle to be processed.
  int                  scale_;          //< Scale factor from original image.
  int                  yres_;           //< y pixels/inch in source image.
  int                  estimated_res_;  //< Resolution estimate from text size.
  int                  rect_left_;
  int                  rect_top_;
  int                  rect_width_;
  int                  rect_height_;
};
    
    
    {  low = 0;
  if (fc.y () == 0) {
    if (fc.x () >= 0)
      dir = 0;
    else
      dir = MODULUS / 2;
    return;
  }
  high = MODULUS;
  do {
    current = (high + low) / 2;
    if (dirtab[current] * fc >= 0)
      low = current;
    else
      high = current;
  }
  while (high - low > 1);
  dir = low;
}

    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
    namespace tesseract {
/**********************************************************************
 * main_setup
 *
 * Main for mithras demo program. Read the arguments and set up globals.
 **********************************************************************/
    }
    
     public:
  inline _ConstTessMemberResultCallback_2_0(const T* object, MemberSignature member, P1 p1, P2 p2)
    : object_(object),
      member_(member),      p1_(p1),      p2_(p2) { }
    
    // Helper to expand a box in one of the 4 directions by the given pad,
// provided it does not expand into any cell with a zero noise density.
// If that is not possible, try expanding all round by a small constant.
static TBOX AttemptBoxExpansion(const TBOX& box, const IntGrid& noise_density,
                                int pad) {
  TBOX expanded_box(box);
  expanded_box.set_right(box.right() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_left(box.left() - pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_top(box.top() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_bottom(box.bottom() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.pad(kNoisePadding, kNoisePadding);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  return box;
}
    
    
    {
    {
    {
    {        // In addition to the same type, the next box must not be above the
        // current box, nor (if image) too far below.
        PolyBlockType type = part->type(), next_type = next_block_part->type();
        if (ColPartition::TypesSimilar(type, next_type) &&
            !part->IsLineType() && !next_block_part->IsLineType() &&
            next_box.bottom() <= part_box.top() &&
            (text_block || part_box.bottom() <= next_box.top()))
          next_part = next_block_part;
      }
    } while (!part_it_.empty() && next_part != nullptr);
    if (!text_block) {
      TO_BLOCK* to_block = ColPartition::MakeBlock(bleft, tright,
                                                   &block_parts, used_parts);
      if (to_block != nullptr) {
        TO_BLOCK_IT to_block_it(&to_blocks_);
        to_block_it.add_to_end(to_block);
        BLOCK_IT block_it(&completed_blocks_);
        block_it.add_to_end(to_block->block);
      }
    } else {
      // Further sub-divide text blocks where linespacing changes.
      ColPartition::LineSpacingBlocks(bleft, tright, resolution, &block_parts,
                                      used_parts,
                                      &completed_blocks_, &to_blocks_);
    }
  }
  part_it_.set_to_list(&part_set_);
  latest_part_ = nullptr;
  ASSERT_HOST(completed_blocks_.length() == to_blocks_.length());
}
    
            // get data as long vectors
        // ... why do I need to explicitly use operator T ()?
        array_ref<msra::math::float4> us4(us.operator array_ref<msra::math::float4>());
        array_ref<msra::math::float4> refs4(refs.operator array_ref<msra::math::float4>());
    
        if (!NodeNameExists(toName))
    {
        pToNode = pFromNode->Duplicate(toName, flags);
        AddNodeToNet(pToNode);
    }
    else
    {
        // node already exists
        pToNode = GetNodeFromName(toName);
    }
    
        // find all the  BN nodes by evalOrder
    std::vector<ComputationNodeBasePtr> bnNodes;
    std::set<ComputationNodeBasePtr> bnNodesLogged; // (avoid double record of batch normalization nodes)
    for (auto& evalNode : evalNodes)
    {
        for (auto& node : m_net->GetEvalOrder(evalNode))
        {
            let bnNode = dynamic_pointer_cast<BatchNormalizationNode<ElemType>>(node);
            if (bnNode)
            {
                if (bnNodesLogged.insert(node).second)
                {
                    // reset the statistics states of bn nodes
                    bnNode->ResetStatisticsState();
                    bnNode->SetNormalizationTimeConstants(-1, bnNode->NormalizationTimeConstant(),
                        0, bnNode->BlendTimeConstant());
                    bnNodes.push_back(node);
                    // add BN nodes into the evaluation group, then they will be added into root nodes when
                    // the network re-compile
                    m_net->AddToNodeGroup(L'evaluation', bnNode);
                }
            }
        }
    }
    
    // ---------------------------------------------------------------------------
// latticesource -- manages loading of lattices for MMI (in pairs for numer and denom)
// ---------------------------------------------------------------------------
    
    public:
    // Method to setup the data for the reader
    void SetData(std::map<std::wstring, std::vector<ElemType>*>* outputs, std::map<std::wstring, size_t>* dimensions)
    {
        m_outputs = outputs;
        m_dimensions = dimensions;
        m_currentRecord = 0;
        m_recordCount = 0;
        for (auto iter = outputs->begin(); iter != outputs->end(); ++iter)
        {
            // figure out the dimension of the data
            const std::wstring& val = iter->first;
            size_t count = (*outputs)[val]->size();
    }
    }
    
    
    {// Enable LOG(CONSOLE) for print messages to console.
#define LOG_CONSOLE ::xgboost::ConsoleLogger()
// Enable LOG(TRACKER) for print messages to tracker
#define LOG_TRACKER ::xgboost::TrackerLogger()
}  // namespace xgboost.
#endif  // XGBOOST_LOGGING_H_

    
    /*!
 * \brief Whether always log console message with time.
 *  It will display like, with timestamp appended to head of the message.
 *  '[21:47:50] 6513x126 matrix with 143286 entries loaded from
 * ../data/agaricus.txt.train'
 */
#ifndef XGBOOST_LOG_WITH_TIME
#define XGBOOST_LOG_WITH_TIME 1
#endif
    
    #include '../common/host_device_vector.h'
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
    class TLSConfigPlugin;
    
    
    {  /// The observed uptime of the system at event time.
  uint32_t uptime{0};
};
    
      // The read call finished without reading the requested number of bytes.
  if (total_read != length) {
    return Status(1, 'Read incorrect number of bytes');
  }
    
                ImGui::Text('PushItemWidth(GetContentRegionAvailWidth() * 0.5f)');
            ImGui::SameLine(); ShowHelpMarker('Half of available width.\n(~ right-cursor_pos)\n(works within a column set)');
            ImGui::PushItemWidth(ImGui::GetContentRegionAvailWidth() * 0.5f);
            ImGui::DragFloat('float##3', &f);
            ImGui::PopItemWidth();
    
    void ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow*, int button, int action, int /*mods*/)
{
    if (action == GLFW_PRESS && button >= 0 && button < IM_ARRAYSIZE(g_MouseJustPressed))
        g_MouseJustPressed[button] = true;
}
    
    
    {    // Destroy SDL mouse cursors
    for (ImGuiMouseCursor cursor_n = 0; cursor_n < ImGuiMouseCursor_COUNT; cursor_n++)
        SDL_FreeCursor(g_MouseCursors[cursor_n]);
    memset(g_MouseCursors, 0, sizeof(g_MouseCursors));
}
    
    static void ImGui_ImplWin32_UpdateMousePos()
{
    ImGuiIO& io = ImGui::GetIO();
    }
    
    [[noreturn]] void singletonWarnDoubleRegistrationAndAbort(
    const TypeDescriptor& type);
    
    /** Wide CAS.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrWideCAS {
  struct Node : public hazptr_obj_base<Node, Atom> {
    T val_;
    explicit Node(T v = {}) : val_(v) {}
  };
    }
    
    
    {    queues_.reserve(capacities.size());
    for (auto capacity : capacities) {
      queues_.emplace_back(capacity);
    }
  }
    
    hazptr_tc* hazptr_tc_tls();
void hazptr_tc_init(hazptr_tc& tc);
void hazptr_tc_shutdown(hazptr_tc& tc);
hazptr_rec* hazptr_tc_try_get();
bool hazptr_tc_try_put(hazptr_rec* hprec);
    
      struct ControlBlock {
    // Reader count in most significant 32 bits
    // Value in least significant 32 bits
    std::atomic<uint64_t> valueAndReaderCount{0};
  };
    
    
    {  EXPECT_FALSE(folly::settings::resetToDefault('follytest_nonexisting'));
}
