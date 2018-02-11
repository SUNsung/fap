
        
        void SyntaxASTMap::dumpSyntaxMap() const {
  for (const auto &SyntaxAndSemaNode : SyntaxMap) {
    auto SyntaxNode = SyntaxAndSemaNode.getFirst();
    auto SemanticNode = SyntaxAndSemaNode.getSecond();
    }
    }
    
    SWIFT_DISPATCH_RETURNS_RETAINED
static inline __swift_shims_dispatch_data_t
_swift_dispatch_data_create(
    const void *buffer,
    size_t size,
    dispatch_queue_t _Nullable queue,
    __swift_shims_dispatch_block_t _Nullable destructor) {
  return dispatch_data_create(buffer, size, queue, destructor);
}
    
    SILDebugScope::SILDebugScope(SILLocation Loc, SILFunction *SILFn,
                             const SILDebugScope *ParentScope ,
                             const SILDebugScope *InlinedCallSite)
    : Loc(Loc), InlinedCallSite(InlinedCallSite) {
  if (ParentScope)
    Parent = ParentScope;
  else {
    assert(SILFn && 'no parent provided');
    Parent = SILFn;
  }
}
    
    #ifndef incl_HPHP_WORKLOAD_STATS_H_
#define incl_HPHP_WORKLOAD_STATS_H_
    
    #include <type_traits>
#include <limits>
    
    
    {  return true;
}
    
    int PageletServer::GetActiveWorker() {
  Lock l(s_dispatchMutex);
  return s_dispatcher ? s_dispatcher->getActiveWorker() : 0;
}
    
    static int populate_ifaddrs(struct ifaddrs* ifaddr, ifaddrmsg* msg, void* bytes,
		     size_t len) {
	if (set_ifname(ifaddr, msg->ifa_index) != 0) {
		return -1;
	}
	if (set_flags(ifaddr) != 0) {
		return -1;
	}
	if (set_addresses(ifaddr, msg, bytes, len) != 0) {
		return -1;
	}
	if (make_prefixes(ifaddr, msg->ifa_family, msg->ifa_prefixlen) != 0) {
		return -1;
	}
	return 0;
}
    
      // Loads a JPEG image from a memory buffer or a file.
  // req_comps can be 1 (grayscale), 3 (RGB), or 4 (RGBA).
  // On return, width/height will be set to the image's dimensions, and actual_comps will be set to the either 1 (grayscale) or 3 (RGB).
  // Notes: For more control over where and how the source data is read, see the decompress_jpeg_image_from_stream() function below, or call the jpeg_decoder class directly.
  // Requesting a 8 or 32bpp image is currently a little faster than 24bpp because the jpeg_decoder class itself currently always unpacks to either 8 or 32bpp.
  unsigned char *decompress_jpeg_image_from_memory(const unsigned char *pSrc_data, int src_data_size, int *width, int *height, int *actual_comps, int req_comps);
  unsigned char *decompress_jpeg_image_from_file(const char *pSrc_filename, int *width, int *height, int *actual_comps, int req_comps);
    
      &_huff_book_line_128x17_0sub0,
  &_huff_book_line_128x17_1sub0,
  &_huff_book_line_128x17_1sub1,
  &_huff_book_line_128x17_2sub1,
  &_huff_book_line_128x17_2sub2,
  &_huff_book_line_128x17_2sub3,
  &_huff_book_line_128x17_3sub1,
  &_huff_book_line_128x17_3sub2,
  &_huff_book_line_128x17_3sub3,
};
static const static_codebook*const _floor_256x4low_books[]={
  &_huff_book_line_256x4low_class0,
  &_huff_book_line_256x4low_0sub0,
  &_huff_book_line_256x4low_0sub1,
  &_huff_book_line_256x4low_0sub2,
  &_huff_book_line_256x4low_0sub3,
};
static const static_codebook*const _floor_1024x27_books[]={
  &_huff_book_line_1024x27_class1,
  &_huff_book_line_1024x27_class2,
  &_huff_book_line_1024x27_class3,
  &_huff_book_line_1024x27_class4,
    
     function: #ifdef jail to whip a few platforms into the UNIX ideal.
 last mod: $Id: os.h 19457 2015-03-03 00:15:29Z giles $
    
    
    {
    {		printf('blowfish %d %d (%d)\n',
			e1-s1,e2-s2,((e2-s2)-(e1-s1)));
		}
	}
    
    
    
    
    
    
    {			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-8.0f + 8.0f * i, 12.0f);
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&fd);
		}
    
    
    {
    {			m_bullet->SetLinearVelocity(b2Vec2(0.0f, -50.0f));
		}
	}
    
      inline void ParseStr(std::string *tok) {
    while ((ch_buf = this->GetChar()) != EOF) {
      switch (ch_buf) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        case '\r':
        case '\n': LOG(FATAL)<< 'ConfigReader: unterminated string';
        default: *tok += ch_buf;
      }
    }
    LOG(FATAL) << 'ConfigReader: unterminated string';
  }
  inline void ParseStrML(std::string *tok) {
    while ((ch_buf = this->GetChar()) != EOF) {
      switch (ch_buf) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        default: *tok += ch_buf;
      }
    }
    LOG(FATAL) << 'unterminated string';
  }
  // return newline
  inline bool GetNextToken(std::string *tok) {
    tok->clear();
    bool new_line = false;
    while (ch_buf != EOF) {
      switch (ch_buf) {
        case '#' : SkipLine(); new_line = true; break;
        case '\'':
          if (tok->length() == 0) {
            ParseStr(tok); ch_buf = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '\'':
          if (tok->length() == 0) {
            ParseStrML(tok); ch_buf = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '=':
          if (tok->length() == 0) {
            ch_buf = this->GetChar();
            *tok = '=';
          }
          return new_line;
        case '\r':
        case '\n':
          if (tok->length() == 0) new_line = true;
        case '\t':
        case ' ' :
          ch_buf = this->GetChar();
          if (tok->length() != 0) return new_line;
          break;
        default:
          *tok += ch_buf;
          ch_buf = this->GetChar();
          break;
      }
    }
    if (tok->length() == 0) {
      return true;
    } else {
      return false;
    }
  }
};
/*!
 * \brief an iterator use stream base, allows use all types of istream
 */
class ConfigStreamReader: public ConfigReaderBase {
 public:
  /*!
   * \brief constructor
   * \param fin istream input stream
   */
  explicit ConfigStreamReader(std::istream &fin) : fin(fin) {}
    
    
    {
    {
    { private:
  /*! \brief input stream */
  dmlc::Stream *strm_;
  /*! \brief current buffer pointer */
  size_t buffer_ptr_;
  /*! \brief internal buffer */
  std::string buffer_;
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_IO_H_

    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '(3.0,2,1)';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
    
    /*! \brief pruner that prunes a tree after growing finishs */
template<typename TStats>
class TreeRefresher: public TreeUpdater {
 public:
  void Init(const std::vector<std::pair<std::string, std::string> >& args) override {
    param.InitAllowUnknown(args);
  }
  // update the tree, do pruning
  void Update(const std::vector<bst_gpair> &gpair,
              DMatrix *p_fmat,
              const std::vector<RegTree*> &trees) override {
    if (trees.size() == 0) return;
    // number of threads
    // thread temporal space
    std::vector<std::vector<TStats> > stemp;
    std::vector<RegTree::FVec> fvec_temp;
    // setup temp space for each thread
    const int nthread = omp_get_max_threads();
    fvec_temp.resize(nthread, RegTree::FVec());
    stemp.resize(nthread, std::vector<TStats>());
    #pragma omp parallel
    {
      int tid = omp_get_thread_num();
      int num_nodes = 0;
      for (size_t i = 0; i < trees.size(); ++i) {
        num_nodes += trees[i]->param.num_nodes;
      }
      stemp[tid].resize(num_nodes, TStats(param));
      std::fill(stemp[tid].begin(), stemp[tid].end(), TStats(param));
      fvec_temp[tid].Init(trees[0]->param.num_feature);
    }
    // if it is C++11, use lazy evaluation for Allreduce,
    // to gain speedup in recovery
#if __cplusplus >= 201103L
    auto lazy_get_stats = [&]()
#endif
    {
      const MetaInfo &info = p_fmat->info();
      // start accumulating statistics
      dmlc::DataIter<RowBatch> *iter = p_fmat->RowIterator();
      iter->BeforeFirst();
      while (iter->Next()) {
        const RowBatch &batch = iter->Value();
        CHECK_LT(batch.size, std::numeric_limits<unsigned>::max());
        const bst_omp_uint nbatch = static_cast<bst_omp_uint>(batch.size);
        #pragma omp parallel for schedule(static)
        for (bst_omp_uint i = 0; i < nbatch; ++i) {
          RowBatch::Inst inst = batch[i];
          const int tid = omp_get_thread_num();
          const bst_uint ridx = static_cast<bst_uint>(batch.base_rowid + i);
          RegTree::FVec &feats = fvec_temp[tid];
          feats.Fill(inst);
          int offset = 0;
          for (size_t j = 0; j < trees.size(); ++j) {
            AddStats(*trees[j], feats, gpair, info, ridx,
                     dmlc::BeginPtr(stemp[tid]) + offset);
            offset += trees[j]->param.num_nodes;
          }
          feats.Drop(inst);
        }
      }
      // aggregate the statistics
      int num_nodes = static_cast<int>(stemp[0].size());
      #pragma omp parallel for schedule(static)
      for (int nid = 0; nid < num_nodes; ++nid) {
        for (int tid = 1; tid < nthread; ++tid) {
          stemp[0][nid].Add(stemp[tid][nid]);
        }
      }
    };
#if __cplusplus >= 201103L
    reducer.Allreduce(dmlc::BeginPtr(stemp[0]), stemp[0].size(), lazy_get_stats);
#else
    reducer.Allreduce(dmlc::BeginPtr(stemp[0]), stemp[0].size());
#endif
    // rescale learning rate according to size of trees
    float lr = param.learning_rate;
    param.learning_rate = lr / trees.size();
    int offset = 0;
    for (size_t i = 0; i < trees.size(); ++i) {
      for (int rid = 0; rid < trees[i]->param.num_roots; ++rid) {
        this->Refresh(dmlc::BeginPtr(stemp[0]) + offset, rid, trees[i]);
      }
      offset += trees[i]->param.num_nodes;
    }
    // set learning rate back
    param.learning_rate = lr;
  }
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    /*
 * baseevent.h
 *
 *  Created on: 2016年3月24日
 *      Author: caoshaokun
 */
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    //---- Define attributes of all API symbols declarations, e.g. for DLL under Windows.
//#define IMGUI_API __declspec( dllexport )
//#define IMGUI_API __declspec( dllimport )
    
    void DebugHUD_DoInterface(DebugHUD *hud)
{
    // 1. Show a simple window.
    // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
    {
        static float f = 0.0f;
        static int counter = 0;
        ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
        ImGui::ColorEdit3('clear color', hud->clearColor);      // Edit 3 floats representing a color
    }
    }
    
        ImGuiIO& io = ImGui::GetIO();
    io.KeyMap[ImGuiKey_Tab] = ALLEGRO_KEY_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = ALLEGRO_KEY_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = ALLEGRO_KEY_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = ALLEGRO_KEY_UP;
    io.KeyMap[ImGuiKey_DownArrow] = ALLEGRO_KEY_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = ALLEGRO_KEY_PGUP;
    io.KeyMap[ImGuiKey_PageDown] = ALLEGRO_KEY_PGDN;
    io.KeyMap[ImGuiKey_Home] = ALLEGRO_KEY_HOME;
    io.KeyMap[ImGuiKey_End] = ALLEGRO_KEY_END;
    io.KeyMap[ImGuiKey_Insert] = ALLEGRO_KEY_INSERT;
    io.KeyMap[ImGuiKey_Delete] = ALLEGRO_KEY_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = ALLEGRO_KEY_BACKSPACE;
    io.KeyMap[ImGuiKey_Space] = ALLEGRO_KEY_SPACE;
    io.KeyMap[ImGuiKey_Enter] = ALLEGRO_KEY_ENTER;
    io.KeyMap[ImGuiKey_Escape] = ALLEGRO_KEY_ESCAPE;
    io.KeyMap[ImGuiKey_A] = ALLEGRO_KEY_A;
    io.KeyMap[ImGuiKey_C] = ALLEGRO_KEY_C;
    io.KeyMap[ImGuiKey_V] = ALLEGRO_KEY_V;
    io.KeyMap[ImGuiKey_X] = ALLEGRO_KEY_X;
    io.KeyMap[ImGuiKey_Y] = ALLEGRO_KEY_Y;
    io.KeyMap[ImGuiKey_Z] = ALLEGRO_KEY_Z;
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX10_CreateDeviceObjects();
    
    struct GLFWwindow;
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the sdl_opengl3_example/ folder**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver. 
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    static const char* ImGui_ImplSdlGL3_GetClipboardText(void*)
{
    return SDL_GetClipboardText();
}
    
        VkPipelineVertexInputStateCreateInfo vertex_info = {};
    vertex_info.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
    vertex_info.vertexBindingDescriptionCount = 1;
    vertex_info.pVertexBindingDescriptions = binding_desc;
    vertex_info.vertexAttributeDescriptionCount = 3;
    vertex_info.pVertexAttributeDescriptions = attribute_desc;
    
    static VkClearValue             g_ClearValue = {};
    
        void reset(void);
    
    #pragma once
    
      const YGNodeRef root_child0 = YGNodeNew();
  YGNodeStyleSetFlexGrow(root_child0, 1);
  YGNodeStyleSetMargin(root_child0, YGEdgeVertical, 10);
  YGNodeStyleSetMargin(root_child0, YGEdgeAll, 20);
  YGNodeInsertChild(root, root_child0, 0);
    
      YGNodeCalculateLayout(root, 100, 100, YGDirectionLTR);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(30, YGNodeLayoutGetHeight(root));
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0_child0));
  ASSERT_FLOAT_EQ(200, YGNodeLayoutGetWidth(root_child0_child0));
  ASSERT_FLOAT_EQ(200, YGNodeLayoutGetHeight(root_child0_child0));
    
    class Countable : public noncopyable, public nonmovable {
public:
  // RefPtr expects refcount to start at 0
  Countable() : m_refcount(0) {}
  virtual ~Countable()
  {
    FBASSERT(m_refcount == 0);
  }
    }
    
      template <typename ...Args>
  void initialize(Args&&... arguments) {
    FBASSERT(!m_instance);
    m_instance = new T(std::forward<Args>(arguments)...);
  }