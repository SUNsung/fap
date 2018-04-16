
        
            DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory( &sd, sizeof( sd ) );
    sd.BufferCount = 1;
    sd.BufferDesc.Width = width;
    sd.BufferDesc.Height = height;
#ifdef CHECK_NV12
    sd.BufferDesc.Format = DXGI_FORMAT_NV12;
#else
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
#endif
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = NULL; //g_hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    
    //
// BEGIN OF CUSTOM FUNCTIONS
//
    
    #ifndef incl_HPHP_WORKLOAD_STATS_H_
#define incl_HPHP_WORKLOAD_STATS_H_
    
    struct PageletServer {
  static bool Enabled();
  static void Restart();
  static void Stop();
    }
    
    VcallArgsId Vunit::makeVcallArgs(VcallArgs&& args) {
  VcallArgsId i(vcallArgs.size());
  vcallArgs.emplace_back(std::move(args));
  return i;
}
    
      bool ret = true;
  bitmask* run_nodes = numa_get_run_node_mask();
  bitmask* mem_nodes = numa_get_mems_allowed();
  for (int i = 0; i <= max_node; i++) {
    if (!numa_bitmask_isbitset(run_nodes, i) ||
        !numa_bitmask_isbitset(mem_nodes, i)) {
      // Only deal with the case of a contiguous set of nodes where we can
      // run/allocate memory on each node.
      ret = false;
      break;
    }
    numa_node_set |= (uint32_t)1 << i;
    numa_num_nodes++;
  }
  numa_bitmask_free(run_nodes);
  numa_bitmask_free(mem_nodes);
    
    #include 'hphp/runtime/vm/jit/normalized-instruction.h'
#include 'hphp/runtime/vm/jit/switch-profile.h'
#include 'hphp/runtime/vm/jit/target-profile.h'
    
    //////////////////////////////////////////////////////////////////////
    
      void undo() {
    m_cb.setFrontier(m_oldFrontier);
  }
    
    
    {
    {  if (c1headc2head == max) {
    // flip c1
    std::reverse(c1->targets.begin(), c1->targets.end());
  } else if (c1headc2tail == max) {
    // flip c1 c2
    std::reverse(c1->targets.begin(), c1->targets.end());
    std::reverse(c2->targets.begin(), c2->targets.end());
  } else if (c1tailc2tail == max) {
    // flip c2
    std::reverse(c2->targets.begin(), c2->targets.end());
  }
}
}
    
    
    {  if (n == 1) {
    if (imm_s == 0x3F) {
      return 0;
    }
    uint64_t bits = (1UL << (imm_s + 1)) - 1;
    return RotateRight(bits, imm_r, 64);
  } else {
    if ((imm_s >> 1) == 0x1F) {
      return 0;
    }
    for (int width = 0x20; width >= 0x2; width >>= 1) {
      if ((imm_s & width) == 0) {
        int mask = width - 1;
        if ((imm_s & mask) == mask) {
          return 0;
        }
        uint64_t bits = (1UL << ((imm_s & mask) + 1)) - 1;
        return RepeatBitsAcrossReg(reg_size,
                                   RotateRight(bits, imm_r & mask, width),
                                   width);
      }
    }
  }
  not_reached();
  return 0;
}
    
    namespace HPHP {
    }
    
        do 
    {
        if (argc == 1)
        {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, 'cc.PhysicsBody:create');
            if (!ok) { break; }
            cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::create(arg0);
            object_to_luaval<cocos2d::PhysicsBody>(tolua_S, 'cc.PhysicsBody',(cocos2d::PhysicsBody*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::create();
            object_to_luaval<cocos2d::PhysicsBody>(tolua_S, 'cc.PhysicsBody',(cocos2d::PhysicsBody*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, 'cc.PhysicsBody:create');
            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, 'cc.PhysicsBody:create');
            if (!ok) { break; }
            cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::create(arg0, arg1);
            object_to_luaval<cocos2d::PhysicsBody>(tolua_S, 'cc.PhysicsBody',(cocos2d::PhysicsBody*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d', 'cc.PhysicsBody:create',argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,'#ferror in function 'lua_cocos2dx_physics_PhysicsBody_create'.',&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_createEdgeBox(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
    
        GLfloat    glVertices[] = 
    {
        p1.x * mRatio, p1.y * mRatio,
        p2.x * mRatio, p2.y * mRatio
    };
    glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, glVertices);
    
    			b2FixtureDef sd1;
			sd1.shape = &poly1;
			sd1.density = 4.0f;
    
    	void Step(Settings* settings)
	{
		m_debugDraw.DrawString(5, m_textLine, 'Keys: left = a, brake = s, right = d, hz down = q, hz up = e');
		m_textLine += DRAW_STRING_NEW_LINE;
		m_debugDraw.DrawString(5, m_textLine, 'frequency = %g hz, damping ratio = %g', m_hz, m_zeta);
		m_textLine += DRAW_STRING_NEW_LINE;
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // bool JNU_Jstring2Wstring( JNIEnv* _env, const jstring jstr, std::wstring& wstr); //in linux sizeof(wchar_t)==4 but sizeof(jchar)==2
wchar_t* JNU_Jstring2Wchar(JNIEnv* _env, const jstring jstr);
void JNU_FreeWchar(JNIEnv* _env, jstring str, wchar_t* wchar);
jstring JNU_Wstring2Jstring(JNIEnv* _env, const std::wstring& wstr);
jstring JNU_Wchar2JString(JNIEnv* _env, wchar_t* wchar);
    
    ScopeJEnv::ScopeJEnv(JavaVM* jvm, jint _capacity)
    : vm_(jvm), env_(NULL), we_attach_(false), status_(0) {
    ASSERT(jvm);
    do {
        env_ = (JNIEnv*)pthread_getspecific(g_env_key);
        
        if (NULL != env_) {
            break;
        }
        
        status_ = vm_->GetEnv((void**) &env_, JNI_VERSION_1_6);
    }
    }