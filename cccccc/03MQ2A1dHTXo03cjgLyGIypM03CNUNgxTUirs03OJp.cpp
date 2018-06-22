
        
          assert(peekType(msg) == thpp::Type::LONG);
  int64_t arg2 = unpackInteger(msg);
  assert(arg2 == 100);
    
      for (auto s: tensor->sizes())
    assert(s == 2);
  for (int i = 0; i < 2; i++)
    assert(reinterpret_cast<float*>(tensor->data())[i] == 5);
    
    
namespace thd {
    }
    
      if (b->nDimension == 1) {
    b = THDTensor_(newWithStorage2d)(b->storage, b->storageOffset, b->size[0],
            b->stride[0], 1, 0);
    free_b = true;
  }
    
    
    {}
    
      /**
   * Create a task. This returns a task handle, or null object
   * if there are no worker threads.
   */
  static Resource TaskStart(
    const String& url, const Array& headers,
    const String& remote_host,
    const String& post_data = null_string,
    const Array& files = null_array,
    int timeoutSeconds = -1,
    PageletServerTaskEvent *event = nullptr
  );
    
    #include <algorithm>
    
    /*
 * Vasm constant.
 *
 * Either a 1, 4, or 8 byte unsigned value, 8 byte double, or the disp32 part
 * of a thread-local address of an immutable constant that varies by thread.
 * Constants may also represent an undefined value, indicated by the isUndef
 * member.
 *
 * Also contains convenience constructors for various pointer and enum types.
 */
struct Vconst {
  enum Kind { Quad, Long, Byte, Double };
    }
    
      // DataBlock can optionally be growable. The initial expansion of DataBlock
  // will allocate a new buffer that is owned by the DataBlock, subsequent
  // expansions will use realloc to expand this block until m_maxGrow has been
  // reached. Only DataBlocks which have a different m_base from m_destBase may
  // be grown, as expansion may move the location of m_destBase.
  struct Deleter final { void operator()(uint8_t* a) const { ::free(a); } };
  std::unique_ptr<uint8_t, Deleter> m_destBuf{nullptr};
    
    
void Instruction::SetPCRelImmTarget(Instruction* target) {
  // ADRP is not supported, so 'this' must point to an ADR instruction.
  assert(Mask(PCRelAddressingMask) == ADR);
    }
    
    bool CurlShareResource::setLongOption(long option, long value) {
  CURLSHcode error = CURLSHE_OK;
  error = curl_share_setopt(m_share,
                            (CURLSHoption)option,
                            value);
  return error == CURLSHE_OK;
}
    
    
    {    CondVarNode() {
      pthread_cond_init(&m_cond, nullptr);
    }
    ~CondVarNode() {
      pthread_cond_destroy(&m_cond);
    }
    /* implicit */ operator pthread_cond_t*() {
      return &m_cond;
    }
    void unlink() {
      if (m_listHook.is_linked()) m_listHook.unlink();
    }
  };
    
    YGFloatOptional YGNode::getTrailingPadding(
    const YGFlexDirection& axis,
    const float& widthSize) const {
  if (YGFlexDirectionIsRow(axis) &&
      style_.padding[YGEdgeEnd].unit != YGUnitUndefined &&
      !YGResolveValue(style_.padding[YGEdgeEnd], widthSize).isUndefined() &&
      YGResolveValue(style_.padding[YGEdgeEnd], widthSize).getValue() >= 0.0f) {
    return YGResolveValue(style_.padding[YGEdgeEnd], widthSize);
  }
    }
    
      const float leadingPaddingAndBorderCross = YGUnwrapFloatOptional(
      node->getLeadingPaddingAndBorder(crossAxis, ownerWidth));
  const float paddingAndBorderAxisMain = YGNodePaddingAndBorderForAxis(node, mainAxis, ownerWidth);
  const float paddingAndBorderAxisCross =
      YGNodePaddingAndBorderForAxis(node, crossAxis, ownerWidth);
    
    
    {void captureBacktrace(size_t skip, vector<InstructionPointer>& stackTrace) {
  // Beware of a bug on some platforms, which makes the trace loop until the
  // buffer is full when it reaches a noexcept function. It seems to be fixed in
  // newer versions of gcc. https://gcc.gnu.org/bugzilla/show_bug.cgi?id=56846
  // TODO(t10738439): Investigate workaround for the stack trace bug
  BacktraceState state = {skip, stackTrace};
  _Unwind_Backtrace(unwindCallback, &state);
}
}
    
    TEST_F(YogaTest_HadOverflowTests, spacing_overflow_no_wrap_and_no_flex_children) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 10);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeInsertChild(root, child1, 1);
    }
    
    void Config::setExperimentalFeatureEnabled(int feature, bool enabled)
{
    YGConfigSetExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature), enabled);
}
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(left, right, top, bottom, width, height);
    }
};

    
        method(getPositionType);
    method(getPosition);