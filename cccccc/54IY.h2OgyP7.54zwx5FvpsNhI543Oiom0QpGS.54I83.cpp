
        
          // Check if any casting is required for the partially-applied function.
  SILValue ResultValue = castValueToABICompatibleType(
      &B, Loc, NewPAI, NewPAI->getType(), OldPAI->getType());
  OldPAI->replaceAllUsesWith(ResultValue);
    
            // ObjC protocol names aren't mangled.
        if (!protocolNode) {
          auto module = Dem.createNode(Node::Kind::Module,
                                            MANGLING_MODULE_OBJC);
          auto node = Dem.createNode(Node::Kind::Protocol);
          node->addChild(module, Dem);
          node->addChild(Dem.createNode(Node::Kind::Identifier, ProtoName),
                         Dem);
          auto typeNode = Dem.createNode(Node::Kind::Type);
          typeNode->addChild(node, Dem);
          type_list->addChild(typeNode, Dem);
          continue;
        }
    
      const Lowering::TypeLowering &
  getTypeLowering(Lowering::AbstractionPattern orig, Type subst);
    
    TEST(ClusteredBitVector, FlipAllSmall) {
  ClusteredBitVector vec;
  vec.appendClearBits(48);
  EXPECT_EQ(false, vec[12]);
  EXPECT_EQ(0u, vec.count());
  vec.flipAll();
  EXPECT_EQ(true, vec[12]);
  EXPECT_EQ(48u, vec.count());
  vec.clearBit(7);
  EXPECT_EQ(true, vec[12]);
  EXPECT_EQ(false, vec[7]);
  EXPECT_EQ(47u, vec.count());
  vec.flipAll();
  EXPECT_EQ(false, vec[12]);
  EXPECT_EQ(true, vec[7]);
  EXPECT_EQ(1u, vec.count());
}
    
    
    {
    {
    {
    {          // Get the file-name to group map if parsing correctly.
          pMap = Parser.getParsedMap();
        }
      }
      if (!pMap)
        return NullGroupName;
      StringRef FileName = llvm::sys::path::filename(FullPath);
      auto Found = pMap->find(FileName);
      if (Found == pMap->end()) {
        Ctx.Diags.diagnose(SourceLoc(), diag::error_no_group_info, FileName);
        return NullGroupName;
      }
      return Found->second;
    }
  };
    
        case ConstraintKind::ApplicableFunction:
    case ConstraintKind::DynamicCallableApplicableFunction:
    case ConstraintKind::BindOverload: {
      if (result.FullyBound && result.InvolvesTypeVariables)
        continue;
    }
    
    
    {  if (Negative)
    *P++ = '-';
  std::reverse(Buffer, P);
  return size_t(P - Buffer);
}
    
    
template <>
const char *
FloatAttribute::staticTypeName ()
{
    return 'float';
}
    
    // streams
class OStream;
class IStream;
    
    
Slice *
FrameBuffer::findSlice (const char name[])
{
    SliceMap::iterator i = _map.find (name);
    return (i == _map.end())? 0: &i->second;
}
    
    
void
IStream::clear ()
{
    // empty
}
    
    
bool
InputFile::isComplete () const
{
    if (_data->dsFile)
        return _data->dsFile->isComplete();
    else if (_data->isTiled)
	return _data->tFile->isComplete();
    else
	return _data->sFile->isComplete();
}
    
        //---------------------------------------------------------------
    // Read pixel data:
    //
    // readPixels(s1,s2) reads all scan lines with y coordinates
    // in the interval [min (s1, s2), max (s1, s2)] from the file,
    // and stores them in the current frame buffer.
    //
    // Both s1 and s2 must be within the interval
    // [header().dataWindow().min.y, header().dataWindow().max.y]
    //
    // The scan lines can be read from the file in random order, and
    // individual scan lines may be skipped or read multiple times.
    // For maximum efficiency, the scan lines should be read in the
    // order in which they were written to the file.
    //
    // readPixels(s) calls readPixels(s,s).
    //
    //---------------------------------------------------------------
    
    /// Applies [Batch Normalization](https://arxiv.org/abs/1502.03167) to an input.
///
/// Refer to the documentation for
/// [`BatchNorm1d`](https://pytorch.org/docs/stable/nn.html#torch.nn.BatchNorm1d)
/// in PyTorch to learn more about the exact semantics of this module, __but see
/// the note below regarding differences between the Python and C++ API__.
///
/// \rst
/// .. attention::
///   In the Python API, there are separate implementations for 1-D, 2-D and 3-D
///   BatchNorm. In C++, there is only one `BatchNorm` module, which works for
///   any of these dimensions.
/// \endrst
class TORCH_API BatchNormImpl : public torch::nn::Cloneable<BatchNormImpl> {
 public:
  explicit BatchNormImpl(int64_t features)
      : BatchNormImpl(BatchNormOptions(features)) {}
  explicit BatchNormImpl(BatchNormOptions options);
    }
    
    REGISTER_GRADIENT(Sub, GetSubGradient);
    
    
    {
    {    return SingleGradientDef(
        'MergeSingleScalarFeatureTensorsGradient',
        '', /* name */
        input_blob_names,
        output_blob_names);
  }
};
    
              vector<TensorShape> out(1);
          switch (order) {
            case StorageOrder::NCHW:
              out[0] = CreateTensorShape(
                  vector<int>{N, C * kernel_h * kernel_w, out_h, out_w},
                  TensorProto::FLOAT);
              break;
            case StorageOrder::NHWC:
              out[0] = CreateTensorShape(
                  vector<int>{N, out_h, out_w, kernel_h * kernel_w * C},
                  TensorProto::FLOAT);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
        // cut off inline image streams at appropriate length
    if (inlineImg) {
      str = new FixedLengthEncoder(str, len);
    } else if (useCompressed) {
      str = str->getUndecodedStream();
    }
    
    //------------------------------------------------------------------------
    
    
    {    annotsRef = xref->addIndirectObject (&obj1);
    annots.initRef(annotsRef.num, annotsRef.gen);
    pageObj.dictSet ('Annots', &annots);
    xref->setModifiedObject (&pageObj, pageRef);
  } else {
    getAnnots(&obj1);
    if (obj1.isArray()) {
      obj1.arrayAdd (tmp.initRef (annotRef.num, annotRef.gen));
      if (annots.isRef())
        xref->setModifiedObject (&obj1, annots.getRef());
      else
        xref->setModifiedObject (&pageObj, pageRef);
    }
    obj1.free();
  }
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2005 Kristian Høgsberg <krh@redhat.com>
// Copyright (C) 2005 Jeff Muizelaar <jeff@infidigm.net>
// Copyright (C) 2006 Pino Toscano <pino@kde.org>
// Copyright (C) 2006 Carlos Garcia Campos <carlosgc@gnome.org>
// Copyright (C) 2007 Julien Rebetez <julienr@svn.gnome.org>
// Copyright (C) 2008 Iñigo Martínez <inigomartinez@gmail.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    #ifndef PRESCANOUTPUTDEV_H
#define PRESCANOUTPUTDEV_H
    
    #ifdef USE_GCC_PRAGMAS
#pragma interface
#endif
    
    
    {  //
  // parse Media Screen Parameters
  if (obj->dictLookup('SP', &tmp2)->isDict()) { // media screen parameters
    Object params;
    if (tmp2.dictLookup('MH', &params)->isDict()) {
      MH.parseMediaScreenParameters(&params);
    }
    params.free();
    if (tmp2.dictLookup('BE', &params)->isDict()) {
      BE.parseMediaScreenParameters(&params);
    }
    params.free();
  }
  tmp2.free();
}
    
      enum MediaWindowRelativeTo {
    windowRelativeToDocument = 0,
    windowRelativeToApplication,
    windowRelativeToDesktop
  };
    
    
    {  if (readAttrs)
  {
    Object tmp;
    Dict *dict = streamObj->getStream()->getDict();
    dict->lookup('F', &tmp);
    if (!tmp.isNull()) {
      Object obj1;
      // valid 'F' key -> external file
      kind = soundExternal;
      if (getFileSpecNameForPlatform (&tmp, &obj1)) {
        fileName = obj1.getString()->copy();
        obj1.free();
      }
    } else {
      // no file specification, then the sound data have to be
      // extracted from the stream
      kind = soundEmbedded;
    }
    tmp.free();
    // sampling rate
    dict->lookup('R', &tmp);
    if (tmp.isNum()) {
      samplingRate = tmp.getNum();
    }
    tmp.free();
    // sound channels
    dict->lookup('C', &tmp);
    if (tmp.isInt()) {
      channels = tmp.getInt();
    }
    tmp.free();
    // bits per sample
    dict->lookup('B', &tmp);
    if (tmp.isInt()) {
      bitsPerSample = tmp.getInt();
    }
    tmp.free();
    // encoding format
    dict->lookup('E', &tmp);
    if (tmp.isName())
    {
      const char *enc = tmp.getName();
      if (strcmp('Raw', enc) == 0) {
        encoding = soundRaw;
      } else if (strcmp('Signed', enc) == 0) {
        encoding = soundSigned;
      } else if (strcmp('muLaw', enc) == 0) {
        encoding = soundMuLaw;
      } else if (strcmp('ALaw', enc) == 0) {
        encoding = soundALaw;
      }
    }
    tmp.free();
  }
}
    
      const MetaInfo& Info() const override;
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    namespace xgboost {
namespace common {
struct Timer {
  using ClockT = std::chrono::high_resolution_clock;
  using TimePointT = std::chrono::high_resolution_clock::time_point;
  using DurationT = std::chrono::high_resolution_clock::duration;
  using SecondsT = std::chrono::duration<double>;
    }
    }
    }
    
    RegTree ConstructTree() {
  RegTree tree;
  tree.ExpandNode(
      /*nid=*/0, /*split_index=*/0, /*split_value=*/0.0f,
      /*default_left=*/true,
      0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  auto left = tree[0].LeftChild();
  auto right = tree[0].RightChild();
  tree.ExpandNode(
      /*nid=*/left, /*split_index=*/1, /*split_value=*/1.0f,
      /*default_left=*/false,
      0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  tree.ExpandNode(
      /*nid=*/right, /*split_index=*/2, /*split_value=*/2.0f,
      /*default_left=*/false,
      0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  return tree;
}
    
     private:
  class Builder : public ColMaker::Builder {
   public:
    explicit Builder(const TrainParam &param,
                     std::unique_ptr<SplitEvaluator> spliteval)
        : ColMaker::Builder(param, std::move(spliteval)) {}
    inline void UpdatePosition(DMatrix* p_fmat, const RegTree &tree) {
      const auto ndata = static_cast<bst_omp_uint>(p_fmat->Info().num_row_);
      #pragma omp parallel for schedule(static)
      for (bst_omp_uint ridx = 0; ridx < ndata; ++ridx) {
        int nid = this->DecodePosition(ridx);
        while (tree[nid].IsDeleted()) {
          nid = tree[nid].Parent();
          CHECK_GE(nid, 0);
        }
        this->position_[ridx] = nid;
      }
    }
    inline const int* GetLeafPosition() const {
      return dmlc::BeginPtr(this->position_);
    }
    }
    
      /*!
   * \brief Get configuration arguments currently stored by the learner
   * \return Key-value pairs representing configuration arguments
   */
  virtual const std::map<std::string, std::string>& GetConfigurationArguments() const = 0;
    
      // predict the leaf scores without dropped trees
  inline bst_float PredValue(const SparsePage::Inst &inst,
                             int bst_group,
                             unsigned root_index,
                             RegTree::FVec *p_feats,
                             unsigned tree_begin,
                             unsigned tree_end) {
    bst_float psum = 0.0f;
    p_feats->Fill(inst);
    for (size_t i = tree_begin; i < tree_end; ++i) {
      if (model_.tree_info[i] == bst_group) {
        bool drop = (std::binary_search(idx_drop_.begin(), idx_drop_.end(), i));
        if (!drop) {
          int tid = model_.trees[i]->GetLeafIndex(*p_feats, root_index);
          psum += weight_drop_[i] * (*model_.trees[i])[tid].LeafValue();
        }
      }
    }
    p_feats->Drop(inst);
    return psum;
  }
    
    
    {    // Setup orthographic projection matrix
    // Our visible imgui space lies from draw_data->DisplayPos (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right).
    {
        float L = draw_data->DisplayPos.x;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x;
        float T = draw_data->DisplayPos.y;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y;
        ALLEGRO_TRANSFORM transform;
        al_identity_transform(&transform);
        al_use_transform(&transform);
        al_orthographic_transform(&transform, L, T, 1.0f, R, B, -1.0f);
        al_use_projection_transform(&transform);
    }
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    static void ImGui_ImplDX10_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
    }
    
    static void ImGui_ImplDX12_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
    }
    
        for (uint32_t i = 0; i < wd->ImageCount; i++)
    {
        ImGui_ImplVulkanH_DestroyFrame(device, &wd->Frames[i], allocator);
        ImGui_ImplVulkanH_DestroyFrameSemaphores(device, &wd->FrameSemaphores[i], allocator);
    }
    IM_FREE(wd->Frames);
    IM_FREE(wd->FrameSemaphores);
    wd->Frames = NULL;
    wd->FrameSemaphores = NULL;
    vkDestroyRenderPass(device, wd->RenderPass, allocator);
    vkDestroySwapchainKHR(device, wd->Swapchain, allocator);
    vkDestroySurfaceKHR(instance, wd->Surface, allocator);
    
    #ifdef __FREEGLUT_EXT_H__
void ImGui_ImplGLUT_MouseWheelFunc(int button, int dir, int x, int y)
{
    ImGuiIO& io = ImGui::GetIO();
    io.MousePos = ImVec2((float)x, (float)y);
    if (dir > 0)
        io.MouseWheel += 1.0;
    else if (dir < 0)
        io.MouseWheel -= 1.0;
    (void)button; // Unused
}
#endif