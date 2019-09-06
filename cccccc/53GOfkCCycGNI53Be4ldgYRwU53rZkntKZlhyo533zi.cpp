
        
          if (isa<StructDecl>(NTD) || isa<ClassDecl>(NTD)) {
    for (auto *VD : NTD->getStoredProperties()) {
      useConformancesFromType(VD->getValueInterfaceType()
                                ->getCanonicalType(genericSig));
    }
  }
    
      // If we have a value that is owned, but that we are going to use in as a
  // guaranteed argument, we need to borrow/unborrow the argument. Otherwise, we
  // will introduce new consuming uses. In contrast, if we have an owned value,
  // we are ok due to the forwarding nature of upcasts.
  SmallVector<SILValue, 8> NewArgBorrows;
    
    template <typename Dtype>
void hdf5_save_nd_dataset(
    const hid_t file_id, const string& dataset_name, const Blob<Dtype>& blob,
    bool write_diff = false);
    
      layer.SetUp(this->blob_bottom_vec_, this->blob_top_vec_);
    
    template <typename Dtype>
void InnerProductLayer<Dtype>::Backward_cpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down,
    const vector<Blob<Dtype>*>& bottom) {
  if (this->param_propagate_down_[0]) {
    const Dtype* top_diff = top[0]->cpu_diff();
    const Dtype* bottom_data = bottom[0]->cpu_data();
    // Gradient with respect to weight
    if (transpose_) {
      caffe_cpu_gemm<Dtype>(CblasTrans, CblasNoTrans,
          K_, N_, M_,
          (Dtype)1., bottom_data, top_diff,
          (Dtype)1., this->blobs_[0]->mutable_cpu_diff());
    } else {
      caffe_cpu_gemm<Dtype>(CblasTrans, CblasNoTrans,
          N_, K_, M_,
          (Dtype)1., top_diff, bottom_data,
          (Dtype)1., this->blobs_[0]->mutable_cpu_diff());
    }
  }
  if (bias_term_ && this->param_propagate_down_[1]) {
    const Dtype* top_diff = top[0]->cpu_diff();
    // Gradient with respect to bias
    caffe_cpu_gemv<Dtype>(CblasTrans, M_, N_, (Dtype)1., top_diff,
        bias_multiplier_.cpu_data(), (Dtype)1.,
        this->blobs_[1]->mutable_cpu_diff());
  }
  if (propagate_down[0]) {
    const Dtype* top_diff = top[0]->cpu_diff();
    // Gradient with respect to bottom data
    if (transpose_) {
      caffe_cpu_gemm<Dtype>(CblasNoTrans, CblasTrans,
          M_, K_, N_,
          (Dtype)1., top_diff, this->blobs_[0]->cpu_data(),
          (Dtype)0., bottom[0]->mutable_cpu_diff());
    } else {
      caffe_cpu_gemm<Dtype>(CblasNoTrans, CblasNoTrans,
          M_, K_, N_,
          (Dtype)1., top_diff, this->blobs_[0]->cpu_data(),
          (Dtype)0., bottom[0]->mutable_cpu_diff());
    }
  }
}
    
      /// @brief Updates the network weights based on the diff values computed.
  void Update();
  /**
   * @brief Shares weight data of owner blobs with shared blobs.
   *
   * Note: this is called by Net::Init, and thus should normally not be
   * called manually.
   */
  void ShareWeights();
    
    /**
 * @brief Applies common transformations to the input data, such as
 * scaling, mirroring, substracting the image mean...
 */
template <typename Dtype>
class DataTransformer {
 public:
  explicit DataTransformer(const TransformationParameter& param, Phase phase);
  virtual ~DataTransformer() {}
    }
    
    void UnregisterShellMenu(std::wstring opt, wchar_t* keyBaseName)
{
	HKEY root = GetRootKey(opt);
	HKEY cmderKey;
	FAIL_ON_ERROR(RegCreateKeyEx(root, keyBaseName, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &cmderKey, NULL));
	FAIL_ON_ERROR(RegDeleteTree(cmderKey, NULL));
	RegDeleteKeyEx(root, keyBaseName, KEY_ALL_ACCESS, NULL);
	RegCloseKey(cmderKey);
	RegCloseKey(root);
}
    
    int main(int argc, char** argv) { return leveldb::test::RunAllTests(); }

    
      WriteOptions write_options;
  ASSERT_OK(db->Put(write_options, '1', 'b'));
  ASSERT_OK(db->Put(write_options, '2', 'c'));
  ASSERT_OK(db->Put(write_options, '3', 'd'));
  ASSERT_OK(db->Put(write_options, '4', 'e'));
  ASSERT_OK(db->Put(write_options, '5', 'f'));
    
    #ifndef STORAGE_LEVELDB_TABLE_MERGER_H_
#define STORAGE_LEVELDB_TABLE_MERGER_H_
    
    namespace leveldb {
    }
    
    
    {  Slice input(s);
  Slice v;
  ASSERT_TRUE(GetLengthPrefixedSlice(&input, &v));
  ASSERT_EQ('', v.ToString());
  ASSERT_TRUE(GetLengthPrefixedSlice(&input, &v));
  ASSERT_EQ('foo', v.ToString());
  ASSERT_TRUE(GetLengthPrefixedSlice(&input, &v));
  ASSERT_EQ('bar', v.ToString());
  ASSERT_TRUE(GetLengthPrefixedSlice(&input, &v));
  ASSERT_EQ(std::string(200, 'x'), v.ToString());
  ASSERT_EQ('', input.ToString());
}
    
    #pragma once
    
    
    {    return 0;
}

    
    
    {    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            CreateRenderTarget();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

    
        g_AttribLocationTex = glGetUniformLocation(g_ShaderHandle, 'Texture');
    g_AttribLocationProjMtx = glGetUniformLocation(g_ShaderHandle, 'ProjMtx');
    g_AttribLocationVtxPos = glGetAttribLocation(g_ShaderHandle, 'Position');
    g_AttribLocationVtxUV = glGetAttribLocation(g_ShaderHandle, 'UV');
    g_AttribLocationVtxColor = glGetAttribLocation(g_ShaderHandle, 'Color');
    
            if (ImGui::Button('Button'))                                  // Buttons return true when clicked (most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
    IMGUI_IMPL_API bool     ImGui_ImplDX10_Init(ID3D10Device* device);
IMGUI_IMPL_API void     ImGui_ImplDX10_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX10_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
    #include <osquery/config/config.h>
#include <osquery/database.h>
#include <osquery/events.h>
#include <osquery/flagalias.h>
#include <osquery/flags.h>
#include <osquery/hashing/hashing.h>
#include <osquery/killswitch.h>
#include <osquery/logger.h>
#include <osquery/packs.h>
#include <osquery/registry.h>
#include <osquery/system.h>
#include <osquery/tables.h>
#include <osquery/utils/conversions/split.h>
#include <osquery/utils/conversions/tryto.h>
#include <osquery/utils/system/time.h>
    
     protected:
  /**
   * @brief Call the genConfig method of the config retriever plugin.
   *
   * This may perform a resource load such as TCP request or filesystem read.
   * If a non-zero value is passed to --config_refresh, this starts a thread
   * that periodically calls genConfig to reload config state
   */
  Status refresh();
    
    namespace osquery {
    }
    
     private:
  struct DatabaseHandle {
    std::unique_ptr<rocksdb::DB> db_handle;
    rocksdb::Options options;
    std::string path;
    std::unordered_map<std::string,
                       std::unique_ptr<rocksdb::ColumnFamilyHandle>>
        handles;
  };
  DatabaseHandle input_db_;
  DatabaseHandle output_db_;
    
    #pragma once
    
    class SQLPlugin : public Plugin {
 public:
  /// Run a SQL query string against the SQL implementation.
  virtual Status query(const std::string& query,
                       QueryData& results,
                       bool use_cache) const = 0;
    }
    
    GTEST_TEST(InMemoryDatabaseTest, test_destroy) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  ASSERT_FALSE(db->open().isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key', 10).isError());
  db->close();
  // In memory db should be destroyed on close
  // but we want to test that destroy is not failing for no reason
  auto result = db->destroyDB();
  EXPECT_TRUE(result);
  ASSERT_FALSE(db->open().isError());
  auto get_result = db->getInt32(kPersistentSettings, 'key');
  EXPECT_FALSE(get_result);
  EXPECT_EQ(get_result.getError(), DatabaseError::KeyNotFound);
}