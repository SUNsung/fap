
        
        void StyledStreamWriter::writeValue(const Value& value) {
  switch (value.type()) {
  case nullValue:
    pushValue('null');
    break;
  case intValue:
    pushValue(valueToString(value.asLargestInt()));
    break;
  case uintValue:
    pushValue(valueToString(value.asLargestUInt()));
    break;
  case realValue:
    pushValue(valueToString(value.asDouble()));
    break;
  case stringValue:
  {
    // Is NULL possible for value.string_?
    char const* str;
    char const* end;
    bool ok = value.getString(&str, &end);
    if (ok) pushValue(valueToQuotedStringN(str, static_cast<unsigned>(end-str)));
    else pushValue('');
    break;
  }
  case booleanValue:
    pushValue(valueToString(value.asBool()));
    break;
  case arrayValue:
    writeArrayValue(value);
    break;
  case objectValue: {
    Value::Members members(value.getMemberNames());
    if (members.empty())
      pushValue('{}');
    else {
      writeWithIndent('{');
      indent();
      Value::Members::iterator it = members.begin();
      for (;;) {
        const std::string& name = *it;
        const Value& childValue = value[name];
        writeCommentBeforeValue(childValue);
        writeWithIndent(valueToQuotedString(name.c_str()));
        *document_ << ' : ';
        writeValue(childValue);
        if (++it == members.end()) {
          writeCommentAfterValueOnSameLine(childValue);
          break;
        }
        *document_ << ',';
        writeCommentAfterValueOnSameLine(childValue);
      }
      unindent();
      writeWithIndent('}');
    }
  } break;
  }
}
    
    class PyDescriptorDatabase : public DescriptorDatabase {
 public:
  explicit PyDescriptorDatabase(PyObject* py_database);
  ~PyDescriptorDatabase();
    }
    
    // Accesses messages in the container.
//
// Returns a new reference to the message for an integer parameter.
// Returns a new reference to a list of messages for a slice.
PyObject* Subscript(RepeatedCompositeContainer* self, PyObject* slice);
    
    #include <string>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <google/protobuf/descriptor.h>
    
    static HRESULT InitDevice()
{
    HRESULT hr = S_OK;
    }
    
    #include <math.h>
#include <iostream>
    
        // Extension: 3.0
    PFNCOLORMASKIPROC ColorMaski;
    PFNGETBOOLEANI_VPROC GetBooleani_v;
    PFNGETINTEGERI_VPROC GetIntegeri_v;
    PFNENABLEIPROC Enablei;
    PFNDISABLEIPROC Disablei;
    PFNISENABLEDIPROC IsEnabledi;
    PFNBEGINTRANSFORMFEEDBACKPROC BeginTransformFeedback;
    PFNENDTRANSFORMFEEDBACKPROC EndTransformFeedback;
    PFNBINDBUFFERRANGEPROC BindBufferRange;
    PFNBINDBUFFERBASEPROC BindBufferBase;
    PFNTRANSFORMFEEDBACKVARYINGSPROC TransformFeedbackVaryings;
    PFNGETTRANSFORMFEEDBACKVARYINGPROC GetTransformFeedbackVarying;
    PFNCLAMPCOLORPROC ClampColor;
    PFNBEGINCONDITIONALRENDERPROC BeginConditionalRender;
    PFNENDCONDITIONALRENDERPROC EndConditionalRender;
    PFNVERTEXATTRIBIPOINTERPROC VertexAttribIPointer;
    PFNGETVERTEXATTRIBIIVPROC GetVertexAttribIiv;
    PFNGETVERTEXATTRIBIUIVPROC GetVertexAttribIuiv;
    PFNVERTEXATTRIBI1IPROC VertexAttribI1i;
    PFNVERTEXATTRIBI2IPROC VertexAttribI2i;
    PFNVERTEXATTRIBI3IPROC VertexAttribI3i;
    PFNVERTEXATTRIBI4IPROC VertexAttribI4i;
    PFNVERTEXATTRIBI1UIPROC VertexAttribI1ui;
    PFNVERTEXATTRIBI2UIPROC VertexAttribI2ui;
    PFNVERTEXATTRIBI3UIPROC VertexAttribI3ui;
    PFNVERTEXATTRIBI4UIPROC VertexAttribI4ui;
    PFNVERTEXATTRIBI1IVPROC VertexAttribI1iv;
    PFNVERTEXATTRIBI2IVPROC VertexAttribI2iv;
    PFNVERTEXATTRIBI3IVPROC VertexAttribI3iv;
    PFNVERTEXATTRIBI4IVPROC VertexAttribI4iv;
    PFNVERTEXATTRIBI1UIVPROC VertexAttribI1uiv;
    PFNVERTEXATTRIBI2UIVPROC VertexAttribI2uiv;
    PFNVERTEXATTRIBI3UIVPROC VertexAttribI3uiv;
    PFNVERTEXATTRIBI4UIVPROC VertexAttribI4uiv;
    PFNVERTEXATTRIBI4BVPROC VertexAttribI4bv;
    PFNVERTEXATTRIBI4SVPROC VertexAttribI4sv;
    PFNVERTEXATTRIBI4UBVPROC VertexAttribI4ubv;
    PFNVERTEXATTRIBI4USVPROC VertexAttribI4usv;
    PFNGETUNIFORMUIVPROC GetUniformuiv;
    PFNBINDFRAGDATALOCATIONPROC BindFragDataLocation;
    PFNGETFRAGDATALOCATIONPROC GetFragDataLocation;
    PFNUNIFORM1UIPROC Uniform1ui;
    PFNUNIFORM2UIPROC Uniform2ui;
    PFNUNIFORM3UIPROC Uniform3ui;
    PFNUNIFORM4UIPROC Uniform4ui;
    PFNUNIFORM1UIVPROC Uniform1uiv;
    PFNUNIFORM2UIVPROC Uniform2uiv;
    PFNUNIFORM3UIVPROC Uniform3uiv;
    PFNUNIFORM4UIVPROC Uniform4uiv;
    PFNTEXPARAMETERIIVPROC TexParameterIiv;
    PFNTEXPARAMETERIUIVPROC TexParameterIuiv;
    PFNGETTEXPARAMETERIIVPROC GetTexParameterIiv;
    PFNGETTEXPARAMETERIUIVPROC GetTexParameterIuiv;
    PFNCLEARBUFFERIVPROC ClearBufferiv;
    PFNCLEARBUFFERUIVPROC ClearBufferuiv;
    PFNCLEARBUFFERFVPROC ClearBufferfv;
    PFNCLEARBUFFERFIPROC ClearBufferfi;
    PFNGETSTRINGIPROC GetStringi;
    
    #ifdef HAVE_CLAMDBLAS
    
    /// - Counts up the labelled words and the blobs within.
/// - Deletes all unused or emptied words, counting the unused ones.
/// - Resets W_BOL and W_EOL flags correctly.
/// - Builds the rebuild_word and rebuilds the box_word and the best_choice.
void Tesseract::TidyUp(PAGE_RES* page_res) {
  int ok_blob_count = 0;
  int bad_blob_count = 0;
  int ok_word_count = 0;
  int unlabelled_words = 0;
  PAGE_RES_IT pr_it(page_res);
  WERD_RES* word_res;
  for (; (word_res = pr_it.word()) != NULL; pr_it.forward()) {
    int ok_in_word = 0;
    int blob_count = word_res->correct_text.size();
    WERD_CHOICE* word_choice = new WERD_CHOICE(word_res->uch_set, blob_count);
    word_choice->set_permuter(TOP_CHOICE_PERM);
    for (int c = 0; c < blob_count; ++c) {
      if (word_res->correct_text[c].length() > 0) {
        ++ok_in_word;
      }
      // Since we only need a fake word_res->best_choice, the actual
      // unichar_ids do not matter. Which is fortunate, since TidyUp()
      // can be called while training Tesseract, at the stage where
      // unicharset is not meaningful yet.
      word_choice->append_unichar_id_space_allocated(
          INVALID_UNICHAR_ID, word_res->best_state[c], 1.0f, -1.0f);
    }
    if (ok_in_word > 0) {
      ok_blob_count += ok_in_word;
      bad_blob_count += word_res->correct_text.size() - ok_in_word;
      word_res->LogNewRawChoice(word_choice);
      word_res->LogNewCookedChoice(1, false, word_choice);
    } else {
      ++unlabelled_words;
      if (applybox_debug > 0) {
        tprintf('APPLY_BOXES: Unlabelled word at :');
        word_res->word->bounding_box().print();
      }
      pr_it.DeleteCurrentWord();
      delete word_choice;
    }
  }
  pr_it.restart_page();
  for (; (word_res = pr_it.word()) != NULL; pr_it.forward()) {
    // Denormalize back to a BoxWord.
    word_res->RebuildBestState();
    word_res->SetupBoxWord();
    word_res->word->set_flag(W_BOL, pr_it.prev_row() != pr_it.row());
    word_res->word->set_flag(W_EOL, pr_it.next_row() != pr_it.row());
  }
  if (applybox_debug > 0) {
    tprintf('   Found %d good blobs.\n', ok_blob_count);
    if (bad_blob_count > 0) {
      tprintf('   Leaving %d unlabelled blobs in %d words.\n',
              bad_blob_count, ok_word_count);
    }
    if (unlabelled_words > 0)
      tprintf('   %d remaining unlabelled words deleted.\n', unlabelled_words);
  }
}
    
      // Returns true if a guided segmentation search is needed.
  bool GuidedSegsearchNeeded(const WERD_CHOICE *best_choice) const;
  // Setup ready to guide the segmentation search to the correct segmentation.
  // The callback pp_cb is used to avoid a cyclic dependency.
  // It calls into LMPainPoints::GenerateForBlamer by pre-binding the
  // WERD_RES, and the LMPainPoints itself.
  // pp_cb must be a permanent callback, and should be deleted by the caller.
  void InitForSegSearch(const WERD_CHOICE *best_choice,
                        MATRIX* ratings, UNICHAR_ID wildcard_id,
                        bool debug, STRING *debug_str,
                        TessResultCallback2<bool, int, int>* pp_cb);
  // Returns true if the guided segsearch is in progress.
  bool GuidedSegsearchStillGoing() const;
  // The segmentation search has ended. Sets the blame appropriately.
  void FinishSegSearch(const WERD_CHOICE *best_choice,
                       bool debug, STRING *debug_str);
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == NULL) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (inT16) x, (inT16) (ysize - y - height),
                         (inT16) (x + width), (inT16) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
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
    
    // This class fits a line to a set of ICOORD points.
// There is no restriction on the direction of the line, as it
// uses a vector method, ie no concern over infinite gradients.
// The fitted line has the least upper quartile of squares of perpendicular
// distances of all source points from the line, subject to the constraint
// that the line is made from one of the pairs of [{p1,p2,p3},{pn-2, pn-1, pn}]
// i.e. the 9 combinations of one of the first 3 and last 3 points.
// A fundamental assumption of this algorithm is that one of the first 3 and
// one of the last 3 points are near the best line fit.
// The points must be Added in line order for the algorithm to work properly.
// No floating point calculations are needed* to make an accurate fit,
// and no random numbers are needed** so the algorithm is deterministic,
// architecture-stable, and compiler-stable as well as stable to minor
// changes in the input.
// *A single floating point division is used to compute each line's distance.
// This is unlikely to result in choice of a different line, but if it does,
// it would be easy to replace with a 64 bit integer calculation.
// **Random numbers are used in the nth_item function, but the worst
// non-determinism that can result is picking a different result among equals,
// and that wouldn't make any difference to the end-result distance, so the
// randomness does not affect the determinism of the algorithm. The random
// numbers are only there to guarantee average linear time.
// Fitting time is linear, but with a high constant, as it tries 9 different
// lines and computes the distance of all points each time.
// This class is aimed at replacing the LLSQ (linear least squares) and
// LMS (least median of squares) classes that are currently used for most
// of the line fitting in Tesseract.
class DetLineFit {
 public:
  DetLineFit();
  ~DetLineFit();
    }
    
    // replace a named node by newNode of the same type under the same name, including moving over all network links
// This is used in 
// 1. Update nodes to quantized versions.
// 2. The KL-reg based adaptation to reduce feature copy (deprecated)
// need to update all the mappings as well childrens.
void ComputationNetwork::ReplaceNode(wstring nodeName, ComputationNodeBasePtr newNode)
{
    ComputationNodeBasePtr oldNode = GetNodeFromName(nodeName);
    }
    
                        Matrix<float> mB = Matrix<float>::RandomGaussian(dim1, dim2, 1, 4, IncrementCounter(), CPUDEVICE);
                    Matrix<float> mC = Matrix<float>::RandomGaussian(dim1, dim1, 1, 2, IncrementCounter(), CPUDEVICE);
                    Matrix<float> mDblock(CPUDEVICE);
                    mDblock.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseBlockCol, true);
    
    using namespace std;
using namespace Microsoft::MSR::ScriptableObjects;
    
        // This prints a PROGRESS message with a percentage value of 0 to prevent timeouts on Philly
    // when executing long running non-training operations like PreCompute, CV, Eval, and Write
    static size_t TraceFakeProgress(size_t numIterationsBeforePrintingProgress, size_t numItersSinceLastPrintOfProgress)
    {
        size_t newNumItersSinceLastPrintOfProgress = numItersSinceLastPrintOfProgress;
        if (GetTracingFlag())
        {
            newNumItersSinceLastPrintOfProgress++;
            if (newNumItersSinceLastPrintOfProgress >= numIterationsBeforePrintingProgress)
            {
                printf('PROGRESS: %.2f%%\n', 0.0f);
                newNumItersSinceLastPrintOfProgress = 0;
            }
        }
    }
    
    
    {
    {
    {}}}

    
    public:
    typedef msra::dbn::latticepair latticepair;
    latticesource(std::pair<std::vector<std::wstring>, std::vector<std::wstring>> latticetocs, const std::unordered_map<std::string, size_t>& modelsymmap, std::wstring RootPathInToc)
        : numlattices(latticetocs.first, modelsymmap, RootPathInToc), denlattices(latticetocs.second, modelsymmap, RootPathInToc), verbosity(0)
    {
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        if ((m_in_buf_left < 2) || (m_pIn_buf_ofs[0] == 0xFF) || (m_pIn_buf_ofs[1] == 0xFF))
    {
      uint c1 = get_octet();
      uint c2 = get_octet();
      m_bit_buf |= (c1 << 8) | c2;
    }
    else
    {
      m_bit_buf |= ((uint)m_pIn_buf_ofs[0] << 8) | m_pIn_buf_ofs[1];
      m_in_buf_left -= 2;
      m_pIn_buf_ofs += 2;
    }
    
    
    
    #if defined(__WATCOMC__)
void GetTSC(unsigned long&);
#pragma aux GetTSC = 0x0f 0x31 'mov [edi], eax' parm [edi] modify [edx eax];
#elif defined(__GNUC__)
inline
void GetTSC(unsigned long& tsc)
{
  asm volatile('.byte 15, 49\n\t'
	       : '=eax' (tsc)
	       :
	       : '%edx', '%eax');
}
#elif defined(_MSC_VER)
inline
void GetTSC(unsigned long& tsc)
{
  unsigned long a;
  __asm _emit 0fh
  __asm _emit 31h
  __asm mov a, eax;
  tsc=a;
}
#endif      
    
    bool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);
    
    extern JSClass  *jsb_cocostudio_timeline_EventFrame_class;
extern JSObject *jsb_cocostudio_timeline_EventFrame_prototype;
    
    
    
        virtual void DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color);
    
    	static Test* Create()
	{
		return new Bridge;
	}
    
    			b2FixtureDef fd;
			fd.shape = &circle;
			fd.density = 1.0f;
			fd.friction = 0.9f;
    
        for (thread *t : threads) {
        t->join();
    }
    
        connections = atoi(argv[1]);
    byteSize = 20; // we can only do 20 bytes in this version!
    framesPerSend = atoi(argv[3]);
    int port = atoi(argv[4]);
    
    
    {
    {
    {            if (extensionsParser.serverNoContextTakeover) {
                options |= SERVER_NO_CONTEXT_TAKEOVER;
            } else {
                options &= ~SERVER_NO_CONTEXT_TAKEOVER;
            }
        } else {
            options &= ~PERMESSAGE_DEFLATE;
        }
    } else {
        // todo!
    }
}
    
        WebSocket(bool perMessageDeflate, uS::Socket *socket) : uS::Socket(std::move(*socket)) {
        compressionStatus = perMessageDeflate ? CompressionStatus::ENABLED : CompressionStatus::DISABLED;
    }
    
    
    {                group->messageHandler(webSocket, data, length, (OpCode) opCode);
                if (webSocket->isClosed() || webSocket->isShuttingDown()) {
                    return true;
                }
                webSocket->fragmentBuffer.clear();
            }
        }
    } else {
        if (!remainingBytes && fin && !webSocket->controlTipLength) {
            if (opCode == CLOSE) {
                typename WebSocketProtocol<isServer, WebSocket<isServer>>::CloseFrame closeFrame = WebSocketProtocol<isServer, WebSocket<isServer>>::parseClosePayload(data, length);
                webSocket->close(closeFrame.code, closeFrame.message, closeFrame.length);
                return true;
            } else {
                if (opCode == PING) {
                    webSocket->send(data, length, (OpCode) OpCode::PONG);
                    group->pingHandler(webSocket, data, length);
                    if (webSocket->isClosed() || webSocket->isShuttingDown()) {
                        return true;
                    }
                } else if (opCode == PONG) {
                    group->pongHandler(webSocket, data, length);
                    if (webSocket->isClosed() || webSocket->isShuttingDown()) {
                        return true;
                    }
                }
            }
        } else {
            webSocket->fragmentBuffer.append(data, length);
            webSocket->controlTipLength += length;
    
    
    {
    {    }
};
    
    #include 'WebSocket.h'
#include 'HTTPSocket.h'
#include 'Extensions.h'
#include <functional>
#include <stack>