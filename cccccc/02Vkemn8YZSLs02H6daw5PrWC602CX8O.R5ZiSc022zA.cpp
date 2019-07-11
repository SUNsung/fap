
        
          /// @brief The spatial dimensions of a filter kernel.
  Blob<int> kernel_shape_;
  /// @brief The spatial dimensions of the stride.
  Blob<int> stride_;
  /// @brief The spatial dimensions of the padding.
  Blob<int> pad_;
  /// @brief The spatial dimensions of the dilation.
  Blob<int> dilation_;
  /// @brief The spatial dimensions of the convolution input.
  Blob<int> conv_input_shape_;
  /// @brief The spatial dimensions of the col_buffer.
  vector<int> col_buffer_shape_;
  /// @brief The spatial dimensions of the output.
  vector<int> output_shape_;
  const vector<int>* bottom_shape_;
    
      virtual inline const char* type() const { return 'Concat'; }
  virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
      virtual inline const char* type() const { return 'Convolution'; }
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
  cudnnPoolingDescriptor_t  pooling_desc_;
  cudnnPoolingMode_t        mode_;
};
#endif
    
    			image.m_bVerboseOutput = a_bVerboseOutput;
			image.Encode(a_format, a_eErrMetric, a_fEffort, a_uiJobs, a_uiMaxJobs);
    
    					if (m_afrgbaSource[uiPixel].fR != 0.0f)
					{
						m_pimageSource->m_numColorValues.fR++;
						//make sure we are getting a float between 0-1
						if (m_afrgbaSource[uiPixel].fR - 1.0f > 0.0f)
						{
							m_pimageSource->m_numOutOfRangeValues.fR++;
						}
					}
    
    #define  kf_cexp(x,phase) \
        do{ \
                (x)->r = KISS_FFT_COS(phase);\
                (x)->i = KISS_FFT_SIN(phase);\
        }while(0)
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
      // Our data structure does not allow duplicate insertion
  assert(x == nullptr || !Equal(key, x->key));
    
      // Return the current manifest file number
  uint64_t ManifestFileNumber() const { return manifest_file_number_; }
    
    
    {  size_t read = 0;
  std::string read_data;
  while (read < kWriteSize) {
    ASSERT_OK(seq_file->Read(kWriteSize - read, &result, scratch));
    read_data.append(result.data(), result.size());
    read += result.size();
  }
  ASSERT_TRUE(write_data == read_data);
  delete seq_file;
  delete[] scratch;
}
    
      // Amount of data to build up in memory (backed by an unsorted log
  // on disk) before converting to a sorted on-disk file.
  //
  // Larger values increase performance, especially during bulk loads.
  // Up to two write buffers may be held in memory at the same time,
  // so you may wish to adjust this parameter to control memory usage.
  // Also, a larger write buffer will result in a longer recovery time
  // the next time the database is opened.
  size_t write_buffer_size = 4 * 1024 * 1024;
    
      // Store the mapping 'key->value' in the database.
  void Put(const Slice& key, const Slice& value);
    
    namespace leveldb {
    }
    
    
    {    static void Run(void* arg) {
      Callback* callback = reinterpret_cast<Callback*>(arg);
      int current_id = callback->last_id_ptr_->load(std::memory_order_relaxed);
      ASSERT_EQ(callback->id_ - 1, current_id);
      callback->last_id_ptr_->store(callback->id_, std::memory_order_relaxed);
    }
  };
    
      prev_digit_value = INT_MAX;
  value = 0;
  for (i = 0; buffer[i] != '\0'; i++) {
    switch (buffer[i]) {
    case 'm':
    case 'M':
      digit_value = 1000;
      break;
    case 'd':
    case 'D':
      digit_value = 500;
      break;
    case 'c':
    case 'C':
      digit_value = 100;
      break;
    case 'l':
    case 'L':
      digit_value = 50;
      break;
    case 'x':
    case 'X':
      digit_value = 10;
      break;
    case 'v':
    case 'V':
      digit_value = 5;
      break;
    case 'i':
    case 'I':
      digit_value = 1;
      break;
    default:
      return -1;
    }
    }
    
      // string
  } else if (buf1.isString() && fileKey) {
    s = buf1.getString();
    s2 = new GooString();
    obj2.initNull();
    decrypt = new DecryptStream(new MemStream(s->getCString(), 0,
					      s->getLength(), &obj2),
				fileKey, encAlgorithm, keyLength,
				objNum, objGen);
    decrypt->reset();
    while ((c = decrypt->getChar()) != EOF) {
      s2->append((char)c);
    }
    delete decrypt;
    obj->initString(s2);
    shift();
    
    class PopplerObjectCache
{
  public:
    PopplerObjectCache (int cacheSizeA, XRef *xrefA);
    ~PopplerObjectCache();
    }
    
      check(state->getFillColorSpace(), state->getFillColor(),
	state->getFillOpacity(), state->getBlendMode());
  gdi = gFalse;
  if ((level == psLevel1 || level == psLevel1Sep) &&
      state->getFillColorSpace()->getMode() == csPattern) {
    level1PSBug = gTrue;
  }
    
    class MediaRendition {
 public:
  MediaRendition(Object *obj);
  ~MediaRendition();
    }
    
    
    {  splash->setSoftMask(NULL);
  gfree(imgData.lookup);
  delete imgData.imgStr;
  str->close();
}
    
      CachedFileWriter writer = CachedFileWriter (cachedFile, NULL);
  do {
    read = fread(buf, 1, CachedFileChunkSize, stdin);
    (writer.write) (buf, CachedFileChunkSize);
    size += read;
  }
  while (read == CachedFileChunkSize);
    
    #include 'CachedFile.h'
    
        const GLchar* vertex_shader_glsl_410_core =
        'layout (location = 0) in vec2 Position;\n'
        'layout (location = 1) in vec2 UV;\n'
        'layout (location = 2) in vec4 Color;\n'
        'uniform mat4 ProjMtx;\n'
        'out vec2 Frag_UV;\n'
        'out vec4 Frag_Color;\n'
        'void main()\n'
        '{\n'
        '    Frag_UV = UV;\n'
        '    Frag_Color = Color;\n'
        '    gl_Position = ProjMtx * vec4(Position.xy,0,1);\n'
        '}\n';
    
        // Submit command buffer
    vkCmdEndRenderPass(fd->CommandBuffer);
    {
        VkPipelineStageFlags wait_stage = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
        VkSubmitInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
        info.waitSemaphoreCount = 1;
        info.pWaitSemaphores = &image_acquired_semaphore;
        info.pWaitDstStageMask = &wait_stage;
        info.commandBufferCount = 1;
        info.pCommandBuffers = &fd->CommandBuffer;
        info.signalSemaphoreCount = 1;
        info.pSignalSemaphores = &render_complete_semaphore;
    }
    
    // About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually.
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad.
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
#include <GL/gl3w.h>    // Initialize with gl3wInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
#include <GL/glew.h>    // Initialize with glewInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
#include <glad/glad.h>  // Initialize with gladLoadGL()
#else
#include IMGUI_IMPL_OPENGL_LOADER_CUSTOM
#endif
    
    void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
    #include 'imgui.h'
#include 'imgui_impl_sdl.h'
#include 'imgui_impl_opengl3.h'
#include <stdio.h>
#include <emscripten.h>
#include <SDL.h>
#include <SDL_opengles2.h>
    
          // They query may have failed and been added to the schedule's blacklist.
      auto blacklisted_query = schedule_->blacklist_.find(name);
      if (blacklisted_query != schedule_->blacklist_.end()) {
        if (blacklistExpired(blacklisted_query->second, it.second)) {
          // The blacklisted query passed the expiration time (remove).
          schedule_->blacklist_.erase(blacklisted_query);
          saveScheduleBlacklist(schedule_->blacklist_);
          it.second.blacklisted = false;
        } else {
          // The query is still blacklisted.
          it.second.blacklisted = true;
          if (!blacklisted) {
            // The caller does not want blacklisted queries.
            continue;
          }
        }
      }
    
    #pragma once
    
     protected:
  void SetUp() {
    fake_directory_ = fs::canonical(createMockFileStructure());
    }
    
    namespace fs = boost::filesystem;
    
    Expected<int32_t, DatabaseError> Database::getInt32(const std::string& domain,
                                                    const std::string& key) {
  Expected<std::string, DatabaseError> string_value = getString(domain, key);
  if (string_value) {
    auto value = tryTo<int32_t>(*string_value);
    if (value) {
      return *value;
    } else {
      return createError(DatabaseError::FailToReadData, value.takeError())
             << 'Failed to convert string to int';
    }
  } else {
    return string_value.takeError();
  }
}
    
      ExpectedSuccess<DatabaseError> putInt32(const std::string& domain,
                                          const std::string& key,
                                          const int32_t value) override;
  ExpectedSuccess<DatabaseError> putString(const std::string& domain,
                                           const std::string& key,
                                           const std::string& value) override;
    
      Expected<int, RocksdbMigrationError> getVersion(const DatabaseHandle& db);
  ExpectedSuccess<RocksdbMigrationError> migrateFromVersion(int version);
    
    namespace rj = rapidjson;