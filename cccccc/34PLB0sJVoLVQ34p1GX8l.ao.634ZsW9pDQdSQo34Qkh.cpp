
        
        bool camel_case::sameWordIgnoreFirstCase(StringRef word1, StringRef word2) {
  if (word1.size() != word2.size())
    return false;
    }
    
      static CFPointeeInfo forVoid() {
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = false;
    info.Decl = nullptr;
    return info;
  }
    
    const char *Demangle::getNodeKindString(swift::Demangle::Node::Kind k) {
  switch (k) {
#define NODE(ID)                                                               \
  case Node::Kind::ID:                                                         \
    return #ID;
#include 'swift/Demangling/DemangleNodes.def'
  }
  return 'Demangle::Node::Kind::???';
}
    
    bool Punycode::decodePunycodeUTF8(StringRef InputPunycode,
                                  std::string &OutUTF8) {
  std::vector<uint32_t> OutCodePoints;
  if (!decodePunycode(InputPunycode, OutCodePoints))
    return false;
    }
    
    class LLVM_LIBRARY_VISIBILITY Darwin : public ToolChain {
protected:
  InvocationInfo constructInvocation(const InterpretJobAction &job,
                                     const JobContext &context) const override;
  InvocationInfo constructInvocation(const LinkJobAction &job,
                                     const JobContext &context) const override;
    }
    
     private:
  PyObjectStruct* ptr_;
    
    
    {
    {
    {
    {
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {  printer->Print(
      '#endif\n'
      '\n');
}
    
    using google::protobuf::FieldDescriptor;
using google::protobuf::Message;
using google::protobuf::Reflection;
    
      ~Fork() {
    if (pid > 0) {
      kill(pid, SIGKILL);
      waitpid(pid, nullptr, 0);
    }
  }
    
    REGISTER_CPU_OPERATOR(
    MergeMultiScalarFeatureTensors,
    MergeMultiScalarFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeMultiScalarFeatureTensors)
    .SetDoc(
        'Merge given multi-feature tensors with scalar features into one.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 3 == 0; })
    .NumOutputs(3)
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_keys', '.keys')
    .Input(2, 'in1_values', '.values')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values', '.values');
    
    
  )DOC')
    .Input(0, 'data', 'a 1-D tensor.')
    .Output(
        0,
        'indices',
        'Indices of duplicate elements in data, excluding first occurrences.');
    
    OPERATOR_SCHEMA(GatherRangesToDense)
    .NumInputs(2, 3)
    .NumOutputs(1, INT_MAX)
    .SetDoc(R'DOC(
Given DATA tensor of rank 1, and RANGES tensor of rank 3, gather values
corresponding to each range into a separate output tensor. If the optional input
KEY tensor is also given, the output will be sorted by KEY for each example.
    
    #pragma once
    
            CalculatorApp::Calculator^ m_calculator;
        CalculatorApp::UnitConverter^ m_converter;
        CalculatorApp::DateCalculator^ m_dateCalculator;
        Windows::Foundation::EventRegistrationToken _windowSizeEventToken;
        Windows::Foundation::EventRegistrationToken m_hardwareButtonsBackPressedToken;
        Windows::Foundation::EventRegistrationToken m_colorValuesChangedToken;
        CalculatorApp::ViewModel::ApplicationViewModel^ m_model;
        Windows::UI::ViewManagement::UISettings^ m_uiSettings;
    
        private:
        Windows::UI::Xaml::Controls::MenuFlyout^ m_memoryItemFlyout;
        Windows::Foundation::Rect m_visibleBounds;
        Windows::Foundation::Rect m_coreBounds;
        bool m_isErrorVisualState;
    
    #include 'pch.h'
#include 'MemoryListItem.xaml.h'
#include 'Controls/CalculatorButton.h'
    
    bool Follow::isDone() const
{
    return ( !_followedNode->isRunning() );
}
    
        /** Initializes the action with a duration and an array of points.
     *
     * @param dt In seconds.
     * @param points An PointArray.
     */
    bool initWithDuration(float dt, PointArray* points);
    
    EaseBezierAction* EaseBezierAction::reverse() const
{
    EaseBezierAction* reverseAction = EaseBezierAction::create(_inner->reverse());
    reverseAction->setBezierParamer(_p3,_p2,_p1,_p0);
    return reverseAction;
}
    
    NS_CC_END
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPAGETURN3D_ACTION_H__
#define __ACTION_CCPAGETURN3D_ACTION_H__
    
    WavesTiles3D* WavesTiles3D::clone() const
{
    // no copy constructor
    return WavesTiles3D::create(_duration, _gridSize, _waves, _amplitude);
}
    
    void AtlasNode::calculateMaxItems()
{
    Size s = _textureAtlas->getTexture()->getContentSize();
    
    if (_ignoreContentScaleFactor)
    {
        s = _textureAtlas->getTexture()->getContentSizeInPixels();
    }
    
    _itemsPerColumn = (int)(s.height / _itemHeight);
    _itemsPerRow = (int)(s.width / _itemWidth);
}
    
    NS_CC_END
    
    float PolygonInfo::getArea() const
{
    float area = 0;
    V3F_C4B_T2F *verts = triangles.verts;
    unsigned short *indices = triangles.indices;
    for(int i = 0; i < triangles.indexCount; i+=3)
    {
        auto A = verts[indices[i]].vertices;
        auto B = verts[indices[i+1]].vertices;
        auto C = verts[indices[i+2]].vertices;
        area += (A.x*(B.y-C.y) + B.x*(C.y-A.y) + C.x*(A.y - B.y))/2;
    }
    return area;
}