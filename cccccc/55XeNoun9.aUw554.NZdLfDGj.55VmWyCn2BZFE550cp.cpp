
        
        // Type-parameterized tests are abstract test patterns parameterized
// by a type.  Compared with typed tests, type-parameterized tests
// allow you to define the test pattern without knowing what the type
// parameters are.  The defined pattern can be instantiated with
// different types any number of times, in any number of translation
// units.
//
// If you are designing an interface or concept, you can define a
// suite of type-parameterized tests to verify properties that any
// valid implementation of the interface/concept should have.  Then,
// each implementation can easily instantiate the test suite to verify
// that it conforms to the requirements, without having to write
// similar tests repeatedly.  Here's an example:
    
    // This is used internally by all instances of linked_ptr<>.  It needs to be
// a non-template class because different types of linked_ptr<> can refer to
// the same object (linked_ptr<Superclass>(obj) vs linked_ptr<Subclass>(obj)).
// So, it needs to be possible for different types of linked_ptr to participate
// in the same circular linked list, so we need a single class type here.
//
// DO NOT USE THIS CLASS DIRECTLY YOURSELF.  Use linked_ptr<T>.
class linked_ptr_internal {
 public:
  // Create a new circle that includes only this instance.
  void join_new() {
    next_ = this;
  }
    }
    
      // Creates a UTF-16 wide string from the given ANSI string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the wide string, or NULL if the
  // input is NULL.
  //
  // The wide string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static LPCWSTR AnsiToUtf16(const char* c_str);
    
    TEST(ListenersTest, DoesNotLeak) {
  Water* water = new Water;
  delete water;
}
    
    
// Step 1. Include necessary header files such that the stuff your
// test logic needs is declared.
//
// Don't forget gtest.h, which declares the testing framework.
    
    // Tests the Set method.
TEST(MyString, Set) {
  MyString s;
    }
    
    class Env;
    
    #include <stddef.h>
#include <stdint.h>
    
    char* leveldb_property_value(leveldb_t* db, const char* propname) {
  std::string tmp;
  if (db->rep->GetProperty(Slice(propname), &tmp)) {
    // We use strdup() since we expect human readable output.
    return strdup(tmp.c_str());
  } else {
    return nullptr;
  }
}
    
    #include 'util/coding.h'
    
    namespace leveldb {
    }
    
    Status TestWritableFile::SyncParent() {
  Status s = SyncDir(GetDirName(state_.filename_));
  if (s.ok()) {
    env_->DirWasSynced();
  }
  return s;
}
    
    int MemTable::KeyComparator::operator()(const char* aptr,
                                        const char* bptr) const {
  // Internal keys are encoded as length-prefixed strings.
  Slice a = GetLengthPrefixedSlice(aptr);
  Slice b = GetLengthPrefixedSlice(bptr);
  return comparator.Compare(a, b);
}
    
    
    {  input.remove_prefix(kHeader);
  Slice key, value;
  int found = 0;
  while (!input.empty()) {
    found++;
    char tag = input[0];
    input.remove_prefix(1);
    switch (tag) {
      case kTypeValue:
        if (GetLengthPrefixedSlice(&input, &key) &&
            GetLengthPrefixedSlice(&input, &value)) {
          handler->Put(key, value);
        } else {
          return Status::Corruption('bad WriteBatch Put');
        }
        break;
      case kTypeDeletion:
        if (GetLengthPrefixedSlice(&input, &key)) {
          handler->Delete(key);
        } else {
          return Status::Corruption('bad WriteBatch Delete');
        }
        break;
      default:
        return Status::Corruption('unknown WriteBatch tag');
    }
  }
  if (found != WriteBatchInternal::Count(this)) {
    return Status::Corruption('WriteBatch has wrong count');
  } else {
    return Status::OK();
  }
}
    
    // A DB is a persistent ordered map from keys to values.
// A DB is safe for concurrent access from multiple threads without
// any external synchronization.
class LEVELDB_EXPORT DB {
 public:
  // Open the database with the specified 'name'.
  // Stores a pointer to a heap-allocated database in *dbptr and returns
  // OK on success.
  // Stores nullptr in *dbptr and returns a non-OK status on error.
  // Caller should delete *dbptr when it is no longer needed.
  static Status Open(const Options& options, const std::string& name,
                     DB** dbptr);
    }
    
    // Footer encapsulates the fixed information stored at the tail
// end of every table file.
class Footer {
 public:
  // Encoded length of a Footer.  Note that the serialization of a
  // Footer will always occupy exactly this many bytes.  It consists
  // of two block handles and a magic number.
  enum { kEncodedLength = 2 * BlockHandle::kMaxEncodedLength + 8 };
    }
    
    Status ReadFileToString(Env* env, const std::string& fname, std::string* data) {
  data->clear();
  SequentialFile* file;
  Status s = env->NewSequentialFile(fname, &file);
  if (!s.ok()) {
    return s;
  }
  static const int kBufferSize = 8192;
  char* space = new char[kBufferSize];
  while (true) {
    Slice fragment;
    s = file->Read(kBufferSize, &fragment, space);
    if (!s.ok()) {
      break;
    }
    data->append(fragment.data(), fragment.size());
    if (fragment.empty()) {
      break;
    }
  }
  delete[] space;
  delete file;
  return s;
}
    
      Corrupt(kDescriptorFile, 0, 1000);
  Status s = TryReopen();
  ASSERT_TRUE(!s.ok());
    
      struct KeyComparator {
    const InternalKeyComparator comparator;
    explicit KeyComparator(const InternalKeyComparator& c) : comparator(c) {}
    int operator()(const char* a, const char* b) const;
  };
    
    #endif  // MXNET_GRAPH_ATTR_TYPES_H_

    
    /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
    #ifndef PLUGIN_CAFFE_CAFFE_COMMON_H_
#define PLUGIN_CAFFE_CAFFE_COMMON_H_
    
      virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    InitParams(kwargs);
    // use the kwarg to init batch loader
    loader_->Init(kwargs);
    iter.Init([this](DataBatch **dptr) {
        if (!loader_->Next()) return false;
        const TBlobBatch& batch = loader_->Value();
        if (*dptr == nullptr) {
          // allocate databatch
          *dptr = new DataBatch();
          (*dptr)->num_batch_padd = batch.num_batch_padd;
          (*dptr)->data.resize(batch.data.size());
          (*dptr)->index.resize(batch.batch_size);
          for (size_t i = 0; i < batch.data.size(); ++i) {
            auto dtype = param_.dtype
                             ? param_.dtype.value()
                             : batch.data[i].type_flag_;
            (*dptr)->data.at(i) = NDArray(batch.data[i].shape_,
                                          Context::CPU(), false,
                                          dtype);
          }
        }
        CHECK(batch.data.size() == (*dptr)->data.size());
        // copy data over
        for (size_t i = 0; i < batch.data.size(); ++i) {
          CHECK_EQ((*dptr)->data.at(i).shape(), batch.data[i].shape_);
          MSHADOW_TYPE_SWITCH(batch.data[i].type_flag_, DType, {
              mshadow::Copy(((*dptr)->data)[i].data().FlatTo2D<cpu, DType>(),
                        batch.data[i].FlatTo2D<cpu, DType>());
          });
          (*dptr)->num_batch_padd = batch.num_batch_padd;
        }
        if (batch.inst_index) {
          std::copy(batch.inst_index,
                    batch.inst_index + batch.batch_size,
                    (*dptr)->index.begin());
        }
       return true;
      },
      [this]() { loader_->BeforeFirst(); });
  }
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file crop.cc
 * \brief
 * \author Wei Wu
*/
    
    /*!
 * \brief concat CSRNDArray on the first dimension.
 */
struct concat_csr_first_dim {
  /*!
   * \param i              the i-th row of the input ndarray
   * \param out_idx        output csr ndarray column indices
   * \param out_data       output csr ndarray data
   * \param out_indptr     output csr ndarray row index pointer
   * \param in_idx         input csr ndarray column indices
   * \param in_data        input csr ndarray data
   * \param in_indptr      input csr ndarray row index pointer
   * \param indptr_offset  offset for ouput ndarray row index pointer
   * \param idx_offset     offset for ouput ndarray column indices
   */
  template<typename DType, typename RType, typename IType>
  MSHADOW_XINLINE static void Map(int i, const OpReqType req,
                                  DType* out_data, const DType* in_data,
                                  RType* out_indptr, const RType* in_indptr,
                                  IType* out_idx, const IType* in_idx,
                                  const nnvm::dim_t indptr_offset,
                                  const nnvm::dim_t idx_offset) {
    if (i == 0) out_indptr[0] = 0;
    out_indptr[i+1+indptr_offset] = in_indptr[i+1] + idx_offset;
    for (nnvm::dim_t j = in_indptr[i]; j < in_indptr[i+1]; ++j) {
      KERNEL_ASSIGN(out_idx[j+idx_offset], req, in_idx[j]);
      KERNEL_ASSIGN(out_data[j+idx_offset], req, in_data[j]);
    }
  }
};
    
      static const APCCollection* fromHandle(const APCHandle* handle) {
    assertx(handle->checkInvariants());
    assertx(handle->kind() == APCKind::SharedCollection);
    static_assert(offsetof(APCCollection, m_handle) == 0, '');
    return reinterpret_cast<const APCCollection*>(handle);
  }
    
    public:
  virtual ~IDebuggable() {}
    
    template<typename F>
void logPerfWarningImpl(folly::StringPiece event, int64_t priority,
                        int64_t rate, F fillCols) {
  auto const effectiveRate = rate * RuntimeOption::EvalPerfWarningSampleRate;
  if (effectiveRate > std::numeric_limits<uint32_t>::max()) return;
  if (!StructuredLog::coinflip(effectiveRate)) return;
    }
    
    
    {}

    
    /*
 * If the given AtomicHashMap has more than one submap allocated, log a perf
 * warning with its name.
 *
 * A single unique done flag should exist for each map being checked, to avoid
 * logging more than once (process, map) pair.
 */
template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done);
    
    
    {
    {} // namespace URL
} // namespace HPHP
    
    
    {    // Set mouse position
    io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);
    POINT pos;
    if (HWND active_window = ::GetForegroundWindow())
        if (active_window == g_hWnd || ::IsChild(active_window, g_hWnd))
            if (::GetCursorPos(&pos) && ::ScreenToClient(g_hWnd, &pos))
                io.MousePos = ImVec2((float)pos.x, (float)pos.y);
}
    
        // You can set those flags on a per font basis in ImFontConfig::RasterizerFlags.
    // Use the 'extra_flags' parameter of BuildFontAtlas() to force a flag on all your fonts.
    enum RasterizerFlags
    {
        // By default, hinting is enabled and the font's native hinter is preferred over the auto-hinter.
        NoHinting       = 1 << 0,   // Disable hinting. This generally generates 'blurrier' bitmap glyphs when the glyph are rendered in any of the anti-aliased modes.
        NoAutoHint      = 1 << 1,   // Disable auto-hinter.
        ForceAutoHint   = 1 << 2,   // Indicates that the auto-hinter is preferred over the font's native hinter.
        LightHinting    = 1 << 3,   // A lighter hinting algorithm for gray-level modes. Many generated glyphs are fuzzier but better resemble their original shape. This is achieved by snapping glyphs to the pixel grid only vertically (Y-axis), as is done by Microsoft's ClearType and Adobe's proprietary font renderer. This preserves inter-glyph spacing in horizontal text.
        MonoHinting     = 1 << 4,   // Strong hinting algorithm that should only be used for monochrome output.
        Bold            = 1 << 5,   // Styling: Should we artificially embolden the font?
        Oblique         = 1 << 6,   // Styling: Should we slant the font, emulating italic style?
        Monochrome      = 1 << 7    // Disable anti-aliasing. Combine this with MonoHinting for best results!
    };
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
            // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;
    }
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [x] Renderer: Desktop GL only: Support for large meshes (64k+ vertices) with 16-bits indices.
    
    int main(int, char**)
{
    // Setup SDL
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMECONTROLLER) != 0)
    {
        printf('Error: %s\n', SDL_GetError());
        return -1;
    }
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        UINT64 fenceValue = frameCtxt->FenceValue;
    if (fenceValue == 0)
        return; // No fence was signaled
    
        // Setup orthographic projection matrix into our constant buffer
    // Our visible imgui space lies from draw_data->DisplayPos (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right). DisplayPos is (0,0) for single viewport apps.
    {
        D3D11_MAPPED_SUBRESOURCE mapped_resource;
        if (ctx->Map(g_pVertexConstantBuffer, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped_resource) != S_OK)
            return;
        VERTEX_CONSTANT_BUFFER* constant_buffer = (VERTEX_CONSTANT_BUFFER*)mapped_resource.pData;
        float L = draw_data->DisplayPos.x;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x;
        float T = draw_data->DisplayPos.y;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y;
        float mvp[4][4] =
        {
            { 2.0f/(R-L),   0.0f,           0.0f,       0.0f },
            { 0.0f,         2.0f/(T-B),     0.0f,       0.0f },
            { 0.0f,         0.0f,           0.5f,       0.0f },
            { (R+L)/(L-R),  (T+B)/(B-T),    0.5f,       1.0f },
        };
        memcpy(&constant_buffer->mvp, mvp, sizeof(mvp));
        ctx->Unmap(g_pVertexConstantBuffer, 0);
    }
    
    
    {    g_pd3dDevice = device;
    g_pd3dDevice->AddRef();
    return true;
}
    
    //-----------------------------------------------------------------------------
// FUNCTIONS
//-----------------------------------------------------------------------------
    
    
    {        ImGui::Render();
    }