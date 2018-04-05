
        
        #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    // Find a file by file name.
bool PyDescriptorDatabase::FindFileByName(const string& filename,
                                          FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(PyObject_CallMethod(
      py_database_, 'FindFileByName', 's#', filename.c_str(), filename.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    
    {}  // namespace google

    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    
    
    void RepeatedPrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.For$capitalized_type_name$($tag$);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
    
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
     private:
  const FieldDescriptor* descriptor_;
  Context* context_;
  ClassNameResolver* name_resolver_;
  string scope_;
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
      // List<Field> getRepeatedFieldList()
  WriteFieldDocComment(printer, descriptor_);
  PrintNestedBuilderFunction(printer,
    '$deprecation$public java.util.List<$type$> get$capitalized_name$List()',
    
    #include 'ccstruct.h'
    
    
    {  // Best available image.
  Pix* pix_;
  // True if the source image is white-on-black.
  bool inverse_;
  // Block the word came from. If not null, block->re_rotation() takes the
  // 'untransformed' coordinates even further back to the original image.
  // Used only on the first DENORM in a chain.
  const BLOCK* block_;
  // Rotation to apply between translation to the origin and scaling.
  const FCOORD* rotation_;
  // Previous transformation in a chain.
  const DENORM* predecessor_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding x-coord. Owned by the DENORM.
  GenericVector<float>* x_map_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding y-coord. Owned by the DENORM.
  GenericVector<float>* y_map_;
  // x-coordinate to be mapped to final_xshift_ in the result.
  float x_origin_;
  // y-coordinate to be mapped to final_yshift_ in the result.
  float y_origin_;
  // Scale factors for x and y coords. Applied to pre-rotation system.
  float x_scale_;
  float y_scale_;
  // Destination coords of the x_origin_ and y_origin_.
  float final_xshift_;
  float final_yshift_;
};
#endif

    
      // Return a pointer to the object identified by id.
  // If we haven't yet loaded the object, use loader to load it.
  // If loader fails to load it, record a NULL entry in the cache
  // and return NULL -- further attempts to load will fail (even
  // with a different loader) until DeleteUnusedObjects() is called.
  // We delete the given loader.
  T *Get(STRING id,
         TessResultCallback<T *> *loader) {
    T *retval = NULL;
    mu_.Lock();
    for (int i = 0; i < cache_.size(); i++) {
      if (id == cache_[i].id) {
        retval = cache_[i].object;
        if (cache_[i].object != NULL) {
          cache_[i].count++;
        }
        mu_.Unlock();
        delete loader;
        return retval;
      }
    }
    cache_.push_back(ReferenceCount());
    ReferenceCount &rc = cache_.back();
    rc.id = id;
    retval = rc.object = loader->Run();
    rc.count = (retval != NULL) ? 1 : 0;
    mu_.Unlock();
    return retval;
  }
    
    
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
    
    // Feature distance calculator designed to provide a fast distance calculation
// based on set difference between a given feature set and many other feature
// sets in turn.
// Representation of a feature set as an array of bools that are sparsely
// true, and companion arrays that allow fast feature set distance
// calculations with allowance of offsets in position.
// Init is expensive, so for greatest efficiency, to re-initialize for a new
// feature set, use Set(..., false) on the SAME feature set as was used to
// setup with Set(..., true), to return to its initialized state before
// reuse with Set(..., true) on a new feature set.
class IntFeatureDist {
 public:
  IntFeatureDist();
  ~IntFeatureDist();
    }
    
    // Returns the size of the sparse charset space.
int SampleIterator::SparseCharsetSize() const {
  return charset_map_ != NULL
      ? charset_map_->SparseSize()
      : (shape_table_ != NULL ? shape_table_->NumShapes()
                              : sample_set_->charsetsize());
}
    
    			// Make sure the selected node is in the current scene
			Node *node = canvas_item;
			while (node && ((node != scene && node->get_owner() != scene) || !node->is_class('CanvasItem'))) {
				node = node->get_parent();
			};
			canvas_item = Object::cast_to<CanvasItem>(node);
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
        jmp_buf m_jmp_state;
    mem_block *m_pMem_blocks;
    int m_image_x_size;
    int m_image_y_size;
    jpeg_decoder_stream *m_pStream;
    int m_progressive_flag;
    uint8 m_huff_ac[JPGD_MAX_HUFF_TABLES];
    uint8* m_huff_num[JPGD_MAX_HUFF_TABLES];      // pointer to number of Huffman codes per bit size
    uint8* m_huff_val[JPGD_MAX_HUFF_TABLES];      // pointer to Huffman codes per bit size
    jpgd_quant_t* m_quant[JPGD_MAX_QUANT_TABLES]; // pointer to quantization tables
    int m_scan_type;                              // Gray, Yh1v1, Yh1v2, Yh2v1, Yh2v2 (CMYK111, CMYK4114 no longer supported)
    int m_comps_in_frame;                         // # of components in frame
    int m_comp_h_samp[JPGD_MAX_COMPONENTS];       // component's horizontal sampling factor
    int m_comp_v_samp[JPGD_MAX_COMPONENTS];       // component's vertical sampling factor
    int m_comp_quant[JPGD_MAX_COMPONENTS];        // component's quantization table selector
    int m_comp_ident[JPGD_MAX_COMPONENTS];        // component's ID
    int m_comp_h_blocks[JPGD_MAX_COMPONENTS];
    int m_comp_v_blocks[JPGD_MAX_COMPONENTS];
    int m_comps_in_scan;                          // # of components in scan
    int m_comp_list[JPGD_MAX_COMPS_IN_SCAN];      // components in this scan
    int m_comp_dc_tab[JPGD_MAX_COMPONENTS];       // component's DC Huffman coding table selector
    int m_comp_ac_tab[JPGD_MAX_COMPONENTS];       // component's AC Huffman coding table selector
    int m_spectral_start;                         // spectral selection start
    int m_spectral_end;                           // spectral selection end
    int m_successive_low;                         // successive approximation low
    int m_successive_high;                        // successive approximation high
    int m_max_mcu_x_size;                         // MCU's max. X size in pixels
    int m_max_mcu_y_size;                         // MCU's max. Y size in pixels
    int m_blocks_per_mcu;
    int m_max_blocks_per_row;
    int m_mcus_per_row, m_mcus_per_col;
    int m_mcu_org[JPGD_MAX_BLOCKS_PER_MCU];
    int m_total_lines_left;                       // total # lines left in image
    int m_mcu_lines_left;                         // total # lines left in this MCU
    int m_real_dest_bytes_per_scan_line;
    int m_dest_bytes_per_scan_line;               // rounded up
    int m_dest_bytes_per_pixel;                   // 4 (RGB) or 1 (Y)
    huff_tables* m_pHuff_tabs[JPGD_MAX_HUFF_TABLES];
    coeff_buf* m_dc_coeffs[JPGD_MAX_COMPONENTS];
    coeff_buf* m_ac_coeffs[JPGD_MAX_COMPONENTS];
    int m_eob_run;
    int m_block_y_mcu[JPGD_MAX_COMPONENTS];
    uint8* m_pIn_buf_ofs;
    int m_in_buf_left;
    int m_tem_flag;
    bool m_eof_flag;
    uint8 m_in_buf_pad_start[128];
    uint8 m_in_buf[JPGD_IN_BUF_SIZE + 128];
    uint8 m_in_buf_pad_end[128];
    int m_bits_left;
    uint m_bit_buf;
    int m_restart_interval;
    int m_restarts_left;
    int m_next_restart_num;
    int m_max_mcus_per_row;
    int m_max_blocks_per_mcu;
    int m_expanded_blocks_per_mcu;
    int m_expanded_blocks_per_row;
    int m_expanded_blocks_per_component;
    bool  m_freq_domain_chroma_upsample;
    int m_max_mcus_per_col;
    uint m_last_dc_val[JPGD_MAX_COMPONENTS];
    jpgd_block_t* m_pMCU_coefficients;
    int m_mcu_block_max_zag[JPGD_MAX_BLOCKS_PER_MCU];
    uint8* m_pSample_buf;
    int m_crr[256];
    int m_cbb[256];
    int m_crg[256];
    int m_cbg[256];
    uint8* m_pScan_line_0;
    uint8* m_pScan_line_1;
    jpgd_status m_error_code;
    bool m_ready_flag;
    int m_total_bytes_read;
    
    
    
      &_huff_book_line_256x7_0sub1,
  &_huff_book_line_256x7_0sub2,
  &_huff_book_line_256x7_0sub3,
  &_huff_book_line_256x7_1sub1,
  &_huff_book_line_256x7_1sub2,
  &_huff_book_line_256x7_1sub3,
};
static const static_codebook*const _floor_128x11_books[]={
  &_huff_book_line_128x11_class1,
  &_huff_book_line_128x11_class2,
  &_huff_book_line_128x11_class3,
    
    
    {  {2,0,32,  &_residue_44_high,
   &_huff_book__16c2_s_long,&_huff_book__16c2_s_long,
   &_resbook_16s_2,&_resbook_16s_2}
};
    
    typedef struct _option
{
	std::wstring name;
	bool hasVal;
	std::wstring value;
	bool set;
} option;
    
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
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
      tmp0 = in[4 * stride];
  tmp1 = kIDCTMatrix[ 4] * tmp0;
  out[0] += tmp1;
  out[1] -= tmp1;
  out[2] -= tmp1;
  out[3] += tmp1;
  out[4] += tmp1;
  out[5] -= tmp1;
  out[6] -= tmp1;
  out[7] += tmp1;
    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    namespace guetzli {
    }
    
    // Function pointer type used to write len bytes into buf. Returns the
// number of bytes written or -1 on error.
typedef int (*JPEGOutputHook)(void* data, const uint8_t* buf, size_t len);