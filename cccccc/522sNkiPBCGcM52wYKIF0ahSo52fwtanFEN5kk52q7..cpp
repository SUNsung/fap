
        
        #ifndef CHROME_BROWSER_UI_VIEWS_FRAME_GLOBAL_MENU_BAR_REGISTRAR_X11_H_
#define CHROME_BROWSER_UI_VIEWS_FRAME_GLOBAL_MENU_BAR_REGISTRAR_X11_H_
    
    Dictionary::Dictionary(const Dictionary& other) = default;
    
    napi_value Print(napi_env env, napi_callback_info info) {
  size_t argc = 1;
  napi_value args[1];
  napi_status status;
    }
    
    template <typename T, typename Enable = void>
struct Converter {};
    
    
    {
    {    using Indices = typename IndicesGenerator<sizeof...(ArgTypes)>::type;
    Invoker<Indices, ArgTypes...> invoker(&args, holder->flags);
    if (invoker.IsOK())
      invoker.DispatchToCallback(holder->callback);
  }
};
    
    #endif  // NATIVE_MATE_NATIVE_MATE_HANDLE_H_

    
      RefCountedPersistent(v8::Isolate* isolate, v8::Local<v8::Value> handle)
      : ScopedPersistent<T>(isolate, handle) {}
    
      static v8::Local<v8::FunctionTemplate> GetConstructor(v8::Isolate* isolate) {
    // Fill the object template.
    auto* data = gin::PerIsolateData::From(isolate);
    auto templ = data->GetFunctionTemplate(&kWrapperInfo);
    if (templ.IsEmpty()) {
      templ = v8::FunctionTemplate::New(isolate);
      templ->InstanceTemplate()->SetInternalFieldCount(1);
      T::BuildPrototype(isolate, templ);
      data->SetFunctionTemplate(&kWrapperInfo, templ);
    }
    return templ;
  }
    
    // Read a symbolic link, return empty string if given path is not a symbol link.
base::FilePath ReadLink(const base::FilePath& path) {
  base::FilePath target;
  if (!base::ReadSymbolicLink(path, &target)) {
    // The only errno that should occur is ENOENT.
    if (errno != 0 && errno != ENOENT)
      PLOG(ERROR) << 'readlink(' << path.value() << ') failed';
  }
  return target;
}
    
      std::vector<std::string> flash_version_numbers = base::SplitString(
      version, '.', base::TRIM_WHITESPACE, base::SPLIT_WANT_NONEMPTY);
  if (flash_version_numbers.empty())
    flash_version_numbers.push_back('11');
  // |SplitString()| puts in an empty string given an empty string. :(
  else if (flash_version_numbers[0].empty())
    flash_version_numbers[0] = '11';
  if (flash_version_numbers.size() < 2)
    flash_version_numbers.push_back('2');
  if (flash_version_numbers.size() < 3)
    flash_version_numbers.push_back('999');
  if (flash_version_numbers.size() < 4)
    flash_version_numbers.push_back('999');
  // E.g., 'Shockwave Flash 10.2 r154':
  plugin.description = plugin.name + ' ' + flash_version_numbers[0] + '.' +
                       flash_version_numbers[1] + ' r' +
                       flash_version_numbers[2];
  plugin.version = base::JoinString(flash_version_numbers, '.');
  content::WebPluginMimeType swf_mime_type(content::kFlashPluginSwfMimeType,
                                           content::kFlashPluginSwfExtension,
                                           content::kFlashPluginSwfDescription);
  plugin.mime_types.push_back(swf_mime_type);
  content::WebPluginMimeType spl_mime_type(content::kFlashPluginSplMimeType,
                                           content::kFlashPluginSplExtension,
                                           content::kFlashPluginSplDescription);
  plugin.mime_types.push_back(spl_mime_type);
    
        if (dataset.message_name() == 'benchmarks.proto3.GoogleMessage1') {
      message = new benchmarks::proto3::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage1') {
      message = new benchmarks::proto2::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage2') {
      message = new benchmarks::proto2::GoogleMessage2;
    } else if (dataset.message_name() ==
        'benchmarks.google_message3.GoogleMessage3') {
      message = new benchmarks::google_message3::GoogleMessage3;
    } else if (dataset.message_name() ==
        'benchmarks.google_message4.GoogleMessage4') {
      message = new benchmarks::google_message4::GoogleMessage4;
    } else {
      std::cerr << 'Unknown message type: ' << dataset.message_name();
      exit(1);
    }
    
    // Iterates though all people in the AddressBook and prints info about them.
void ListPeople(const tutorial::AddressBook& address_book) {
  for (int i = 0; i < address_book.people_size(); i++) {
    const tutorial::Person& person = address_book.people(i);
    }
    }
    
    // Fixxht overview.
// Premise: Initial estimate of x-height is adequate most of the time, but
// occasionally it is incorrect. Most notable causes of failure are:
// 1. Small caps, where the top of the caps is the same as the body text
// xheight. For small caps words the xheight needs to be reduced to correctly
// recognize the caps in the small caps word.
// 2. All xheight lines, such as summer. Here the initial estimate will have
// guessed that the blob tops are caps and will have placed the xheight too low.
// 3. Noise/logos beside words, or changes in font size on a line. Such
// things can blow the statistics and cause an incorrect estimate.
// 4. Incorrect baseline. Can happen when 2 columns are incorrectly merged.
// In this case the x-height is often still correct.
//
// Algorithm.
// Compare the vertical position (top only) of alphnumerics in a word with
// the range of positions in training data (in the unicharset).
// See CountMisfitTops. If any characters disagree sufficiently with the
// initial xheight estimate, then recalculate the xheight, re-run OCR on
// the word, and if the number of vertical misfits goes down, along with
// either the word rating or certainty, then keep the new xheight.
// The new xheight is calculated as follows:ComputeCompatibleXHeight
// For each alphanumeric character that has a vertically misplaced top
// (a misfit), yet its bottom is within the acceptable range (ie it is not
// likely a sub-or super-script) calculate the range of acceptable xheight
// positions from its range of tops, and give each value in the range a
// number of votes equal to the distance of its top from its acceptance range.
// The x-height position with the median of the votes becomes the new
// x-height. This assumes that most characters will be correctly recognized
// even if the x-height is incorrect. This is not a terrible assumption, but
// it is not great. An improvement would be to use a classifier that does
// not care about vertical position or scaling at all.
// Separately collect stats on shifted baselines and apply the same logic to
// computing a best-fit shift to fix the error. If the baseline needs to be
// shifted, but the x-height is OK, returns the original x-height along with
// the baseline shift to indicate that recognition needs to re-run.
    
    // Helper method to convert an orientation index to its value in degrees.
// The value represents the amount of clockwise rotation in degrees that must be
// applied for the text to be upright (readable).
TESS_API int OrientationIdToValue(const int& id);
    
      // Clean up the bounding boxes from the polygonal approximation by
  // expanding slightly, then clipping to the blobs from the original_word
  // that overlap. If not null, the block provides the inverse rotation.
  void ClipToOriginalWord(const BLOCK* block, WERD* original_word);
    
      // Adds the given pix to the set of pages in the PDF file, with the given
  // caption added to the top.
  void AddPix(const Pix* pix, const char* caption) {
    int depth = pixGetDepth(const_cast<Pix*>(pix));
    int color = depth < 8 ? 1 : (depth > 8 ? 0x00ff0000 : 0x80);
    Pix* pix_debug = pixAddSingleTextblock(
        const_cast<Pix*>(pix), fonts_, caption, color, L_ADD_BELOW, nullptr);
    pixaAddPix(pixa_, pix_debug, L_INSERT);
  }
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
      // Fills in the x-height range accepted by the given unichar_id in blob
  // coordinates, given its bounding box in the usual baseline-normalized
  // coordinates, with some initial crude x-height estimate (such as word
  // size) and this denoting the transformation that was used.
  // Also returns the amount the character must have shifted up or down.
  void XHeightRange(int unichar_id, const UNICHARSET& unicharset,
                    const TBOX& bbox,
                    float* min_xht,
                    float* max_xht,
                    float* yshift) const;
    
      // Similar to the above, but return the vector of unichar ids for which
  // the given unichar_id is an ambiguity (appears in the 'wrong' part of
  // some ambiguity pair).
  inline const UnicharIdVector *ReverseAmbigsForAdaption(
      UNICHAR_ID unichar_id) const {
    if (reverse_ambigs_for_adaption_.empty()) return nullptr;
    return reverse_ambigs_for_adaption_[unichar_id];
  }
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(nullptr) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
    }
    
    
    { private:
  // Data members are private to keep deletion of data_ encapsulated.
  Data* data_;
  Key key_;
};
// Specialization of KDPtrPair to provide operator< for sorting in increasing
// order.
template <typename Key, typename Data>
struct KDPtrPairInc : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairInc() : KDPtrPair<Key, Data>() {}
  KDPtrPairInc(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairInc(KDPtrPairInc& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairInc& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPtrPairInc<Key, Data>& other) const {
    return this->key() < other.key();
  }
};
// Specialization of KDPtrPair to provide operator< for sorting in decreasing
// order.
template <typename Key, typename Data>
struct KDPtrPairDec : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairDec() : KDPtrPair<Key, Data>() {}
  KDPtrPairDec(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairDec(KDPtrPairDec& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairDec& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPtrPairDec<Key, Data>& other) const {
    return this->key() > other.key();
  }
};
    
            const size_t m_frequency;
        const size_t m_firstN;
    
        /*virtual*/ void Value::CopyFrom(const Value& source)
    {
        // TODO: Check if this is a derived type and throw an exception in that case
        Data()->CopyFrom(*source.Data());
        if ((Mask() == nullptr) && (source.Mask() != nullptr))
            InvalidArgument('Value::CopyFrom: Invalid source object; Cannot copy a Value with a mask into 'this' Value which does not have a mask.');
    }
    
            // 'initializer' must be a random initializer
        auto initializerType = initializer[InitializerTypeAttributeName].Value<std::wstring>();
        if ((initializerType != Microsoft::MSR::CNTK::UniformInitializerTypeName) &&
            (initializerType != Microsoft::MSR::CNTK::BilinearInitializerTypeName) &&
            (initializerType != Microsoft::MSR::CNTK::ConstantInitializerTypeName))
        {
            int oldOutputRank = initializer[OutputRankAttributeName].Value<int>();
            int oldFilterRank = initializer[FilterRankAttributeName].Value<int>();
    }
    
    // destructor - cleanup temp files, etc.
DataReader::~DataReader()
{
    // free up resources
    for (size_t i = 0; i < m_ioNames.size(); i++)
        m_dataReaders[m_ioNames[i]]->Destroy();
}
    
    // Rand based on Mersenne Twister.
// We use our own distribution in order to match baselines between different operating systems,
// instead of using std::shuffle which uses unitform_distribution internally.
// TODO: Switching to Boost would eliminate this problem.
template <typename TVector>
inline void RandomShuffleMT(TVector& v, size_t begin, size_t end, std::mt19937_64& rng)
{
    for(size_t i = begin; i < end; ++i)
    {
        const size_t randomLocation = RandMT(i, end, rng);
        std::swap(v[i], v[randomLocation]);
    }
}
    
    // -----------------------------------------------------------------------
// EpochAccumulatorNode calculates mean values of all samples used in forward pass.
// -----------------------------------------------------------------------
    
            // For windowed LSTM, CNTK is providing data with the second dimension being time-like and the third dimension
        // being minibatch index. CuDnn expects the second dimension to be minibatch index, and the third dimension
        // to be time-like. This sequence of operations creates a transposed copy of the data in m_transposedInput
        // and shapeXT
    
    
    {  auto blo = query.options.find('blacklist');
  if (blo != query.options.end() && blo->second == false) {
    // The schedule requested that we do not blacklist this query.
    return true;
  }
  return false;
}
    
        if (q.value.HasMember('platform') && q.value['platform'].IsString()) {
      if (!checkPlatform(q.value['platform'].GetString())) {
        continue;
      }
    }
    
    #include <osquery/utils/json/json.h>
    
      // This funcion should completely destroy db, so after next open
  // db should be fresh new
  // Implementation can expect that db is closed before
  // calling destroyDB and should crash/fail in case when db is still open
  virtual ExpectedSuccess<DatabaseError> destroyDB() = 0;
    
    RocksdbMigration::RocksdbMigration(const std::string& path) {
  auto boost_path = fs::path(path).make_preferred();
  source_path_ = boost_path.string();
}
    
      if (!FLAGS_ephemeral) {
    // Create a process mutex around the daemon.
    auto pid_status = createPidFile();
    if (!pid_status.ok()) {
      LOG(ERROR) << binary_ << ' initialize failed: ' << pid_status.toString();
      shutdown(EXIT_FAILURE);
    }
  }
    
    #include <string>
    
      /// Given a query, return the list of scanned tables.
  virtual Status getQueryTables(const std::string& query,
                                std::vector<std::string>& tables) const = 0;