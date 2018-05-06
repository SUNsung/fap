
        
        
    {}  // namespace atom
    
    #include 'ui/gfx/image/image.h'
    
    #ifndef ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_
#define ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_
    
      // Called immediately after all windows are closed.
  virtual void OnWindowAllClosed() {}
    
    struct DraggableRegion {
  bool draggable;
  gfx::Rect bounds;
    }
    
      virtual ~DesktopMediaList() {}
    
    /// Index the given source file and store the results to \p indexStorePath.
///
/// \param primarySourceFile The source file to index.
///
/// \param indexUnitToken A unique identifier for this translation unit in the
/// form of a file path.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(SourceFile *primarySourceFile, StringRef indexUnitToken,
                    StringRef indexStorePath, bool indexSystemModules,
                    bool isDebugCompilation, StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
    
      StringRef str() const {
    return LiteralContent;
  }
    
      IndexSymbol() = default;
    
    #include <dispatch/dispatch.h>
static_assert(std::is_same<swift_once_t, dispatch_once_t>::value,
              'swift_once_t and dispatch_once_t must stay in sync');
#else
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    WriteBatch::WriteBatch() {
  Clear();
}
    
    inline int Slice::compare(const Slice& b) const {
  const size_t min_len = (size_ < b.size_) ? size_ : b.size_;
  int r = memcmp(data_, b.data_, min_len);
  if (r == 0) {
    if (size_ < b.size_) r = -1;
    else if (size_ > b.size_) r = +1;
  }
  return r;
}
    
    
    {
    {bool RunQuit(const grpc::string& credential_type);
}  // namespace testing
}  // namespace grpc
    
    #include <gtest/gtest.h>
    
    #include 'test/cpp/interop/server_helper.h'
#include 'test/cpp/util/test_config.h'
    
    template <class T, class F>
double average(const T& container, F functor) {
  return sum(container, functor) / container.size();
}
    
    UsageTimer::Result UsageTimer::Sample() {
  Result r;
  r.wall = Now();
  get_resource_usage(&r.user, &r.system);
  r.total_cpu_time = 0;
  r.idle_cpu_time = 0;
  get_cpu_usage(&r.total_cpu_time, &r.idle_cpu_time);
  return r;
}
    
    /*
 * This implements a Metrics server defined in
 * src/proto/grpc/testing/metrics.proto. Any
 * test service can use this to export Metrics (TODO (sreek): Only Gauges for
 * now).
 *
 * Example:
 *    MetricsServiceImpl metricsImpl;
 *    ..
 *    // Create QpsGauge(s). Note: QpsGauges can be created even after calling
 *    // 'StartServer'.
 *    QpsGauge qps_gauge1 = metricsImpl.CreateQpsGauge('foo', is_present);
 *    // qps_gauge1 can now be used anywhere in the program by first making a
 *    // one-time call qps_gauge1.Reset() and then calling qps_gauge1.Incr()
 *    // every time to increment a query counter
 *
 *    ...
 *    // Create the metrics server
 *    std::unique_ptr<grpc::Server> server = metricsImpl.StartServer(port);
 *    server->Wait(); // Note: This is blocking.
 */
namespace grpc {
namespace testing {
    }
    }
    
    grpc::string SummarizeMethod(const grpc::protobuf::MethodDescriptor* method) {
  grpc::string result = method->name();
  result.append('\n');
  return result;
}
    
            // GraphProto to store name, version, initializer.
        // When serilizing <*this> Graph to a GraphProto, the nodes and
        // functions in <Graph> will also be fed into <m_graphProto> so that
        // it's consistent with <*this> graph.
        // This pointer is owned by parent model.
        GraphProto* m_graphProto;
    
    
    {        auto& m = map();
        auto& op_name = p_opSchemaSetter.m_opSchema.GetName();
        auto& op_domain = p_opSchemaSetter.m_opSchema.Domain();
        auto ver = p_opSchemaSetter.m_opSchema.SinceVersion();
        assert(m[op_name][op_domain].count(ver) == 0);
        m[op_name][op_domain].emplace(std::make_pair(ver, p_opSchemaSetter.m_opSchema));
    }
    
    
    {            TypesWrapper& t = TypesWrapper::GetTypesWrapper();
            if (p_typeStr == t.c_bool)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_BOOL;
            }
            else if (p_typeStr == t.c_float)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_FLOAT;
            }
            else if (p_typeStr == t.c_float16)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_FLOAT16;
            }
            else if (p_typeStr == t.c_double)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_DOUBLE;
            }
            else if (p_typeStr == t.c_int8)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_INT8;
            }
            else if (p_typeStr == t.c_int16)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_INT16;
            }
            else if (p_typeStr == t.c_int32)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_INT32;
            }
            else if (p_typeStr == t.c_int64)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_INT64;
            }
            else if (p_typeStr == t.c_string)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_STRING;
            }
            else if (p_typeStr == t.c_uint8)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_UINT8;
            }
            else if (p_typeStr == t.c_uint16)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_UINT16;
            }
            else if (p_typeStr == t.c_uint32)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_UINT32;
            }
            else if (p_typeStr == t.c_uint64)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_UINT64;
            }
            else if (p_typeStr == t.c_complex64)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_COMPLEX64;
            }
            else if (p_typeStr == t.c_complex128)
            {
                p_type = TensorProto::DataType::TensorProto_DataType_COMPLEX128;
            }
            else
            {
                assert(false);
            }
        }
    
        std::function<void(OperatorSchemaSetter&)> RNNDocGeneratorActivationArgs() {
        return [=](OperatorSchemaSetter& schema) {
            schema.Attr('activation_alpha',
                'Optional scaling values used by some activation functions.',
                AttrType::AttributeProto_AttributeType_FLOATS);
            schema.Attr('activation_beta',
                'Optional scaling values used by some activation functions.',
                AttrType::AttributeProto_AttributeType_FLOATS);
        };
    }
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Squeeze)
        .Description('Remove single-dimensional entries from the shape of a tensor. '
            'Takes a  parameter `axes` with a list of axes to squeeze.')
        .Input('data', 'Tensors with at least max(dims) dimensions.', 'T')
        .Output('squeezed', 'Reshaped tensor with same data as input.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('axes',
            'List of positive integers, indicate the dimensions to squeeze.',
            AttrType::AttributeProto_AttributeType_INTS, int64_t(1));
    
        // Let's record that we started the copy, so that the main thread can wait afterwards.
    if (m_dataTransferers[currentDataTransferIndex])
        m_dataTransferers[currentDataTransferIndex]->RecordCPUToGPUCopy();
    
        // file I/O
    void write(FILE *f, const char *name) const
    {
        fputTag(f, 'BMAT');
        fputstring(f, name);
        fputint(f, (int) this->numrows);
        fputint(f, (int) this->numcols);
        const auto &us = *this;
        foreach_column (j, us)
        {
            auto column = ssematrixbase::col(j);
            fwriteOrDie(column, f);
        }
        fputTag(f, 'EMAT');
    }
    
        bool transposeA = false, transposeB = false;
    float alpha = 0.3f;
    float beta = 0.0f;
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mB, transposeA, mAdense, transposeB, beta, mC);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mB, transposeA, mAsparse, transposeB, beta, mD);
    
    
    {
    {} // namespace asio
} // namespace boost
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    template <>
class base_from_completion_cond<transfer_all_t>
{
protected:
  explicit base_from_completion_cond(transfer_all_t)
  {
  }
    }
    
    #ifndef BOOST_ASIO_DETAIL_HANDLER_ALLOC_HELPERS_HPP
#define BOOST_ASIO_DETAIL_HANDLER_ALLOC_HELPERS_HPP
    
    #ifndef BOOST_ASIO_DETAIL_IMPL_BUFFER_SEQUENCE_ADAPTER_IPP
#define BOOST_ASIO_DETAIL_IMPL_BUFFER_SEQUENCE_ADAPTER_IPP
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #include <boost/asio/detail/pop_options.hpp>
    
    
    
        argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseAllEffects'', nullptr);
            return 0;
        }
        cobj->pauseAllEffects();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:pauseAllEffects',argc, 0);
    return 0;
    
    
    
        virtual void DrawSolidPolygon(const b2Vec2* vertices, int vertexCount, const b2Color& color);
    
    void DestructionListener::SayGoodbye(b2Joint* joint)
{
	if (test->m_mouseJoint == joint)
	{
		test->m_mouseJoint = nullptr;
	}
	else
	{
		test->JointDestroyed(joint);
	}
}
    
    /// Test settings. Some can be controlled in the GUI.
struct Settings
{
	Settings()
	{
		viewCenter.Set(0.0f, 20.0f);
		hz = 60.0f;
		velocityIterations = 8;
		positionIterations = 3;
		drawShapes = 1;
		drawJoints = 1;
		drawAABBs = 0;
		drawContactPoints = 0;
		drawContactNormals = 0;
		drawContactImpulse = 0;
		drawFrictionImpulse = 0;
		drawCOMs = 0;
		drawStats = 0;
		drawProfile = 0;
		enableWarmStarting = 1;
		enableContinuous = 1;
		enableSubStepping = 0;
		enableSleep = 1;
		pause = 0;
		singleStep = 0;
	}
    }
    
    			b2RevoluteJointDef jd;
			jd.Initialize(ground, body, body->GetPosition());
			jd.lowerAngle = -8.0f * b2_pi / 180.0f;
			jd.upperAngle = 8.0f * b2_pi / 180.0f;
			jd.enableLimit = true;
			m_world->CreateJoint(&jd);