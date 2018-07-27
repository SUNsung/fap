
        
          static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethodSync')));
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    namespace ui {
    }
    
    
    {}  // namespace nwapi
    
    
    {  helper->DeleteAppCacheGroup(manifest_url);
  return true;
}
    
        bool ReadHTML(ClipboardData& data) {
      DCHECK(data.type == TYPE_HTML);
      base::string16 text;
      std::string src_url;
      uint32_t fragment_start, fragment_end;
      clipboard_->ReadHTML(ui::CLIPBOARD_TYPE_COPY_PASTE, &text, &src_url, &fragment_start, &fragment_end);
      data.data.reset(new std::string(base::UTF16ToUTF8(text)));
      return true;
    }
    
    
    
    #define opus_fft_free_arch(_st, arch) \
   ((void)(arch), opus_fft_free_arm_neon(_st))
    
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
    
    #if (defined(__GNUC__) && defined(__STDC__) && __STDC__ && __STDC_VERSION__ >= 199901L)
        /* supported by gcc in C99 mode, but not by all other compilers */
        #warning 'Don't have the functions lrint() and lrintf ().'
        #warning 'Replacing these functions with a standard C cast.'
#endif /* __STDC_VERSION__ >= 199901L */
        #include <math.h>
        #define float2int(flt) ((int)(floor(.5+flt)))
#endif
    
    #ifdef  __cplusplus
extern 'C'
{
#endif
    }
    
    /* Compute reflection coefficients from input signal */
void silk_burg_modified_c(
    opus_int32                  *res_nrg,           /* O    Residual energy                                             */
    opus_int                    *res_nrg_Q,         /* O    Residual energy Q value                                     */
    opus_int32                  A_Q16[],            /* O    Prediction coefficients (length order)                      */
    const opus_int16            x[],                /* I    Input signal, length: nb_subfr * ( D + subfr_length )       */
    const opus_int32            minInvGain_Q30,     /* I    Inverse of max prediction gain                              */
    const opus_int              subfr_length,       /* I    Input signal subframe length (incl. D preceding samples)    */
    const opus_int              nb_subfr,           /* I    Number of subframes stacked in x                            */
    const opus_int              D,                  /* I    Order                                                       */
    int                         arch                /* I    Run-time architecture                                       */
);
    
    /* (a32 * b32) >> 16 */
#undef silk_SMULWW
static OPUS_INLINE opus_int32 silk_SMULWW_armv4(opus_int32 a, opus_int32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
    '#silk_SMULWW\n\t'
    'smull %0, %1, %2, %3\n\t'
    : '=&r'(rd_lo), '=&r'(rd_hi)
    : '%r'(a), 'r'(b)
  );
  return (rd_hi<<16)+(rd_lo>>16);
}
#define silk_SMULWW(a, b) (silk_SMULWW_armv4(a, b))
    
    
    {    return r;
}
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
      jsize jlen = (jsize) len;
  jobjectArray jinfos = jenv->NewObjectArray(jlen, jenv->FindClass('java/lang/String'), jenv->NewStringUTF(''));
  for(int i=0 ; i<jlen; i++) {
    jenv->SetObjectArrayElement(jinfos, i, jenv->NewStringUTF((const char*) result[i]));
  }
  jenv->SetObjectArrayElement(jout, 0, jinfos);
    
      /*!
   * \brief Push row block into the page.
   * \param batch the row batch.
   */
  inline void Push(const dmlc::RowBlock<uint32_t>& batch) {
    data.reserve(data.size() + batch.offset[batch.size] - batch.offset[0]);
    offset.reserve(offset.size() + batch.size);
    CHECK(batch.index != nullptr);
    for (size_t i = 0; i < batch.size; ++i) {
      offset.push_back(offset.back() + batch.offset[i + 1] - batch.offset[i]);
    }
    for (size_t i = batch.offset[0]; i < batch.offset[batch.size]; ++i) {
      uint32_t index = batch.index[i];
      bst_float fvalue = batch.value == nullptr ? 1.0f : batch.value[i];
      data.emplace_back(index, fvalue);
    }
    CHECK_EQ(offset.back(), data.size());
  }
  /*!
   * \brief Push a sparse page
   * \param batch the row page
   */
  inline void Push(const SparsePage &batch) {
    size_t top = offset.back();
    data.resize(top + batch.data.size());
    std::memcpy(dmlc::BeginPtr(data) + top,
                dmlc::BeginPtr(batch.data),
                sizeof(Entry) * batch.data.size());
    size_t begin = offset.size();
    offset.resize(begin + batch.Size());
    for (size_t i = 0; i < batch.Size(); ++i) {
      offset[i + begin] = top + batch.offset[i + 1];
    }
  }
  /*!
   * \brief Push one instance into page
   *  \param inst an instance row
   */
  inline void Push(const Inst &inst) {
    offset.push_back(offset.back() + inst.length);
    size_t begin = data.size();
    data.resize(begin + inst.length);
    if (inst.length != 0) {
      std::memcpy(dmlc::BeginPtr(data) + begin, inst.data,
                  sizeof(Entry) * inst.length);
    }
  }
    
    void SimpleCSRSource::CopyFrom(dmlc::Parser<uint32_t>* parser) {
  // use qid to get group info
  const uint64_t default_max = std::numeric_limits<uint64_t>::max();
  uint64_t last_group_id = default_max;
  bst_uint group_size = 0;
  this->Clear();
  while (parser->Next()) {
    const dmlc::RowBlock<uint32_t>& batch = parser->Value();
    if (batch.label != nullptr) {
      info.labels_.insert(info.labels_.end(), batch.label, batch.label + batch.size);
    }
    if (batch.weight != nullptr) {
      info.weights_.insert(info.weights_.end(), batch.weight, batch.weight + batch.size);
    }
    if (batch.qid != nullptr) {
      info.qids_.insert(info.qids_.end(), batch.qid, batch.qid + batch.size);
      // get group
      for (size_t i = 0; i < batch.size; ++i) {
        const uint64_t cur_group_id = batch.qid[i];
        if (last_group_id == default_max || last_group_id != cur_group_id) {
          info.group_ptr_.push_back(group_size);
        }
        last_group_id = cur_group_id;
        ++group_size;
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
    
    SEXP XGDMatrixSaveBinary_R(SEXP handle, SEXP fname, SEXP silent) {
  R_API_BEGIN();
  CHECK_CALL(XGDMatrixSaveBinary(R_ExternalPtrAddr(handle),
                                 CHAR(asChar(fname)),
                                 asInteger(silent)));
  R_API_END();
  return R_NilValue;
}