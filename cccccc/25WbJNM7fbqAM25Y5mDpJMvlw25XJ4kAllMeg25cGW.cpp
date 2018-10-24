
        
        // Unlike test_ops.cc, these are built with the 'require_shapes' option in the
// BUILD file.
    
    void CostAnalyzer::PrintAnalysis(std::ostream& os, bool per_node_report,
                                 bool verbose) const {
  os << std::endl;
  os << std::left << std::setw(50)
     << 'Total time measured in ns (serialized): ' << std::right
     << std::setw(20) << total_time_measured_serialized_ << std::endl;
  os << std::left << std::setw(50)
     << 'Total time measured in ns (actual): ' << std::right << std::setw(20)
     << total_time_measured_ << std::endl;
  os << std::left << std::setw(50)
     << 'Total time analytical in ns (upper bound): ' << std::right
     << std::setw(20) << total_time_analytical_upper_ << std::endl;
  os << std::left << std::setw(50)
     << 'Total time analytical in ns (lower bound): ' << std::right
     << std::setw(20) << total_time_analytical_lower_ << std::endl;
  double efficiency_upper = static_cast<double>(total_time_analytical_upper_) /
                            static_cast<double>(total_time_measured_);
  os << std::left << std::setw(50)
     << 'Overall efficiency (analytical upper/actual): ' << std::right
     << std::setw(20) << efficiency_upper << std::endl;
  double efficiency_lower = static_cast<double>(total_time_analytical_lower_) /
                            static_cast<double>(total_time_measured_);
  os << std::left << std::setw(50)
     << 'Overall efficiency (analytical lower/actual): ' << std::right
     << std::setw(20) << efficiency_lower << std::endl;
  os << std::endl;
    }
    
    Status ModelAnalyzer::GenerateReport(bool debug, bool assume_valid_feeds,
                                     std::ostream& os) {
  GraphProperties properties(item_);
  TF_RETURN_IF_ERROR(properties.InferStatically(assume_valid_feeds));
    }
    
    REGISTER_OP('Add').Doc(R'doc(
An op to test that duplicate registrations don't override previously
registered ops.
)doc');
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Global registry mapping C API error codes to the corresponding custom Python
// exception type. This is used to expose the exception types to C extension
// code (i.e. so we can raise custom exceptions via SWIG).
//
// Init() must be called exactly once at the beginning of the process before
// Lookup() can be used.
//
// Example usage:
//   TF_Status* status = TF_NewStatus();
//   TF_Foo(..., status);
//
//   if (TF_GetCode(status) != TF_OK) {
//     PyObject* exc_type = PyExceptionRegistry::Lookup(TF_GetCode(status));
//     // Arguments to OpError base class. Set `node_def` and `op` to None.
//     PyObject* args =
//       Py_BuildValue('sss', nullptr, nullptr, TF_Message(status));
//     PyErr_SetObject(exc_type, args);
//     Py_DECREF(args);
//     TF_DeleteStatus(status);
//     return NULL;
//   }
class PyExceptionRegistry {
 public:
  // Initializes the process-wide registry. Should be called exactly once near
  // the beginning of the process. The arguments are the various Python
  // exception types (e.g. `cancelled_exc` corresponds to
  // errors.CancelledError).
  static void Init(PyObject* code_to_exc_type_map);
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  tensorflow::DeviceNameUtils::ParsedName parsed_name;
  if (!tensorflow::DeviceNameUtils::ParseFullName(node_def.device(),
                                                  &parsed_name)) {
    LOG(WARNING) << 'Failed to parse device from node_def: '
                 << node_def.ShortDebugString();
    return '';
  }
  string class_name = '';
  tensorflow::FindKernelDef(tensorflow::DeviceType(parsed_name.type.c_str()),
                            node_def, nullptr /* kernel_def */, &class_name)
      .IgnoreError();
  return class_name;
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'intsimdmatrix.h'
#include 'genericvector.h'      // for GenericVector
#include 'intsimdmatrixavx2.h'  // for IntSimdMatrixAVX2
#include 'intsimdmatrixsse.h'   // for IntSimdMatrixSSE
#include 'matrix.h'             // for GENERIC_2D_ARRAY
#include 'simddetect.h'         // for SIMDDetect
    
    // Computes part of matrix.vector v = Wu. Computes N=16 results.
// For details see PartialMatrixDotVector64 with N=16.
static void PartialMatrixDotVector16(const int8_t* wi, const double* scales,
                                     const int8_t* u, int num_in, int num_out,
                                     double* v) {
  // Register containing 16-bit ones for horizontal add with 16->32 bit
  // conversion.
  __m256i ones =
      _mm256_set_epi16(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
  __m256i shift_id = _mm256_set_epi32(0, 7, 6, 5, 4, 3, 2, 1);
  // Initialize all the results to 0.
  __m256i result0 = _mm256_setzero_si256();
  __m256i result1 = _mm256_setzero_si256();
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
      MultiplyGroup(rep_input, ones, wi, weights, reps, result1);
    }
  }
  ExtractResults(result0, shift_id, wi, scales, kNumOutputsPerRegister, v);
  num_out -= kNumOutputsPerRegister;
  ExtractResults(result1, shift_id, wi, scales,
                 std::min(kNumOutputsPerRegister, num_out), v);
}
    
    IntSimdMatrixSSE::IntSimdMatrixSSE() {
#ifdef __SSE4_1__
  partial_funcs_ = {PartialMatrixDotVector1};
#endif  // __SSE4_1__
}
    
    struct OSResults {
  OSResults() : unicharset(nullptr) {
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < kMaxNumberOfScripts; ++j)
        scripts_na[i][j] = 0;
      orientations[i] = 0;
    }
  }
  void update_best_orientation();
  // Set the estimate of the orientation to the given id.
  void set_best_orientation(int orientation_id);
  // Update/Compute the best estimate of the script assuming the given
  // orientation id.
  void update_best_script(int orientation_id);
  // Return the index of the script with the highest score for this orientation.
  TESS_API int get_best_script(int orientation_id) const;
  // Accumulate scores with given OSResults instance and update the best script.
  void accumulate(const OSResults& osr);
    }
    
    /**
 * Class to iterate over tesseract page structure, providing access to all
 * levels of the page hierarchy, without including any tesseract headers or
 * having to handle any tesseract structures.
 * WARNING! This class points to data held within the TessBaseAPI class, and
 * therefore can only be used while the TessBaseAPI class still exists and
 * has not been subjected to a call of Init, SetImage, Recognize, Clear, End
 * DetectOS, or anything else that changes the internal PAGE_RES.
 * See apitypes.h for the definition of PageIteratorLevel.
 * See also ResultIterator, derived from PageIterator, which adds in the
 * ability to access OCR output with text-specific methods.
 */
    
      // Gets a VC object identified by its ID.
  static ParamContent* GetParamContentById(int id);
    
    
/**********************************************************************
 * join_words
 *
 * The opposite of split_word():
 *  join word2 (including any recognized data / seam array / etc)
 *  onto the right of word and then delete word2.
 *  Also, if orig_bb is provided, stitch it back into word.
 **********************************************************************/
void Tesseract::join_words(WERD_RES *word,
                           WERD_RES *word2,
                           BlamerBundle *orig_bb) const {
  TBOX prev_box = word->chopped_word->blobs.back()->bounding_box();
  TBOX blob_box = word2->chopped_word->blobs[0]->bounding_box();
  // Tack the word2 outputs onto the end of the word outputs.
  word->chopped_word->blobs += word2->chopped_word->blobs;
  word->rebuild_word->blobs += word2->rebuild_word->blobs;
  word2->chopped_word->blobs.clear();
  word2->rebuild_word->blobs.clear();
  TPOINT split_pt;
  split_pt.x = (prev_box.right() + blob_box.left()) / 2;
  split_pt.y = (prev_box.top() + prev_box.bottom() +
                blob_box.top() + blob_box.bottom()) / 4;
  // Move the word2 seams onto the end of the word1 seam_array.
  // Since the seam list is one element short, an empty seam marking the
  // end of the last blob in the first word is needed first.
  word->seam_array.push_back(new SEAM(0.0f, split_pt));
  word->seam_array += word2->seam_array;
  word2->seam_array.truncate(0);
  // Fix widths and gaps.
  word->blob_widths += word2->blob_widths;
  word->blob_gaps += word2->blob_gaps;
  // Fix the ratings matrix.
  int rat1 = word->ratings->dimension();
  int rat2 = word2->ratings->dimension();
  word->ratings->AttachOnCorner(word2->ratings);
  ASSERT_HOST(word->ratings->dimension() == rat1 + rat2);
  word->best_state += word2->best_state;
  // Append the word choices.
  *word->raw_choice += *word2->raw_choice;
    }
    
    bool AccelDeccelAmplitude::initWithAction(Action *action, float duration)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _rate = 1.0f;
        _other = (ActionInterval*)(action);
        action->retain();
    }
    }
    
    void ReverseTime::startWithTarget(Node *target)
{
    ActionInterval::startWithTarget(target);
    _other->startWithTarget(target);
}
    
        //
    // Overrides
    //
    virtual void startWithTarget(Node *target) override;
    virtual SkewBy* clone() const  override;
    virtual SkewBy* reverse() const override;
    
CC_CONSTRUCTOR_ACCESS:
    SkewBy() {}
    virtual ~SkewBy() {}
    /**
     * @param t In seconds.
     */
    bool initWithDuration(float t, float sx, float sy);
    
    PageTurn3D *PageTurn3D::clone() const
{
    // no copy constructor
    return PageTurn3D::create(_duration, _gridSize);
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    TEST(EsdCanClientTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::ESD_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
    TEST(HermesCanClient, init) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::HERMES_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
  HermesCanClient hermes_can;
  EXPECT_TRUE(hermes_can.Init(param));
  //    EXPECT_EQ(hermes_can.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  //      EXPECT_EQ(hermes_can.Start(), ErrorCode::OK);
}
    
    
    {
    {    int ret = close(dev_handler_);
    if (ret < 0) {
      AERROR << 'close error code:' << ret << ', ' << GetErrorString(ret);
    } else {
      AINFO << 'close socket can ok. port:' << port_;
    }
  }
}
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    // System gflags
DEFINE_string(node_name, 'chassis', 'The chassis module name in proto');
DEFINE_string(canbus_driver_name, 'canbus', 'Driver name.');
    
    DECLARE_string(adapter_config_filename);