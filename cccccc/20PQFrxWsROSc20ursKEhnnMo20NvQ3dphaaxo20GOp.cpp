
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    class TestRandomAccessFile : public RandomAccessFile {
  // The file contents is 10 bytes of all A's
  Status Read(uint64 offset, size_t n, StringPiece* result,
              char* scratch) const override {
    Status s;
    for (int i = 0; i < n; ++i) {
      if (offset + i >= 10) {
        n = i;
        s = errors::OutOfRange('EOF');
        break;
      }
      scratch[i] = 'A';
    }
    *result = StringPiece(scratch, n);
    return s;
  }
};
    
      Status Optimize(Cluster* cluster, const GrapplerItem& item,
                  GraphDef* pruned_graph) override;
    
    int SubProcess::Communicate(const string* stdin_input, string* stdout_output,
                            string* stderr_output) {
  struct pollfd fds[kNFds];
  size_t nbytes[kNFds];
  string* iobufs[kNFds];
  int fd_count = 0;
    }
    
    /**
 * \ingroup CXX11_NeuralNetworks_Module
 * \brief Template functor to clip the magnitude of the first scalar.
 *
 * \sa class CwiseBinaryOp, MatrixBase::Clip
 */
template <typename Scalar>
struct scalar_clip_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_clip_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Scalar
  operator()(const Scalar& a, const Scalar& b) const {
    return numext::mini(numext::maxi(a, -b), b);
  }
  template <typename Packet>
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Packet
  packetOp(const Packet& a, const Packet& b) const {
    return internal::pmin(internal::pmax(a, internal::pnegate(b)), b);
  }
};
    
    
    {}  // namespace xla

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        int32 max_index = -1;
    if (data_elements_size) {
      *data_elements_size = 0;
    }
    for (const Tensor& indices : *indices_inputs) {
      if (indices.NumElements() > 0) {
        Eigen::Tensor<int32, 0, Eigen::RowMajor> m =
            indices.flat<int32>().maximum();
        max_index = std::max(m(), max_index);
      }
      if (data_elements_size) {
        *data_elements_size += indices.NumElements();
      }
    }
    
    #define REGISTER_GPUCONCAT32(T)                                               \
  template void ConcatGPUSlice<T, int32>(                                     \
      const Eigen::GpuDevice& gpu_device,                                     \
      const std::vector<std::unique_ptr<typename TTypes<T, 2>::ConstMatrix>>& \
          inputs_flat,                                                        \
      typename TTypes<T, 2>::Matrix* output);
    
    IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Call_Static_Method,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
      base::WaitableEvent done(false, false);
  BrowserThread::PostTask(
      BrowserThread::IO, FROM_HERE,
      base::Bind(&SetProxyConfigCallback, &done,
                 make_scoped_refptr(context_getter), config));
  done.Wait();
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    // static
void DispatcherBindings::CallStaticMethodSync(
    const v8::FunctionCallbackInfo<v8::Value>& args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  if (args.Length() < 3) {
    args.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
                                     'CallStaticMethodSync requries 3 arguments'))));
    return;
  }
    }
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
    
    {}
    
      n = get_bits(8);
    
    /*The number of extra bits of precision at which to store rate metrics.*/
# define OC_BIT_SCALE  (6)
/*The number of extra bits of precision at which to store RMSE metrics.
  This must be at least half OC_BIT_SCALE (rounded up).*/
# define OC_RMSE_SCALE (5)
/*The number of bins to partition statistics into.*/
# define OC_SAD_BINS   (24)
/*The number of bits of precision to drop from SAD scores to assign them to a
   bin.*/
# define OC_SAD_SHIFT  (9)
    
    
    {
    {    {&_44pn1_p5_0,&_44pn1_p5_1,&_44pn1_p4_1},
    {&_44pn1_p6_0,&_44pn1_p6_1,&_44pn1_p6_2},
   }
};
    
    /* Frequency to octave.  We arbitrarily declare 63.5 Hz to be octave
   0.0 */
    
    #elif (defined(OPUS_X86_MAY_HAVE_SSE) && !defined(OPUS_X86_PRESUME_SSE)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE2) && !defined(OPUS_X86_PRESUME_SSE2)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE4_1) && !defined(OPUS_X86_PRESUME_SSE4_1)) || \
  (defined(OPUS_X86_MAY_HAVE_AVX) && !defined(OPUS_X86_PRESUME_AVX))
    
    #if (HAVE_LRINTF)
    
    #undef silk_ADD_POS_SAT32
static OPUS_INLINE opus_int32 silk_ADD_POS_SAT32(opus_int64 a, opus_int64 b){
    opus_int32 tmp;
    ops_count += 1;
    tmp = (opus_int32)((((a)+(b)) & 0x80000000) ? silk_int32_MAX : ((a)+(b)));
    return(tmp);
}
    
    
    
    #endif // __cocos2dx_experimental_video_h__
#endif //#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_IOS) && !defined(CC_TARGET_OS_TVOS)

    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShapeEdgeSegment_getPointB'', nullptr);
        return 0;
    }
#endif
    
    
    mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);
    glDrawArrays(GL_LINE_LOOP, 0, vertexCount);
    
    
    {
    {		case 'k':
			m_platform->SetType(b2_kinematicBody);
			m_platform->SetLinearVelocity(b2Vec2(-m_speed, 0.0f));
			m_platform->SetAngularVelocity(0.0f);
			break;
		}
	}
    
    #define EXPECT_MARKER() \
  if (pos + 2 > len || data[pos] != 0xff) {                             \
    fprintf(stderr, 'Marker byte (0xff) expected, found: %d '           \
            'pos=%d len=%d\n',                                          \
            (pos < len ? data[pos] : 0), static_cast<int>(pos),         \
            static_cast<int>(len));                                     \
    jpg->error = JPEG_MARKER_BYTE_NOT_FOUND;                            \
    return false;                                                       \
  }
    
      // Compute Huffman codes for each histograms.
  for (int i = 0; i < num_histo; ++i) {
    const bool is_dc = static_cast<size_t>(i) < num_dc_histo;
    const int idx = is_dc ? i : i - num_dc_histo;
    int counts[kJpegHuffmanMaxBitLength + 1] = { 0 };
    int values[JpegHistogram::kSize] = { 0 };
    BuildHuffmanCode(&depths[i * JpegHistogram::kSize], counts, values);
    HuffmanCodeTable table;
    for (int j = 0; j < 256; ++j) table.depth[j] = 255;
    BuildHuffmanCodeTable(counts, values, &table);
    for (int c = 0; c < ncomps; ++c) {
      if (is_dc) {
        if (dc_histo_indexes[c] == idx) (*dc_huff_tables)[c] = table;
      } else {
        if (ac_histo_indexes[c] == idx) (*ac_huff_tables)[c] = table;
      }
    }
    int max_length = kJpegHuffmanMaxBitLength;
    while (max_length > 0 && counts[max_length] == 0) --max_length;
    --counts[max_length];
    int total_count = 0;
    for (int j = 0; j <= max_length; ++j) total_count += counts[j];
    data[pos++] = is_dc ? i : static_cast<uint8_t>(i - num_dc_histo + 0x10);
    for (size_t j = 1; j <= kJpegHuffmanMaxBitLength; ++j) {
      data[pos++] = counts[j];
    }
    for (int j = 0; j < total_count; ++j) {
      data[pos++] = values[j];
    }
  }
    
    void SetDownsampledCoefficients(const std::vector<float>& pixels,
                                int factor_x, int factor_y,
                                OutputImageComponent* comp) {
  assert(pixels.size() == comp->width() * comp->height());
  comp->Reset(factor_x, factor_y);
  for (int block_y = 0; block_y < comp->height_in_blocks(); ++block_y) {
    for (int block_x = 0; block_x < comp->width_in_blocks(); ++block_x) {
      double blockd[kDCTBlockSize];
      int x0 = 8 * block_x * factor_x;
      int y0 = 8 * block_y * factor_y;
      assert(x0 < comp->width());
      assert(y0 < comp->height());
      for (int iy = 0; iy < 8; ++iy) {
        for (int ix = 0; ix < 8; ++ix) {
          float avg = 0.0;
          for (int j = 0; j < factor_y; ++j) {
            for (int i = 0; i < factor_x; ++i) {
              int x = std::min(x0 + ix * factor_x + i, comp->width() - 1);
              int y = std::min(y0 + iy * factor_y + j, comp->height() - 1);
              avg += pixels[y * comp->width() + x];
            }
          }
          avg /= factor_x * factor_y;
          blockd[iy * 8 + ix] = avg;
        }
      }
      ComputeBlockDCTDouble(blockd);
      blockd[0] -= 1024.0;
      coeff_t block[kDCTBlockSize];
      for (int k = 0; k < kDCTBlockSize; ++k) {
        block[k] = static_cast<coeff_t>(std::round(blockd[k]));
      }
      comp->SetCoeffBlock(block_x, block_y, block);
    }
  }
}
    
    // kDCTMatrix[8*u+x] = 0.5*alpha(u)*cos((2*x+1)*u*M_PI/16),
// where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
static const double kDCTMatrix[64] = {
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.4903926402,  0.4157348062,  0.2777851165,  0.0975451610,
 -0.0975451610, -0.2777851165, -0.4157348062, -0.4903926402,
  0.4619397663,  0.1913417162, -0.1913417162, -0.4619397663,
 -0.4619397663, -0.1913417162,  0.1913417162,  0.4619397663,
  0.4157348062, -0.0975451610, -0.4903926402, -0.2777851165,
  0.2777851165,  0.4903926402,  0.0975451610, -0.4157348062,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.2777851165, -0.4903926402,  0.0975451610,  0.4157348062,
 -0.4157348062, -0.0975451610,  0.4903926402, -0.2777851165,
  0.1913417162, -0.4619397663,  0.4619397663, -0.1913417162,
 -0.1913417162,  0.4619397663, -0.4619397663,  0.1913417162,
  0.0975451610, -0.2777851165,  0.4157348062, -0.4903926402,
  0.4903926402, -0.4157348062,  0.2777851165, -0.0975451610,
};
    
    bool SetDepth(int p0, HuffmanTree *pool, uint8_t *depth, int max_depth) {
  int stack[17];
  int level = 0;
  int p = p0;
  assert(max_depth <= 16);
  stack[0] = -1;
  while (true) {
    if (pool[p].index_left_ >= 0) {
      level++;
      if (level > max_depth) return false;
      stack[level] = pool[p].index_right_or_value_;
      p = pool[p].index_left_;
      continue;
    } else {
      depth[pool[p].index_right_or_value_] = static_cast<uint8_t>(level);
    }
    while (level >= 0 && stack[level] == -1) level--;
    if (level < 0) return true;
    p = stack[level];
    stack[level] = -1;
  }
}
    
    #endif  // GUETZLI_FDCT_H_

    
    
    {}  // namespace guetzli

    
    // Library to decode jpeg coefficients into an RGB image.
    
    // Gamma-compensated chroma subsampling.
// Returns Y, U, V image planes, each with width x height dimensions, but the
// U and V planes are composed of 2x2 blocks with the same values.
std::vector<std::vector<float> > RGBToYUV420(
    const std::vector<uint8_t>& rgb_in, const int width, const int height);
    
    template <class Clock>
struct timespec
timeSpecFromTimePoint(time_point<Clock> absTime)
{
  auto epoch = absTime.time_since_epoch();
  if (epoch.count() < 0) {
    // kernel timespec_valid requires non-negative seconds and nanos in [0,1G)
    epoch = Clock::duration::zero();
  }
    }
    
    #endif
    
    // This is ugly, but better perf for DeterministicAtomic translates
// directly to more states explored and tested
#define FOLLY_TEST_DSCHED_VLOG(...)                             \
  do {                                                          \
    if (false) {                                                \
      VLOG(2) << std::hex << std::this_thread::get_id() << ': ' \
              << __VA_ARGS__;                                   \
    }                                                           \
  } while (false)
    
    TEST(AtomicSharedPtr, exchange) {
  atomic_shared_ptr<int> fooptr;
  auto a = make_shared<int>(1);
  fooptr.store(std::move(a));
  auto b = fooptr.exchange(make_shared<int>());
  EXPECT_EQ(*b, 1);
}
    
    #include <folly/Conv.h>
    
    namespace {
folly::dynamic& insertAtKey(
    folly::dynamic* d, bool allow_non_string_keys, const folly::dynamic& key) {
  if (key.isString()) {
    return (*d)[key];
  // folly::dynamic allows non-null scalars for keys.
  } else if (key.isNumber() || key.isBool()) {
    return allow_non_string_keys ? (*d)[key] : (*d)[key.asString()];
  }
  // One cause might be oddness like p.optional(dynamic::array(...), ...);
  throw DynamicParserLogicError(
    'Unsupported key type ', key.typeName(), ' of ', detail::toPseudoJson(key)
  );
}
} // namespace