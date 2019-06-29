
        
        Dictionary::Dictionary(const Dictionary& other) = default;
    
      if (argc > 1) {
    napi_throw_error(env, NULL,
                     'Wrong number of arguments, expected single argument');
  }
    
    Promise::~Promise() {}
    
    #ifndef NATIVE_MATE_NATIVE_MATE_DICTIONARY_H_
#define NATIVE_MATE_NATIVE_MATE_DICTIONARY_H_
    
    #include 'native_mate/dictionary.h'
#include 'native_mate/scoped_persistent.h'
    
    #include 'base/bind.h'
#include 'base/logging.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/task/post_task.h'
#include 'content/public/browser/browser_context.h'
#include 'content/public/browser/browser_task_traits.h'
#include 'content/public/browser/browser_thread.h'
#include 'content/public/browser/resource_context.h'
#include 'crypto/nss_util.h'
#include 'crypto/nss_util_internal.h'
#include 'net/base/net_errors.h'
#include 'net/cert/nss_cert_database.h'
#include 'net/cert/x509_certificate.h'
    
    #if defined(OS_POSIX) && !defined(OS_ANDROID)
#include 'base/files/scoped_temp_dir.h'
#endif
    
    #ifndef DOCQUAL_H
#define DOCQUAL_H
    
    namespace tesseract {
    }
    
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
    
      // Returns the average sum of squared perpendicular error from a line
  // through mean_point() in the direction dir.
  double rms_orth(const FCOORD &dir) const;
    
    #ifndef TESSERACT_CCUTIL_KDPAIR_H_
#define TESSERACT_CCUTIL_KDPAIR_H_
    
    #if GTEST_HAS_DEATH_TEST
    
    // Defines a test.
//
// The first parameter is the name of the test case, and the second
// parameter is the name of the test within the test case.
//
// The convention is to end the test case name with 'Test'.  For
// example, a test case for the Foo class can be named FooTest.
//
// The user should put his test code between braces after using this
// macro.  Example:
//
//   TEST(FooTest, InitializesCorrectly) {
//     Foo foo;
//     EXPECT_TRUE(foo.StatusIsOK());
//   }
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT3.
// Don't use this in your code.
#define GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, v1, v2, v3), \
                on_failure)
    
      // Returns a copy of the FilePath with the directory part removed.
  // Example: FilePath('path/to/file').RemoveDirectoryName() returns
  // FilePath('file'). If there is no directory part ('just_a_file'), it returns
  // the FilePath unmodified. If there is no file part ('just_a_dir/') it
  // returns an empty FilePath ('').
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveDirectoryName() const;
    
    #include <stdlib.h>
#include <assert.h>
    
    // Copyright 2008 Google Inc.
// All Rights Reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Author: wan@google.com (Zhanyong Wan)
    
      const int is_prime_size_;
  bool* const is_prime_;
    
    bool AuthPropertyIterator::operator==(const AuthPropertyIterator& rhs) const {
  if (property_ == nullptr || rhs.property_ == nullptr) {
    return property_ == rhs.property_;
  } else {
    return index_ == rhs.index_;
  }
}
    
    CreateThreadPoolFunc g_ctp_impl = CreateDefaultThreadPoolImpl;
    
    #include 'src/core/lib/debug/stats.h'
    
    
    {        // Render command lists
        int idx_offset = 0;
        ImVec2 clip_off = draw_data->DisplayPos;
        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                // User callback, registered via ImDrawList::AddCallback()
                // (ImDrawCallback_ResetRenderState is a special callback value used by the user to request the renderer to reset render state.)
                if (pcmd->UserCallback == ImDrawCallback_ResetRenderState)
                    ImGui_ImplAllegro5_SetupRenderState(draw_data);
                else
                    pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                // Draw
                ALLEGRO_BITMAP* texture = (ALLEGRO_BITMAP*)pcmd->TextureId;
                al_set_clipping_rectangle(pcmd->ClipRect.x - clip_off.x, pcmd->ClipRect.y - clip_off.y, pcmd->ClipRect.z - pcmd->ClipRect.x, pcmd->ClipRect.w - pcmd->ClipRect.y);
                al_draw_prim(&vertices[0], g_VertexDecl, texture, idx_offset, idx_offset + pcmd->ElemCount, ALLEGRO_PRIM_TRIANGLE_LIST);
            }
            idx_offset += pcmd->ElemCount;
        }
    }
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    struct GLFWwindow;
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
    
    static int stb_not_crap(int best, int dist)
{
    return   ((best > 2  &&  dist <= 0x00100)
        || (best > 5  &&  dist <= 0x04000)
        || (best > 7  &&  dist <= 0x80000));
}
    
            if (ImGui::Button('Button'))                                  // Buttons return true when clicked (most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
        // Initialize Direct3D
    if (!CreateDeviceD3D(hwnd))
    {
        CleanupDeviceD3D();
        ::UnregisterClass(wc.lpszClassName, wc.hInstance);
        return 1;
    }
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2019-05-29: DirectX9: Added support for large mesh (64K+ vertices), enable ImGuiBackendFlags_RendererHasVtxOffset flag.
//  2019-04-30: DirectX9: Added support for special ImDrawCallback_ResetRenderState callback to reset render state.
//  2019-03-29: Misc: Fixed erroneous assert in ImGui_ImplDX9_InvalidateDeviceObjects().
//  2019-01-16: Misc: Disabled fog before drawing UI's. Fixes issue #2288.
//  2018-11-30: Misc: Setting up io.BackendRendererName so it can be displayed in the About Window.
//  2018-06-08: Misc: Extracted imgui_impl_dx9.cpp/.h away from the old combined DX9+Win32 example.
//  2018-06-08: DirectX9: Use draw_data->DisplayPos and draw_data->DisplaySize to setup projection matrix and clipping rectangle.
//  2018-05-07: Render: Saving/restoring Transform because they don't seem to be included in the StateBlock. Setting shading mode to Gouraud.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplDX9_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
    
        // Chain GLFW callbacks: our callbacks will call the user's previously installed callbacks, if any.
    g_PrevUserCallbackMousebutton = NULL;
    g_PrevUserCallbackScroll = NULL;
    g_PrevUserCallbackKey = NULL;
    g_PrevUserCallbackChar = NULL;
    if (install_callbacks)
    {
        g_PrevUserCallbackMousebutton = glfwSetMouseButtonCallback(window, ImGui_ImplGlfw_MouseButtonCallback);
        g_PrevUserCallbackScroll = glfwSetScrollCallback(window, ImGui_ImplGlfw_ScrollCallback);
        g_PrevUserCallbackKey = glfwSetKeyCallback(window, ImGui_ImplGlfw_KeyCallback);
        g_PrevUserCallbackChar = glfwSetCharCallback(window, ImGui_ImplGlfw_CharCallback);
    }
    
        // Create or resize the vertex/index buffers
    size_t vertex_size = draw_data->TotalVtxCount * sizeof(ImDrawVert);
    size_t index_size = draw_data->TotalIdxCount * sizeof(ImDrawIdx);
    if (rb->VertexBuffer == VK_NULL_HANDLE || rb->VertexBufferSize < vertex_size)
        CreateOrResizeBuffer(rb->VertexBuffer, rb->VertexBufferMemory, rb->VertexBufferSize, vertex_size, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT);
    if (rb->IndexBuffer == VK_NULL_HANDLE || rb->IndexBufferSize < index_size)
        CreateOrResizeBuffer(rb->IndexBuffer, rb->IndexBufferMemory, rb->IndexBufferSize, index_size, VK_BUFFER_USAGE_INDEX_BUFFER_BIT);
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
      // Lookup page cache by page identifier
  //
  // page_key   Page identifier
  // buf        Buffer where the data should be copied
  // size       Size of the page
  virtual Status Lookup(const Slice& key, std::unique_ptr<char[]>* data,
                        size_t* size) = 0;
    
    #include <memory>
    
    /*
 * Class:     org_rocksdb_Checkpoint
 * Method:    dispose
 * Signature: (J)V
 */
void Java_org_rocksdb_Checkpoint_disposeInternal(JNIEnv* /*env*/,
                                                 jobject /*jobj*/,
                                                 jlong jhandle) {
  auto* checkpoint = reinterpret_cast<rocksdb::Checkpoint*>(jhandle);
  assert(checkpoint != nullptr);
  delete checkpoint;
}