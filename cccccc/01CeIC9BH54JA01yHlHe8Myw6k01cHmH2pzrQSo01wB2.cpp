
        
            const auto* shapes_and_types = c.output_handle_shapes_and_types(i);
    if (shapes_and_types != nullptr) {
      auto* out_handle_data = out.mutable_handle_data();
      out_handle_data->set_is_set(true);
      for (const auto& p : *shapes_and_types) {
        auto* out_shape_and_type = out_handle_data->add_shape_and_type();
        ProtoFromShapeHandle(p.shape, &c, out_shape_and_type->mutable_shape());
        out_shape_and_type->set_dtype(p.dtype);
      }
    }
    
    #include 'tensorflow/core/framework/op.h'
    
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
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    struct TFTensorDeleter {
  void operator()(TF_Tensor* p) const { TF_DeleteTensor(p); }
};
    
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
    
        enum COLOR_SPACE
    {
        COLOR_SPACE_BT601,
        COLOR_SPACE_BT709
    };
    
            if (policy == CONVERT_POLICY_SATURATE)
        {
            for (; j < roiw16; j += 16)
            {
                internal::prefetch(src0 + j);
                internal::prefetch(src1 + j);
                uint8x16_t v_src0 = vld1q_u8(src0 + j);
                int16x8_t v_src00 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src0)));
                int16x8_t v_src01 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src0)));
                int16x8_t v_src10 = vld1q_s16(src1 + j), v_src11 = vld1q_s16(src1 + j + 8);
                int16x8_t v_dst0 = vqaddq_s16(v_src00, v_src10);
                int16x8_t v_dst1 = vqaddq_s16(v_src01, v_src11);
                vst1q_s16(dst + j, v_dst0);
                vst1q_s16(dst + j + 8, v_dst1);
            }
            for (; j < roiw8; j += 8)
            {
                int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vld1_u8(src0 + j)));
                int16x8_t v_src1 = vld1q_s16(src1 + j);
                int16x8_t v_dst = vqaddq_s16(v_src0, v_src1);
                vst1q_s16(dst + j, v_dst);
            }
    }
    
            int32x4_t normh = vmovl_s16(vget_high_s16(norm));
        int32x4_t norml = vmovl_s16(vget_low_s16(norm));
    
    #ifdef CAROTENE_NEON
#include <arm_neon.h>
#include 'intrinsics.hpp'
#endif
    
                int32x4_t s1 = vmovq_n_s32(0);
            int32x4_t s2 = vmovq_n_s32(0);
    
    
    {        prev = vaddw_u16(prev, vdup_lane_u16(el4h, 3));
    }
    
    inline float32x2_t vrsqrt_f32(float32x2_t val)
{
    float32x2_t e = vrsqrte_f32(val);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    return e;
}
    
    class JointBullet : public ConstraintBullet {
    }
    
    class BulletPhysicsServer;
    
    /**
	@author AndreaCatania
*/
    
    
    {#ifdef TOOLS_ENABLED
	EditorPlugins::add_by_type<EditorPluginCSG>();
#endif
#endif
}
    
    	BIND_CONSTANT(TARGET_PEER_BROADCAST);
	BIND_CONSTANT(TARGET_PEER_SERVER);
    
    #include 'shell.h'
    
    //////////////////////////////////////////////////////////////////////
    
    namespace HPHP {
    }
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
      if (need_file) {
    char tmp[] = '/tmp/php-wrap-XXXXXX';
    int tmp_fd = mkstemp(tmp);
    if (tmp_fd == -1) {
      fprintf(stderr, 'Error: unable to open temporary file');
      exit(EXIT_FAILURE);
    }
    if (program == nullptr) {
      // If the program wasn't specified on the command-line, ala' -r,
      // is no command-line parameter, read the PHP file from stdin.
      std::string line;
      while (std::getline(std::cin, line)) {
        write(tmp_fd, line.c_str(), line.length());
        write(tmp_fd, '\n', 1);
      }
    } else {
      // -r omits the braces
      write(tmp_fd, '<?\n', 3);
      write(tmp_fd, program, strlen(program));
    }
    close(tmp_fd);
    }
    
    inline void ExecutionContext::incrPageletTasksStarted() {
  ++m_pageletTasksStarted;
}
    
      path_str += strlen(prefix);
  path_len -= strlen(prefix);
    
    template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 0, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 0, rate, fillCols);
}
    
        std::shared_ptr<const MatrixBase> NDArrayView::GetMatrixBase(size_t rowColSplitPoint/* = AutoSelectRowColSplitPoint*/) const
    {
        switch (m_dataType)
        {
        case DataType::Float:
            return GetMatrixImpl<float>(GetTensorView<float>(), rowColSplitPoint);
        case DataType::Double:
            return GetMatrixImpl<double>(GetTensorView<double>(), rowColSplitPoint);
        case DataType::Float16:
            return GetMatrixImpl<half>(GetTensorView<half>(), rowColSplitPoint);
        case DataType::Int8:
            return GetMatrixImpl<char>(GetTensorView<char>(), rowColSplitPoint);
        case DataType::Int16:
            return GetMatrixImpl<short>(GetTensorView<short>(), rowColSplitPoint);
        default:
            LogicError('Unknown m_dataType %d', (int)m_dataType);
        }
        return nullptr;
    }
    
            const size_t m_frequency;
        const size_t m_firstN;
    
    
    {        const auto& type = dict[typeKey].Value<std::wstring>();
        if (type != typeValue) 
        {
            const auto& version = GetVersion(dict);
            LogicError('Unexpected '%ls':'%ls' in place of '%ls':'%ls' (%s).',
                       typeKey.c_str(), type.c_str(), typeKey.c_str(), typeValue.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
        }
    }
    
            size_t varRank = outputVariable.Shape().Rank();
        size_t maxSequenceLength = 1;
        size_t numSequences = 1;
        std::tie(maxSequenceLength, numSequences) = GetNumTimeStepsAndSequences(Shape().SubShape(varRank), outputVariable.DynamicAxes().size());
    
    
    {            if ((m_varKind == VariableKind::Parameter) || (m_varKind == VariableKind::Constant))
            {
                if (m_shape.HasFreeDimension())
                    InvalidArgument('Parameter/Constant '%S' has invalid shape '%S'; it is illegal for a Parameter/Constant to have a FreeDimension.', AsString().c_str(), m_shape.AsString().c_str());
            }
        }
    
        static void noOpAlarmHandler(int /*signum*/)
    {
        // this handler is intentionally NO-OP
        // the side effect of execution this handler
        // will be a termination of fcntl call below with EINTR
    }
    
    // Same as above but with additional information about required streams.
void DataReader::StartDistributedMinibatchLoop(size_t mbSize, size_t epoch, size_t subsetNum, size_t numSubsets, const std::unordered_set<InputStreamDescription>& streamDescriptions, size_t requestedEpochSamples /* = requestDataSize*/)
{
    for (size_t i = 0; i < m_ioNames.size(); i++)
    {
        m_dataReaders[m_ioNames[i]]->StartDistributedMinibatchLoop(mbSize, epoch, subsetNum, numSubsets, streamDescriptions, requestedEpochSamples);
    }
}
    
    class Clock
{
public:
    static long long GetTimeStamp();
    static long long GetTicksPerSecond();
};
    
    /*!
 * \brief Macro to register tree updater.
 *
 * \code
 * // example of registering a objective ndcg@k
 * XGBOOST_REGISTER_TREE_UPDATER(ColMaker, 'colmaker')
 * .describe('Column based tree maker.')
 * .set_body([]() {
 *     return new ColMaker<TStats>();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_TREE_UPDATER(UniqueId, Name)                   \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::TreeUpdaterReg&               \
  __make_ ## TreeUpdaterReg ## _ ## UniqueId ## __ =                    \
      ::dmlc::Registry< ::xgboost::TreeUpdaterReg>::Get()->__REGISTER__(Name)
    
    
    {    elem_of_each_node_[left_node_id] = Elem(begin, split_pt, left_node_id);
    elem_of_each_node_[right_node_id] = Elem(split_pt, e.end, right_node_id);
    elem_of_each_node_[node_id] = Elem(nullptr, nullptr, -1);
  }
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    
    {
    {
    {  // base margin
  bst_float base_margin;
  // model parameter
  GBTreeModelParam param;
  /*! \brief vector of trees stored in the model */
  std::vector<std::unique_ptr<RegTree> > trees;
  /*! \brief for the update process, a place to keep the initial trees */
  std::vector<std::unique_ptr<RegTree> > trees_to_update;
  /*! \brief some information indicator of the tree, reserved */
  std::vector<int> tree_info;
};
}  // namespace gbm
}  // namespace xgboost

    
    SEXP XGDMatrixNumRow_R(SEXP handle) {
  bst_ulong nrow;
  R_API_BEGIN();
  CHECK_CALL(XGDMatrixNumRow(R_ExternalPtrAddr(handle), &nrow));
  R_API_END();
  return ScalarInteger(static_cast<int>(nrow));
}
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct GradientBoosterReg
    : public dmlc::FunctionRegEntryBase<
  GradientBoosterReg,
  std::function<GradientBooster* (const std::vector<std::shared_ptr<DMatrix> > &cached_mats,
                                  bst_float base_margin)> > {
};