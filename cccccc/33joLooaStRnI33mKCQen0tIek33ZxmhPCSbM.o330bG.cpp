
        
        class SILDebuggerClient;
    
    StringRef StdlibGroupsIndexRecordingConsumer::findGroupForSymbol(const IndexSymbol &sym) {
  bool isDeclOrDef = sym.roles & ((SymbolRoleSet)SymbolRole::Declaration | (SymbolRoleSet)SymbolRole::Definition);
  if (isDeclOrDef) {
    if (!sym.group.empty())
      return sym.group;
    return findGroupNameForDecl(sym.decl);
  }
    }
    
      StringRef getTitle() const {
    return StringRef(Title.getValue());
  }
    
    namespace swift {
namespace syntax {
    }
    }
    
      /// Adds a memory buffer to the SourceManager, taking ownership of it.
  unsigned addNewSourceBuffer(std::unique_ptr<llvm::MemoryBuffer> Buffer);
    
    /// Substitution - A substitution into a generic specialization.
class Substitution {
  Type Replacement;
  ArrayRef<ProtocolConformanceRef> Conformance;
    }
    
    bool Substitution::isCanonical() const {
  if (!getReplacement()->isCanonical())
    return false;
  for (auto conf : getConformances()) {
    if (!conf.isCanonical())
      return false;
  }
  return true;
}

    
    // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    #include 'content/nw/src/api/bindings_common.h'
    
    using WebKit::WebAutofillClient;
using WebKit::WebFormElement;
using WebKit::WebFrame;
using WebKit::WebInputElement;
using WebKit::WebKeyboardEvent;
using WebKit::WebNode;
using WebKit::WebNodeCollection;
using WebKit::WebOptionElement;
using WebKit::WebString;
    
    namespace {
    }
    
    bool MenuDelegate::HasIcon(int command_id) {
  if (command_id < 0)
    return false;
    }
    
     private:
  ObjectManager* object_manager_;
    
    
    {  gtk_widget_show(menu_);
  g_object_ref_sink(G_OBJECT(menu_));
}
    
    NwMenuModel::NwMenuModel(Delegate* delegate) : SimpleMenuModel(delegate) {
}
    
    void MenuItem::CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) {
  if (method == 'GetChecked') {
    result->AppendBoolean(GetChecked());
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    #include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    #ifndef GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H
#define GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H
    
    
    {  // Get all comments (leading, leading_detached, trailing) and print them as a
  // docstring. Any leading space of a line will be removed, but the line
  // wrapping will not be changed.
  void PrintAllComments(std::vector<grpc::string> comments,
                        grpc_generator::Printer* out);
};
    
    TEST_F(CodegenTestMinimal, Build) {}
    
    static void get_cpu_usage(unsigned long long* total_cpu_time,
                          unsigned long long* idle_cpu_time) {
#ifdef __linux__
  std::ifstream proc_stat('/proc/stat');
  proc_stat.ignore(5);
  std::string cpu_time_str;
  std::string first_line;
  std::getline(proc_stat, first_line);
  std::stringstream first_line_s(first_line);
  for (int i = 0; i < 10; ++i) {
    std::getline(first_line_s, cpu_time_str, ' ');
    *total_cpu_time += std::stol(cpu_time_str);
    if (i == 3) {
      *idle_cpu_time = std::stol(cpu_time_str);
    }
  }
#else
  gpr_log(GPR_INFO, 'get_cpu_usage(): Non-linux platform is not supported.');
#endif
}
    
      grpc::Status GetGauge(ServerContext* context, const GaugeRequest* request,
                        GaugeResponse* response) override;
    
    
    { private:
  std::mutex mu_;
  std::vector<grpc::string> added_secure_type_names_;
  std::vector<std::unique_ptr<CredentialTypeProvider>>
      added_secure_type_providers_;
};
    
    #include <TH/TH.h>
    
    #undef DEFINE_ACCESSOR
  bool isFloatingPoint() const {
    return Tag::HAS_d == tag;
  }
  bool isIntegral() const {
    return Tag::HAS_i == tag;
  }
  bool isBackedByTensor() const {
    return Tag::HAS_t == tag;
  }
    
    ${Tensor}::${Tensor}(Context* context)
: ${Tensor}(context,${THTensor}_new(${state})) {}
    
    /* Manually set the seed */
void THCRandom_manualSeed(THCState* state, uint64_t seed)
{
  THCGenerator* gen = THCRandom_rawGenerator(state);
  gen->initial_seed = seed;
  if (gen->initf) {
    createGeneratorState(gen, seed);
  }
}
    
    namespace torch { namespace utils {
    }
    }
    
    namespace at {
namespace native {
    }
    }
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHShortTensor(THShortTensor *tensor) {
  return at::getType(at::Backend::CPU, at::ScalarType::Short).unsafeTensorFromTH((void*)tensor, true);
}
    
    extern JSClass  *jsb_cocos2d_NavMeshObstacle_class;
extern JSObject *jsb_cocos2d_NavMeshObstacle_prototype;
    
    
    
    		b2Profile aveProfile;
		memset(&aveProfile, 0, sizeof(b2Profile));
		if (m_stepCount > 0)
		{
			float32 scale = 1.0f / m_stepCount;
			aveProfile.step = scale * m_totalProfile.step;
			aveProfile.collide = scale * m_totalProfile.collide;
			aveProfile.solve = scale * m_totalProfile.solve;
			aveProfile.solveInit = scale * m_totalProfile.solveInit;
			aveProfile.solveVelocity = scale * m_totalProfile.solveVelocity;
			aveProfile.solvePosition = scale * m_totalProfile.solvePosition;
			aveProfile.solveTOI = scale * m_totalProfile.solveTOI;
			aveProfile.broadphase = scale * m_totalProfile.broadphase;
		}
    
    #include <cstdlib>
    
    
    {
    {			float minX = -6.0f;
			float maxX = 0.0f;
			float minY = 4.0f;
			float maxY = 6.0f;
			
			for (int32 i = 0; i < 400; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position = b2Vec2(RandomFloat(minX,maxX),RandomFloat(minY,maxY));
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&shape, 0.01f);
			}
		}
		
		{
			b2PolygonShape shape;
			shape.SetAsBox(1.5f, 1.5f);
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-40.0f,5.0f);
			bd.bullet = true;
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&shape, 1.0f);
			body->SetLinearVelocity(b2Vec2(150.0f, 0.0f));
		}
	}
    
    
    {			b2PolygonShape shape;
			shape.SetAsBox(0.2f, 1.0f, b2Vec2(0.5f, 1.0f), 0.0f);
			body->CreateFixture(&shape, 0.0f);
		}
    
    			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0.0f, 1.0f);
			m_car = m_world->CreateBody(&bd);
			m_car->CreateFixture(&chassis, 1.0f);