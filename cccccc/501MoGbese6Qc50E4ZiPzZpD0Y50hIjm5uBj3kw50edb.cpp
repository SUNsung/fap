    // Finish and check for builder errors
    if (s.ok()) {
      s = builder->Finish();
      if (s.ok()) {
        meta->file_size = builder->FileSize();
        assert(meta->file_size > 0);
      }
    } else {
      builder->Abandon();
    }
    delete builder;
    
    TEST(FindFileTest, OverlapSequenceChecks) {
  Add('200', '200', 5000, 3000);
  ASSERT_TRUE(! Overlaps('199', '199'));
  ASSERT_TRUE(! Overlaps('201', '300'));
  ASSERT_TRUE(Overlaps('200', '200'));
  ASSERT_TRUE(Overlaps('190', '200'));
  ASSERT_TRUE(Overlaps('200', '210'));
}
    
    
    {
    {      bool known = true;
      bool write_sync = false;
      if (name == Slice('fillseq')) {
        Write(write_sync, SEQUENTIAL, FRESH, num_, FLAGS_value_size, 1);
        DBSynchronize(db_);
      } else if (name == Slice('fillrandom')) {
        Write(write_sync, RANDOM, FRESH, num_, FLAGS_value_size, 1);
        DBSynchronize(db_);
      } else if (name == Slice('overwrite')) {
        Write(write_sync, RANDOM, EXISTING, num_, FLAGS_value_size, 1);
        DBSynchronize(db_);
      } else if (name == Slice('fillrandsync')) {
        write_sync = true;
        Write(write_sync, RANDOM, FRESH, num_ / 100, FLAGS_value_size, 1);
        DBSynchronize(db_);
      } else if (name == Slice('fillseqsync')) {
        write_sync = true;
        Write(write_sync, SEQUENTIAL, FRESH, num_ / 100, FLAGS_value_size, 1);
        DBSynchronize(db_);
      } else if (name == Slice('fillrand100K')) {
        Write(write_sync, RANDOM, FRESH, num_ / 1000, 100 * 1000, 1);
        DBSynchronize(db_);
      } else if (name == Slice('fillseq100K')) {
        Write(write_sync, SEQUENTIAL, FRESH, num_ / 1000, 100 * 1000, 1);
        DBSynchronize(db_);
      } else if (name == Slice('readseq')) {
        ReadSequential();
      } else if (name == Slice('readrandom')) {
        ReadRandom();
      } else if (name == Slice('readrand100K')) {
        int n = reads_;
        reads_ /= 1000;
        ReadRandom();
        reads_ = n;
      } else if (name == Slice('readseq100K')) {
        int n = reads_;
        reads_ /= 1000;
        ReadSequential();
        reads_ = n;
      } else {
        known = false;
        if (name != Slice()) {  // No error message for empty name
          fprintf(stderr, 'unknown benchmark '%s'\n', name.ToString().c_str());
        }
      }
      if (known) {
        Stop(name);
      }
    }
  }
    
    class Env;
    
    
    {  // 'filter' contains the data appended by a preceding call to
  // CreateFilter() on this class.  This method must return true if
  // the key was in the list of keys passed to CreateFilter().
  // This method may return true or false if the key was not on the
  // list, but it should aim to return false with a high probability.
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const = 0;
};
    
        CV_Assert( state != 0 );
    
        int pointsCount = cvtest::randInt(rng) % maxPointsCount;
    usedPointsCount = pointsCount == 0 ? 0 : cvtest::randInt(rng) % pointsCount;
    
            struct glob
        {
            static __device__ __forceinline__ int atomicAdd(int* address, int val)
            {
                return ::atomicAdd(address, val);
            }
            static __device__ __forceinline__ unsigned int atomicAdd(unsigned int* address, unsigned int val)
            {
                return ::atomicAdd(address, val);
            }
            static __device__ __forceinline__ float atomicAdd(float* address, float val)
            {
            #if __CUDA_ARCH__ >= 200
                return ::atomicAdd(address, val);
            #else
                int* address_as_i = (int*) address;
                int old = *address_as_i, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_i, assumed,
                        __float_as_int(val + __int_as_float(assumed)));
                } while (assumed != old);
                return __int_as_float(old);
            #endif
            }
            static __device__ __forceinline__ double atomicAdd(double* address, double val)
            {
            #if __CUDA_ARCH__ >= 130
                unsigned long long int* address_as_ull = (unsigned long long int*) address;
                unsigned long long int old = *address_as_ull, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_ull, assumed,
                        __double_as_longlong(val + __longlong_as_double(assumed)));
                } while (assumed != old);
                return __longlong_as_double(old);
            #else
                (void) address;
                (void) val;
                return 0.0;
            #endif
            }
    }
    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
    namespace cv {
    }
    
        static void CODEGEN_FUNCPTR Switch_TexParameterIiv(GLenum target, GLenum pname, const GLint *params)
    {
        TexParameterIiv = (PFNTEXPARAMETERIIVPROC)IntGetProcAddress('glTexParameterIiv');
        TexParameterIiv(target, pname, params);
    }
    
    #undef cv_hal_LU32f
#define cv_hal_LU32f lapack_LU32f
#undef cv_hal_LU64f
#define cv_hal_LU64f lapack_LU64f
    
    #include 'Basics.h'
#include 'ComputationNetwork.h'
#include 'SimpleEvaluator.h'
#include 'DataReader.h'
#include 'ScriptableObjects.h'
#include 'Criterion.h'
#include <vector>
#include <string>
#include <stdexcept>
#include 'fileutil.h'
#include 'Config.h'
#include <chrono>
#include <random>
#include 'Profiler.h'
#include 'MASGD.h'
#include 'ASGDHelper.h'
#include <map>
using namespace std; // ugh! TODO: get rid of this from .h files!!!
    
        static void dotprod4(const_array_ref<float> row, const_array_ref<float> cols4, size_t cols4stride,
                         array_ref<float> usij, size_t usijstride,
                         bool addtoresult, const float thisscale, const float weight = 1.0f)
    {
        // What this function computes is this:
        // for (size_t k = 0; k < 4; k++)
        //     dotprod (row, const_array_ref<float> (&cols4[k * cols4stride], cols4stride), usij[k * usijstride]);
    }
    
            for (size_t paramNumber = params.size(); paramNumber > numFixedParams; paramNumber--)
        {
            // process optional parameter if it exists
            std::string propName, value;
            if (OptionalParameter(params[paramNumber - 1], propName, value))
            {
                if (EqualInsensitive(propName, 'copyFlag', 'copy'))
                {
                    if (EqualInsensitive(value, 'all'))
                    {
                        copyFlags = CopyNodeFlags::copyNodeAll;
                    }
                    else if (EqualInsensitive(value, 'value'))
                    {
                        copyFlags = CopyNodeFlags::copyNodeValue;
                    }
                    else
                    {
                        RuntimeError('Invalid optional parameter value %s in CopyNode(), valid values are copyFlag=(all|value)', value.c_str());
                    }
                }
                else
                {
                    RuntimeError('Invalid optional parameter to Copy, %s\n valid optional parameters: copyFlag=(all|value)', propName.c_str());
                }
            }
        }
    
    // type of data in this section
enum SectionType
{
    sectionTypeNull = 0,
    sectionTypeFile = 1,          // file header
    sectionTypeData = 2,          // data section
    sectionTypeLabel = 3,         // label data
    sectionTypeLabelMapping = 4,  // label mapping table (array of strings)
    sectionTypeStats = 5,         // data statistics
    sectionTypeCategoryLabel = 6, // labels in category format (float type, all zeros with a single 1.0 per column)
    sectionTypeMax
};
    
    class latticepair : public std::pair<msra::lattices::lattice, msra::lattices::lattice>
{
public:
    // NOTE: we don't check numerator lattice now
    size_t getnumframes() const
    {
        return second.getnumframes();
    }
    size_t getnumnodes() const
    {
        return second.getnumnodes();
    }
    size_t getnumedges() const
    {
        return second.getnumedges();
    }
    std::wstring getkey() const
    {
        return second.getkey();
    }
};
    
    
    {
    {
    {}}}

    
      void push_back(T&& value) { emplace_back(std::move(value)); }
    
     private:
  grpc::ClientContext context_;
  BenchmarkService::Stub* stub_;
  CompletionQueue* cq_;
  std::unique_ptr<Alarm> alarm_;
  const RequestType& req_;
  ResponseType response_;
  enum State { INVALID, READY, RESP_DONE };
  State next_state_;
  std::function<void(grpc::Status, ResponseType*, HistogramEntry*)> callback_;
  std::function<gpr_timespec()> next_issue_;
  std::function<std::unique_ptr<grpc::ClientAsyncResponseReader<ResponseType>>(
      BenchmarkService::Stub*, grpc::ClientContext*, const RequestType&,
      CompletionQueue*)>
      prepare_req_;
  grpc::Status status_;
  double start_;
  std::unique_ptr<grpc::ClientAsyncResponseReader<ResponseType>>
      response_reader_;
    
    const int kServerDefaultResponseStreamsToSend = 3;
const char* const kServerResponseStreamsToSend = 'server_responses_to_send';
const char* const kServerTryCancelRequest = 'server_try_cancel';
const char* const kDebugInfoTrailerKey = 'debug-info-bin';
const char* const kServerFinishAfterNReads = 'server_finish_after_n_reads';
const char* const kServerUseCoalescingApi = 'server_use_coalescing_api';
    
    #include <memory>
    
    
    {  while (!got_sigint && !worker.Done()) {
    gpr_sleep_until(gpr_time_add(gpr_now(GPR_CLOCK_REALTIME),
                                 gpr_time_from_seconds(5, GPR_TIMESPAN)));
  }
}
    
    #ifndef GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
#define GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    typedef pthread_mutex_t gpr_mu;
typedef pthread_cond_t gpr_cv;
typedef pthread_once_t gpr_once;
    
      bool Generate(const grpc::protobuf::FileDescriptor* file,
                const grpc::string& parameter,
                grpc::protobuf::compiler::GeneratorContext* context,
                grpc::string* error) const;
    
    class StringAppendOperator : public AssociativeMergeOperator {
 public:
  // Constructor: specify delimiter
  explicit StringAppendOperator(char delim_char);
    }
    
    
    {  // Returns the new (possibly unchanged) length of the list
  return it.Length();
}
    
     public:  // Accessors
  /// The number of items in (list: key)
  int Length(const std::string& key);
    
      // Load blocks into cache.
  for (size_t i = 0; i < kNumBlocks - 1; i++) {
    iter = db_->NewIterator(read_options);
    iter->Seek(ToString(i));
    ASSERT_OK(iter->status());
    CheckCacheCounters(options, 1, 0, 1, 0);
    CheckCompressedCacheCounters(options, 1, 0, 1, 0);
    iterators[i].reset(iter);
  }
  size_t usage = cache->GetUsage();
  ASSERT_LT(0, usage);
  ASSERT_EQ(usage, cache->GetPinnedUsage());
  size_t compressed_usage = compressed_cache->GetUsage();
  ASSERT_LT(0, compressed_usage);
  // Compressed block cache cannot be pinned.
  ASSERT_EQ(0, compressed_cache->GetPinnedUsage());
    
    namespace rocksdb {
    }
    
    /**
 * @brief delete dir
 * @details
 *
 * @param dirname [description]
 * @return [description]
 */
Status EnvLibrados::DeleteDir(const std::string& dirname)
{
  LOG_DEBUG('[IN]%s\n', dirname.c_str());
  std::string fid, dir, file;
  split(dirname + '/temp', &dir, &file);
  Status s = Status::OK();
    }