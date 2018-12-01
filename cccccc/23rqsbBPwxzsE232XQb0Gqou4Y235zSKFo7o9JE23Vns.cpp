
        
        
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    ImmutableExtensionLiteGenerator::ImmutableExtensionLiteGenerator(
    const FieldDescriptor* descriptor, Context* context)
  : descriptor_(descriptor), context_(context),
    name_resolver_(context->GetNameResolver()) {
  if (descriptor_->extension_scope() != NULL) {
    scope_ = name_resolver_->GetImmutableClassName(
        descriptor_->extension_scope());
  } else {
    scope_ = name_resolver_->GetImmutableClassName(descriptor_->file());
  }
}
    
      (*variables)['type'] =
      name_resolver->GetImmutableClassName(descriptor->message_type());
  const FieldDescriptor* key = KeyField(descriptor);
  const FieldDescriptor* value = ValueField(descriptor);
  const JavaType keyJavaType = GetJavaType(key);
  const JavaType valueJavaType = GetJavaType(value);
    
    #include <memory>
    
      string str_with_null_char('ab\0c', 4);
  EXPECT_EXIT(
      decode_data.AddString(1, str_with_null_char, 'def'),
      ::testing::KilledBySignal(SIGABRT),
      'error: got a null char in a string for making TextFormat data, input:');
  EXPECT_EXIT(
      decode_data.AddString(1, 'def', str_with_null_char),
      ::testing::KilledBySignal(SIGABRT),
      'error: got a null char in a string for making TextFormat data, input:');
    
      /**
   * @brief Set the data_ shared_ptr to point to the SyncedMemory holding the
   *        data_ of Blob other -- useful in Layer%s which simply perform a copy
   *        in their Forward pass.
   *
   * This deallocates the SyncedMemory holding this Blob's data_, as
   * shared_ptr calls its destructor when reset with the '=' operator.
   */
  void ShareData(const Blob& other);
  /**
   * @brief Set the diff_ shared_ptr to point to the SyncedMemory holding the
   *        diff_ of Blob other -- useful in Layer%s which simply perform a copy
   *        in their Forward pass.
   *
   * This deallocates the SyncedMemory holding this Blob's diff_, as
   * shared_ptr calls its destructor when reset with the '=' operator.
   */
  void ShareDiff(const Blob& other);
    
      Brew mode_;
    
     protected:
   /**
   * @brief Generates a random integer from Uniform({0, 1, ..., n-1}).
   *
   * @param n
   *    The upperbound (exclusive) value of the random number.
   * @return
   *    A uniformly random integer value from ({0, 1, ..., n-1}).
   */
  virtual int Rand(int n);
    
    #endif  // CAFFE_BATCHNORM_LAYER_HPP_

    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
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
    
      /**
   * @brief Computes the Contrastive error gradient w.r.t. the inputs.
   *
   * Computes the gradients with respect to the two input vectors (bottom[0] and
   * bottom[1]), but not the similarity label (bottom[2]).
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
   *      This Blob's diff will simply contain the loss_weight* @f$ \lambda @f$,
   *      as @f$ \lambda @f$ is the coefficient of this layer's output
   *      @f$\ell_i@f$ in the overall Net loss
   *      @f$ E = \lambda_i \ell_i + \mbox{other loss terms}@f$; hence
   *      @f$ \frac{\partial E}{\partial \ell_i} = \lambda_i @f$.
   *      (*Assuming that this top Blob is not used as a bottom (input) by any
   *      other layer of the Net.)
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$a@f$; Backward fills their diff with
   *      gradients if propagate_down[0]
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$b@f$; Backward fills their diff with gradients if
   *      propagate_down[1]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace caffe {
    }
    
    
    {}  // namespace caffe
    
    void SecureAuthContext::AddProperty(const grpc::string& key,
                                    const grpc::string_ref& value) {
  if (!ctx_) return;
  grpc_auth_context_add_property(ctx_, key.c_str(), value.data(), value.size());
}
    
    void CensusClientCallData::OnDoneRecvTrailingMetadataCb(void* user_data,
                                                        grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  GPR_ASSERT(calld != nullptr);
  if (error == GRPC_ERROR_NONE) {
    GPR_ASSERT(calld->recv_trailing_metadata_ != nullptr);
    FilterTrailingMetadata(calld->recv_trailing_metadata_,
                           &calld->elapsed_time_);
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_trailing_metadata_,
                   GRPC_ERROR_REF(error));
}
    
      // Field data sizes in bytes
  enum FieldSize {
    kTraceIdSize = 16,
    kSpanIdSize = 8,
    kTraceOptionsSize = 1,
  };
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusServerCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusServerCallData : public CallData {
 public:
  // Maximum size of server stats that are sent on the wire.
  static constexpr uint32_t kMaxServerStatsLen = 16;
    }
    
    Status ProtoServerReflection::GetFileContainingExtension(
    ServerContext* context, const ExtensionRequest* request,
    ServerReflectionResponse* response) {
  if (descriptor_pool_ == nullptr) {
    return Status::CANCELLED;
  }
    }
    
    
    {}  // namespace grpc
    
    
    {}  // namespace leveldb
    
      // Removes a SnapshotImpl from this list.
  //
  // The snapshot must have been created by calling New() on this list.
  //
  // The snapshot pointer should not be const, because its memory is
  // deallocated. However, that would force us to change DB::ReleaseSnapshot(),
  // which is in the API, and currently takes a const Snapshot.
  void Delete(const SnapshotImpl* snapshot) {
#if !defined(NDEBUG)
    assert(snapshot->list_ == this);
#endif  // !defined(NDEBUG)
    snapshot->prev_->next_ = snapshot->next_;
    snapshot->next_->prev_ = snapshot->prev_;
    delete snapshot;
  }
    
    ButteraugliComparator::ButteraugliComparator(const int width, const int height,
                                             const std::vector<uint8_t>* rgb,
                                             const float target_distance,
                                             ProcessStats* stats)
    : width_(width),
      height_(height),
      target_distance_(target_distance),
      rgb_orig_(*rgb),
      comparator_(LinearRgb(width_, height_, *rgb)),
      distance_(0.0),
      stats_(stats) {}
    
      void Compare(const OutputImage& img) override;
    
    void TransformBlock(double block[64], Transform1d f) {
  double tmp[64];
  for (int x = 0; x < 8; ++x) {
    f(&block[x], 8, &tmp[x]);
  }
  for (int y = 0; y < 8; ++y) {
    f(&tmp[8 * y], 1, &block[8 * y]);
  }
}
    
    #include <math.h>
    
    namespace guetzli {
    }
    
    void Usage() {
  fprintf(stderr,
      'Guetzli JPEG compressor. Usage: \n'
      'guetzli [flags] input_filename output_filename\n'
      '\n'
      'Flags:\n'
      '  --verbose    - Print a verbose trace of all attempts to standard output.\n'
      '  --quality Q  - Visual quality to aim for, expressed as a JPEG quality value.\n'
      '                 Default value is %d.\n'
      '  --memlimit M - Memory limit in MB. Guetzli will fail if unable to stay under\n'
      '                 the limit. Default limit is %d MB.\n'
      '  --nomemlimit - Do not limit memory usage.\n', kDefaultJPEGQuality, kDefaultMemlimitMB);
  exit(1);
}
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    void SaveQuantTables(const int q[3][kDCTBlockSize], JPEGData* jpg) {
  const size_t kTableSize = kDCTBlockSize * sizeof(q[0][0]);
  jpg->quant.clear();
  int num_tables = 0;
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    JPEGComponent* comp = &jpg->components[i];
    // Check if we have this quant table already.
    bool found = false;
    for (int j = 0; j < num_tables; ++j) {
      if (memcmp(&q[i][0], &jpg->quant[j].values[0], kTableSize) == 0) {
        comp->quant_idx = j;
        found = true;
        break;
      }
    }
    if (!found) {
      JPEGQuantTable table;
      memcpy(&table.values[0], &q[i][0], kTableSize);
      table.precision = 0;
      for (int k = 0; k < kDCTBlockSize; ++k) {
        assert(table.values[k] >= 0);
        assert(table.values[k] < (1 << 16));
        if (table.values[k] > 0xff) {
          table.precision = 1;
        }
      }
      table.index = num_tables;
      comp->quant_idx = num_tables;
      jpg->quant.push_back(table);
      ++num_tables;
    }
  }
}
    
    #include 'guetzli/jpeg_data.h'
    
    bool RefineDCTBlock(const HuffmanTableEntry* ac_huff,
                    int Ss, int Se, int Al,
                    int* eobrun,
                    BitReaderState* br,
                    JPEGData* jpg,
                    coeff_t* coeffs) {
  bool eobrun_allowed = Ss > 0;
  if (Ss == 0) {
    int s = br->ReadBits(1);
    coeff_t dc_coeff = coeffs[0];
    dc_coeff |= s << Al;
    coeffs[0] = dc_coeff;
    ++Ss;
  }
  if (Ss > Se) {
    return true;
  }
  int p1 = 1 << Al;
  int m1 = -(1 << Al);
  int k = Ss;
  int r;
  int s;
  bool in_zero_run = false;
  if (*eobrun <= 0) {
    for (; k <= Se; k++) {
      s = ReadSymbol(ac_huff, br);
      if (s >= kJpegHuffmanAlphabetSize) {
        fprintf(stderr, 'Invalid Huffman symbol %d for AC coefficient %d\n',
                s, k);
        jpg->error = JPEG_INVALID_SYMBOL;
        return false;
      }
      r = s >> 4;
      s &= 15;
      if (s) {
        if (s != 1) {
          fprintf(stderr, 'Invalid Huffman symbol %d for AC coefficient %d\n',
                  s, k);
          jpg->error = JPEG_INVALID_SYMBOL;
          return false;
        }
        s = br->ReadBits(1) ? p1 : m1;
        in_zero_run = false;
      } else {
        if (r != 15) {
          *eobrun = 1 << r;
          if (r > 0) {
            if (!eobrun_allowed) {
              fprintf(stderr, 'End-of-block run crossing DC coeff.\n');
              jpg->error = JPEG_EOB_RUN_TOO_LONG;
              return false;
            }
            *eobrun += br->ReadBits(r);
          }
          break;
        }
        in_zero_run = true;
      }
      do {
        coeff_t thiscoef = coeffs[kJPEGNaturalOrder[k]];
        if (thiscoef != 0) {
          if (br->ReadBits(1)) {
            if ((thiscoef & p1) == 0) {
              if (thiscoef >= 0) {
                thiscoef += p1;
              } else {
                thiscoef += m1;
              }
            }
          }
          coeffs[kJPEGNaturalOrder[k]] = thiscoef;
        } else {
          if (--r < 0) {
            break;
          }
        }
        k++;
      } while (k <= Se);
      if (s) {
        if (k > Se) {
          fprintf(stderr, 'Out-of-band coefficient %d band was %d-%d\n',
                  k, Ss, Se);
          jpg->error = JPEG_OUT_OF_BAND_COEFF;
          return false;
        }
        coeffs[kJPEGNaturalOrder[k]] = s;
      }
    }
  }
  if (in_zero_run) {
    fprintf(stderr, 'Extra zero run before end-of-block.\n');
    jpg->error = JPEG_EXTRA_ZERO_RUN;
    return false;
  }
  if (*eobrun > 0) {
    for (; k <= Se; k++) {
      coeff_t thiscoef = coeffs[kJPEGNaturalOrder[k]];
      if (thiscoef != 0) {
        if (br->ReadBits(1)) {
          if ((thiscoef & p1) == 0) {
            if (thiscoef >= 0) {
              thiscoef += p1;
            } else {
              thiscoef += m1;
            }
          }
        }
        coeffs[kJPEGNaturalOrder[k]] = thiscoef;
      }
    }
  }
  --(*eobrun);
  return true;
}
    
    namespace {
    }