
        
        void ProtoFromShapeHandle(tensorflow::shape_inference::ShapeHandle s,
                          tensorflow::shape_inference::InferenceContext* c,
                          TensorShapeProto* out) {
  if (c->RankKnown(s)) {
    const int32 rank = c->Rank(s);
    for (int i = 0; i < rank; ++i) {
      shape_inference::DimensionHandle d = c->Dim(s, i);
      auto* out_dim = out->add_dim();
      if (c->ValueKnown(d)) {
        out_dim->set_size(c->Value(d));
      } else {
        out_dim->set_size(-1);
      }
    }
  } else {
    out->set_unknown_rank(true);
  }
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
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    PyTypeObject TensorReleaserType = {
    PyVarObject_HEAD_INIT(nullptr, 0) /* head init */
    'tensorflow_wrapper',             /* tp_name */
    sizeof(TensorReleaser),           /* tp_basicsize */
    0,                                /* tp_itemsize */
    /* methods */
    TensorReleaser_dealloc,      /* tp_dealloc */
    nullptr,                     /* tp_print */
    nullptr,                     /* tp_getattr */
    nullptr,                     /* tp_setattr */
    nullptr,                     /* tp_compare */
    nullptr,                     /* tp_repr */
    nullptr,                     /* tp_as_number */
    nullptr,                     /* tp_as_sequence */
    nullptr,                     /* tp_as_mapping */
    nullptr,                     /* tp_hash */
    nullptr,                     /* tp_call */
    nullptr,                     /* tp_str */
    nullptr,                     /* tp_getattro */
    nullptr,                     /* tp_setattro */
    nullptr,                     /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,          /* tp_flags */
    'Wrapped TensorFlow Tensor', /* tp_doc */
    nullptr,                     /* tp_traverse */
    nullptr,                     /* tp_clear */
    nullptr,                     /* tp_richcompare */
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {}  // namespace detail
    
    namespace stream_executor {
namespace cuda {
    }
    }
    
    #include 'atom/browser/api/atom_api_browser_window.h'
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(Net);
};
    
    #include <vector>
    
      base::WeakPtrFactory<TrackableObjectBase> weak_factory_;
    
      // There is no available update.
  virtual void OnUpdateNotAvailable() {}
    
    #include 'atom/browser/net/about_protocol_handler.h'
    
    #include 'base/threading/thread_task_runner_handle.h'
    
    namespace {
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45,
    typename T46, typename T47>
internal::ValueArray47<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
    T44, T45, T46, T47> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7,
    T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15,
    T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23,
    T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31,
    T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39,
    T40 v40, T41 v41, T42 v42, T43 v43, T44 v44, T45 v45, T46 v46, T47 v47) {
  return internal::ValueArray47<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39,
      T40, T41, T42, T43, T44, T45, T46, T47>(v1, v2, v3, v4, v5, v6, v7, v8,
      v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23,
      v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37,
      v38, v39, v40, v41, v42, v43, v44, v45, v46, v47);
}
    
     private:
  // A string containing a description of the outcome of the last death test.
  static std::string last_death_test_message_;
    
      void Set(const FilePath& rhs) {
    pathname_ = rhs.pathname_;
  }
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
};
    
      // Creates a UTF-16 wide string from the given ANSI string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the wide string, or NULL if the
  // input is NULL.
  //
  // The wide string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static LPCWSTR AnsiToUtf16(const char* c_str);
    
    
    {
}

    
    namespace Etc
{
	// ----------------------------------------------------------------------------------------------------
	//
	const float Block4x4Encoding::LUMA_WEIGHT = 3.0f;
	const float Block4x4Encoding::CHROMA_BLUE_WEIGHT = 0.5f;
    }
    
    		typedef struct
		{
			unsigned base : 8;
			unsigned table : 4;
			unsigned multiplier : 4;
			unsigned selectors0 : 8;
			unsigned selectors1 : 8;
			unsigned selectors2 : 8;
			unsigned selectors3 : 8;
			unsigned selectors4 : 8;
			unsigned selectors5 : 8;
		} Data;
    
    
#define AF_BLUE_STRINGSET_MAX_LEN  8
    
    #define UNIT_QUANT_SHIFT 2
#define UNIT_QUANT_FACTOR (1 << UNIT_QUANT_SHIFT)
    
      The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    /** 16x16 multiplication where the result fits in 32 bits */
#undef MULT16_16
static OPUS_INLINE opus_val32 MULT16_16_armv5e(opus_val16 a, opus_val16 b)
{
  int res;
  __asm__(
      '#MULT16_16\n\t'
      'smulbb %0, %1, %2;\n'
      : '=r'(res)
      : 'r'(a), 'r'(b)
  );
  return res;
}
#define MULT16_16(a, b) (MULT16_16_armv5e(a, b))
    
    #include 'hphp/runtime/base/apc-object.h'
#include 'hphp/runtime/base/apc-array.h'
#include 'hphp/runtime/base/apc-stats.h'
#include 'hphp/runtime/base/object-data.h'
#include 'hphp/runtime/base/type-object.h'
#include 'hphp/runtime/ext/apc/ext_apc.h'
#include 'hphp/runtime/base/collections.h'
#include 'hphp/runtime/ext/collections/ext_collections-map.h'
#include 'hphp/runtime/ext/collections/ext_collections-set.h'
#include 'hphp/runtime/ext/collections/ext_collections-vector.h'
#include 'hphp/runtime/base/data-walker.h'
    
    #ifndef incl_HPHP_CONFIG_H_
#define incl_HPHP_CONFIG_H_
    
    
    {    assertx(data == comma || data == semi);
    // eat parameters, and figure out if we have ';base64'
    while (semi && (data == semi)) {
      data++;
      meta_len--;
      char* equals = (char*)memchr(data, '=', meta_len);
      semi = (char*)memchr(data, ';', meta_len);
      if (!equals || (semi && semi < data)) {
        // no equals, so either 'base64' or its bad
        if (meta_len != sizeof('base64') - 1 ||
            memcmp(data, 'base64', sizeof('base64')-1)) {
          raise_warning('rfc2396: invalid parameter');
          return nullptr;
        }
        // it's 'base64', we're done
        base64 = true;
        meta_len -= sizeof('base64') - 1;
        data += sizeof('base64') - 1;
        break;
      }
      // there's a parameter
      if (semi) {
        meta_len -= semi - data + 1;
        data = semi;
      } /* else, we're done with meta */
    }
  }
  data = comma + 1;
  data_len -= 1;
  String decoded;
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
    
    /*
 * If the given AtomicHashMap has more than one submap allocated, log a perf
 * warning with its name.
 *
 * A single unique done flag should exist for each map being checked, to avoid
 * logging more than once (process, map) pair.
 */
template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done);
    
    
    {
                fp = StateSave(fp, fp->fPatIdx-1, status);
            }
            break;
    
        RegexPattern *This = new RegexPattern;
    if (This == NULL) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return NULL;
    }
    if (U_FAILURE(This->fDeferredStatus)) {
        status = This->fDeferredStatus;
        delete This;
        return NULL;
    }
    This->fFlags = flags;
    
    class FCDUTF8NFDIterator : public NFDIterator {
public:
    FCDUTF8NFDIterator(const CollationData *data, const uint8_t *text, int32_t textLength)
            : u8ci(data, FALSE, text, 0, textLength) {}
protected:
    virtual UChar32 nextRawCodePoint() {
        UErrorCode errorCode = U_ZERO_ERROR;
        return u8ci.nextCodePoint(errorCode);
    }
private:
    FCDUTF8CollationIterator u8ci;
};
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
            while (p < literal.length() && PatternProps::isWhiteSpace(literal.charAt(p))) {
            needWhitespace = TRUE;
            p += 1;
        }
    
    U_NAMESPACE_END
    
      void set_max_delayed_write_rate(uint64_t write_rate) {
    // avoid divide 0
    if (write_rate == 0) {
      write_rate = 1u;
    }
    max_delayed_write_rate_ = write_rate;
    // update delayed_write_rate_ as well
    delayed_write_rate_ = write_rate;
  }
    
    int main() {
  // open DB
  Options options;
  options.create_if_missing = true;
  DB* db;
  Status s = DB::Open(options, kDBPath, &db);
  assert(s.ok());
    }
    
      int ret = system('rm -rf /tmp/rocksmergetest');
  if (ret != 0) {
    fprintf(stderr, 'Error deleting /tmp/rocksmergetest, code: %d\n', ret);
    return ret;
  }
  rocksdb::Options options;
  options.create_if_missing = true;
  options.merge_operator.reset(new MyMerge);
  options.compaction_filter = &filter;
  status = rocksdb::DB::Open(options, '/tmp/rocksmergetest', &raw_db);
  assert(status.ok());
  std::unique_ptr<rocksdb::DB> db(raw_db);
    
      // reopen the db using the loaded options.
  std::vector<ColumnFamilyHandle*> handles;
  s = DB::Open(loaded_db_opt, kDBPath, loaded_cf_descs, &handles, &db);
  assert(s.ok());
    
      // Commit.
  s = txn->Commit();
  assert(s.ok());
  delete txn;
  // Clear snapshot from read options since it is no longer valid
  read_options.snapshot = nullptr;
    
      // If any threads are waiting on *this, unblock at least one of the
  // waiting threads.
  virtual void Notify() = 0;
    
    void ObjectGeneralInfo60B::Parse(const std::uint8_t* bytes, int32_t length,
                                 ContiRadar* conti_radar) const {
  int obj_id = object_id(bytes, length);
  auto conti_obs = conti_radar->add_contiobs();
  conti_obs->set_clusterortrack(false);
  conti_obs->set_obstacle_id(obj_id);
  conti_obs->set_longitude_dist(longitude_dist(bytes, length));
  conti_obs->set_lateral_dist(lateral_dist(bytes, length));
  conti_obs->set_longitude_vel(longitude_vel(bytes, length));
  conti_obs->set_lateral_vel(lateral_vel(bytes, length));
  conti_obs->set_rcs(rcs(bytes, length));
  conti_obs->set_dynprop(dynprop(bytes, length));
  double timestamp = apollo::common::time::Clock::NowInSeconds();
  auto header = conti_obs->mutable_header();
  header->CopyFrom(conti_radar->header());
  header->set_timestamp_sec(timestamp);
}
    
    
    {  for (int i = 0; i < conti_radar->contiobs_size(); ++i) {
    if (conti_radar->contiobs(i).obstacle_id() == obj_id) {
      auto obs = conti_radar->mutable_contiobs(i);
      obs->set_longitude_dist_rms(
          LINEAR_RMS[longitude_dist_rms(bytes, length)]);
      obs->set_lateral_dist_rms(LINEAR_RMS[lateral_dist_rms(bytes, length)]);
      obs->set_longitude_vel_rms(LINEAR_RMS[longitude_vel_rms(bytes, length)]);
      obs->set_lateral_vel_rms(LINEAR_RMS[lateral_vel_rms(bytes, length)]);
      obs->set_longitude_accel_rms(
          LINEAR_RMS[longitude_accel_rms(bytes, length)]);
      obs->set_lateral_accel_rms(LINEAR_RMS[lateral_accel_rms(bytes, length)]);
      obs->set_oritation_angle_rms(
          ANGLE_RMS[oritation_angle_rms(bytes, length)]);
      obs->set_probexist(PROBOFEXIST[probexist(bytes, length)]);
      obs->set_meas_state(meas_state(bytes, length));
      break;
    }
  }
}
    
    Eigen::MatrixXd SplineSegKernel::Kernel(const uint32_t num_params,
                                        const double accumulated_x) {
  if (num_params > reserved_order_ + 1) {
    CalculateFx(num_params);
  }
  Eigen::MatrixXd term_matrix;
  IntegratedTermMatrix(num_params, accumulated_x, 'fx', &term_matrix);
  return kernel_fx_.block(0, 0, num_params, num_params)
      .cwiseProduct(term_matrix);
}
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
    class GemVehicleFactoryTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    VehicleParameter parameter;
    parameter.set_brand(VehicleParameter::GEM);
    gem_factory_.SetVehicleParameter(parameter);
  }
  virtual void TearDown() {}
    }
    
    // config detail: {'name': 'output_value', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 39,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Brakerpt6c::output_value(const std::uint8_t* bytes,
                                int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(0, 8);
    }