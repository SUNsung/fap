
        
            txn->Put(key_str, value);
    
      /**
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
     private:
  // wrap im2col/col2im so we don't have to remember the (long) argument lists
  inline void conv_im2col_cpu(const Dtype* data, Dtype* col_buff) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      im2col_cpu(data, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], col_buff);
    } else {
      im2col_nd_cpu(data, num_spatial_axes_, conv_input_shape_.cpu_data(),
          col_buffer_shape_.data(), kernel_shape_.cpu_data(),
          pad_.cpu_data(), stride_.cpu_data(), dilation_.cpu_data(), col_buff);
    }
  }
  inline void conv_col2im_cpu(const Dtype* col_buff, Dtype* data) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      col2im_cpu(col_buff, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], data);
    } else {
      col2im_nd_cpu(col_buff, num_spatial_axes_, conv_input_shape_.cpu_data(),
          col_buffer_shape_.data(), kernel_shape_.cpu_data(),
          pad_.cpu_data(), stride_.cpu_data(), dilation_.cpu_data(), data);
    }
  }
#ifndef CPU_ONLY
  inline void conv_im2col_gpu(const Dtype* data, Dtype* col_buff) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      im2col_gpu(data, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], col_buff);
    } else {
      im2col_nd_gpu(data, num_spatial_axes_, num_kernels_im2col_,
          conv_input_shape_.gpu_data(), col_buffer_.gpu_shape(),
          kernel_shape_.gpu_data(), pad_.gpu_data(),
          stride_.gpu_data(), dilation_.gpu_data(), col_buff);
    }
  }
  inline void conv_col2im_gpu(const Dtype* col_buff, Dtype* data) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      col2im_gpu(col_buff, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], data);
    } else {
      col2im_nd_gpu(col_buff, num_spatial_axes_, num_kernels_col2im_,
          conv_input_shape_.gpu_data(), col_buffer_.gpu_shape(),
          kernel_shape_.gpu_data(), pad_.gpu_data(), stride_.gpu_data(),
          dilation_.gpu_data(), data);
    }
  }
#endif
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
      virtual inline const char* type() const { return 'Dropout'; }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      /**
   * @brief Computes the error gradient w.r.t. the ELU inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} = \left\{
   *        \begin{array}{lr}
   *            1           & \mathrm{if} \; x > 0 \\
   *            y + \alpha  & \mathrm{if} \; x \le 0
   *        \end{array} \right.
   *      @f$ if propagate_down[0].
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
      bool empty() const { return list_.next_ == &list_; }
  SnapshotImpl* oldest() const { assert(!empty()); return list_.next_; }
  SnapshotImpl* newest() const { assert(!empty()); return list_.prev_; }
    
    
    {}  // namespace leveldb
    
      // Delete the specified 'file' from the specified 'level'.
  void DeleteFile(int level, uint64_t file) {
    deleted_files_.insert(std::make_pair(level, file));
  }
    
    
    {}  // namespace leveldb
    
    
    {    status = sqlite3_finalize(read_stmt);
    ErrorCheck(status);
    status = sqlite3_finalize(begin_trans_stmt);
    ErrorCheck(status);
    status = sqlite3_finalize(end_trans_stmt);
    ErrorCheck(status);
  }
    
      // Read sequentially.
  ASSERT_OK(env_->NewSequentialFile('/dir/f', &seq_file));
  ASSERT_OK(seq_file->Read(5, &result, scratch)); // Read 'hello'.
  ASSERT_EQ(0, result.compare('hello'));
  ASSERT_OK(seq_file->Skip(1));
  ASSERT_OK(seq_file->Read(1000, &result, scratch)); // Read 'world'.
  ASSERT_EQ(0, result.compare('world'));
  ASSERT_OK(seq_file->Read(1000, &result, scratch)); // Try reading past EOF.
  ASSERT_EQ(0, result.size());
  ASSERT_OK(seq_file->Skip(100)); // Try to skip past end of file.
  ASSERT_OK(seq_file->Read(1000, &result, scratch));
  ASSERT_EQ(0, result.size());
  delete seq_file;
    
    TEST(Issue178, Test) {
  // Get rid of any state from an old run.
  std::string dbpath = leveldb::test::TmpDir() + '/leveldb_cbug_test';
  DestroyDB(dbpath, leveldb::Options());
    }
    
      virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const {
    for (int i = 0; i < n; i++) {
      uint32_t h = Hash(keys[i].data(), keys[i].size(), 1);
      PutFixed32(dst, h);
    }
  }
    
      // Check the crc of the type and the block contents
  const char* data = contents.data();    // Pointer to where Read put the data
  if (options.verify_checksums) {
    const uint32_t crc = crc32c::Unmask(DecodeFixed32(data + n + 1));
    const uint32_t actual = crc32c::Value(data, n + 1);
    if (actual != crc) {
      delete[] buf;
      s = Status::Corruption('block checksum mismatch');
      return s;
    }
  }
    
    std::function<size_t(size_t)> DeterministicSchedule::uniform(uint64_t seed) {
  auto rand = std::make_shared<std::ranlux48>(seed);
  return [rand](size_t numActive) {
    auto dist = std::uniform_int_distribution<size_t>(0, numActive - 1);
    return dist(*rand);
  };
}
    
      void transferCredit() noexcept {
    Weight credit = takeCredit();
    transfer_.fetch_add(credit, std::memory_order_acq_rel);
    if (MayBlock) {
      std::atomic_thread_fence(std::memory_order_seq_cst);
      waiting_.store(NOTWAITING, std::memory_order_relaxed);
      waiting_.futexWake();
    }
  }
    
    
    {
    {} // namespace detail
} // namespace folly

    
    #include <memory>
#include <thread>
#include <unordered_map>
    
    #include <folly/Portability.h>
    
      typedef void_allocator::rebind<int>::other int_allocator;
  int_allocator ialloc(valloc);
    
    // Auto-conversion of key/value based on callback signature, documented in
// DynamicParser.h.
namespace detail {
class IdentifyCallable {
 public:
  enum class Kind { Function, MemberFunction };
  template <typename Fn>
  constexpr static Kind getKind() { return test<Fn>(nullptr); }
    }
    }
    
    folly::dynamic DynamicParser::ParserStack::releaseErrorsImpl() {
  if (errors_.isNull()) {
    throw DynamicParserLogicError('Do not releaseErrors() twice');
  }
  auto errors = std::move(errors_);
  errors_ = nullptr;  // Prevent a second release.
  value_ = nullptr;  // Break attempts to parse again.
  return errors;
}
    
    TEST(TestDynamicParser, TestThrowOnReleaseWhileParsing) {
  auto d = dynamic::array(1);
  DynamicParser p(DynamicParser::OnError::RECORD, &d);
  EXPECT_THROW(
    p.arrayItems([&]() { p.releaseErrors(); }),
    DynamicParserLogicError
  );
}
    
    bool binary_to_compressed_c(const char* filename, const char* symbol, bool use_base85_encoding, bool use_compression)
{
    // Read file
    FILE* f = fopen(filename, 'rb');
    if (!f) return false;
    int data_sz;
    if (fseek(f, 0, SEEK_END) || (data_sz = (int)ftell(f)) == -1 || fseek(f, 0, SEEK_SET)) { fclose(f); return false; }
    char* data = new char[data_sz+4];
    if (fread(data, 1, data_sz, f) != (size_t)data_sz) { fclose(f); delete[] data; return false; }
    memset((void *)(((char*)data) + data_sz), 0, 4);
    fclose(f);
    }
    
    //---- Don't implement demo windows functionality (ShowDemoWindow()/ShowStyleEditor()/ShowUserGuide() methods will be empty)
//---- It is very strongly recommended to NOT disable the demo windows. Please read the comment at the top of imgui_demo.cpp.
//#define IMGUI_DISABLE_DEMO_WINDOWS
    
    IMGUI_API bool        ImGui_ImplDX10_Init(void* hwnd, ID3D10Device* device);
IMGUI_API void        ImGui_ImplDX10_Shutdown();
IMGUI_API void        ImGui_ImplDX10_NewFrame();
IMGUI_API void        ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
    struct IDirect3DDevice9;
    
    // SDL,GL3W
#include <SDL.h>
#include <SDL_syswm.h>
#include <GL/gl3w.h>    // This example is using gl3w to access OpenGL functions (because it is small). You may use glew/glad/glLoadGen/etc. whatever already works for you.
    
    void ImDrawList::ClearFreeMemory()
{
    CmdBuffer.clear();
    IdxBuffer.clear();
    VtxBuffer.clear();
    _VtxCurrentIdx = 0;
    _VtxWritePtr = NULL;
    _IdxWritePtr = NULL;
    _ClipRectStack.clear();
    _TextureIdStack.clear();
    _Path.clear();
    _ChannelsCurrent = 0;
    _ChannelsCount = 1;
    for (int i = 0; i < _Channels.Size; i++)
    {
        if (i == 0) memset(&_Channels[0], 0, sizeof(_Channels[0]));  // channel 0 is a copy of CmdBuffer/IdxBuffer, don't destruct again
        _Channels[i].CmdBuffer.clear();
        _Channels[i].IdxBuffer.clear();
    }
    _Channels.clear();
}
    
        // Render command lists
    int vtx_offset = 0;
    int idx_offset = 0;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                const D3D11_RECT r = { (LONG)pcmd->ClipRect.x, (LONG)pcmd->ClipRect.y, (LONG)pcmd->ClipRect.z, (LONG)pcmd->ClipRect.w };
                ctx->PSSetShaderResources(0, 1, (ID3D11ShaderResourceView**)&pcmd->TextureId);
                ctx->RSSetScissorRects(1, &r);
                ctx->DrawIndexed(pcmd->ElemCount, idx_offset, vtx_offset);
            }
            idx_offset += pcmd->ElemCount;
        }
        vtx_offset += cmd_list->VtxBuffer.Size;
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
    
    // Return the services for generated mock file.
grpc::string GetMockServices(grpc_generator::File *file,
                             const Parameters &params);
    
    
    
    #include 'monster_test_generated.h'
#include 'flatbuffers/grpc.h'
    
    
    {
    {    printer->Print(vars, '// Generated by the gRPC C++ plugin.\n');
    printer->Print(vars,
                   '// If you make any local change, they will be lost.\n');
    printer->Print(vars, '// source: $filename$\n');
    grpc::string leading_comments = file->GetLeadingComments('//');
    if (!leading_comments.empty()) {
      printer->Print(vars, '// Original file comments:\n');
      printer->Print(leading_comments.c_str());
    }
    printer->Print(vars, '#ifndef GRPC_$filename_identifier$__INCLUDED\n');
    printer->Print(vars, '#define GRPC_$filename_identifier$__INCLUDED\n');
    printer->Print(vars, '\n');
    printer->Print(vars, '#include \'$filename_base$$message_header_ext$\'\n');
    printer->Print(vars, file->additional_headers().c_str());
    printer->Print(vars, '\n');
  }
  return output;
}
    
    // Abort the program after logging the mesage if the given condition is not
// true. Otherwise, do nothing.
#define GRPC_CODEGEN_CHECK(x)                                            \
  (x) ? (void)0                                                          \
      : LogMessageVoidify() & LogHelper(&std::cerr).get_os()             \
                                  << 'CHECK FAILED: ' << __FILE__ << ':' \
                                  << __LINE__ << ': '
    
    #ifdef _STLPORT_VERSION
  #define FLATBUFFERS_CPP98_STL
#endif
#ifndef FLATBUFFERS_CPP98_STL
  #include <functional>
#endif
    
    // Get a field, if you know it's a vector.
template<typename T>
Vector<T> *GetFieldV(const Table &table, const reflection::Field &field) {
  assert(field.type()->base_type() == reflection::Vector &&
         sizeof(T) == GetTypeSize(field.type()->element()));
  return table.GetPointer<Vector<T> *>(field.offset());
}
    
      // Get and test the `Equipment` union (`equipped` field).
  assert(monster->equipped_type() == Equipment_Weapon);
  auto equipped = static_cast<const Weapon *>(monster->equipped());
  assert(equipped->name()->str() == 'Axe');
  assert(equipped->damage() == 5);
  (void)equipped;