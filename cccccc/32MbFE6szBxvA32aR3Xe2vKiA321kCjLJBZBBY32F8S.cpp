
        
        namespace base {
class FilePath;
}
    
      // Called by platform specific implementations of this class whenever a key
  // is struck. Only called for keys that have an observer registered.
  void NotifyKeyPressed(const ui::Accelerator& accelerator);
    
    // DesktopMediaList provides the list of desktop media source (screens, windows,
// tabs), and their thumbnails, to the desktop media picker dialog. It
// transparently updates the list in the background, and notifies the desktop
// media picker when something changes.
class DesktopMediaList {
 public:
  // Struct used to represent each entry in the list.
  struct Source {
    // Id of the source.
    content::DesktopMediaID id;
    }
    }
    
    #ifndef CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_
#define CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_
    
    #endif  // CHROME_COMMON_CHROME_CONSTANTS_H_

    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(Net);
};
    
      iter->BeforeFirst();
  row_ptr.push_back(0);
  while (iter->Next()) {
     auto batch = iter->Value();
    const size_t rbegin = row_ptr.size() - 1;
    for (size_t i = 0; i < batch.Size(); ++i) {
      row_ptr.push_back(batch[i].length + row_ptr.back());
    }
    index.resize(row_ptr.back());
    }
    
    /*!
 * \brief Macro to register gradient booster.
 *
 * \code
 * // example of registering a objective ndcg@k
 * XGBOOST_REGISTER_GBM(GBTree, 'gbtree')
 * .describe('Boosting tree ensembles.')
 * .set_body([]() {
 *     return new GradientBooster<TStats>();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_GBM(UniqueId, Name)                            \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::GradientBoosterReg &          \
  __make_ ## GradientBoosterReg ## _ ## UniqueId ## __ =                \
      ::dmlc::Registry< ::xgboost::GradientBoosterReg>::Get()->__REGISTER__(Name)
    
      virtual void PredictInteractionContributions(DMatrix* dmat,
                                   std::vector<bst_float>* out_contribs,
                                   const gbm::GBTreeModel& model,
                                   unsigned ntree_limit = 0,
                                   bool approximate = false) = 0;
    
        for (size_t i = 0; i < page.data.size(); ++i) {
      bst_uint idx = page.data[i].index - min_index_;
      CHECK_LE(idx, static_cast<bst_uint>(std::numeric_limits<StorageIndex>::max()))
          << 'The storage index is chosen to limited to smaller equal than '
          << std::numeric_limits<StorageIndex>::max()
          << 'min_index=' << min_index_;
      index_.data[i] = static_cast<StorageIndex>(idx);
      value_.data[i] = page.data[i].fvalue;
    }
    
    
    {   private:
    // allow SimpleDMatrix to access it.
    friend class SimpleDMatrix;
    // column sparse page
    std::unique_ptr<SparsePage> column_page_;
    // data pointer
    size_t data_{0};
    // Is column sorted?
    bool sorted_{false};
  };