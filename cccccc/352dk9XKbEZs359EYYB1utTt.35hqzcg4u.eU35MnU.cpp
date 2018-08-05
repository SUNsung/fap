
        
        #endif // SWIFT_INDEX_INDEX_H

    
    #endif

    
    
    {}  // namespace nw

    
    #endif  // CONTENT_NW_SRC_API_BINDINGS_COMMON_H_

    
    #endif  // CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_

    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
    class NwClipboardClearSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardClearSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    bool NwObjCreateFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::DictionaryValue* options = nullptr;
  int id = 0;
  std::string type;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetDictionary(2, &options));
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethodAsync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodAsyncFunction);
};
    
    class UnicharcompressTest : public ::testing::Test {
 protected:
  // Loads and compresses the given unicharset.
  void LoadUnicharset(const string& unicharset_name) {
    string radical_stroke_file =
        file::JoinPath(FLAGS_test_srcdir,
                       'langdata/radical-stroke.txt');
    string unicharset_file = file::JoinPath(
        FLAGS_test_srcdir, 'testdata',
        unicharset_name);
    string uni_data;
    CHECK_OK(file::GetContents(unicharset_file, &uni_data, file::Defaults()));
    string radical_data;
    CHECK_OK(file::GetContents(radical_stroke_file, &radical_data,
                               file::Defaults()));
    CHECK(
        unicharset_.load_from_inmemory_file(uni_data.data(), uni_data.size()));
    STRING radical_str(radical_data.c_str());
    null_char_ =
        unicharset_.has_special_codes() ? UNICHAR_BROKEN : unicharset_.size();
    compressed_.ComputeEncoding(unicharset_, null_char_, &radical_str);
    // Get the encoding of the null char.
    RecodedCharID code;
    compressed_.EncodeUnichar(null_char_, &code);
    encoded_null_char_ = code(0);
    string output_name = file::JoinPath(
        FLAGS_test_tmpdir, absl::StrCat(unicharset_name, '.encoding.txt'));
    STRING encoding = compressed_.GetEncodingAsString(unicharset_);
    string encoding_str(&encoding[0], encoding.size());
    CHECK_OK(file::SetContents(output_name, encoding_str, file::Defaults()));
    LOG(INFO) << 'Wrote encoding to:' << output_name;
  }
  // Serializes and de-serializes compressed_ over itself.
  void SerializeAndUndo() {
    GenericVector<char> data;
    TFile wfp;
    wfp.OpenWrite(&data);
    EXPECT_TRUE(compressed_.Serialize(&wfp));
    TFile rfp;
    rfp.Open(&data[0], data.size());
    EXPECT_TRUE(compressed_.DeSerialize(&rfp));
  }
  // Returns true if the lang is in CJK.
  bool IsCJKLang(const string& lang) {
    return lang == 'chi_sim' || lang == 'chi_tra' || lang == 'kor' ||
           lang == 'jpn';
  }
  // Returns true if the lang is Indic.
  bool IsIndicLang(const string& lang) {
    return lang == 'asm' || lang == 'ben' || lang == 'bih' || lang == 'hin' ||
           lang == 'mar' || lang == 'nep' || lang == 'san' || lang == 'bod' ||
           lang == 'dzo' || lang == 'guj' || lang == 'kan' || lang == 'mal' ||
           lang == 'ori' || lang == 'pan' || lang == 'sin' || lang == 'tam' ||
           lang == 'tel';
  }
    }
    
    
    {  // Does this paragraph begin with a drop cap?
  bool has_drop_cap;
};
    
    template <bool del, class P1, class P2, class A1, class A2, class A3, class A4>
class _TessFunctionResultCallback_2_4<del, void, P1, P2, A1, A2, A3, A4> : public TessCallback4<A1,A2,A3,A4> {
 public:
  typedef TessCallback4<A1,A2,A3,A4> base;
  typedef void (*FunctionSignature)(P1,P2,A1,A2,A3,A4);
    }
    
     private:
  // Helper returns the current UnicharAndFont shape_entry.
  const UnicharAndFonts* GetShapeEntry() const;
    
      // Returns a mutable pointer to the sample with the given index.
  TrainingSample* mutable_sample(int index) {
    return samples_[index];
  }
  // Gets ownership of the sample with the given index, removing it from this.
  TrainingSample* extract_sample(int index) {
    TrainingSample* sample = samples_[index];
    samples_[index] = nullptr;
    return sample;
  }
    
    // The CCNonTextDetect class contains grid-based operations on blobs to create
// a full-resolution image mask analogous yet complementary to
// pixGenHalftoneMask as it is better at line-drawings, graphs and charts.
class CCNonTextDetect : public BlobGrid {
 public:
  CCNonTextDetect(int gridsize, const ICOORD& bleft, const ICOORD& tright);
  virtual ~CCNonTextDetect();
    }
    
      // Hoovers up all un-owned blobs and deletes them.
  // The rest get released from the block so the ColPartitions can pass
  // ownership to the output blocks.
  void ReleaseBlobsAndCleanupUnused(TO_BLOCK* block);
  // Splits partitions that cross columns where they have nothing in the gap.
  void GridSplitPartitions();
  // Merges partitions where there is vertical overlap, within a single column,
  // and the horizontal gap is small enough.
  void GridMergePartitions();
  // Inserts remaining noise blobs into the most applicable partition if any.
  // If there is no applicable partition, then the blobs are deleted.
  void InsertRemainingNoise(TO_BLOCK* block);
  // Remove partitions that come from horizontal lines that look like
  // underlines, but are not part of a table.
  void GridRemoveUnderlinePartitions();
  // Add horizontal line separators as partitions.
  void GridInsertHLinePartitions();
  // Add vertical line separators as partitions.
  void GridInsertVLinePartitions();
  // For every ColPartition in the grid, sets its type based on position
  // in the columns.
  void SetPartitionTypes();
  // Only images remain with multiple types in a run of partners.
  // Sets the type of all in the group to the maximum of the group.
  void SmoothPartnerRuns();