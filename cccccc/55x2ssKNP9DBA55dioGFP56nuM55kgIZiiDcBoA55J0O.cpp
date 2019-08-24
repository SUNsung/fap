
        
        bool ParseInt32(const std::string& str, int32_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtol will not set errno if valid
    long int n = strtol(str.c_str(), &endp, 10);
    if(out) *out = (int32_t)n;
    // Note that strtol returns a *long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int32_t*. On 64-bit
    // platforms the size of these types may be different.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int32_t>::min() &&
        n <= std::numeric_limits<int32_t>::max();
}
    
    /** Encode a Bech32 string. Returns the empty string in case of failure. */
std::string Encode(const std::string& hrp, const std::vector<uint8_t>& values);
    
      // When user keys are different, but correctly ordered
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('hello', 200, kTypeValue)));
    
    // Return the name of the old info log file for 'dbname'.
std::string OldInfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG.old';
}
    
        // use strings to print preset names in the perf test results:
    String preset_string = get<0>(params);
    int preset = DISOpticalFlow::PRESET_FAST;
    if (preset_string == 'PRESET_ULTRAFAST')
        preset = DISOpticalFlow::PRESET_ULTRAFAST;
    else if (preset_string == 'PRESET_FAST')
        preset = DISOpticalFlow::PRESET_FAST;
    else if (preset_string == 'PRESET_MEDIUM')
        preset = DISOpticalFlow::PRESET_MEDIUM;
    Size sz = get<1>(params);
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    #ifndef IMFGENERICOUTPUTFILE_H_
#define IMFGENERICOUTPUTFILE_H_
    
    template <class T>
T &
Header::typedAttribute (const char name[])
{
    Attribute *attr = &(*this)[name];
    T *tattr = dynamic_cast <T*> (attr);
    }
    
        *im = 0;
    
     
        IMF_EXPORT
        void                rawPixelDataToBuffer (int scanLine,
                                                  char *pixelData,
                                                  int &pixelDataSize) const;
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
    // ReadNextBox factors out the code to interpret a line of a box
// file so that applybox and unicharset_extractor interpret the same way.
// This function returns the next valid box file utf8 string and coords
// and returns true, or false on eof (and closes the file).
// It ignores the utf8 file signature ByteOrderMark (U+FEFF=EF BB BF), checks
// for valid utf-8 and allows space or tab between fields.
// utf8_str is set with the unichar string, and bounding box with the box.
// If there are page numbers in the file, it reads them all.
bool ReadNextBox(int *line_number, FILE* box_file,
                 STRING* utf8_str, TBOX* bounding_box);
// As ReadNextBox above, but get a specific page number. (0-based)
// Use -1 to read any page number. Files without page number all
// read as if they are page 0.
bool ReadNextBox(int target_page, int *line_number, FILE* box_file,
                 STRING* utf8_str, TBOX* bounding_box);
    
     private:
  // Simple struct to hold an ICOORD point and a halfwidth representing half
  // the 'width' (supposedly approximately parallel to the direction of the
  // line) of each point, such that distant points can be discarded when they
  // overlap nearer points. (Think i dot and other diacritics or noise.)
  struct PointWidth {
    PointWidth() : pt(ICOORD(0, 0)), halfwidth(0) {}
    PointWidth(const ICOORD& pt0, int halfwidth0)
      : pt(pt0), halfwidth(halfwidth0) {}
    }
    
    // A CostFunc that takes the variance of step into account in the cost.
int64_t DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == nullptr || prev == this) {
    UpdateIfBetter(0, 1, nullptr, 0, 0, 0);
    return 0;
  }
    }
    
    #endif  // TESSERACT_CCMAIN_OTSUTHR_H_

    
    
    {  // WARNING! Keep data as the first element! KDPairInc and KDPairDec depend
  // on the order of these elements so they can downcast pointers appropriately
  // for use by GenericHeap::Reshuffle.
  Data data;
  Key key;
};
// Specialization of KDPair to provide operator< for sorting in increasing order
// and recasting of data pointers for use with DoublePtr.
template <typename Key, typename Data>
struct KDPairInc : public KDPair<Key, Data> {
  KDPairInc() = default;
  KDPairInc(Key k, Data d) : KDPair<Key, Data>(k, d) {}
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPairInc<Key, Data>& other) const {
    return this->key < other.key;
  }
  // Returns the input Data pointer recast to a KDPairInc pointer.
  // Just casts a pointer to the first element to a pointer to the whole struct.
  static KDPairInc* RecastDataPointer(Data* data_ptr) {
    return reinterpret_cast<KDPairInc*>(data_ptr);
  }
};
// Specialization of KDPair to provide operator< for sorting in decreasing order
// and recasting of data pointers for use with DoublePtr.
template <typename Key, typename Data>
struct KDPairDec : public KDPair<Key, Data> {
  KDPairDec() = default;
  KDPairDec(Key k, Data d) : KDPair<Key, Data>(k, d) {}
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPairDec<Key, Data>& other) const {
    return this->key > other.key;
  }
  // Returns the input Data pointer recast to a KDPairDec pointer.
  // Just casts a pointer to the first element to a pointer to the whole struct.
  static KDPairDec* RecastDataPointer(Data* data_ptr) {
    return reinterpret_cast<KDPairDec*>(data_ptr);
  }
};
    
    
    { protected:
  // Outputs the integer formed by reversing the bits of the input integer. Only
  // the lowest num_bits_ bits of the input integer are reversed.
  int GetBinaryReversedInteger(int in_val) const {
    int bit_pos = num_bits_;
    int out_val = 0;
    while(bit_pos--) {
      // Set the value of the last bit.
      out_val |= (in_val & 0x1);
      if (bit_pos > 0) {
        // Left-shift output value to prepare for storing the next bit.
        out_val <<= 1;
      }
      // Right-shift input value to prepare for retrieving the next bit.
      in_val >>= 1;
    }
    return out_val;
  }
  int N_;
  // Next number to be considered for reversal and output.
  int next_num_;
  // number of bits required to represent the numbers of the sequence
  int num_bits_;
};
    
      // Visual debugger classifies the given sample, displays the results and
  // solicits user input to display other classifications. Returns when
  // the user has finished with debugging the sample.
  // Probably doesn't need to be overridden if the subclass provides
  // DisplayClassifyAs.
  virtual void DebugDisplay(const TrainingSample& sample, Pix* page_pix,
                            UNICHAR_ID unichar_id);
    
    
    {	audio_track = p_track;
}
    
    	ClassDB::bind_method(D_METHOD('add_polygon', 'polygon'), &NavigationMesh::add_polygon);
	ClassDB::bind_method(D_METHOD('get_polygon_count'), &NavigationMesh::get_polygon_count);
	ClassDB::bind_method(D_METHOD('get_polygon', 'idx'), &NavigationMesh::get_polygon);
	ClassDB::bind_method(D_METHOD('clear_polygons'), &NavigationMesh::clear_polygons);
    
    #ifndef FILE_ACCESS_BUFFERED_H
#define FILE_ACCESS_BUFFERED_H
    
    #endif // MIDI_DRIVER_ALSAMIDI_H
#endif // ALSAMIDI_ENABLED

    
    	Vector<MIDIEndpointRef> connected_sources;
    
    MIDIDriverWinMidi::~MIDIDriverWinMidi() {
    }
    
    protected:
	void _notification(int p_what);
	void _preview_changed(ObjectID p_which);
	void _play();
	void _stop();
	void _on_finished();
	void _draw_preview();
	void _draw_indicator();
	void _on_input_indicator(Ref<InputEvent> p_event);
	void _seek_to(real_t p_x);
	void _changed_callback(Object *p_changed, const char *p_prop);
	static void _bind_methods();
    
    godot_error GDAPI godot_pool_int_array_insert(godot_pool_int_array *p_self, const godot_int p_idx, const godot_int p_data) {
	PoolVector<godot_int> *self = (PoolVector<godot_int> *)p_self;
	return (godot_error)self->insert(p_idx, p_data);
}
    
    typedef struct cgsem cgsem_t;
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
      DBImpl* dbfull() const { return reinterpret_cast<DBImpl*>(db_); }
  Env* env() const { return env_; }
    
      WriteOptions write_options;
  ASSERT_OK(db->Put(write_options, '1', 'b'));
  ASSERT_OK(db->Put(write_options, '2', 'c'));
  ASSERT_OK(db->Put(write_options, '3', 'd'));
  ASSERT_OK(db->Put(write_options, '4', 'e'));
  ASSERT_OK(db->Put(write_options, '5', 'f'));
    
    class Comparator;
class Iterator;
    
    int main() {
  volatile int x = 0;
  emscripten_sleep(1);
  int jmpval = setjmp(buf);
  if (!jmpval) {
    x++;                  // should be properly restored once longjmp jumps back
    first();              // when executed, setjmp returns 1
    printf('skipped\n');  // does not print
  } else if (jmpval == 1) {  // when first() jumps back, setjmp returns 1
    printf('result: %d %d\n', x, jmpval);  // prints
    x++;
    emscripten_sleep(1);
    second();                 // when executed, setjmp returns -1
    emscripten_sleep(1);
  } else if (jmpval == -1) {  // when second() jumps back, setjmp returns -1
    printf('result: %d %d\n', x, jmpval);  // prints
  }
  emscripten_sleep(1);
  finish(x);
}

    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006 Scott Turner <scotty1024@mac.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    
    {  for (i = 0; i < count; i++)
    str->append(letter);
}
#endif
    
        Object *put(const Ref &ref);
    Object *lookup(const Ref &ref, Object *obj);
    
    #include 'GooString.h'
#include 'PDFDoc.h'
#include 'Decrypt.h'
#include 'Error.h'
#include 'GlobalParams.h'
#if HAVE_XPDFCORE
#  include 'XPDFCore.h'
#elif HAVE_WINPDFCORE
#  include 'WinPDFCore.h'
#endif
#ifdef ENABLE_PLUGINS
#  include 'XpdfPluginAPI.h'
#endif
#include 'SecurityHandler.h'
    
    Sound::Sound(Object *obj, bool readAttrs)
{
  streamObj = new Object();
  streamObj->initNull();
  obj->copy(streamObj);
    }
    
    #ifndef incl_HPHP_FIXED_STRING_MAP_H_
#define incl_HPHP_FIXED_STRING_MAP_H_
    
    
    {  void moduleLoad(const IniSetting::Map& ini, Hdf globalConfig) override {
    Config::Bind(Enabled, ini, globalConfig,
                 'HealthMonitor.EnableHealthMonitor', true);
    Config::Bind(UpdateFreq, ini, globalConfig,
                 'HealthMonitor.UpdateFreq', 1000 /* miliseconds */);
  }
} s_host_health_monitor_extension;
    
    /* A ReflectionTypeAliasHandle is a NativeData object wrapping a TypeAliasReq*
 * for the purposes of static ReflectionTypeAlias. */
struct ReflectionTypeAliasHandle {
  ReflectionTypeAliasHandle(): m_req(nullptr) {}
  explicit ReflectionTypeAliasHandle(const TypeAliasReq* req): m_req(req) {};
    }
    
    enum class LookupResult {
  MethodFoundWithThis,
  MethodFoundNoThis,
  MagicCallFound,
  MethodNotFound,
};