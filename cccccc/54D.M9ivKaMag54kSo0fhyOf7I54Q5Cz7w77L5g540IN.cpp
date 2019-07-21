
        
        #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_GPU_CONDITIONAL_THUNK_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_GPU_CONDITIONAL_THUNK_H_
    
    DeviceToDeviceCopyThunk::DeviceToDeviceCopyThunk(
    const BufferAllocation::Slice& source_buffer,
    const BufferAllocation::Slice& destination_buffer, uint64 mem_size,
    const HloInstruction* hlo_instruction)
    : Thunk(Kind::kCopy, hlo_instruction),
      source_buffer_(source_buffer),
      destination_buffer_(destination_buffer),
      mem_size_(mem_size) {}
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
     private:
  const se::fft::Type fft_type_;
  const std::vector<int64> fft_length_;
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    InfeedThunk::InfeedThunk(
    const ShapeTree<BufferAllocation::Slice>& infeed_slices,
    const HloInstruction* hlo_instruction)
    : Thunk(Kind::kInfeed, hlo_instruction), infeed_slices_(infeed_slices) {}
    
    #include 'tensorflow/compiler/xla/service/buffer_assignment.h'
#include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
#include 'tensorflow/core/platform/types.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/compiler/xla/service/buffer_assignment.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/compiler/xla/status.h'
#include 'tensorflow/stream_executor/stream_executor.h'
    
    Status SequentialThunk::ExecuteOnStream(const ExecuteParams& params) {
  auto op_profiler =
      params.profiler->MakeScopedInstructionProfiler(hlo_instruction());
  for (const auto& thunk : thunks_) {
    TF_RETURN_IF_ERROR(thunk->ExecuteOnStream(params));
  }
  return Status::OK();
}
    
        XlaOp input_max = Reduce(input, init_value, reducer,
                             /*dimensions_to_reduce=*/{axis});
    std::vector<int64> broadcast_dims(input_shape.rank() - 1);
    std::iota(broadcast_dims.begin(), broadcast_dims.begin() + axis, 0);
    std::iota(broadcast_dims.begin() + axis, broadcast_dims.end(), axis + 1);
    // Compute a mask that has 1s for elements equal to the maximum.
    XlaOp partial_mask =
        ConvertElementType(Eq(input, input_max, broadcast_dims), output_type);
    
    /**
 * A structure to represent parameters for drawing a circle
 */
struct Circle
{
    cv::Point  center; //!< The center of the circle
    int        radius; //!< The radius of the circle
    cv::Scalar color;  //!< The color of the  circle
    int        thick;  //!< The thickness of the circle outline, if positive. Negative values, like #FILLED, mean that a filled circle is to be drawn
    int        lt;     //!< The Type of the circle boundary. See #LineTypes
    int        shift;  //!< The Number of fractional bits in the coordinates of the center and in the radius value
};
    
            UMat &inpBlob = inputs[0];
        int groups = inpBlob.size[0];
        int channels = inpBlob.size[1];
        int planeSize = 1;
        for (size_t i = 2; i < inpBlob.dims; i++) {
            planeSize *= inpBlob.size[i];
        }
    
                MatShape s = shape(newRows, inpMat.total() / newRows);
            UMat meanMat = UMat(s[0], 1, (use_half) ? CV_16S : CV_32F);
            UMat tmpMat  = UMat(s[0], s[1], CV_32F);
            float alpha = 1.0f / s[1];
    
        // Tests if Trait for type T requires extra marshalling ('custom wrap') or not.
    // If Traits<T> has wrap_value() defined, it does.
    template<class T> struct has_custom_wrap
    {
        template<class,class> class check;
        template<typename C> static std::true_type  test(check<C, decltype(&GTypeTraits<C>::wrap_value)> *);
        template<typename C> static std::false_type test(...);
        using type = decltype(test<T>(nullptr));
        static const constexpr bool value = std::is_same<std::true_type, decltype(test<T>(nullptr))>::value;
    };
    
    
#ifdef HAVE_OPENGL
const int win_width = 800;
const int win_height = 640;
#endif
bool    rotateEnable=true;
bool    keyPressed=false;
    
        // Fill output blobs.
    outputsMap.clear();
    BlobMap outputBlobs;
    for (auto& it : net.getOutputsInfo())
    {
        genData(it.second->dims, outputsMap[it.first], outputBlobs[it.first]);
    }
    infRequest.SetOutput(outputBlobs);
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
    
    {} // namespace nwapi

    
    #include 'content/nw/src/api/base/base.h'
#include 'ui/gfx/display_observer.h'
    
    void Menu::Insert(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.insert(begin+pos,menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_insert(GTK_MENU_SHELL(menu_), menu_item->menu_item_, pos);
}
    
        int menu_id;
    if (option.GetInteger('submenu', &menu_id))
      SetSubmenu(dispatcher_host()->GetApiObject<Menu>(menu_id));
    std::string key;
    if (option.GetString('key',&key)){
      enable_shortcut = true;
      std::string modifiers = '';
      option.GetString('modifiers',&modifiers);
      modifiers_mask = GdkModifierType(0);
      if (modifiers.size() != 0){
        if (modifiers.find('ctrl') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_CONTROL_MASK);
        }
        if (modifiers.find('alt') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_MOD1_MASK);
        }
        if (modifiers.find('super') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SUPER_MASK);
        }
        if (modifiers.find('meta') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_META_MASK);
        }
        
        if (modifiers.find('shift') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SHIFT_MASK);
        }
    }
    }
    
    #include <vector>
    
     protected:
  ~NwObjDestroyFunction() override;
    
    
    {}  // namespace tesseract.

    
      Pix* pix() const {
    return pix_;
  }
  void set_pix(Pix* pix) {
    pix_ = pix;
  }
  bool inverse() const {
    return inverse_;
  }
  void set_inverse(bool value) {
    inverse_ = value;
  }
  const DENORM* RootDenorm() const {
    if (predecessor_ != nullptr)
      return predecessor_->RootDenorm();
    return this;
  }
  const DENORM* predecessor() const {
    return predecessor_;
  }
  // Accessors - perhaps should not be needed.
  float x_scale() const {
    return x_scale_;
  }
  float y_scale() const {
    return y_scale_;
  }
  const BLOCK* block() const {
    return block_;
  }
  void set_block(const BLOCK* block) {
    block_ = block;
  }
    
        none of the permanent rej flags are set
  AND (    the character has never been rejected
      OR an accept flag is set which is LATER than the latest reject flag )
    
    #endif  // THIRD_PARTY_TESSERACT_CCUTIL_DOUBLEPTR_H_

    
    
    { protected:
  // Outputs the integer formed by reversing the bits of the input integer. Only
  // the lowest num_bits_ bits of the input integer are reversed.
  int GetBinaryReversedInteger(int in_val) const {
    int bit_pos = num_bits_;
    int out_val = 0;
    while(bit_pos--) {
      // Set the value of the last bit.
      out_val |= (in_val & 0x1);
      if (bit_pos > 0) {
        // Left-shift output value to prepare for storing the next bit.
        out_val <<= 1;
      }
      // Right-shift input value to prepare for retrieving the next bit.
      in_val >>= 1;
    }
    return out_val;
  }
  int N_;
  // Next number to be considered for reversal and output.
  int next_num_;
  // number of bits required to represent the numbers of the sequence
  int num_bits_;
};
    
    namespace tesseract {
    }
    
    
    {	ADD_GROUP('Motion', 'motion_');
	ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, 'motion_scale'), 'set_motion_scale', 'get_motion_scale');
	ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, 'motion_offset'), 'set_motion_offset', 'get_motion_offset');
	ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, 'motion_mirroring'), 'set_mirroring', 'get_mirroring');
}
    
    	void set_as_audio_listener_2d(bool p_enable);
	bool is_audio_listener_2d() const;
    
    
    {	singleton = NULL;
	memdelete_arr(buffer);
}

    
    	void set_cell_size(float p_value);
	float get_cell_size() const;
    
    /**
	@author Juan Linietsky <reduzio@gmail.com>
*/
    
    StringName _scs_create(const char *p_chr);
    
    	MIDIClientRef client;
	MIDIPortRef port_in;
    
    		MMRESULT res = midiInOpen(&midi_in, i, (DWORD_PTR)read, (DWORD_PTR)this, CALLBACK_FUNCTION);
		if (res == MMSYSERR_NOERROR) {
			midiInStart(midi_in);
			connected_sources.insert(i, midi_in);
		} else {
			char err[256];
			midiInGetErrorText(res, err, 256);
			ERR_PRINTS('midiInOpen error: ' + String(err));
    }
    
    	Vector<HMIDIIN> connected_sources;
    
    godot_pool_byte_array_read_access GDAPI *godot_pool_byte_array_read_access_copy(const godot_pool_byte_array_read_access *p_other) {
	PoolVector<uint8_t>::Read *other = (PoolVector<uint8_t>::Read *)p_other;
	return (godot_pool_byte_array_read_access *)memnew(PoolVector<uint8_t>::Read(*other));
}
const uint8_t GDAPI *godot_pool_byte_array_read_access_ptr(const godot_pool_byte_array_read_access *p_read) {
	const PoolVector<uint8_t>::Read *read = (const PoolVector<uint8_t>::Read *)p_read;
	return read->ptr();
}
void GDAPI godot_pool_byte_array_read_access_operator_assign(godot_pool_byte_array_read_access *p_read, godot_pool_byte_array_read_access *p_other) {
	PoolVector<uint8_t>::Read *read = (PoolVector<uint8_t>::Read *)p_read;
	PoolVector<uint8_t>::Read *other = (PoolVector<uint8_t>::Read *)p_other;
	read->operator=(*other);
}
void GDAPI godot_pool_byte_array_read_access_destroy(godot_pool_byte_array_read_access *p_read) {
	memdelete((PoolVector<uint8_t>::Read *)p_read);
}
    
    SEXP XGBoosterDumpModel_R(SEXP handle, SEXP fmap, SEXP with_stats, SEXP dump_format) {
  SEXP out;
  R_API_BEGIN();
  bst_ulong olen;
  const char **res;
  const char *fmt = CHAR(asChar(dump_format));
  CHECK_CALL(XGBoosterDumpModelEx(R_ExternalPtrAddr(handle),
                                CHAR(asChar(fmap)),
                                asInteger(with_stats),
                                fmt,
                                &olen, &res));
  out = PROTECT(allocVector(STRSXP, olen));
  if (!strcmp('json', fmt)) {
    std::stringstream stream;
    stream <<  '[\n';
    for (size_t i = 0; i < olen; ++i) {
      stream << res[i];
      if (i < olen - 1) {
        stream << ',\n';
      } else {
        stream << '\n';
      }
    }
    stream <<  ']';
    SET_STRING_ELT(out, 0, mkChar(stream.str().c_str()));
  } else {
    for (size_t i = 0; i < olen; ++i) {
      std::stringstream stream;
      stream <<  'booster[' << i <<']\n' << res[i];
      SET_STRING_ELT(out, i, mkChar(stream.str().c_str()));
    }
  }
  R_API_END();
  UNPROTECT(1);
  return out;
}
    
    
    {  delete dmat;
}
    
    #if DMLC_ENABLE_STD_THREAD
/*!
 * \brief A threaded writer to write sparse batch page to sharded files.
 */
class SparsePageWriter {
 public:
  /*!
   * \brief constructor
   * \param name_shards name of shard files.
   * \param format_shards format of each shard.
   * \param extra_buffer_capacity Extra buffer capacity before block.
   */
  explicit SparsePageWriter(
      const std::vector<std::string>& name_shards,
      const std::vector<std::string>& format_shards,
      size_t extra_buffer_capacity);
  /*! \brief destructor, will close the files automatically */
  ~SparsePageWriter();
  /*!
   * \brief Push a write job to the writer.
   * This function won't block,
   * writing is done by another thread inside writer.
   * \param page The page to be written
   */
  void PushWrite(std::shared_ptr<SparsePage>&& page);
  /*!
   * \brief Allocate a page to store results.
   *  This function can block when the writer is too slow and buffer pages
   *  have not yet been recycled.
   * \param out_page Used to store the allocated pages.
   */
  void Alloc(std::shared_ptr<SparsePage>* out_page);
    }