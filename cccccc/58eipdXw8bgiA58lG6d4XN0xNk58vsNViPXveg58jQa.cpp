
        
        
    {  bool isTypedef() const {
    assert(isValid());
    return !Decl.isNull() && Decl.is<const clang::TypedefNameDecl *>();
  }
  const clang::TypedefNameDecl *getTypedef() const {
    assert(isTypedef());
    return Decl.get<const clang::TypedefNameDecl *>();
  }
};
    
      // Instance members
  IAMResult(DeclName declName, unsigned selfIdx, EffectiveClangContext dc)
      : name(declName), selfIndex(selfIdx), effectiveDC(dc) {}
    
    /// Translate the given operator character into its mangled form.
///
/// Current operator characters:   @/=-+*%<>!&|^~ and the special operator '..'
char Mangle::translateOperatorChar(char op) {
  switch (op) {
    case '&': return 'a'; // 'and'
    case '@': return 'c'; // 'commercial at sign'
    case '/': return 'd'; // 'divide'
    case '=': return 'e'; // 'equal'
    case '>': return 'g'; // 'greater'
    case '<': return 'l'; // 'less'
    case '*': return 'm'; // 'multiply'
    case '!': return 'n'; // 'negate'
    case '|': return 'o'; // 'or'
    case '+': return 'p'; // 'plus'
    case '?': return 'q'; // 'question'
    case '%': return 'r'; // 'remainder'
    case '-': return 's'; // 'subtract'
    case '~': return 't'; // 'tilde'
    case '^': return 'x'; // 'xor'
    case '.': return 'z'; // 'zperiod' (the z is silent)
    default:
      return op;
  }
}
    
    
    {  // let h = b = the number of basic code points in the input
  // copy them to the output in order...
  size_t h = 0;
  for (auto C : InputCodePoints) {
    if (C < 0x80) {
      ++h;
      OutPunycode.push_back(C);
    }
    if (!isValidUnicodeScalar(C)) {
      OutPunycode.clear();
      return false;
    }
  }
  size_t b = h;
  // ...followed by a delimiter if b > 0
  if (b > 0)
    OutPunycode.push_back(delimiter);
  
  while (h < InputCodePoints.size()) {
    // let m = the minimum code point >= n in the input
    uint32_t m = 0x10FFFF;
    for (auto codePoint : InputCodePoints) {
      if (codePoint >= n && codePoint < m)
        m = codePoint;
    }
    
    delta = delta + (m - n) * (h + 1);
    n = m;
    for (auto c : InputCodePoints) {
      if (c < n) ++delta;
      if (c == n) {
        int q = delta;
        for (int k = base; ; k += base) {
          int t = k <= bias ? tmin
                : k >= bias + tmax ? tmax
                : k - bias;
          
          if (q < t) break;
          OutPunycode.push_back(digit_value(t + ((q - t) % (base - t))));
          q = (q - t) / (base - t);
        }
        OutPunycode.push_back(digit_value(q));
        bias = adapt(delta, h + 1, h == b);
        delta = 0;
        ++h;
      }
    }
    ++delta; ++n;
  }
  return true;
}
    
    const char *Action::getClassName(Kind AC) {
  switch (AC) {
  case Kind::Input:  return 'input';
  case Kind::CompileJob:  return 'compile';
  case Kind::InterpretJob:  return 'interpret';
  case Kind::BackendJob:  return 'backend';
  case Kind::MergeModuleJob:  return 'merge-module';
  case Kind::ModuleWrapJob:  return 'modulewrap';
  case Kind::AutolinkExtractJob:  return 'swift-autolink-extract';
  case Kind::REPLJob:  return 'repl';
  case Kind::LinkJob:  return 'link';
  case Kind::GenerateDSYMJob:  return 'generate-dSYM';
  case Kind::VerifyDebugInfoJob:  return 'verify-debug-info';
  case Kind::GeneratePCHJob:  return 'generate-pch';
  }
    }
    
    public:
  ArgsToFrontendInputsConverter(DiagnosticEngine &diags,
                                const llvm::opt::ArgList &args);
    
    
    {
    {
    {}  // namespace io
}  // namespace protobuf
}  // namespace google

    
    TEST(StructurallyValidTest, InvalidUTF8String) {
  const string invalid_str('abcd\xA0\xB0\xA0\xB0\xA0\xB0 - xyz789');
  EXPECT_FALSE(IsStructurallyValidUTF8(invalid_str.data(),
                                       invalid_str.size()));
  // Additional check for pointer alignment
  for (int i = 1; i < 8; ++i) {
    EXPECT_FALSE(IsStructurallyValidUTF8(invalid_str.data() + i,
                                         invalid_str.size() - i));
  }
}
    
    #include <google/protobuf/io/gzip_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
    
    #include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
    
    std::string ReadFile(const std::string& name) {
  std::ifstream file(name.c_str());
  GOOGLE_CHECK(file.is_open()) << 'Couldn't find file ''
      << name
      << '', please make sure you are running this command from the benchmarks'
      << ' directory.\n';
  return std::string((std::istreambuf_iterator<char>(file)),
                     std::istreambuf_iterator<char>());
}
    
        std::unique_ptr<google::protobuf::io::ZeroCopyOutputStream> output(
        context->Open(basename + '.proto'));
    string content = new_pool_.BuildFile(new_file)->DebugString();
    Printer printer(output.get(), '$');
    printer.WriteRaw(content.c_str(), content.size());
    
    REGISTER_CPU_OPERATOR(
    SubGradient,
    BinaryElementwiseGradientOp<
        NumericTypes,
        CPUContext,
        SubFunctor<CPUContext>>);
    
    namespace caffe2 {
    }
    
    REGISTER_CPU_OPERATOR(GivenTensorFill, GivenTensorFillOp<float, CPUContext>);
REGISTER_CPU_OPERATOR(
    GivenTensorDoubleFill,
    GivenTensorFillOp<double, CPUContext>);
REGISTER_CPU_OPERATOR(GivenTensorBoolFill, GivenTensorFillOp<bool, CPUContext>);
REGISTER_CPU_OPERATOR(GivenTensorIntFill, GivenTensorFillOp<int, CPUContext>);
REGISTER_CPU_OPERATOR(
    GivenTensorInt64Fill,
    GivenTensorFillOp<int64_t, CPUContext>);
REGISTER_CPU_OPERATOR(
    GivenTensorStringFill,
    GivenTensorFillOp<std::string, CPUContext>);
    
              const TensorShape& X = in[0];
          int N = 0, C = 0, H = 0, W = 0;
          switch (order) {
            case StorageOrder::NCHW:
              N = X.dims(0);
              C = X.dims(1);
              H = X.dims(2);
              W = X.dims(3);
              break;
            case StorageOrder::NHWC:
              N = X.dims(0);
              H = X.dims(1);
              W = X.dims(2);
              C = X.dims(3);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    REGISTER_CUDA_OPERATOR(LC, LocallyConnectedOp<float, CUDAContext>);
REGISTER_CUDA_OPERATOR(
    LCGradient,
    LocallyConnectedGradientOp<float, CUDAContext>);
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    // Size of buffer used to read a line from a box file.
const int kBoxReadBufSize = 1024;
    
    bool ParagraphModel::Comparable(const ParagraphModel &other) const {
  if (justification_ != other.justification_)
    return false;
  if (justification_ == JUSTIFICATION_CENTER ||
      justification_ == JUSTIFICATION_UNKNOWN)
    return true;
  int tolerance = (tolerance_ + other.tolerance_) / 4;
  return NearlyEqual(margin_ + first_indent_,
                     other.margin_ + other.first_indent_, tolerance) &&
         NearlyEqual(margin_ + body_indent_,
                     other.margin_ + other.body_indent_, tolerance);
}
    
      // The first paragraph on a page often lacks a first line indent, but should
  // still be modeled by the same model as other body text paragraphs on the
  // page.
  bool is_very_first_or_continuation;
    
    #ifndef TESSERACT_CCMAIN_OTSUTHR_H_
#define TESSERACT_CCMAIN_OTSUTHR_H_
    
    #include 'errcode.h'
#include 'genericvector.h'
    
    
#endif  // TESSERACT_CCUTIL_OBJECT_CACHE_H_

    
    Status ProtoServerReflection::GetAllExtensionNumbers(
    ServerContext* context, const grpc::string& type,
    ExtensionNumberResponse* response) {
  if (descriptor_pool_ == nullptr) {
    return Status::CANCELLED;
  }
    }
    
      void FillErrorResponse(const Status& status,
                         reflection::v1alpha::ErrorResponse* error_response);
    
    namespace grpc {
    }
    
    
    {}  // namespace
    
    void Timepoint2Timespec(const system_clock::time_point& from,
                        gpr_timespec* to) {
  system_clock::duration deadline = from.time_since_epoch();
  seconds secs = duration_cast<seconds>(deadline);
  if (from == system_clock::time_point::max() ||
      secs.count() >= gpr_inf_future(GPR_CLOCK_REALTIME).tv_sec ||
      secs.count() < 0) {
    *to = gpr_inf_future(GPR_CLOCK_REALTIME);
    return;
  }
  nanoseconds nsecs = duration_cast<nanoseconds>(deadline - secs);
  to->tv_sec = static_cast<int64_t>(secs.count());
  to->tv_nsec = static_cast<int32_t>(nsecs.count());
  to->clock_type = GPR_CLOCK_REALTIME;
}
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include <fstream>
    
    #include <functional>
#include <stdexcept>
    
                // replace input if needed
            let iter = replacements.find(input);
            if (iter != replacements.end())
            {
                assert(input->GetEnvironmentPtr()); // must be in some network if mapped
                input = iter->second;
                numRelinked++;
                node->SetInput(i, input);
            }
    
                    ExtractSampleSequence(firstSeq, columnIndices, squashInputs, tokensToIgnore, firstSeqVec);
                ExtractSampleSequence(secondSeq, columnIndices, squashInputs, tokensToIgnore, secondSeqVec);
    
      ExtensionManager_options_pargs args;
  args.write(oprot_);
    
      void deregisterExtension(ExtensionStatus& _return, const ExtensionRouteUUID uuid) {
    // Your implementation goes here
    printf('deregisterExtension\n');
  }
    
    
    {  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}
    
    
    {
    {
    {  return results;
}
}
}

    
    TEST_F(iokitRegistry, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from iokit_registry');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'name', NormalType}
  //      {'class', NormalType}
  //      {'id', IntType}
  //      {'parent', IntType}
  //      {'busy_state', IntType}
  //      {'retain_count', IntType}
  //      {'depth', IntType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
    TEST_F(keychainAcls, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from keychain_acls');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'keychain_path', NormalType}
  //      {'authorizations', NormalType}
  //      {'path', NormalType}
  //      {'description', NormalType}
  //      {'label', NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
    // Sanity check integration test for keychain_items
// Spec file: specs/darwin/keychain_items.table
    
    //
// Follow
//
Follow::~Follow()
{
    CC_SAFE_RELEASE(_followedNode);
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    // implementation of StopGrid
    
        ccArrayRemoveObjectAtIndex(element->actions, index, true);
    
        /** @deprecated Use getNumberOfRunningActionsInTarget() instead.
     */
    CC_DEPRECATED_ATTRIBUTE ssize_t numberOfRunningActionsInTarget(Node *target) const { return getNumberOfRunningActionsInTarget(target); }