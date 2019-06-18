
        
        bool CacheImpl::remove(const void *Key) {
  int Ret = cache_remove(static_cast<cache_t*>(Impl), const_cast<void*>(Key));
  return Ret == 0;
}
    
      Begin -= needed;
    
    /// Maintain a set of known CF types.
static bool isKnownCFTypeName(StringRef name) {
  return std::binary_search(KnownCFTypes, KnownCFTypes + NumKnownCFTypes,
                            name, SortByLengthComparator());
}
    
    // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    
    {}
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
    
    {}
    
    
    {  gfx::Image originImage;
  nw::Package* package = nw::InitNWPackage();
  if (nw::GetImage(package, base::FilePath::FromUTF8Unsafe(icon), &originImage)) {
    const gfx::ImageSkia* originImageSkia = originImage.ToImageSkia();
    gfx::ImageSkia resizedImageSkia = gfx::ImageSkiaOperations::CreateResizedImage(*originImageSkia,
                                                                                   skia::ImageOperations::RESIZE_GOOD,
                                                                                   gfx::Size(kIconWidth, kIconHeight));
    icon_ = gfx::Image(resizedImageSkia);
  }
}
    
      GURL manifest_url(manifest);
  scoped_refptr<CannedBrowsingDataAppCacheHelper> helper(
                                                         new CannedBrowsingDataAppCacheHelper(content::BrowserContext::GetDefaultStoragePartition(context_)
                                                                                              ->GetAppCacheService()));
    
    #include 'src/cpp/ext/filters/census/context.h'
    
    
    {}  // namespace grpc
    
    
    {}  // namespace grpc
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetString(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    #include <grpc/impl/codegen/port_platform.h>
    
    std::pair<uint64_t, uint64_t> GetCpuStatsImpl() {
  uint64_t busy = 0, total = 0;
  FILETIME idle, kernel, user;
  if (GetSystemTimes(&idle, &kernel, &user) != 0) {
    total = FiletimeToInt(kernel) + FiletimeToInt(user);
    busy = total - FiletimeToInt(idle);
  }
  return std::make_pair(busy, total);
}
    
    #include 'src/proto/grpc/core/stats.pb.h'
    
    
    {}  // namespace grpc

    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
      ASSERT_EQ(page.offset.HostVector().size(), offset.size());
  ASSERT_EQ(page.data.HostVector().size(), data.size());
  for (size_t i = 0; i < offset.size(); ++i) {
    ASSERT_EQ(page.offset.HostVector()[i], offset[i]);
  }
  for (size_t i = 0; i < data.size(); ++i) {
    ASSERT_EQ(page.data.HostVector()[i].index, data[i].index);
  }
    
      // take apart small, sparse groups, as it won't help speed
  {
    std::vector<std::vector<unsigned>> ret;
    for (const auto& group : groups) {
      if (group.size() <= 1 || group.size() >= 5) {
        ret.push_back(group);  // keep singleton groups and large (5+) groups
      } else {
        size_t nnz = 0;
        for (auto fid : group) {
          nnz += feature_nnz[fid];
        }
        double nnz_rate = static_cast<double>(nnz) / nrow;
        // take apart small sparse group, due it will not gain on speed
        if (nnz_rate <= param.sparse_threshold) {
          for (auto fid : group) {
            ret.emplace_back();
            ret.back().push_back(fid);
          }
        } else {
          ret.push_back(group);
        }
      }
    }
    groups = std::move(ret);
  }
    
      virtual void PredictBatch(DMatrix* dmat, HostDeviceVector<bst_float>* out_preds,
                            const gbm::GBTreeModel& model, int tree_begin,
                            unsigned ntree_limit = 0) = 0;
    
    namespace xgboost {
/*!
 * \brief interface of tree update module, that performs update of a tree.
 */
class TreeUpdater {
 protected:
  LearnerTrainParam const* tparam_;
    }
    }
    
      size_t Size() const {
    GpuIdType size = *devices_.end() - *devices_.begin();
    GpuIdType res = size < 0 ? 0 : size;
    return static_cast<size_t>(res);
  }
    
    /**
 * \brief A random (with replacement) coordinate selector.
 * \note Its randomness is controllable by setting a random seed.
 */
class RandomFeatureSelector : public FeatureSelector {
 public:
  int NextFeature(int iteration, const gbm::GBLinearModel &model,
                  int group_idx, const std::vector<GradientPair> &gpair,
                  DMatrix *p_fmat, float alpha, float lambda) override {
    return common::GlobalRandom()() % model.param.num_feature;
  }
};
    
    
    {
    {// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_shotgun);
DMLC_REGISTRY_LINK_TAG(updater_coordinate);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu_coordinate);
#endif  // XGBOOST_USE_CUDA
}  // namespace linear
}  // namespace xgboost

    
        UBool      test(UScriptCode script, UErrorCode &status) const;
    ScriptSet &Union(const ScriptSet &other);
    ScriptSet &set(UScriptCode script, UErrorCode &status);
    ScriptSet &reset(UScriptCode script, UErrorCode &status);
    ScriptSet &intersect(const ScriptSet &other);
    ScriptSet &intersect(UScriptCode script, UErrorCode &status);
    UBool      intersects(const ScriptSet &other) const;  // Sets contain at least one script in commmon.
    UBool      contains(const ScriptSet &other) const;    // All set bits in other are also set in this.
    
    static void U_CALLCONV smpdtfmt_initSets(UErrorCode &status) {
    ucln_i18n_registerCleanup(UCLN_I18N_SMPDTFMT, smpdtfmt_cleanup);
    U_ASSERT(gStaticSets == NULL);
    gStaticSets = new SimpleDateFormatStaticSets(status);
    if (gStaticSets == NULL) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return;
    }
}
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
        /**
     * Sets U_ILLEGAL_ARGUMENT_ERROR if the keyword is not a plural form.
     *
     * @param keyword for example 'few' or 'other'
     * @return the plural form corresponding to the keyword
     */
    static Form fromString(const char *keyword, UErrorCode &errorCode) {
        return static_cast<Form>(indexFromString(keyword, errorCode));
    }
    
    /**
 * Union the set of all characters that may output by this object
 * into the given set.
 * @param toUnionTo the set into which to union the output characters
 */
void StringMatcher::addReplacementSetTo(UnicodeSet& /*toUnionTo*/) const {
    // The output of this replacer varies; it is the source text between
    // matchStart and matchLimit.  Since this varies depending on the
    // input text, we can't compute it here.  We can either do nothing
    // or we can add ALL characters to the set.  It's probably more useful
    // to do nothing.
}