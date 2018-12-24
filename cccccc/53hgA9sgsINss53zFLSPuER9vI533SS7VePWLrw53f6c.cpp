
        
        using namespace swift::sys;
using llvm::StringRef;
    
    
    {      unsigned ID;
      if (auto *activeDiag = info.dyn_cast<const clang::Diagnostic *>())
        ID = activeDiag->getID();
      else
        ID = info.get<const clang::StoredDiagnostic *>()->getID();
      return ID == clang::diag::note_module_import_here ||
             ID == clang::diag::err_module_not_built;
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
    
    
    {    auto newNode = factory.createNode(node->getKind());
    newNode->addChild(newContext, factory);
    for (unsigned i = 1, n = node->getNumChildren(); i != n; ++i)
      newNode->addChild(node->getChild(i), factory);
    return newNode;
  }
      
  case Demangle::Node::Kind::Extension: {
    // Strip generic arguments from the extended type.
    if (node->getNumChildren() < 2)
      return node;
    
    auto newExtended = stripGenericArgsFromContextNode(node->getChild(1),
                                                       factory);
    if (newExtended == node->getChild(1)) return node;
    
    auto newNode = factory.createNode(Node::Kind::Extension);
    newNode->addChild(node->getChild(0), factory);
    newNode->addChild(newExtended, factory);
    if (node->getNumChildren() == 3)
      newNode->addChild(node->getChild(2), factory);
    return newNode;
  }
    
    /**
	@author AndreaCatania
*/
    
    
    {	_FORCE_INLINE_ btTypedConstraint *get_bt_constraint() { return constraint; }
};
#endif

    
    /**
	@author AndreaCatania
*/
    
    #include 'csg_gizmos.h'
#include 'csg_shape.h'
    
    #include 'core/reference.h'
    
    void Thread::wait_to_finish(Thread *p_thread) {
    }
    
    
    {	Pair() {}
	Pair(F p_first, const S &p_second) :
			first(p_first),
			second(p_second) {
	}
};
    
    
    {template<typename IndexType, typename DType = real_t>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
    namespace xgboost {
namespace gbm {
/*! \brief model parameters */
struct GBTreeModelParam : public dmlc::Parameter<GBTreeModelParam> {
  /*! \brief number of trees */
  int num_trees;
  /*! \brief number of roots */
  int num_roots;
  /*! \brief number of features to be used by trees */
  int num_feature;
  /*! \brief pad this space, for backward compatibility reason.*/
  int pad_32bit;
  /*! \brief deprecated padding space. */
  int64_t num_pbuffer_deprecated;
  /*!
   * \brief how many output group a single instance can produce
   *  this affects the behavior of number of output we have:
   *    suppose we have n instance and k group, output will be k * n
   */
  int num_output_group;
  /*! \brief size of leaf vector needed in tree */
  int size_leaf_vector;
  /*! \brief reserved parameters */
  int reserved[32];
  /*! \brief constructor */
  GBTreeModelParam() {
    std::memset(this, 0, sizeof(GBTreeModelParam));
    static_assert(sizeof(GBTreeModelParam) == (4 + 2 + 2 + 32) * sizeof(int),
                  '64/32 bit compatibility issue');
  }
  // declare parameters, only declare those that need to be set.
  DMLC_DECLARE_PARAMETER(GBTreeModelParam) {
    DMLC_DECLARE_FIELD(num_output_group)
        .set_lower_bound(1)
        .set_default(1)
        .describe(
            'Number of output groups to be predicted,'
            ' used for multi-class classification.');
    DMLC_DECLARE_FIELD(num_roots).set_lower_bound(1).set_default(1).describe(
        'Tree updater sequence.');
    DMLC_DECLARE_FIELD(num_feature)
        .set_lower_bound(0)
        .describe('Number of features used for training and prediction.');
    DMLC_DECLARE_FIELD(size_leaf_vector)
        .set_lower_bound(0)
        .set_default(0)
        .describe('Reserved option for vector tree.');
  }
};
    }
    }
    
    /*!
 * \brief Quantile sketch use WQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class WQuantileSketch :
      public QuantileSketchTemplate<DType, RType, WQSummary<DType, RType> > {
};
    
    /// Prefix used for posix tar archive.
const std::string kTestCarveNamePrefix = 'carve_';
    
    Schedule::Schedule() {
  if (RegistryFactory::get().external()) {
    // Extensions should not restore or save schedule details.
    return;
  }
  // Parse the schedule's query blacklist from backing storage.
  restoreScheduleBlacklist(blacklist_);
    }
    
    FLAG(string, pack_delimiter, '_', 'Delimiter for pack and query names');
    
        // Remove the old table to replace with the new one
    s = removeATCTables({table_name});
    if (!s.ok()) {
      LOG(WARNING) << 'ATC table overrides core table; Refusing registration';
      continue;
    }
    
    void clearDecorations(const std::string& source) {
  WriteLock lock(DecoratorsConfigParserPlugin::kDecorationsMutex);
  DecoratorsConfigParserPlugin::kDecorations[source].clear();
}
    
    
    {
    {  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
      if (config.count('file_accesses') > 0) {
    const auto& accesses = config.at('file_accesses').doc();
    if (accesses.IsArray()) {
      for (const auto& category : accesses.GetArray()) {
        if (!category.IsString()) {
          continue;
        }
        std::string path = category.GetString();
        access_map_[source].push_back(path);
      }
    }
    }
    
    #include <gtest/gtest.h>
    
    
    {    // Construct a config map, the typical output from `Config::genConfig`.
    config_data_['awesome'] = content_;
    Config::get().reset();
  }
    
    TEST_F(ViewsConfigParserPluginTests, test_update_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test2.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  std::string query;
  getDatabaseValue(kQueries, 'config_views.kernel_hashes_new', query);
  EXPECT_EQ(query,
            'select hash.path as binary, version, hash.sha256 as SHA256, '
            'hash.sha1 as SHA1, hash.md5 as MD5 from (select path || '
            ''/Contents/MacOS/' as directory, name, version from '
            'kernel_extensions) join hash using (directory)');
    }
    
    #include <osquery/config/config.h>
#include <osquery/filesystem/filesystem.h>
#include <osquery/flags.h>
#include <osquery/logger.h>
#include <osquery/registry_factory.h>
#include <osquery/utils/config/default_paths.h>
    
        // Output as Base85 encoded
    FILE* out = stdout;
    fprintf(out, '// File: '%s' (%d bytes)\n', filename, (int)data_sz);
    fprintf(out, '// Exported using binary_to_compressed_c.cpp\n');
	const char* compressed_str = use_compression ? 'compressed_' : '';
    if (use_base85_encoding)
    {
        fprintf(out, 'static const char %s_%sdata_base85[%d+1] =\n    \'', symbol, compressed_str, (int)((compressed_sz+3)/4)*5);
        char prev_c = 0;
        for (int src_i = 0; src_i < compressed_sz; src_i += 4)
        {
            // This is made a little more complicated by the fact that ??X sequences are interpreted as trigraphs by old C/C++ compilers. So we need to escape pairs of ??.
            unsigned int d = *(unsigned int*)(compressed + src_i);
            for (unsigned int n5 = 0; n5 < 5; n5++, d /= 85)
            {
                char c = Encode85Byte(d);
                fprintf(out, (c == '?' && prev_c == '?') ? '\\%c' : '%c', c);
                prev_c = c;
            }
            if ((src_i % 112) == 112-4)
                fprintf(out, '\'\n    \'');
        }
        fprintf(out, '\';\n\n');
    }
    else
    {
        fprintf(out, 'static const unsigned int %s_%ssize = %d;\n', symbol, compressed_str, (int)compressed_sz);
        fprintf(out, 'static const unsigned int %s_%sdata[%d/4] =\n{', symbol, compressed_str, (int)((compressed_sz+3)/4)*4);
        int column = 0;
        for (int i = 0; i < compressed_sz; i += 4)
        {
            unsigned int d = *(unsigned int*)(compressed + i);
            if ((column++ % 12) == 0)
                fprintf(out, '\n    0x%08x, ', d);
            else
                fprintf(out, '0x%08x, ', d);
        }
        fprintf(out, '\n};\n\n');
    }
    
    
    {        ImGui::Render();
    }
    
    //---- Use 32-bit vertex indices (default is 16-bit) to allow meshes with more than 64K vertices. Render function needs to support it.
//#define ImDrawIdx unsigned int
    
    // About OpenGL function loaders: 
// About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually. 
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad. 
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
    
        // Backup DX state that will be modified to restore it afterwards (unfortunately this is very ugly looking and verbose. Close your eyes!)
    struct BACKUP_DX11_STATE
    {
        UINT                        ScissorRectsCount, ViewportsCount;
        D3D11_RECT                  ScissorRects[D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE];
        D3D11_VIEWPORT              Viewports[D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE];
        ID3D11RasterizerState*      RS;
        ID3D11BlendState*           BlendState;
        FLOAT                       BlendFactor[4];
        UINT                        SampleMask;
        UINT                        StencilRef;
        ID3D11DepthStencilState*    DepthStencilState;
        ID3D11ShaderResourceView*   PSShaderResource;
        ID3D11SamplerState*         PSSampler;
        ID3D11PixelShader*          PS;
        ID3D11VertexShader*         VS;
        UINT                        PSInstancesCount, VSInstancesCount;
        ID3D11ClassInstance*        PSInstances[256], *VSInstances[256];   // 256 is max according to PSSetShader documentation
        D3D11_PRIMITIVE_TOPOLOGY    PrimitiveTopology;
        ID3D11Buffer*               IndexBuffer, *VertexBuffer, *VSConstantBuffer;
        UINT                        IndexBufferOffset, VertexBufferStride, VertexBufferOffset;
        DXGI_FORMAT                 IndexBufferFormat;
        ID3D11InputLayout*          InputLayout;
    };
    BACKUP_DX11_STATE old;
    old.ScissorRectsCount = old.ViewportsCount = D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE;
    ctx->RSGetScissorRects(&old.ScissorRectsCount, old.ScissorRects);
    ctx->RSGetViewports(&old.ViewportsCount, old.Viewports);
    ctx->RSGetState(&old.RS);
    ctx->OMGetBlendState(&old.BlendState, old.BlendFactor, &old.SampleMask);
    ctx->OMGetDepthStencilState(&old.DepthStencilState, &old.StencilRef);
    ctx->PSGetShaderResources(0, 1, &old.PSShaderResource);
    ctx->PSGetSamplers(0, 1, &old.PSSampler);
    old.PSInstancesCount = old.VSInstancesCount = 256;
    ctx->PSGetShader(&old.PS, old.PSInstances, &old.PSInstancesCount);
    ctx->VSGetShader(&old.VS, old.VSInstances, &old.VSInstancesCount);
    ctx->VSGetConstantBuffers(0, 1, &old.VSConstantBuffer);
    ctx->IAGetPrimitiveTopology(&old.PrimitiveTopology);
    ctx->IAGetIndexBuffer(&old.IndexBuffer, &old.IndexBufferFormat, &old.IndexBufferOffset);
    ctx->IAGetVertexBuffers(0, 1, &old.VertexBuffer, &old.VertexBufferStride, &old.VertexBufferOffset);
    ctx->IAGetInputLayout(&old.InputLayout);
    
            ID3D12Resource* pTexture = NULL;
        g_pd3dDevice->CreateCommittedResource(&props, D3D12_HEAP_FLAG_NONE, &desc,
            D3D12_RESOURCE_STATE_COPY_DEST, NULL, IID_PPV_ARGS(&pTexture));
    
    void    ImGui_Marmalade_InvalidateDeviceObjects()
{
    if (g_ClipboardText)
    {
        delete[] g_ClipboardText;
        g_ClipboardText = NULL;
    }
    }
    
        static BOOST_FORCEINLINE storage_type fetch_and(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        switch (order)
        {
        case memory_order_relaxed:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_AND8_RELAXED(&storage, v));
            break;
        case memory_order_consume:
        case memory_order_acquire:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_AND8_ACQUIRE(&storage, v));
            break;
        case memory_order_release:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_AND8_RELEASE(&storage, v));
            break;
        case memory_order_acq_rel:
        case memory_order_seq_cst:
        default:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_AND8(&storage, v));
            break;
        }
        return v;
    }
    
    struct storage128_t
{
    mars_boost::uint64_t data[2];
    }