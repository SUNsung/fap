
        
        int16_t word_blob_quality(WERD_RES *word, ROW *row);
void reject_whole_page(PAGE_RES_IT &page_res_it);
    
    class OrientationDetector {
 public:
  OrientationDetector(const GenericVector<int>* allowed_scripts,
                      OSResults* results);
  bool detect_blob(BLOB_CHOICE_LIST* scores);
  int get_orientation();
 private:
  OSResults* osr_;
  const GenericVector<int>* allowed_scripts_;
};
    
    // Creates a box file string from a unichar string, TBOX and page number.
void MakeBoxFileStr(const char* unichar_str, const TBOX& box, int page_num,
                    STRING* box_str);
    
    
    { private:
  double total_weight;         // no of elements or sum of weights.
  double sigx;                 // sum of x
  double sigy;                 // sum of y
  double sigxx;                // sum x squared
  double sigxy;                // sum of xy
  double sigyy;                // sum y squared
};
    
    STRING ParagraphModel::ToString() const {
  char buffer[200];
  const STRING &alignment = ParagraphJustificationToString(justification_);
  snprintf(buffer, sizeof(buffer),
           'margin: %d, first_indent: %d, body_indent: %d, alignment: %s',
           margin_, first_indent_, body_indent_, alignment.string());
  return STRING(buffer);
}

    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
    
    void FilterTrailingMetadata(grpc_metadata_batch* b, uint64_t* elapsed_time) {
  if (b->idx.named.grpc_server_stats_bin != nullptr) {
    ServerStatsDeserialize(
        reinterpret_cast<const char*>(GRPC_SLICE_START_PTR(
            GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md))),
        GRPC_SLICE_LENGTH(GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md)),
        elapsed_time);
    grpc_metadata_batch_remove(b, b->idx.named.grpc_server_stats_bin);
  }
}
    
    namespace grpc {
    }
    
    // Reads the CPU stats (in a pair of busy and total numbers) from the system.
// The units of the stats should be the same.
std::pair<uint64_t, uint64_t> GetCpuStatsImpl();
    
    // A thread pool interface for running callbacks.
class ThreadPoolInterface {
 public:
  virtual ~ThreadPoolInterface() {}
    }
    
    TEST(DenseColumnWithMissing, Test) {
  auto dmat = CreateDMatrix(100, 1, 0.5);
  GHistIndexMatrix gmat;
  gmat.Init((*dmat).get(), 256);
  ColumnMatrix column_matrix;
  column_matrix.Init(gmat, 0.2);
  auto col = column_matrix.GetColumn(0);
  for (auto i = 0ull; i < col.Size(); i++) {
    if (col.IsMissing(i)) continue;
    EXPECT_EQ(gmat.index[gmat.row_ptr[col.GetRowIdx(i)]],
              col.GetGlobalBinIdx(i));
  }
  delete dmat;
}
    
    namespace xgboost {
/*!
 * \brief interface of evaluation metric used to evaluate model performance.
 *  This has nothing to do with training, but merely act as evaluation purpose.
 */
class Metric {
 protected:
  LearnerTrainParam const* tparam_;
    }
    }
    
    
    {#define XGBOOST_REGISTER_PREDICTOR(UniqueId, Name)      \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::PredictorReg& \
      __make_##PredictorReg##_##UniqueId##__ =          \
          ::dmlc::Registry<::xgboost::PredictorReg>::Get()->__REGISTER__(Name)
}  // namespace xgboost

    
    UBool ScriptSet::contains(const ScriptSet &other) const {
    ScriptSet t(*this);
    t.intersect(other);
    return (t == other);
}
    
    U_NAMESPACE_BEGIN
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};
    
    #endif

    
    U_NAMESPACE_END
    
        // We don't need to check that the row count is >= 1, since all 2d arrays have at
    // least one row
    fNumberFormat = NumberFormat::createInstance(locale, status);
    if (fNumberFormat != NULL && U_SUCCESS(status))
    {
        fixNumberFormatForDates(*fNumberFormat);
        //fNumberFormat->setLenient(TRUE); // Java uses a custom DateNumberFormat to format/parse
    }
    
    /**
 * UnicodeFunctor API.  Cast 'this' to a UnicodeReplacer* pointer
 * and return the pointer.
 */
UnicodeReplacer* StringMatcher::toReplacer() const {
  StringMatcher  *nonconst_this = const_cast<StringMatcher *>(this);
  UnicodeReplacer *nonconst_base = static_cast<UnicodeReplacer *>(nonconst_this);
  
  return nonconst_base;
}
    
        IMGUI_API bool BuildFontAtlas(ImFontAtlas* atlas, unsigned int extra_flags = 0);
    
        {
        D3D12_COMMAND_QUEUE_DESC desc = {};
        desc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
        desc.Flags = D3D12_COMMAND_QUEUE_FLAG_NONE;
        desc.NodeMask = 1;
        if (g_pd3dDevice->CreateCommandQueue(&desc, IID_PPV_ARGS(&g_pd3dCommandQueue)) != S_OK)
            return false;
    }
    
            ID3D12GraphicsCommandList* cmdList = NULL;
        hr = g_pd3dDevice->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, cmdAlloc, NULL, IID_PPV_ARGS(&cmdList));
        IM_ASSERT(SUCCEEDED(hr));
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'LPDIRECT3DTEXTURE9' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Renderer: Support for large meshes (64k+ vertices) with 16-bits indices.