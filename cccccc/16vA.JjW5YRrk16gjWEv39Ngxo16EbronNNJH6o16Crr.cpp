
        
        namespace base {
class FilePath;
}
    
    #include 'base/macros.h'
    
    class NativeWindow;
    
    #ifndef ATOM_COMMON_API_LOCKER_H_
#define ATOM_COMMON_API_LOCKER_H_
    
    #ifndef ATOM_COMMON_DRAGGABLE_REGION_H_
#define ATOM_COMMON_DRAGGABLE_REGION_H_
    
      const base::ListValue* preferences() const { return preferences_.get(); }
    
      // Starts updating the model. The model is initially empty, so OnSourceAdded()
  // notifications will be generated for each existing source as it is
  // enumerated. After the initial enumeration the model will be refreshed based
  // on the update period, and notifications generated only for changes in the
  // model.
  virtual void StartUpdating(DesktopMediaListObserver* observer) = 0;
    
      // Checks if the given |monitor_id| represents a built-in display.
  static bool IsMonitorBuiltIn(int64_t monitor_id);
    
    void TtsPlatformImpl::set_error(const std::string& error) {
  error_ = error;
}
    
    // File name of the Pepper Flash plugin on different platforms.
const base::FilePath::CharType kPepperFlashPluginFilename[] =
#if defined(OS_MACOSX)
    FPL('PepperFlashPlayer.plugin');
#elif defined(OS_WIN)
    FPL('pepflashplayer.dll');
#else  // OS_LINUX, etc.
    FPL('libpepflashplayer.so');
#endif
    
    static std::string IKey(const std::string& user_key,
                        uint64_t seq,
                        ValueType vt) {
  std::string encoded;
  AppendInternalKey(&encoded, ParsedInternalKey(user_key, seq, vt));
  return encoded;
}
    
    
    {}  // namespace leveldb
    
    #endif  // STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_

    
    protected:
    void get_test_array_types_and_sizes( int test_case_idx, vector<vector<Size> >& sizes, vector<vector<int> >& types );
    void fill_array( int test_case_idx, int i, int j, Mat& arr );
    double get_success_error_level( int test_case_idx, int i, int j );
    void run_func();
    void prepare_to_validation( int test_case_idx );
    
    #if defined(_WIN32)
#include <windows.h>
    
    //#include 'log.h'
#include 'include_gunit.h'
#include 'baseapi.h'
#include 'leptonica/allheaders.h'
#include <iostream>
#include <string>
#include <fstream>
#include <locale>
#include <limits.h>
#include <time.h>
    
    #endif  // GRAPHICS_DISABLED

    
    #ifndef TESSERACT_LSTM_FULLYCONNECTED_H_
#define TESSERACT_LSTM_FULLYCONNECTED_H_
    
    bool TessTsvRenderer::EndDocumentHandler() { return true; }
    
    #include 'dotproductsse.h'
#include <stdio.h>
#include <stdlib.h>
    
    // Computes part of matrix.vector v = Wu. Computes N=8 results.
// For details see PartialMatrixDotVector64 with N=8.
static void PartialMatrixDotVector8(const int8_t* wi, const double* scales,
                                    const int8_t* u, int num_in, int num_out,
                                    double* v) {
  // Register containing 16-bit ones for horizontal add with 16->32 bit
  // conversion.
  __m256i ones =
      _mm256_set_epi16(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
  __m256i shift_id = _mm256_set_epi32(0, 7, 6, 5, 4, 3, 2, 1);
  // Initialize all the results to 0.
  __m256i result0 = _mm256_setzero_si256();
  // Iterate over the input (u), one registerful at a time.
  for (int j = 0; j < num_in;) {
    __m256i inputs =
        _mm256_loadu_si256(reinterpret_cast<const __m256i*>(u + j));
    // Inputs are processed in groups of kNumInputsPerGroup, replicated
    // kNumInputGroups times.
    for (int ig = 0; ig < kNumInputGroups && j < num_in;
         ++ig, j += kNumInputsPerGroup) {
      // Replicate the low 32 bits (4 inputs) 8 times.
      __m256i rep_input =
          _mm256_broadcastd_epi32(_mm256_castsi256_si128(inputs));
      // Rotate the inputs in groups of 4, so the next 4 inputs are ready.
      inputs = _mm256_permutevar8x32_epi32(inputs, shift_id);
      __m256i weights, reps;
      // Mul-add, with horizontal add of the 4 inputs to each of the results.
      MultiplyGroup(rep_input, ones, wi, weights, reps, result0);
    }
  }
  ExtractResults(result0, shift_id, wi, scales, num_out, v);
}
#else
namespace tesseract {
#endif  // __AVX2__
    }
    
    void Tesseract::classify_word_pass2(const WordData& word_data,
                                    WERD_RES** in_word,
                                    PointerVector<WERD_RES>* out_words) {
  // Return if we do not want to run Tesseract.
  if (tessedit_ocr_engine_mode == OEM_LSTM_ONLY) {
    return;
  }
  ROW* row = word_data.row;
  BLOCK* block = word_data.block;
  WERD_RES* word = *in_word;
  prev_word_best_choice_ = word_data.prev_word != nullptr
      ? word_data.prev_word->word->best_choice : nullptr;
    }
    
    GDCINULL(WebSocketClient);
    
    protected:
	Ref<WebSocketPeer> _peer;
	bool verify_ssl;
    
    	GDCLASS(VehicleBody, RigidBody);
    
    
    {	for (int i = 0; i < AudioServer::get_singleton()->get_bus_count(); i++) {
		if (AudioServer::get_singleton()->get_bus_name(i) == bus) {
			return bus;
		}
	}
	return 'Master';
}
    
      // Success/failure error codes.
  enum jpgd_status
  {
    JPGD_SUCCESS = 0, JPGD_FAILED = -1, JPGD_DONE = 1,
    JPGD_BAD_DHT_COUNTS = -256, JPGD_BAD_DHT_INDEX, JPGD_BAD_DHT_MARKER, JPGD_BAD_DQT_MARKER, JPGD_BAD_DQT_TABLE, 
    JPGD_BAD_PRECISION, JPGD_BAD_HEIGHT, JPGD_BAD_WIDTH, JPGD_TOO_MANY_COMPONENTS, 
    JPGD_BAD_SOF_LENGTH, JPGD_BAD_VARIABLE_MARKER, JPGD_BAD_DRI_LENGTH, JPGD_BAD_SOS_LENGTH,
    JPGD_BAD_SOS_COMP_ID, JPGD_W_EXTRA_BYTES_BEFORE_MARKER, JPGD_NO_ARITHMITIC_SUPPORT, JPGD_UNEXPECTED_MARKER,
    JPGD_NOT_JPEG, JPGD_UNSUPPORTED_MARKER, JPGD_BAD_DQT_LENGTH, JPGD_TOO_MANY_BLOCKS,
    JPGD_UNDEFINED_QUANT_TABLE, JPGD_UNDEFINED_HUFF_TABLE, JPGD_NOT_SINGLE_SCAN, JPGD_UNSUPPORTED_COLORSPACE,
    JPGD_UNSUPPORTED_SAMP_FACTORS, JPGD_DECODE_ERROR, JPGD_BAD_RESTART_MARKER, JPGD_ASSERTION_ERROR,
    JPGD_BAD_SOS_SPECTRAL, JPGD_BAD_SOS_SUCCESSIVE, JPGD_STREAM_READ, JPGD_NOTENOUGHMEM
  };
    
  // Input stream interface.
  // Derive from this class to read input data from sources other than files or memory. Set m_eof_flag to true when no more data is available.
  // The decoder is rather greedy: it will keep on calling this method until its internal input buffer is full, or until the EOF flag is set.
  // It the input stream contains data after the JPEG stream's EOI (end of image) marker it will probably be pulled into the internal buffer.
  // Call the get_total_bytes_read() method to determine the actual size of the JPEG stream after successful decoding.
  class jpeg_decoder_stream
  {
  public:
    jpeg_decoder_stream() { }
    virtual ~jpeg_decoder_stream() { }
    }
    
        60,30,500,    3,18.,  1024
  },
  /* 8: 2048 x 27 */
  {
    8,{0,1,2,2,3,3,4,4},{3,4,3,4,3},{0,1,1,2,2},{-1,0,1,2,3},
    {{4},{5,6},{7,8},{-1,9,10,11},{-1,12,13,14}},
    2,{0,2048,   186,46,744, 12,92,372,1500,  28,66,130, 260,520,1112,
       6,20,36,56,  78,110,158,222,  316,440,624,  928,1300,1700},
    
    
/*
 * dns.h
 *
 *  Created on: 2012-11-23
 *      Author: yanguoyue
 */
    
    #endif /* DUMPCRASHSTACK_H_ */

    
    
    {    ::wakeupLock_delete(object_);
}
    
    // true pass, false limit
bool CommFrequencyLimit::Check() {
    uint64_t now = ::gettickcount();
    if (!touch_times_.empty() && (now<touch_times_.front()) ) { //if user modify the time, amend it
    	xwarn2(TSF'Must be modified time.now=%_', now);
    	size_t size = touch_times_.size();
    	touch_times_.clear();
    	for (size_t i=0; i<size; ++i) {
    		touch_times_.push_back(now-1);
    	}
    }
    }
    
    class TSpy :  public Spy {
  public:
    TSpy(void* _this): Spy(_this) {}
    }
    
    bool JNU_JbyteArray2Buffer(JNIEnv* _env, const jbyteArray bytes, AutoBuffer& ab);