
        
        IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Call_Static_Method,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
      virtual void Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh = nullptr);
  virtual void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result);
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
    void Clipboard::Call(const std::string& method,
                     const base::ListValue& arguments) {
  if (method == 'Set') {
    std::string text, type;
    arguments.GetString(0, &text);
    arguments.GetString(1, &type);
    SetText(text);
  } else if (method == 'Clear') {
    Clear();
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    
    {} // namespace nwapi

    
    class EventListener : public Base {
  std::map<int, BaseEvent*> listerners_;
    }
    
    void Menu::Remove(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.erase(begin+pos);
  gtk_container_remove(GTK_CONTAINER(menu_), menu_item->menu_item_);
}
    
    class NwShellOpenExternalFunction : public NWSyncExtensionFunction {
 public:
  NwShellOpenExternalFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    
    {
    {
    {// utility function to round an integer up to a multiple of size
size_t RoundUp(size_t value, size_t size);
// HIGH and LOW DWORD functions
DWORD HIDWORD(size_t size);
DWORD LODWORD(size_t size);
} } }

    
            // allow to change current directory, for easier debugging
        wstring cdDescriptor = L'currentDirectory=';
        if (_wcsnicmp(cdDescriptor.c_str(), str.c_str(), cdDescriptor.length()) == 0)
        {
            wstring dir = str.substr(cdDescriptor.length());
            if (_wchdir(dir.c_str()) != 0)
                InvalidArgument('Failed to set the current directory to '%ls'', dir.c_str());
            fprintf(stderr, 'Changed current directory to %ls\n', dir.c_str());
        }
    
        // helper to return a time-stamp prefix if time-stamping enabled, complete with ': ' at its end
    static std::wstring GetTimeStampPrefix()
    {
        char mbstr[30];
        return GetTimestampingFlag() ? msra::strfun::wstrprintf(L'%s: ', Timestamp(mbstr)) : L'';
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
      /**
   * \fn  virtual void Predictor::PredictLeaf(DMatrix* dmat,
   * std::vector<bst_float>* out_preds, const gbm::GBTreeModel& model, unsigned
   * ntree_limit = 0) = 0;
   *
   * \brief predict the leaf index of each tree, the output will be nsample *
   * ntree vector this is only valid in gbtree predictor.
   *
   * \param [in,out]  dmat        The input feature matrix.
   * \param [in,out]  out_preds   The output preds.
   * \param           model       Model to make predictions from.
   * \param           ntree_limit (Optional) The ntree limit.
   */
    
      bool Read(SparsePage* page,
            dmlc::SeekStream* fi,
            const std::vector<bst_uint>& sorted_index_set) override {
    if (!fi->Read(&disk_offset_)) return false;
    // setup the offset
    page->offset.clear();
    page->offset.push_back(0);
    for (unsigned int fid : sorted_index_set) {
      CHECK_LT(fid + 1, disk_offset_.size());
      size_t size = disk_offset_[fid + 1] - disk_offset_[fid];
      page->offset.push_back(page->offset.back() + size);
    }
    page->data.resize(page->offset.back());
    // read in the data
    size_t begin = fi->Tell();
    size_t curr_offset = 0;
    for (size_t i = 0; i < sorted_index_set.size();) {
      bst_uint fid = sorted_index_set[i];
      if (disk_offset_[fid] != curr_offset) {
        CHECK_GT(disk_offset_[fid], curr_offset);
        fi->Seek(begin + disk_offset_[fid] * sizeof(Entry));
        curr_offset = disk_offset_[fid];
      }
      size_t j, size_to_read = 0;
      for (j = i; j < sorted_index_set.size(); ++j) {
        if (disk_offset_[sorted_index_set[j]] == disk_offset_[fid] + size_to_read) {
          size_to_read += page->offset[j + 1] - page->offset[j];
        } else {
          break;
        }
      }
    }
    }
    
    
    {  // read in the cache files.
  for (size_t i = 0; i < cache_shards.size(); ++i) {
    std::string name_row = cache_shards[i] + '.row.page';
    files_[i].reset(dmlc::SeekStream::CreateForRead(name_row.c_str()));
    dmlc::SeekStream* fi = files_[i].get();
    std::string format;
    CHECK(fi->Read(&format)) << 'Invalid page format';
    formats_[i].reset(SparsePageFormat::Create(format));
    SparsePageFormat* fmt = formats_[i].get();
    size_t fbegin = fi->Tell();
    prefetchers_[i].reset(new dmlc::ThreadedIter<SparsePage>(4));
    prefetchers_[i]->Init([fi, fmt] (SparsePage** dptr) {
        if (*dptr == nullptr) {
          *dptr = new SparsePage();
        }
        return fmt->Read(*dptr, fi);
      }, [fi, fbegin] () { fi->Seek(fbegin); });
  }
}