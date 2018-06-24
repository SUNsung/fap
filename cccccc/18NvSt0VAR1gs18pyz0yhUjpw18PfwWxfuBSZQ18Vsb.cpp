
        
        PyObject* NewMessageEnumsByName(const Descriptor* descriptor);
PyObject* NewMessageEnumsSeq(const Descriptor* descriptor);
PyObject* NewMessageEnumValuesByName(const Descriptor* descriptor);
    
    
    {
    {}  // namespace python
}  // namespace protobuf
    
    
    {  ASSERT_TRUE(message.ParseFromString(data));
  EXPECT_TRUE(message.has_any_value());
  ASSERT_TRUE(message.any_value().UnpackTo(&submessage));
  EXPECT_EQ(12345, submessage.int32_value());
}
    
    class EnumGenerator : public SourceGeneratorBase {
 public:
  EnumGenerator(const EnumDescriptor* descriptor, const Options* options);
  ~EnumGenerator();
    }
    
    
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
    
    
    struct Options;
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message);
void WriteFieldDocComment(io::Printer* printer, const FieldDescriptor* field);
void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enum_);
void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value);
void WriteServiceDocComment(io::Printer* printer,
                            const ServiceDescriptor* service);
void WriteMethodDocComment(io::Printer* printer,
                           const MethodDescriptor* method);
    
    class RepeatedImmutableLazyMessageFieldGenerator
    : public RepeatedImmutableMessageFieldGenerator {
 public:
  explicit RepeatedImmutableLazyMessageFieldGenerator(
      const FieldDescriptor* descriptor, int messageBitIndex,
      int builderBitIndex, Context* context);
  ~RepeatedImmutableLazyMessageFieldGenerator();
    }
    
    #include <memory>
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    template<> inline
dnnError_t dnnGroupsConvolutionCreateBackwardFilter<double>(
    dnnPrimitive_t* pConvolution,
    dnnPrimitiveAttributes_t attributes,
    dnnAlgorithm_t algorithm,
    size_t groups,
    size_t dimension,
    const size_t srcSize[],
    const size_t dstSize[],
    const size_t filterSize[],
    const size_t convolutionStrides[],
    const int inputOffset[],
    const dnnBorder_t border_type)
{
    return dnnGroupsConvolutionCreateBackwardFilter_F64(
        pConvolution,
        attributes,
        algorithm,
        groups,
        dimension,
        srcSize,
        dstSize,
        filterSize,
        convolutionStrides,
        inputOffset,
        border_type);
}
    
                // The assumption here is that a sequence always start at 0 (no invaid mark at the beginning),
            // and ends at the first invalid mask. 
            // Therefore, no need to check NDMask again.
            // And the sequences has been resized to match the number of sequences and the length of each sequence in the Value object.
    
    // replace the old node with the current node, assuming the old node is a leaf node
// need to update those nodes who use oldNode as their child
// TODO: Can this be called with a node that's already part of the network? This is currently allowed, but should it?
// BUGBUG: Seems ReplaceNode() also updates node groups. Why doesn't this function?
// BUGBUG: What if newNode is the one referenced by oldNodeName?
// BUGBUG: Or what if an unrelated node of the same name exists?
void ComputationNetwork::ReplaceLeafNode(wstring oldNodeName, ComputationNodeBasePtr newNode)
{
    InvalidateCompiledNetwork();
    }
    
    void GranularGPUDataTransferer::WaitForSyncPointOnFetchStreamAsync()
{
    PrepareDevice(m_deviceId);
    cudaStreamWaitEvent(GetFetchStream(), m_syncEvent, 0 /*flags 'must be 0'*/) || 'cudaStreamWaitEvent failed';
}
    
    // Compares two ASCII strings ignoring the case.
// TODO: Should switch to boost, boost::iequal should be used instead.
// TODO: we already have EqualCI() in Basics.h which does the same thing.
template<class TElement>
inline bool AreEqualIgnoreCase(
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement>>& s1,
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement> >& s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    }
    
    class latticepair : public std::pair<msra::lattices::lattice, msra::lattices::lattice>
{
public:
    // NOTE: we don't check numerator lattice now
    size_t getnumframes() const
    {
        return second.getnumframes();
    }
    size_t getnumnodes() const
    {
        return second.getnumnodes();
    }
    size_t getnumedges() const
    {
        return second.getnumedges();
    }
    std::wstring getkey() const
    {
        return second.getkey();
    }
};
    
    YGFloatOptional YGNode::getLeadingPaddingAndBorder(
    const YGFlexDirection& axis,
    const float& widthSize) const {
  return getLeadingPadding(axis, widthSize) +
      YGFloatOptional(getLeadingBorder(axis));
}
    
      // Other methods
  YGValue marginLeadingValue(const YGFlexDirection axis) const;
  YGValue marginTrailingValue(const YGFlexDirection axis) const;
  YGValue resolveFlexBasisPtr() const;
  void resolveDimension();
  YGDirection resolveDirection(const YGDirection ownerDirection);
  void clearChildren();
  /// Replaces the occurrences of oldChild with newChild
  void replaceChild(YGNodeRef oldChild, YGNodeRef newChild);
  void replaceChild(YGNodeRef child, uint32_t index);
  void insertChild(YGNodeRef child, uint32_t index);
  /// Removes the first occurrence of child
  bool removeChild(YGNodeRef child);
  void removeChild(uint32_t index);
    
    #include <yoga/Yoga.h>
    
    #include <dlfcn.h>
#include <unwind.h>
    
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
    
        method(setFlex);
    method(setFlexBasis);
    method(setFlexBasisPercent);
    method(setFlexGrow);
    method(setFlexShrink);
    
      void reset(T* other = NULL) {
    T* old = (T*)pthread_getspecific(m_key);
    if (old != other) {
      FBASSERT(m_cleanup);
      m_cleanup(old);
      pthread_setspecific(m_key, other);
    }
  }