
        
        Status CholeskyThunk::ExecuteOnStream(const ExecuteParams& params) {
  VLOG(3) << 'type=' << PrimitiveType_Name(type_)
          << ' uplo=' << se::blas::UpperLowerString(uplo_)
          << ' batch_size=' << batch_size_ << ' n=' << n_
       << ' a=' << a_buffer_.ToString()
       << ' workspace=' << workspace_buffer_.ToString()
       << ' info=' << info_buffer_.ToString();
    }
    
    #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_GPU_CONDITIONAL_THUNK_H_

    
    class CudnnBatchNormForwardTrainingThunk : public Thunk {
 public:
  CudnnBatchNormForwardTrainingThunk(
      const BufferAllocation::Slice& operand,
      const BufferAllocation::Slice& scale,
      const BufferAllocation::Slice& offset, float epsilon, int64 feature_index,
      const BufferAllocation::Slice& output_data,
      const BufferAllocation::Slice& output_mean,
      const BufferAllocation::Slice& output_inv_stddev,
      const BufferAllocation::Slice& output_tuple, const HloInstruction* hlo);
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    OutfeedThunk::OutfeedThunk(ShapeTree<BufferAllocation::Slice> outfeed_slices,
                           const HloInstruction* hlo_instruction)
    : Thunk(Kind::kOutfeed, hlo_instruction),
      outfeed_slices_(std::move(outfeed_slices)) {}
    
    namespace xla {
namespace gpu {
    }
    }
    
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
    
    // integral_constant, defined in tr1, is a wrapper for an integer
// value. We don't really need this generality; we could get away
// with hardcoding the integer type to bool. We use the fully
// general integer_constant for compatibility with tr1.
    
      std::string Get(const std::string& k, const Snapshot* snapshot = nullptr) {
    std::string result;
    Status s = db_->Get(ReadOptions(), k, &result);
    if (s.IsNotFound()) {
      result = 'NOT_FOUND';
    } else if (!s.ok()) {
      result = s.ToString();
    }
    return result;
  }
    
      // REQUIRES: External synchronization
  void WriteStep(Random* rnd) {
    const uint32_t k = rnd->Next() % K;
    const intptr_t g = current_.Get(k) + 1;
    const Key key = MakeKey(k, g);
    list_.Insert(key);
    current_.Set(k, g);
  }
    
      // Release a mapping returned by a previous Lookup().
  // REQUIRES: handle must not have been released yet.
  // REQUIRES: handle must have been returned by a method on *this.
  virtual void Release(Handle* handle) = 0;
    
      // Release the lock acquired by a previous successful call to LockFile.
  // REQUIRES: lock was returned by a successful LockFile() call
  // REQUIRES: lock has not already been unlocked.
  virtual Status UnlockFile(FileLock* lock) = 0;
    
      // Return the name of this policy.  Note that if the filter encoding
  // changes in an incompatible way, the name returned by this method
  // must be changed.  Otherwise, old incompatible filters may be
  // passed to methods of this type.
  virtual const char* Name() const = 0;
    
    void BlockHandle::EncodeTo(std::string* dst) const {
  // Sanity check that all fields have been set
  assert(offset_ != ~static_cast<uint64_t>(0));
  assert(size_ != ~static_cast<uint64_t>(0));
  PutVarint64(dst, offset_);
  PutVarint64(dst, size_);
}
    
            // Rendering
        ImGui::Render();
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver.
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
    // Set default OpenGL3 loader to be gl3w
#if !defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)     \
 && !defined(IMGUI_IMPL_OPENGL_LOADER_CUSTOM)
#define IMGUI_IMPL_OPENGL_LOADER_GL3W
#endif
    
      /// Try if the configuration has started an auto-refresh thread.
  bool started_thread_{false};
    
    #include <map>
#include <string>
    
      ExpectedSuccess<DatabaseError> putInt32(const std::string& domain,
                                          const std::string& key,
                                          const int32_t value) override;
  ExpectedSuccess<DatabaseError> putString(const std::string& domain,
                                           const std::string& key,
                                           const std::string& value) override;
    
    ExpectedSuccess<DatabaseError> RocksdbDatabase::open() {
  rocksdb::Options options = getOptions();
  auto db_path = boost::filesystem::path(path_).make_preferred();
  default_read_options_ = rocksdb::ReadOptions();
  default_read_options_.verify_checksums = false;
  default_write_options_ = rocksdb::WriteOptions();
  batch_write_options_ = rocksdb::WriteOptions();
  batch_write_options_.disableWAL = true;
  return openInternal(options, db_path);
}
    
    
    {  return info.is_default;
}
    
    Status serializeQueryLogItem(const QueryLogItem& item, JSON& doc) {
  if (item.results.added.size() > 0 || item.results.removed.size() > 0) {
    auto obj = doc.getObject();
    auto status = serializeDiffResults(
        item.results, doc, obj, FLAGS_log_numerics_as_numbers);
    if (!status.ok()) {
      return status;
    }
    }
    }