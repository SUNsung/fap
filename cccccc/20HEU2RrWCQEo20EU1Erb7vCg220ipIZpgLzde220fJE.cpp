
        
         protected:
  // Variables accessible from subclasses.
  mutex mu_;
  ContainerInfo cinfo_ GUARDED_BY(mu_);
  T* resource_ GUARDED_BY(mu_) = nullptr;
    
    namespace xla {
    }
    
    // Prune a model to make it more efficient:
// * Remove unnecessary operations.
// * Optimize gradient computations.
class ModelPruner : public GraphOptimizer {
 public:
  ModelPruner() {}
  ~ModelPruner() override {}
    }
    
      // Child process: close parent-side pipes and channels marked for closing.
  // For pipe channels, replace their file descriptors with the pipes.
  int devnull_fd = -1;
  for (int i = 0; i < kNFds; i++) {
    if (parent_pipe_[i] >= 0) {
      close(parent_pipe_[i]);
      parent_pipe_[i] = -1;
    }
    }
    
    // kNullPlugin denotes an invalid plugin identifier.
extern const PluginId kNullPlugin;
    
    /** scalar_sigmoid_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a sigmoid
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::sigmoid_fast_derivative()
  */
template <typename T>
struct scalar_sigmoid_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_sigmoid_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return (one - y) * y;
  }
    }
    
      Status ResetLocked() override {
    line_number_ = 0;
    input_buffer_.reset(nullptr);
    return ReaderBase::ResetLocked();
  }
    
      // If instruction is part of inputs, don't reset the bit_vector.
  if (std::find(inputs.begin(), inputs.end(), instruction) == inputs.end()) {
    bit_vector.SetToZero();
  }
  bit_vector.Set(GetIndex(instruction));
  for (const HloInstruction* input : inputs) {
    bit_vector.OrWith(GetBitVector(input));
  }
    
    template <typename T>
struct DynamicStitchOpCPU : DynamicStitchOpImplCPU<T, false> {
  using DynamicStitchOpImplCPU<T, false>::DynamicStitchOpImplCPU;
};
    
    
    {}  // namespace
    
        // Finish and check for file errors
    if (s.ok()) {
      s = file->Sync();
    }
    if (s.ok()) {
      s = file->Close();
    }
    delete file;
    file = NULL;
    
    void DBIter::Next() {
  assert(valid_);
    }
    
    #include 'db/filename.h'
    
    
    {  Table* table = reinterpret_cast<TableAndFile*>(cache_->Value(handle))->table;
  Iterator* result = table->NewIterator(options);
  result->RegisterCleanup(&UnrefEntry, cache_, handle);
  if (tableptr != NULL) {
    *tableptr = table;
  }
  return result;
}
    
      void Clear();
    
     public:
  RandomGenerator() {
    // We use a limited amount of data over and over again and ensure
    // that it is larger than the compression window (32KB), and also
    // large enough to serve all typical value sizes we want to write.
    Random rnd(301);
    std::string piece;
    while (data_.size() < 1048576) {
      // Add a short fragment that is as compressible as specified
      // by FLAGS_compression_ratio.
      test::CompressibleString(&rnd, FLAGS_compression_ratio, 100, &piece);
      data_.append(piece);
    }
    pos_ = 0;
  }
    
    // If true, do not destroy the existing database.  If you set this
// flag and also specify a benchmark that wants a fresh database, that
// benchmark will fail.
static bool FLAGS_use_existing_db = false;
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
      // Return true iff 'x' is a prefix of '*this'
  bool starts_with(const Slice& x) const {
    return ((size_ >= x.size_) &&
            (memcmp(data_, x.data_, x.size_) == 0));
  }
    
    class DummyBufferPoolController : public BufferPoolController
{
public:
    DummyBufferPoolController() { }
    virtual ~DummyBufferPoolController() { }
    }
    
    
    {
    {
    {            if (wholeSize.height < rows || wholeSize.width < cols)
            {
                obj.create(rows, cols, type);
            }
            else
            {
                obj.cols = cols;
                obj.rows = rows;
            }
        }
    }
}
    
    #ifndef GL_VERSION_2_0
    // GL type for program/shader text
    typedef char GLchar;
#endif
    
    #if defined(__linux__)
    #include <dlfcn.h>
    #include <stdio.h>
    
    bool js_cocos2dx_physics3d_Physics3DObject_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DObject_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DObject(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DObject_setUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getObjType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_setPhysicsWorld(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getWorldTransform(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getPhysicsWorld(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_setMask(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getCollisionCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_getMask(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DObject_needCollisionCallback(JSContext *cx, uint32_t argc, jsval *vp);
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_rewindBackgroundMusic'', nullptr);
        return 0;
    }
#endif
    
    
    
    
    
    
    
    	b2Fixture* fixtureA = contact->GetFixtureA();
	b2Fixture* fixtureB = contact->GetFixtureB();
    
    			b2EdgeShape shape;
    
    			b2EdgeShape shape;
			shape.Set(b2Vec2(-20.0f, 0.0f), b2Vec2(20.0f, 0.0f));
    
    		// Compute consistent velocities for new bodies based on
		// cached velocity.
		b2Vec2 center1 = body1->GetWorldCenter();
		b2Vec2 center2 = body2->GetWorldCenter();
		
		b2Vec2 velocity1 = m_velocity + b2Cross(m_angularVelocity, center1 - center);
		b2Vec2 velocity2 = m_velocity + b2Cross(m_angularVelocity, center2 - center);
    
    			box.SetAsBox(0.25f, 0.25f);
    
    
    {        // Process command
        if (Stricmp(command_line, 'CLEAR') == 0)
        {
            ClearLog();
        }
        else if (Stricmp(command_line, 'HELP') == 0)
        {
            AddLog('Commands:');
            for (int i = 0; i < Commands.Size; i++)
                AddLog('- %s', Commands[i]);
        }
        else if (Stricmp(command_line, 'HISTORY') == 0)
        {
            int first = History.Size - 10;
            for (int i = first > 0 ? first : 0; i < History.Size; i++)
                AddLog('%3d: %s\n', i, History[i]);
        }
        else
        {
            AddLog('Unknown command: '%s'\n', command_line);
        }
    }
    
            // FIXME-OPT: Unfortunately Allegro doesn't support 32-bits packed colors so we have to convert them to 4 floats
        static ImVector<ImDrawVertAllegro> vertices;
        vertices.resize(cmd_list->VtxBuffer.Size);
        for (int i = 0; i < cmd_list->VtxBuffer.Size; ++i)
        {
            const ImDrawVert &dv = cmd_list->VtxBuffer[i];
            ImDrawVertAllegro v;
            v.pos = dv.pos;
            v.uv = dv.uv;
            unsigned char *c = (unsigned char*)&dv.col;
            v.col = al_map_rgba(c[0], c[1], c[2], c[3]);
            vertices[i] = v;
        }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
        VkDynamicState dynamic_states[2] = { VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR };
    VkPipelineDynamicStateCreateInfo dynamic_state = {};
    dynamic_state.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    dynamic_state.dynamicStateCount = 2;
    dynamic_state.pDynamicStates = dynamic_states;
    
            // Rendering
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui::Render();
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    
    
    {private:
  uint8_t Size = 0;
  uint8_t Data[kMaxSize];
};
    
    
    {} // namespace fuzzer
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
#include <cstdarg>
#include <cstdio>
#include <dirent.h>
#include <fstream>
#include <iterator>
#include <libgen.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
    
    // Parse a location, like:
// \\?\UNC\Server\Share\  \\?\C:\  \\Server\Share\  \  C:\  C:
// Returns number of characters considered if successful.
static size_t ParseLocation(const std::string &FileName) {
  size_t Pos = 0, Res;
    }
    
    
    {}  // namespace fuzzer
    
      struct Mutator {
    size_t (MutationDispatcher::*Fn)(uint8_t *Data, size_t Size, size_t Max);
    const char *Name;
  };
    
      bool UsingTracePcGuard() const {return NumModules; }
    
    void PrintHexArray(const Unit &U, const char *PrintAfter = '');
    
    // There is no header for this on macOS so declare here
extern 'C' char **environ;