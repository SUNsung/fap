
        
          /**
   * @brief Computes the error gradient w.r.t. the concatenate inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *        respect to the outputs
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length K), into which the top gradient
   *        @f$ \frac{\partial E}{\partial y} @f$ is deconcatenated back to the
   *        inputs @f$
   *        \left[ \begin{array}{cccc}
   *          \frac{\partial E}{\partial x_1} &
   *          \frac{\partial E}{\partial x_2} &
   *          ... &
   *          \frac{\partial E}{\partial x_K}
   *        \end{array} \right] =
   *        \frac{\partial E}{\partial y}
   *        @f$
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
    #include <vector>
    
      /**
   * @brief Computes the error gradient w.r.t. the forwarded inputs.
   *
   * @param top output Blob vector (length 1+), providing the error gradient with
   *        respect to the outputs
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2+), into which the top error
   *        gradient is copied
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22>
internal::ValueArray22<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22> Values(T1 v1, T2 v2, T3 v3,
    T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12,
    T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20,
    T21 v21, T22 v22) {
  return internal::ValueArray22<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22>(v1, v2, v3, v4,
      v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19,
      v20, v21, v22);
}
    
       private:
    Iterator(const Iterator& other)
        : base_(other.base_),
        begin1_(other.begin1_),
        end1_(other.end1_),
        current1_(other.current1_),
        begin2_(other.begin2_),
        end2_(other.end2_),
        current2_(other.current2_),
        begin3_(other.begin3_),
        end3_(other.end3_),
        current3_(other.current3_),
        begin4_(other.begin4_),
        end4_(other.end4_),
        current4_(other.current4_),
        begin5_(other.begin5_),
        end5_(other.end5_),
        current5_(other.current5_),
        begin6_(other.begin6_),
        end6_(other.end6_),
        current6_(other.current6_),
        begin7_(other.begin7_),
        end7_(other.end7_),
        current7_(other.current7_) {
      ComputeCurrentValue();
    }
    
    
    {
    {
    {        int i = 0;
        for (typename ParamGenerator<ParamType>::iterator param_it =
                 generator.begin();
             param_it != generator.end(); ++param_it, ++i) {
          Message test_name_stream;
          test_name_stream << test_info->test_base_name << '/' << i;
          MakeAndRegisterTestInfo(
              test_case_name.c_str(),
              test_name_stream.GetString().c_str(),
              NULL,  // No type parameter.
              PrintToString(*param_it).c_str(),
              GetTestCaseTypeId(),
              TestCase::SetUpTestCase,
              TestCase::TearDownTestCase,
              test_info->test_meta_factory->CreateTestFactory(*param_it));
        }  // for param_it
      }  // for gen_it
    }  // for test_it
  }  // RegisterTests
    
      // Formats a byte as '%02X'.
  static std::string FormatByte(unsigned char value);
    
    // This event listener monitors how many Water objects are created and
// destroyed by each test, and reports a failure if a test leaks some Water
// objects. It does this by comparing the number of live Water objects at
// the beginning of a test and at the end of a test.
class LeakChecker : public EmptyTestEventListener {
 private:
  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& /* test_info */) {
    initially_allocated_ = Water::allocated();
  }
    }
    
    
    {  EXPECT_FALSE(IsPrime(-1));
  EXPECT_FALSE(IsPrime(-2));
  EXPECT_FALSE(IsPrime(INT_MIN));
}
    
    /**
 * @name tess_segment_pass_n
 *
 * Segment a word using the pass_n conditions of the tess segmenter.
 * @param pass_n pass number
 * @param word word to do
 */
    
      // If the bundle is null or still does not indicate the correct result,
  // fix it and use some backup reason for the blame.
  static void LastChanceBlame(bool debug, WERD_RES* word);
    
    
/**********************************************************************
 * LLSQ::add
 *
 * Add an element to the accumulator.
 **********************************************************************/
    
    
DENORM & DENORM::operator=(const DENORM & src) {
  Clear();
  inverse_ = src.inverse_;
  predecessor_ = src.predecessor_;
  pix_ = src.pix_;
  block_ = src.block_;
  if (src.rotation_ == NULL)
    rotation_ = NULL;
  else
    rotation_ = new FCOORD(*src.rotation_);
  x_origin_ = src.x_origin_;
  y_origin_ = src.y_origin_;
  x_scale_ = src.x_scale_;
  y_scale_ = src.y_scale_;
  final_xshift_ = src.final_xshift_;
  final_yshift_ = src.final_yshift_;
  return *this;
}
    
            // get data as long vectors
        // ... why do I need to explicitly use operator T ()?
        array_ref<msra::math::float4> us4(us.operator array_ref<msra::math::float4>());
        array_ref<msra::math::float4> refs4(refs.operator array_ref<msra::math::float4>());
    
        void* EnsureMapped(void* start, size_t size);
    // subsection functions
    Section* ReadSection(size_t index, MappingType mappingType = mappingParent, size_t size = 0);
    Section* AddSection(Section* sectionToAdd);
    
        // ProcessNDLConfig - Process the NDL script from a configuration string value
    // config - configuration string containing script
    void ProcessNDLConfig(const ConfigValue& config, bool fullValidate = false)
    {
        NDLScript<ElemType> script(config);
        ProcessNDLScript(&script, ndlPassAll, nullptr, fullValidate);
    }
    
        int traceLevel = config(L'traceLevel', 0);
    if (config.Exists(L'createNetwork'))
    {
        createNetworkFn = GetCreateNetworkFn(config); // (we need a separate function needed due to template code)
        return true;
    }
    else if (config.Exists(L'SimpleNetworkBuilder'))
    {
        const ConfigRecordType& simpleNetworkBuilderConfig(config(L'SimpleNetworkBuilder'));
        auto netBuilder = make_shared<SimpleNetworkBuilder<ElemType>>(simpleNetworkBuilderConfig); // parses the configuration and stores it in the SimpleNetworkBuilder object
        createNetworkFn = [netBuilder, traceLevel](DEVICEID_TYPE deviceId)
        {
            auto net = shared_ptr<ComputationNetwork>(netBuilder->BuildNetworkFromDescription()); // this operates based on the configuration saved above
            net->SetTraceLevel(traceLevel);
            return net;
        };
        return true;
    }
    // legacy NDL
    else if (config.Exists(L'NDLNetworkBuilder'))
    {
        const ConfigRecordType& ndlNetworkBuilderConfig(config(L'NDLNetworkBuilder'));
        shared_ptr<NDLBuilder<ElemType>> netBuilder = make_shared<NDLBuilder<ElemType>>(ndlNetworkBuilderConfig);
        createNetworkFn = [netBuilder, traceLevel](DEVICEID_TYPE deviceId)
        {
            auto net = shared_ptr<ComputationNetwork>(netBuilder->BuildNetworkFromDescription());
            net->SetTraceLevel(traceLevel);
            return net;
        };
        return true;
    }
    // legacy test mode for BrainScript. Will go away once we fully integrate with BS.
    else if (config.Exists(L'BrainScriptNetworkBuilder') || config.Exists(L'ExperimentalNetworkBuilder' /*legacy name*/))
    {
        // We interface with outer old CNTK config by taking the inner part, which we get as a string, as BrainScript.
        // We prepend a few standard definitions, and also definition of deviceId and precision, which all objects will pull out again when they are being constructed.
        // BUGBUG: We are not getting TextLocations right in this way! Do we need to inject location markers into the source? Moot once we fully switch to BS
        wstring sourceOfNetwork = config.Exists(L'BrainScriptNetworkBuilder') ? config(L'BrainScriptNetworkBuilder') : config(L'ExperimentalNetworkBuilder');
        if (sourceOfNetwork.find_first_of(L'([{') != 0)
            InvalidArgument('BrainScript network description must be either a BS expression in ( ) or a config record in { }');
    }
    }
    
        bool haslattice(std::wstring key) const
    {
#ifdef NONUMLATTICEMMI
        return denlattices.haslattice(key);
#else
        return numlattices.haslattice(key) && denlattices.haslattice(key);
#endif
    }
    
      {2,0,32,  &_residue_44_mid,
   &_huff_book__44c2_s_long,&_huff_book__44c2_s_long,
   &_resbook_44s_2,&_resbook_44s_2}
};
static const vorbis_residue_template _res_44s_3[]={
  {2,0,16,  &_residue_44_mid,
   &_huff_book__44c3_s_short,&_huff_book__44c3_s_short,
   &_resbook_44s_3,&_resbook_44s_3},
    
    static const vorbis_mapping_template _mapres_template_44_uncoupled[]={
  { _map_nominal_u, _res_44u_n1 }, /* -1 */
  { _map_nominal_u, _res_44u_0 }, /* 0 */
  { _map_nominal_u, _res_44u_1 }, /* 1 */
  { _map_nominal_u, _res_44u_2 }, /* 2 */
  { _map_nominal_u, _res_44u_3 }, /* 3 */
  { _map_nominal_u, _res_44u_4 }, /* 4 */
  { _map_nominal_u, _res_44u_5 }, /* 5 */
  { _map_nominal_u, _res_44u_6 }, /* 6 */
  { _map_nominal_u, _res_44u_7 }, /* 7 */
  { _map_nominal_u, _res_44u_8 }, /* 8 */
  { _map_nominal_u, _res_44u_9 }, /* 9 */
};

    
    typedef ogg_int16_t vorbis_fpu_control;
    
    /* Frequency to octave.  We arbitrarily declare 63.5 Hz to be octave
   0.0 */
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    #if defined(OPUS_HAVE_RTCD) && \
  (defined(OPUS_ARM_ASM) || defined(OPUS_ARM_MAY_HAVE_NEON_INTR))
#include 'arm/armcpu.h'
    
        if( x <= 0 ) {
        return 0;
    }
    
    static const int kDelayMicros = 100000;
static const int kReadOnlyFileLimit = 4;
static const int kMMapLimit = 4;
    
    
    {
    {    if (!s.ok()) {
      assert(table == NULL);
      delete file;
      // We do not cache error results so that if the error is transient,
      // or somebody repairs the file, we recover automatically.
    } else {
      TableAndFile* tf = new TableAndFile;
      tf->file = file;
      tf->table = table;
      *handle = cache_->Insert(key, tf, 1, &DeleteEntry);
    }
  }
  return s;
}
    
    #include <set>
#include <utility>
#include <vector>
#include 'db/dbformat.h'
    
    class VersionEditTest { };
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
    TEST(MemEnvTest, ReadWrite) {
  WritableFile* writable_file;
  SequentialFile* seq_file;
  RandomAccessFile* rand_file;
  Slice result;
  char scratch[100];
    }
    
    BlockBuilder::BlockBuilder(const Options* options)
    : options_(options),
      restarts_(),
      counter_(0),
      finished_(false) {
  assert(options->block_restart_interval >= 1);
  restarts_.push_back(0);       // First restart point is at offset 0
}
    
    Status Footer::DecodeFrom(Slice* input) {
  const char* magic_ptr = input->data() + kEncodedLength - 8;
  const uint32_t magic_lo = DecodeFixed32(magic_ptr);
  const uint32_t magic_hi = DecodeFixed32(magic_ptr + 4);
  const uint64_t magic = ((static_cast<uint64_t>(magic_hi) << 32) |
                          (static_cast<uint64_t>(magic_lo)));
  if (magic != kTableMagicNumber) {
    return Status::Corruption('not an sstable (bad magic number)');
  }
    }