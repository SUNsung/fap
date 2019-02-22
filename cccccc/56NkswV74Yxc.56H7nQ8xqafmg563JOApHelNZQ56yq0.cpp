
        
        
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
    bool CodeGenerator::GenerateAll(
    const std::vector<const FileDescriptor*>& files,
    const string& parameter,
    GeneratorContext* generator_context,
    string* error) const {
  // Default implemenation is just to call the per file method, and prefix any
  // error string with the file to provide context.
  bool succeeded = true;
  for (int i = 0; i < files.size(); i++) {
    const FileDescriptor* file = files[i];
    succeeded = Generate(file, parameter, generator_context, error);
    if (!succeeded && error && error->empty()) {
      *error = 'Code generator returned false but provided no error '
               'description.';
    }
    if (error && !error->empty()) {
      *error = file->name() + ': ' + *error;
      break;
    }
    if (!succeeded) {
      break;
    }
  }
  return succeeded;
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
namespace {
    }
    }
    }
    }
    }
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_doc_comment.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_name_resolver.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
    // Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
// https://developers.google.com/protocol-buffers/
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
    
      reflection_tester.SetAllFieldsViaReflection(message);
  reflection_tester.ExpectAllFieldsSetViaReflection(*message);
    
    
    {  // Now replace the '.' in the input with it.
  string result;
  result.reserve(strlen(input) + size - 3);
  result.append(input, radix_pos);
  result.append(temp + 1, size - 2);
  result.append(radix_pos + 1);
  return result;
}
    
    #define CHARACTER_CLASS(NAME, EXPRESSION)      \
  class NAME {                                 \
   public:                                     \
    static inline bool InClass(char c) {       \
      return EXPRESSION;                       \
    }                                          \
  }
    
    // This test causes gcc 3.3.5 (and earlier?) to give the cryptic error:
//   'sorry, unimplemented: `method_call_expr' not supported by dump_expr'
#if !defined(__GNUC__) || __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 3)
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vadd(v_src0, v_src1);
    }
    
        for (size_t y = 0; y < size.height; ++y)
    {
        const type * src0 = internal::getRowPtr(src0Base, src0Stride, y);
        const type * src1 = internal::getRowPtr(src1Base, src1Stride, y);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, y);
        size_t x = 0;
    }
    
    void assertSupportedConfiguration(bool parametersSupported)
{
    if (!isSupportedConfiguration()) {
        std::cerr << 'internal error: attempted to use an unavailable function' << std::endl;
        std::abort();
    }
    }
    
            vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        float32x4_t vline1Shifted_f32 = vaddq_f32(vline1_f32, vshift);
        float32x4_t vline2Shifted_f32 = vaddq_f32(vline2_f32, vshift);
        uint32x4_t vline1_u32 = vcvtq_u32_f32(vline1Shifted_f32);
        uint32x4_t vline2_u32 = vcvtq_u32_f32(vline2Shifted_f32);
        uint32x4_t vline1Mask = vbicq_u32(vmask, vreinterpretq_u32_f32(vline2_f32));
        uint32x4_t vline2Mask = vbicq_u32(vmask, vreinterpretq_u32_f32(vline1Shifted_f32));
        vline1Mask = vshrq_n_u32(vline1Mask, 16);
        vline2Mask = vshrq_n_u32(vline2Mask, 16);
        vline1_u32 = vqsubq_u32(vline1_u32, vline1Mask);
        vline2_u32 = vqsubq_u32(vline2_u32, vline2Mask);
        uint16x4_t vRes1 = vqrshrn_n_u32(vline1_u32, 16);
        uint16x4_t vRes2 = vqrshrn_n_u32(vline2_u32, 16);
        uint8x8_t vRes = vqmovn_u16(vcombine_u16(vRes1, vRes2));
    
    
    {
    {}}
    
         // GP Register cannot be greater than 31
     assert(static_cast<uint32_t>(rt) < 32);
     assert(static_cast<uint32_t>(ra) < 32);
     assert(static_cast<uint32_t>(rb) < 32);
     assert(static_cast<uint32_t>(bc) < 32);
    
    
    {}
    
    
    {  if (base64) {
    decoded = string_base64_decode(data, data_len, true);
    if (decoded.isNull()) {
      raise_warning('unable to decode base64 data');
      return nullptr;
    }
  } else {
    decoded = url_decode(data, data_len);
  }
  return req::make<MemFile>(decoded.data(), decoded.size());
}
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
      bool valid() const { return !isClosed(); }
    
    template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 0, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 0, rate, fillCols);
}
    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    static void glfw_error_callback(int error, const char* description)
{
    fprintf(stderr, 'Glfw Error %d: %s\n', error, description);
}
    
        // Create the D3DDevice
    if (pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hwnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &g_d3dpp, &g_pd3dDevice) < 0)
    {
        pD3D->Release();
        UnregisterClass(wc.lpszClassName, wc.hInstance);
        return 0;
    }
    
    
    {    vkDestroyDevice(g_Device, g_Allocator);
    vkDestroyInstance(g_Instance, g_Allocator);
}
    
    int main() {
    }
    
    
/// Recursive
/// Time Complexity: O(n)
/// Space Complexity: O(n)
    
    int main() {
    }
    
    #include <iostream>
#include <vector>
#include <stack>
    
    
    {    return 0;
}

    
    public:
    vector<int> preorderTraversal(TreeNode* root) {
    }
    
    
// My Non-Recursive
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
    }
    
      // Input statistics
  // TODO(noetzli): The stats are incomplete. They are lacking everything
  // consumed by MergeHelper.
  uint64_t num_input_records = 0;
  uint64_t num_input_deletion_records = 0;
  uint64_t num_input_corrupt_records = 0;
  uint64_t total_input_raw_key_bytes = 0;
  uint64_t total_input_raw_value_bytes = 0;
    
    #include 'rocksdb/status.h'
    
      // put and get from non-default column family
  s = db->Put(WriteOptions(), handles[1], Slice('key'), Slice('value'));
  assert(s.ok());
  std::string value;
  s = db->Get(ReadOptions(), handles[1], Slice('key'), &value);
  assert(s.ok());
    
    class DbDumpTool {
 public:
  bool Run(const DumpOptions& dump_options,
           rocksdb::Options options = rocksdb::Options());
};
    
    class Slice;
class BlockBuilder;
struct Options;
    
      const Snapshot* snapshot();
    
      // -------------------
  // Parameters that affect performance
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write at a nonexisting key
        object.at('the fast') = 'il rapido';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
        // change element at index 1 (second element) to 'second'
    array.at(1) = 'second';
    
    class async_thread_pool
{
public:
    async_thread_pool(int _min_threads, int _max_threads)
    {
        n_waiting = 0;
        running = false;
        min_threads = _min_threads;
        max_threads = _max_threads;
        current_task_id = 0;
    }
    }
    
    TEST(hashmap, string)
{
    swHashMap *hm = swHashMap_new(16, NULL);
    swHashMap_add(hm, (char *) SW_STRL('hello'), (void *) 199);
    swHashMap_add(hm, (char *) SW_STRL('swoole22'), (void *) 8877);
    swHashMap_add(hm, (char *) SW_STRL('hello2'), (void *) 200);
    swHashMap_add(hm, (char *) SW_STRL('willdel'), (void *) 888);
    swHashMap_add(hm, (char *) SW_STRL('willupadte'), (void *) 9999);
    swHashMap_add(hm, (char *) SW_STRL('hello3'), (void *) 78978);
    }
    
        SwooleG.main_reactor = (swReactor *) sw_malloc(sizeof(swReactor));
    swReactor_create(SwooleG.main_reactor, SW_REACTOR_MAXEVENTS);
    
    #include <gtest/gtest.h>
#include <initializer_list>
#include <utility>