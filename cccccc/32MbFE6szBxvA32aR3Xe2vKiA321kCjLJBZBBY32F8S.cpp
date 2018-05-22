
        
          /// When evaluating an expression in the context of an existing source file,
  /// we may want to prefer declarations from that source file.
  /// The DebuggerClient can return a private-discriminator to tell lookup to
  /// prefer these certain decls.
  virtual Identifier getPreferredPrivateDiscriminator() = 0;
    
    #include 'swift/AST/SyntaxASTMap.h'
#include 'swift/AST/Expr.h'
#include 'swift/AST/Decl.h'
#include 'swift/AST/Stmt.h'
#include 'swift/Syntax/Syntax.h'
    
    #include 'swift/SIL/SILDebugScope.h'
#include 'swift/SIL/SILFunction.h'
    
      /// Indicates whether the diagnostics produced during compilation should be
  /// checked against expected diagnostics, indicated by markers in the
  /// input source file.
  enum {
    NoVerify,
    Verify,
    VerifyAndApplyFixes
  } VerifyMode = NoVerify;
    
    #endif // SWIFT_SYNTAX_REFERENCES_H

    
    // Return the name of the lock file for the db named by
// 'dbname'.  The result will be prefixed with 'dbname'.
extern std::string LockFileName(const std::string& dbname);
    
    static void DeleteEntry(const Slice& key, void* value) {
  TableAndFile* tf = reinterpret_cast<TableAndFile*>(value);
  delete tf->table;
  delete tf->file;
  delete tf;
}
    
    static std::string PrintContents(WriteBatch* b) {
  InternalKeyComparator cmp(BytewiseComparator());
  MemTable* mem = new MemTable(cmp);
  mem->Ref();
  std::string state;
  Status s = WriteBatchInternal::InsertInto(b, mem);
  int count = 0;
  Iterator* iter = mem->NewIterator();
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey ikey;
    ASSERT_TRUE(ParseInternalKey(iter->key(), &ikey));
    switch (ikey.type) {
      case kTypeValue:
        state.append('Put(');
        state.append(ikey.user_key.ToString());
        state.append(', ');
        state.append(iter->value().ToString());
        state.append(')');
        count++;
        break;
      case kTypeDeletion:
        state.append('Delete(');
        state.append(ikey.user_key.ToString());
        state.append(')');
        count++;
        break;
    }
    state.append('@');
    state.append(NumberToString(ikey.sequence));
  }
  delete iter;
  if (!s.ok()) {
    state.append('ParseError()');
  } else if (count != WriteBatchInternal::Count(b)) {
    state.append('CountMismatch()');
  }
  mem->Unref();
  return state;
}
    
        REGISTER_OPERATOR_SCHEMA(TreeEnsembleClassifier)
        .SetDomain(c_mlDomain)
        .Input('X', 'Data to be classified', 'T1')
        .Output('Y', 'Classification outputs (one class per example', 'T2')
        .Output('Z', 'Classification outputs (All classes scores per example,N,E', 'tensor(float)')
        .Description(R'DOC(
            Tree Ensemble classifier.  Returns the top class for each input in N.
            All args with nodes_ are fields of a tuple of tree nodes, and
            it is assumed they are the same length, and an index i will decode the
            tuple across these inputs.  Each node id can appear only once
            for each tree id.'
            All fields prefixed with class_ are tuples of votes at the leaves.
            A leaf may have multiple votes, where each vote is weighted by
            the associated class_weights index.
            It is expected that either classlabels_strings or classlabels_INTS
            will be passed and the class_ids are an index into this list.
            Mode enum is BRANCH_LEQ, BRANCH_LT, BRANCH_GTE, BRANCH_GT, BRANCH_EQ, BRANCH_NEQ, LEAF.
            )DOC')
        .TypeConstraint('T1', { 'tensor(float)', 'tensor(double)', 'tensor(int64)', 'tensor(int32)' }, ' allowed types.')
        .TypeConstraint('T2', { 'tensor(string)', 'tensor(int64)' }, ' allowed types.')
        .Attr('nodes_treeids', 'tree id for this node', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_nodeids', 'node id for this node, node ids may restart at zero for each tree (but not required).', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_featureids', 'feature id for this node', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_values', 'thresholds to do the splitting on for this node.', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('nodes_hitrates', '', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('nodes_modes', 'enum of behavior for this node 'BRANCH_LEQ', 'BRANCH_LT', 'BRANCH_GTE', 'BRANCH_GT', 'BRANCH_EQ', 'BRANCH_NEQ', 'LEAF'', AttrType::AttributeProto_AttributeType_STRINGS)
        .Attr('nodes_truenodeids', 'child node if expression is true', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_falsenodeids', 'child node if expression is false', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_missing_value_tracks_true', 'for each node, decide if the value is missing (nan) then use true branch, this field can be left unset and will assume false for all nodes', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('base_values', 'starting values for each class, can be omitted and will be assumed as 0', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('class_treeids', 'tree that this node is in', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('class_nodeids', 'node id that this weight is for', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('class_ids', 'index of the class list that this weight is for', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('class_weights', 'the weight for the class in class_id', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('post_transform', 'post eval transform for score, enum 'NONE', 'SOFTMAX', 'LOGISTIC', 'SOFTMAX_ZERO', 'PROBIT'', AttrType::AttributeProto_AttributeType_STRING)
        .Attr('classlabels_strings', 'class labels if using string labels, size E', AttrType::AttributeProto_AttributeType_STRINGS)
        .Attr('classlabels_int64s', 'class labels if using int labels, size E, one of the two class label fields must be used', AttrType::AttributeProto_AttributeType_INTS);
    
    
    {
    {            // nodeToDelete is a child
            if (child == nodeToDelete)
            {
                // this used to call DetatchInputs(), but it's better for MEL to retain other inputs
                node->SetInput(i, nullptr);
                break;
            }
        }
    }
    
    
    {
    {      if (sharpenmap[index]) {
        if (sharpen) yuv[channel][index] = sharpened[index];
      } else if (blurmap[index]) {
        if (blur) yuv[channel][index] = blurred[index];
      }
    }
  }
    
    
    {
    {
    {      // Add back the last sentinel node.
      tree[j_end + 1] = sentinel;
    }
    if (SetDepth(static_cast<int>(2 * n - 1), &tree[0], depth, tree_limit)) {
      /* We need to pack the Huffman tree in tree_limit bits. If this was not
         successful, add fake entities to the lowest values and retry. */
      break;
    }
  }
}
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    size_t HistogramEntropyCost(const JpegHistogram& histo,
                            const uint8_t depths[256]);
size_t HistogramHeaderCost(const JpegHistogram& histo);
    
      void ApplyGlobalQuantization(const int q[kDCTBlockSize]);
    
    #include <stdint.h>
#include <vector>
    
    
    {        // see if our best match qualifies
        if (best < 3) { // fast path literals
            ++q;
        } else if (best > 2  &&  best <= 0x80    &&  dist <= 0x100) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out(0x80 + best-1);
            stb_out(dist-1);
        } else if (best > 5  &&  best <= 0x100   &&  dist <= 0x4000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out2(0x4000 + dist-1);       
            stb_out(best-1);
        } else if (best > 7  &&  best <= 0x100   &&  dist <= 0x80000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out3(0x180000 + dist-1);     
            stb_out(best-1);
        } else if (best > 8  &&  best <= 0x10000 &&  dist <= 0x80000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out3(0x100000 + dist-1);     
            stb_out2(best-1);
        } else if (best > 9                      &&  dist <= 0x1000000) {
            if (best > 65536) best = 65536;
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            if (best <= 0x100) {
                stb_out(0x06);
                stb_out3(dist-1);
                stb_out(best-1);
            } else {
                stb_out(0x04);
                stb_out3(dist-1);
                stb_out2(best-1);
            }
        } else {  // fallback literals if no match was a balanced tradeoff
            ++q;
        }
    }
    
    void    ImGui_Marmalade_InvalidateDeviceObjects()
{
    if (g_ClipboardText)
    {
        delete[] g_ClipboardText;
        g_ClipboardText = NULL;
    }
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
// Missing features:
//  [ ] SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.
    
            D3D12_STATIC_SAMPLER_DESC staticSampler = {};
        staticSampler.Filter = D3D12_FILTER_MIN_MAG_MIP_LINEAR;
        staticSampler.AddressU = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.AddressV = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.AddressW = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.MipLODBias = 0.f;
        staticSampler.MaxAnisotropy = 0;
        staticSampler.ComparisonFunc = D3D12_COMPARISON_FUNC_ALWAYS;
        staticSampler.BorderColor = D3D12_STATIC_BORDER_COLOR_TRANSPARENT_BLACK;
        staticSampler.MinLOD = 0.f;
        staticSampler.MaxLOD = 0.f;
        staticSampler.ShaderRegister = 0;
        staticSampler.RegisterSpace = 0;
        staticSampler.ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
            g_pd3dCommandQueue->ExecuteCommandLists(1, (ID3D12CommandList* const*)&g_pd3dCommandList);
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        }
    
    static void glfw_error_callback(int error, const char* description)
{
    fprintf(stderr, 'Error %d: %s\n', error, description);
}
    
      // Test calling Cursor::push()
  RWPrivateCursor wcursor(&buf);
  wcursor.push(emptyBytes);
  EXPECT_EQ(0, buf.computeChainDataLength());
    
    #pragma once
    
    [[noreturn]] void singletonWarnRegisterMockEarlyAndAbort(
    const TypeDescriptor& type);
    
    template <typename F>
typename std::enable_if<
    !std::is_same<invoke_result_t<F>, void>::value,
    Try<invoke_result_t<F>>>::type
makeTryWith(F&& f) {
  using ResultType = invoke_result_t<F>;
  try {
    return Try<ResultType>(f());
  } catch (std::exception& e) {
    return Try<ResultType>(exception_wrapper(std::current_exception(), e));
  } catch (...) {
    return Try<ResultType>(exception_wrapper(std::current_exception()));
  }
}
    
    
    {} // namespace folly

    
    #endif // D_ABSTRACT_BT_MESSAGE_H

    
    #include 'DiskWriter.h'
#include <string>
    
    namespace aria2 {
    }
    
    class DownloadEngine;
class SocketCore;
class HttpServer;
    
    namespace aria2 {
    }
    
    void AdaptiveFileAllocationIterator::allocateChunk()
{
  if (!allocator_) {
#ifdef HAVE_FALLOCATE
    try {
      A2_LOG_DEBUG('Testing file system supports fallocate.');
      if (offset_ < totalLength_) {
        int64_t len =
            std::min(totalLength_ - offset_, static_cast<int64_t>(4_k));
        stream_->allocate(offset_, len, false);
        offset_ += len;
      }
      A2_LOG_DEBUG('File system supports fallocate.');
      allocator_ = make_unique<FallocFileAllocationIterator>(stream_, offset_,
                                                             totalLength_);
    }
    catch (RecoverableException& e) {
      A2_LOG_DEBUG('File system does not support fallocate.');
      auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                              totalLength_);
      salloc->init();
      allocator_ = std::move(salloc);
    }
#else  // !HAVE_FALLOCATE
    auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                            totalLength_);
    salloc->init();
    allocator_ = std::move(salloc);
#endif // !HAVE_FALLOCATE
    allocator_->allocateChunk();
  }
  else {
    allocator_->allocateChunk();
  }
}
    
      AnnounceTier::AnnounceEvent getEvent() const;
    
    namespace {
using namespace aria2;
    }
    
    
    {} // namespace aria2
    
    #include <ostream>
    
      // We flush streams after invoking reporter methods that write to them. This
  // ensures users get timely updates even when streams are not line-buffered.
  auto flushStreams = [](BenchmarkReporter* reporter) {
    if (!reporter) return;
    std::flush(reporter->GetOutputStream());
    std::flush(reporter->GetErrorStream());
  };
    
    // CheckHandler is the class constructed by failing CHECK macros. CheckHandler
// will log information about the failures and abort when it is destructed.
class CheckHandler {
 public:
  CheckHandler(const char* check, const char* file, const char* func, int line)
      : log_(GetErrorLogInstance()) {
    log_ << file << ':' << line << ': ' << func << ': Check `' << check
         << '' failed. ';
  }
    }
    
      // We need to flush the stream buffers into the console before each
  // SetConsoleTextAttribute call lest it affect the text that is already
  // printed but has not yet reached the console.
  fflush(stdout);
  SetConsoleTextAttribute(stdout_handle,
                          GetPlatformColorCode(color) | FOREGROUND_INTENSITY);
  vprintf(fmt, args);
    
    
    {// Returns true unless value starts with one of: '0', 'f', 'F', 'n' or 'N', or
// some non-alphanumeric character. As a special case, also returns true if
// value is the empty string.
bool IsTruthyFlagValue(const std::string& value);
}  // end namespace benchmark