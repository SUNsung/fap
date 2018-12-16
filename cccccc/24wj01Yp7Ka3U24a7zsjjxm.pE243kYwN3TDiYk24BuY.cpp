void ModelAnalyzer::PrintNodeInfo(const NodeDef* node,
                                  const GraphProperties& properties, bool debug,
                                  std::ostream& os) const {
  os << node->name() << ' [' << node->op() << ']' << std::endl;
  if (properties.HasOutputProperties(node->name())) {
    const std::vector<OpInfo::TensorProperties>& props =
        properties.GetOutputProperties(node->name());
    for (int i = 0; i < props.size(); ++i) {
      const OpInfo::TensorProperties& prop = props[i];
      os << '\t'
         << 'output ' << i << ' (' << DataTypeString(prop.dtype())
         << ') has shape ';
      if (prop.shape().unknown_rank()) {
        os << '?';
      } else {
        os << '[';
        for (int i = 0; i < prop.shape().dim_size(); ++i) {
          if (i > 0) {
            os << ', ';
          }
          if (prop.shape().dim(i).size() >= 0) {
            // Print the actual dimension.
            os << prop.shape().dim(i).size();
          } else if (prop.shape().dim(i).size() == -1) {
            // We don't know anything about the dimension.
            os << '?';
          } else {
            // Symbolic dimension.
            os << 'x' << -prop.shape().dim(i).size();
          }
        }
        os << ']';
      }
      os << std::endl;
    }
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
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_

    
      // Sets the preferred cache configuration for the specified function.
  // http://docs.nvidia.com/cuda/cuda-driver-api/group__CUDA__EXEC.html#group__CUDA__EXEC_1g40f8c11e81def95dc0072a375f965681
  static bool FuncSetCacheConfig(CUfunction function,
                                 CUfunc_cache cache_config);
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    #ifndef CONTENT_NW_SRC_API_APP_APP_H_
#define CONTENT_NW_SRC_API_APP_APP_H_
    
    namespace content {
class RenderView;
}
    
     private:
  ObjectManager* object_manager_;
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    void Menu::OnMenuClosed() {
  CHECK(!message_loop_quit_.is_null());
  message_loop_quit_.Run();
  
#if !defined(OS_WIN)
  // Ask PlatformEventSource to stop dispatching
  // events in this message loop
  // iteration. We want our menu's loop to return
  // before the next event.
  if (ui::PlatformEventSource::GetInstance())
    ui::PlatformEventSource::GetInstance()->StopCurrentEventStream();
#endif
}
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    #define CONTDST2 srcStride == dst0Stride && \
                 srcStride == dst1Stride &&
#define CONTDST3 srcStride == dst0Stride && \
                 srcStride == dst1Stride && \
                 srcStride == dst2Stride &&
#define CONTDST4 srcStride == dst0Stride && \
                 srcStride == dst1Stride && \
                 srcStride == dst2Stride && \
                 srcStride == dst3Stride &&
    
        for (size_t i = 0u; i < size.height; i += 1)
    {
        const u8 * srcy = internal::getRowPtr(srcyBase, srcyStride, i);
        const u8 * srcu = internal::getRowPtr(srcuBase, srcuStride, i);
        const u8 * srcv = internal::getRowPtr(srcvBase, srcvStride, i);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t syj = 0u, sj = 0u, dj = 0u;
    }
    
                    v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t0_16s), kernelBase[8]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t1_16s), kernelBase[7]);
                v_dst0 = vmlal_n_s16(v_dst0, vget_low_s16(t2_16s), kernelBase[6]);
    
        func(size,
         srcBase, srcStride,
         dstBase, dstStride,
         flipMode);
    
        for(size_t j = 0; j < size.height; ++j)
    {
        const T *  src = internal::getRowPtr( srcBase,  srcStride, j);
        const T * rng1 = internal::getRowPtr(rng1Base, rng1Stride, j);
        const T * rng2 = internal::getRowPtr(rng2Base, rng2Stride, j);
             u8 *  dst = internal::getRowPtr( dstBase,  dstStride, j);
        size_t i = 0;
        for( ; i < width; i += 32/sizeof(T) )
        {
            internal::prefetch(src + i);
            internal::prefetch(rng1 + i);
            internal::prefetch(rng2 + i);
    }
    }
    
      grpc_error* Init(grpc_call_element* elem,
                   const grpc_call_element_args* args) override;
    
    
    {  std::vector<const protobuf::FieldDescriptor*> extensions;
  descriptor_pool_->FindAllExtensions(desc, &extensions);
  for (auto it = extensions.begin(); it != extensions.end(); it++) {
    response->add_extension_number((*it)->number());
  }
  response->set_base_type_name(type);
  return Status::OK;
}
    
    
    {
    {   private:
    const grpc::string name_;
    const grpc::string value_;
  };
  return std::unique_ptr<ServerBuilderOption>(new StringOption(name, value));
}
    
      virtual void PredictBatch(DMatrix* dmat, HostDeviceVector<bst_float>* out_preds,
                            const gbm::GBTreeModel& model, int tree_begin,
                            unsigned ntree_limit = 0) = 0;
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
    SEXP XGDMatrixSliceDMatrix_R(SEXP handle, SEXP idxset) {
  SEXP ret;
  R_API_BEGIN();
  int len = length(idxset);
  std::vector<int> idxvec(len);
  for (int i = 0; i < len; ++i) {
    idxvec[i] = INTEGER(idxset)[i] - 1;
  }
  DMatrixHandle res;
  CHECK_CALL(XGDMatrixSliceDMatrix(R_ExternalPtrAddr(handle),
                                   BeginPtr(idxvec), len,
                                   &res));
  ret = PROTECT(R_MakeExternalPtr(res, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    
    {    // Read 5 bytes - the maximum we will need
    uint64_t tmp = static_cast<uint64_t>(buffer_[start_byte_idx - 4]) << 32 |
                   static_cast<uint64_t>(buffer_[start_byte_idx - 3]) << 24 |
                   static_cast<uint64_t>(buffer_[start_byte_idx - 2]) << 16 |
                   static_cast<uint64_t>(buffer_[start_byte_idx - 1]) << 8 |
                   buffer_[start_byte_idx];
    int bit_shift =
        (bits_per_byte - ((offset_ + 1) * symbol_bits_)) % bits_per_byte;
    tmp >>= bit_shift;
    // Mask off unneeded bits
    uint64_t mask = (1 << symbol_bits_) - 1;
    return static_cast<T>(tmp & mask);
  }