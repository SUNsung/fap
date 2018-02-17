
        
        // Tests that an exit code describes a normal exit with a given exit code.
class GTEST_API_ ExitedWithCode {
 public:
  explicit ExitedWithCode(int exit_code);
  bool operator()(int exit_status) const;
 private:
  // No implementation - assignment is unsupported.
  void operator=(const ExitedWithCode& other);
    }
    
    // scripts/fuse_gtest.py depends on gtest's own header being #included
// *unconditionally*.  Therefore these #includes cannot be moved
// inside #if GTEST_HAS_PARAM_TEST.
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-param-util.h'
#include 'gtest/internal/gtest-param-util-generated.h'
    
      // Clears the object.
  void Clear();
    
      const std::string& file() const { return file_; }
  int line() const { return line_; }
  int index() const { return index_; }
  int write_fd() const { return write_fd_; }
    
    #define GTEST_TEST_NO_THROW_(statement, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    try { \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    } \
    catch (...) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testnothrow_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testnothrow_, __LINE__): \
      fail('Expected: ' #statement ' doesn't throw an exception.\n' \
           '  Actual: it throws.')
    
    // #ifdef __GNUC__ is too general here.  It is possible to use gcc without using
// libstdc++ (which is where cxxabi.h comes from).
# if GTEST_HAS_CXXABI_H_
#  include <cxxabi.h>
# elif defined(__HP_aCC)
#  include <acxx_demangle.h>
# endif  // GTEST_HASH_CXXABI_H_
    
    #include 'sample1.h'
    
    using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestCase;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
    
    {  // Set up scripts on all of the words that did not get sent to
  // ambigs_classify_and_output.  They all should have, but if all the
  // werd_res's don't get uch_sets, tesseract will crash when you try
  // to iterate over them. :-(
  int total_words = 0;
  for (page_res_it.restart_page(); page_res_it.block() != NULL;
       page_res_it.forward()) {
    if (page_res_it.word()) {
      if (page_res_it.word()->uch_set == NULL)
        page_res_it.word()->SetupFake(unicharset);
      total_words++;
    }
  }
  if (examined_words < 0.85 * total_words) {
    tprintf('TODO(antonova): clean up recog_training_segmented; '
            ' It examined only a small fraction of the ambigs image.\n');
  }
  tprintf('recog_training_segmented: examined %d / %d words.\n',
          examined_words, total_words);
}
    
    
inline FCOORD operator *(                   //scalar multiply
                         float scale,
                         const FCOORD &op1  //operands
                        ) {
  FCOORD result;                 //output
    }
    
    
    {  // We shouldn't try calculations if the characters are very short (for example
  // for punctuation).
  if (min_height > kBlnXHeight / 8 && height > 0) {
    float result = height * kBlnXHeight * yscale / min_height;
    *max_xht = result + kFinalPixelTolerance;
    result = height * kBlnXHeight * yscale / max_height;
    *min_xht = result - kFinalPixelTolerance;
  }
}
    
    const int kBlnCellHeight = 256;     // Full-height for baseline normalization.
const int kBlnXHeight = 128;        // x-height for baseline normalization.
const int kBlnBaselineOffset = 64;  // offset for baseline normalization.
    
    class ParagraphModel;
    
    #include <stdio.h>
    
    #include 'hphp/runtime/base/array-init.h'
#include 'hphp/runtime/base/datetime.h'
#include 'hphp/runtime/base/resource-data.h'
#include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/base/type-string.h'
#include 'hphp/util/timer.h'
    
    int64_t HHVM_FUNCTION(posix_getuid) {
  if (auto cred = get_cli_ucred()) return cred->uid;
    }
    
    //---- Define constructor and implicit cast operators to convert back<>forth from your math types and ImVec2/ImVec4.
// This will be inlined as part of ImVec2 and ImVec4 class declarations.
/*
#define IM_VEC2_CLASS_EXTRA                                                 \
        ImVec2(const MyVec2& f) { x = f.x; y = f.y; }                       \
        operator MyVec2() const { return MyVec2(x,y); }
    
    
    {        ImGui::Render();
    }
    
        // Setup inputs
    // (we already got mouse wheel, keyboard keys & characters from glfw callbacks polled in glfwPollEvents())
    if (glfwGetWindowAttrib(g_Window, GLFW_FOCUSED))
    {
        if (io.WantMoveMouse)
        {
            glfwSetCursorPos(g_Window, (double)io.MousePos.x, (double)io.MousePos.y);   // Set mouse position if requested by io.WantMoveMouse flag (used when io.NavMovesTrue is enabled by user and using directional navigation)
        }
        else
        {
            double mouse_x, mouse_y;
            glfwGetCursorPos(g_Window, &mouse_x, &mouse_y);
            io.MousePos = ImVec2((float)mouse_x, (float)mouse_y);
        }
    }
    else
    {
        io.MousePos = ImVec2(-FLT_MAX,-FLT_MAX);
    }
    
        // Create and grow buffers if needed
    if (!g_pVB || g_VertexBufferSize < draw_data->TotalVtxCount)
    {
        if (g_pVB) { g_pVB->Release(); g_pVB = NULL; }
        g_VertexBufferSize = draw_data->TotalVtxCount + 5000;
        if (g_pd3dDevice->CreateVertexBuffer(g_VertexBufferSize * sizeof(CUSTOMVERTEX), D3DUSAGE_DYNAMIC | D3DUSAGE_WRITEONLY, D3DFVF_CUSTOMVERTEX, D3DPOOL_DEFAULT, &g_pVB, NULL) < 0)
            return;
    }
    if (!g_pIB || g_IndexBufferSize < draw_data->TotalIdxCount)
    {
        if (g_pIB) { g_pIB->Release(); g_pIB = NULL; }
        g_IndexBufferSize = draw_data->TotalIdxCount + 10000;
        if (g_pd3dDevice->CreateIndexBuffer(g_IndexBufferSize * sizeof(ImDrawIdx), D3DUSAGE_DYNAMIC | D3DUSAGE_WRITEONLY, sizeof(ImDrawIdx) == 2 ? D3DFMT_INDEX16 : D3DFMT_INDEX32, D3DPOOL_DEFAULT, &g_pIB, NULL) < 0)
            return;
    }
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_Marmalade_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
    
        auto startPoint = high_resolution_clock::now();
    vector<thread *> threads;
    for (int i = 0; i < THREADS; i++) {
        threads.push_back(new thread([i] {
            while(nextConnection(i));
        }));
    }
    
    namespace TLS {
    }
    
            unsigned char shaInput[] = 'XXXXXXXXXXXXXXXXXXXXXXXX258EAFA5-E914-47DA-95CA-C5AB0DC85B11';
        memcpy(shaInput, secKey, 24);
        unsigned char shaDigest[SHA_DIGEST_LENGTH];
        SHA1(shaInput, sizeof(shaInput) - 1, shaDigest);
    
            if (!socket->messageQueue.empty() && ((events & UV_WRITABLE) || SSL_want(socket->ssl) == SSL_READING)) {
            socket->cork(true);
            while (true) {
                Queue::Message *messagePtr = socket->messageQueue.front();
                int sent = SSL_write(socket->ssl, messagePtr->data, (int) messagePtr->length);
                if (sent == (ssize_t) messagePtr->length) {
                    if (messagePtr->callback) {
                        messagePtr->callback(p, messagePtr->callbackData, false, messagePtr->reserved);
                    }
                    socket->messageQueue.pop();
                    if (socket->messageQueue.empty()) {
                        if ((socket->state.poll & UV_WRITABLE) && SSL_want(socket->ssl) != SSL_WRITING) {
                            socket->change(socket->nodeData->loop, socket, socket->setPoll(UV_READABLE));
                        }
                        break;
                    }
                } else if (sent <= 0) {
                    switch (SSL_get_error(socket->ssl, sent)) {
                    case SSL_ERROR_WANT_READ:
                        break;
                    case SSL_ERROR_WANT_WRITE:
                        if ((socket->getPoll() & UV_WRITABLE) == 0) {
                            socket->change(socket->nodeData->loop, socket, socket->setPoll(socket->getPoll() | UV_WRITABLE));
                        }
                        break;
                    default:
                        STATE::onEnd((Socket *) p);
                        return;
                    }
                    break;
                }
            }
            socket->cork(false);
        }
    
                group->messageHandler(webSocket, data, length, (OpCode) opCode);
            if (webSocket->isClosed() || webSocket->isShuttingDown()) {
                return true;
            }
        } else {
            webSocket->fragmentBuffer.append(data, length);
            if (!remainingBytes && fin) {
                length = webSocket->fragmentBuffer.length();
                if (webSocket->compressionStatus == WebSocket<isServer>::CompressionStatus::COMPRESSED_FRAME) {
                        webSocket->compressionStatus = WebSocket<isServer>::CompressionStatus::ENABLED;
                        webSocket->fragmentBuffer.append('....');
                        data = group->hub->inflate((char *) webSocket->fragmentBuffer.data(), length, group->maxPayload);
                        if (!data) {
                            forceClose(webSocketState);
                            return true;
                        }
                } else {
                    data = (char *) webSocket->fragmentBuffer.data();
                }
    }