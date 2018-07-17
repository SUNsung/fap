
        
        
    {  typedef std::unordered_map<string, DeviceAttributes> StatusMap;
  StatusMap device_status_cache_ GUARDED_BY(mu_);
};
    
    // Functor used by ReverseOp to do the computations.
template <typename Device, typename T, int Dims>
struct Reverse {
  void operator()(const Device& d, typename TTypes<T, Dims>::ConstTensor input,
                  const Eigen::array<bool, Dims>& reverse_dims,
                  typename TTypes<T, Dims>::Tensor output) {
    output.device(d) = input.reverse(reverse_dims);
  }
};
    
      // sum(Grad[Y] * (X - E[X])).
  auto sum_grad_output_times_activiation_minus_mean =
      add(HloInstruction::CreateReduce(
          feature_shape, grad_output_times_activiation_minus_mean, zero,
          dimensions_without_feature, add_reduce_computation));
    
    
    {  EXPECT_THAT(model.GetOutput(), ElementsAreArray({1, 0}));
  EXPECT_THAT(model.GetOutputShape(), ElementsAreArray({1, 1, 2, 1}));
}
    
    #endif  // TENSORFLOW_KERNELS_SPARSE_TENSOR_DENSE_ADD_OP_H_

    
    #endif  // TENSORFLOW_LIB_IO_RECORD_WRITER_H_

    
    namespace leveldb {
    }
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    TEST(FindFileTest, MultipleNullBoundaries) {
  Add('150', '200');
  Add('200', '250');
  Add('300', '350');
  Add('400', '450');
  ASSERT_TRUE(! Overlaps(NULL, '149'));
  ASSERT_TRUE(! Overlaps('451', NULL));
  ASSERT_TRUE(Overlaps(NULL, NULL));
  ASSERT_TRUE(Overlaps(NULL, '150'));
  ASSERT_TRUE(Overlaps(NULL, '199'));
  ASSERT_TRUE(Overlaps(NULL, '200'));
  ASSERT_TRUE(Overlaps(NULL, '201'));
  ASSERT_TRUE(Overlaps(NULL, '400'));
  ASSERT_TRUE(Overlaps(NULL, '800'));
  ASSERT_TRUE(Overlaps('100', NULL));
  ASSERT_TRUE(Overlaps('200', NULL));
  ASSERT_TRUE(Overlaps('449', NULL));
  ASSERT_TRUE(Overlaps('450', NULL));
}
    
    #ifndef CPPTL_JSON_ASSERTIONS_H_INCLUDED
#define CPPTL_JSON_ASSERTIONS_H_INCLUDED
    
    // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    // Find the file that declares the given fully-qualified symbol name.
bool PyDescriptorDatabase::FindFileContainingSymbol(
    const string& symbol_name, FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallMethod(py_database_, 'FindFileContainingSymbol', 's#',
                          symbol_name.c_str(), symbol_name.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
      // Find the file which defines an extension extending the given message type
  // with the given field number.
  // Containing_type must be a fully-qualified type name.
  // Python objects are not required to implement this method.
  bool FindFileContainingExtension(const string& containing_type,
                                   int field_number,
                                   FileDescriptorProto* output);
    
    #include <string>
    
      void Generate(io::Printer* printer);
    
    #include <sstream>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    struct Options;
    
     private:
  const FieldDescriptor* descriptor_;
  Context* context_;
  ClassNameResolver* name_resolver_;
  string scope_;
    
    // CodeGenerator implementation which generates Java code.  If you create your
// own protocol compiler binary and you want it to support Java output, you
// can do so by registering an instance of this CodeGenerator with the
// CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT JavaGenerator : public CodeGenerator {
 public:
  JavaGenerator();
  ~JavaGenerator();
    }
    
    static int set_flags(struct ifaddrs* ifaddr) {
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (fd == -1) {
		return -1;
	}
	ifreq ifr;
	memset(&ifr, 0, sizeof(ifr));
	strncpy(ifr.ifr_name, ifaddr->ifa_name, IFNAMSIZ - 1);
	int rc = ioctl(fd, SIOCGIFFLAGS, &ifr);
	close(fd);
	if (rc == -1) {
		return -1;
	}
	ifaddr->ifa_flags = ifr.ifr_flags;
	return 0;
}
    
    
    {  return pImage_data;
}
    
    /* get number of leading zeros and fractional part (the bits right after the leading one */
static OPUS_INLINE void silk_CLZ_FRAC(
    opus_int32 in,            /* I  input                               */
    opus_int32 *lz,           /* O  number of leading zeros             */
    opus_int32 *frac_Q7       /* O  the 7 bits right after the leading one */
)
{
    opus_int32 lzeros = silk_CLZ32(in);
    }
    
    int64_t gettime_ns(clockid_t clock) {
  if (clock != CLOCK_THREAD_CPUTIME_ID) {
    return folly::chrono::clock_gettime_ns(clock);
  }
    }
    
    inline const MemoSlot* ObjectData::memoSlotNativeData(
  Slot slot, size_t ndiSize
) const {
  assertx(slot < m_cls->numMemoSlots());
  return reinterpret_cast<const MemoSlot*>(
    reinterpret_cast<const char*>(this) - alignTypedValue(ndiSize)
  ) - slot - 1;
}
    
      unsigned num1GPages = RuntimeOption::EvalNum1GPagesForSlabs;
  unsigned num2MPages = RuntimeOption::EvalNum2MPagesForSlabs;
  if (numNodes > 1) {
    auto perNode1G = num1GPages / numNodes;
    if (auto const excessive = num1GPages % numNodes) {
      Logger::Warning('uneven distribution of %u 1G huge pages '
                      '(Eval.Num1GPagesForSlabs) to %u NUMA nodes, '
                      'excessive %u pages not used',
                      num1GPages, numNodes, excessive);
    }
    num1GPages = perNode1G;
    auto perNode2M = num2MPages / numNodes;
    if (auto const excessive = num2MPages % numNodes) {
      Logger::Warning('uneven distribution of %u 2M huge pages '
                      '(Eval.Num1MPagesForSlabs) to %u NUMA nodes, '
                      'excessive %u pages not used',
                      num2MPages, numNodes, excessive);
    }
    num2MPages = perNode2M;
  }
    
            for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                // User callback (registered via ImDrawList::AddCallback)
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                ImVec4 clip_rect = ImVec4(pcmd->ClipRect.x - pos.x, pcmd->ClipRect.y - pos.y, pcmd->ClipRect.z - pos.x, pcmd->ClipRect.w - pos.y);
                if (clip_rect.x < fb_width && clip_rect.y < fb_height && clip_rect.z >= 0.0f && clip_rect.w >= 0.0f)
                {
                    // Apply scissor/clipping rectangle
                    glScissor((int)clip_rect.x, (int)(fb_height - clip_rect.w), (int)(clip_rect.z - clip_rect.x), (int)(clip_rect.w - clip_rect.y));
    }
    }
    }
    
        const GLchar* vertex_shader_glsl_120 =
        'uniform mat4 ProjMtx;\n'
        'attribute vec2 Position;\n'
        'attribute vec2 UV;\n'
        'attribute vec4 Color;\n'
        'varying vec2 Frag_UV;\n'
        'varying vec4 Frag_Color;\n'
        'void main()\n'
        '{\n'
        '    Frag_UV = UV;\n'
        '    Frag_Color = Color;\n'
        '    gl_Position = ProjMtx * vec4(Position.xy,0,1);\n'
        '}\n';
    
        // Render
    ImDrawData              DrawData;                           // Main ImDrawData instance to pass render information to the user
    ImDrawDataBuilder       DrawDataBuilder;
    float                   DimBgRatio;                         // 0.0..1.0 animation when fading in a dimming background (for modal window and CTRL+TAB list)
    ImDrawList              OverlayDrawList;                    // Optional software render of mouse cursors, if io.MouseDrawCursor is set + a few debug overlays
    ImGuiMouseCursor        MouseCursor;