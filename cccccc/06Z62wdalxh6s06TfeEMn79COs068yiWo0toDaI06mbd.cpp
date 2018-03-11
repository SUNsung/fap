
        
            // this = this * thisscale + other
    void scaleandadd(const float thisscale, const ssematrixbase &other)
    {
        auto &us = *this;
        assert(rows() == other.rows() && cols() == other.cols());
    }
    
    // sets m_learningRateMultiplier in all LearnableParameters feeding into the passed rootNode
// Called from MEL
void ComputationNetwork::SetLearnableNodesBelowLearningRateMultiplier(const float learningRateMultiplier, const ComputationNodeBasePtr& rootNode)
{
    // find nodes from all available nodes
    if (rootNode == nullptr)
    {
        for (auto nodeIter = m_nameToNodeMap.begin(); nodeIter != m_nameToNodeMap.end(); nodeIter++)
        {
            ComputationNodeBasePtr node = nodeIter->second;
            if (node->OperationName() == OperationNameOf(LearnableParameter))
                node->SetLearningRateMultiplier(learningRateMultiplier);
        }
    }
    else
    {
        // for calculating a specific node
        if (!EvalOrderExists(rootNode))
            const_cast<ComputationNetwork&>(*this).FormEvalOrder(rootNode);
    }
    }
    
        // first try if a NetworkBuilder is present
    function<ComputationNetworkPtr(DEVICEID_TYPE)> createNetworkFn;
    bool gotIt = TryGetNetworkFactory<ConfigRecordType, ElemType>(config, createNetworkFn);
    if (gotIt)
    {
        // We have several ways to create a network.
        net = createNetworkFn(deviceId);
        if (outputNodeNames.size() > 0)
        {
            net->InvalidateCompiledNetwork();
            PatchOutputNodes(net, outputNodeNames, outputNodeNamesVector);
            net->CompileNetwork();
            // BUGBUG: This will generate double Validation output in the log
        }
    }
    else // no NetworkBuilder given: load from 'modelPath'
    {
        wstring modelPath = config(L'modelPath');
    }
    
            for (size_t paramNumber = params.size(); paramNumber > numFixedParams; paramNumber--)
        {
            // process optional parameter if it exists
            std::string propName, value;
            if (OptionalParameter(params[paramNumber - 1], propName, value))
            {
                if (EqualInsensitive(propName, 'copyFlag', 'copy'))
                {
                    if (EqualInsensitive(value, 'all'))
                    {
                        copyFlags = CopyNodeFlags::copyNodeAll;
                    }
                    else if (EqualInsensitive(value, 'value'))
                    {
                        copyFlags = CopyNodeFlags::copyNodeValue;
                    }
                    else
                    {
                        RuntimeError('Invalid optional parameter value %s in CopyNode(), valid values are copyFlag=(all|value)', value.c_str());
                    }
                }
                else
                {
                    RuntimeError('Invalid optional parameter to Copy, %s\n valid optional parameters: copyFlag=(all|value)', propName.c_str());
                }
            }
        }
    
        bool empty() const
    {
#ifndef NONUMLATTICEMMI // TODO:set NUM lattice to null so as to save memory
        if (numlattices.empty() ^ denlattices.empty())
            RuntimeError('latticesource: numerator and denominator lattices must be either both empty or both not empty');
#endif
        return denlattices.empty();
    }
    
    // ---------------------------------------------------------------------------
// hardcoded_array -- wraps a fixed-size C array together with its size.
//
// operator[] checks index bounds in Debug builds. size() is provided such
// that this class can be substituted for STL vector in many cases.
// Can be constructed with a size parameter--it will be checked against the
// hard-coded size.
// Can also be constructed with an initialization parameter (typ. 0).
// ---------------------------------------------------------------------------
    
    #include <atomic>
#include <string>
#include <vector>
    
      /**
   * @brief Signal to the Dispatcher that no services should be created.
   *
   * The Dispatcher will not add services if it is shutting down until
   * a join has completed of existing services.
   *
   * This prevents a very strange race where the dispatcher is signaled to
   * abort or interrupt and serviced are sill waiting to be added.
   * A future join will be requested AFTER all services were expected to have
   * been interrupted.
   */
  std::atomic<bool> stopping_{false};
    
    /**
 * @brief Load extenion modules from a delimited search path string.
 *
 * @param loadfile Path to file containing newline delimited file paths
 */
Status loadModules(const std::string& loadfile);
    
      /*
   * @brief Update the flag value by string name,
   *
   * @param name the flag name.
   * @parma value the new value.
   * @return if the value was updated.
   */
  static Status updateValue(const std::string& name, const std::string& value);
    
    class DropPrivileges;
using DropPrivilegesRef = std::shared_ptr<DropPrivileges>;
    
    
    {    // Code should never reach this point
    VLOG(1) << 'Could not start extension process: ' << exec_path;
    Initializer::shutdown(EXIT_FAILURE);
    return std::shared_ptr<PlatformProcess>();
  }
    
    DECLARE_uint64(alarm_timeout);
    
    #endif // __cocos2dx_builder_h__

    
    extern JSClass  *jsb_cocostudio_timeline_EventFrame_class;
extern JSObject *jsb_cocostudio_timeline_EventFrame_prototype;
    
    
    
    
    
    
    
    #if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,'#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getTag'.',&tolua_err);
#endif
    
    
    
    GLESDebugDraw::GLESDebugDraw()
    : mRatio( 1.0f )
{
    this->initShader();
}
    
    	b2PointState state1[b2_maxManifoldPoints], state2[b2_maxManifoldPoints];
	b2GetPointStates(state1, state2, oldManifold, manifold);
    
    			m_world->CreateJoint(&pjd);
    
    		if (b2_toiCalls > 0)
		{
			m_debugDraw.DrawString(5, m_textLine, 'toi calls = %d, ave toi iters = %3.1f, max toi iters = %d',
				b2_toiCalls, b2_toiIters / float32(b2_toiCalls), b2_toiMaxRootIters);
			m_textLine += DRAW_STRING_NEW_LINE;
    }
    
        // C++ mappings of API methods
    static Persistent<v8::Function> constructor;
    static Handle<Value> Open(const Arguments& args);
    static Handle<Value> New(const Arguments& args);
    static Handle<Value> Get(const Arguments& args);
    static Handle<Value> Put(const Arguments& args);
    static Handle<Value> Delete(const Arguments& args);
    static Handle<Value> Dump(const Arguments& args);
    static Handle<Value> WriteBatch(const Arguments& args);
    static Handle<Value> CreateColumnFamily(const Arguments& args);
    static Handle<Value> CompactRange(const Arguments& args);
    static Handle<Value> Close(const Arguments& args);
    
      virtual const char* Name() const override;
    
        // I omit the 'assert(success)' checks here.
    slists.Get('a', &a);
    slists.Get('b', &b);
    slists.Get('c', &c);
    
      size_t size() const { return size_; }
  const char* data() const { return data_; }
  bool cachable() const { return contents_.cachable; }
  size_t usable_size() const {
#ifdef ROCKSDB_MALLOC_USABLE_SIZE
    if (contents_.allocation.get() != nullptr) {
      return malloc_usable_size(contents_.allocation.get());
    }
#endif  // ROCKSDB_MALLOC_USABLE_SIZE
    return size_;
  }
  uint32_t NumRestarts() const;
  CompressionType compression_type() const {
    return contents_.compression_type;
  }
    
    namespace rocksdb {
    }
    
      virtual void SeekForPrev(const Slice& target) override {
    ClearHeaps();
    InitMaxHeap();
    }
    
    // Return an iterator that provided the union of the data in
// children[0,n-1].  Takes ownership of the child iterators and
// will delete them when the result iterator is deleted.
//
// The result does no duplicate suppression.  I.e., if a particular
// key is present in K child iterators, it will be yielded K times.
//
// REQUIRES: n >= 0
extern InternalIterator* NewMergingIterator(
    const InternalKeyComparator* comparator, InternalIterator** children, int n,
    Arena* arena = nullptr, bool prefix_seek_mode = false);
    
    struct Parameters {
  //Defines the custom parameter types for methods
  //eg: flatbuffers uses flatbuffers.Builder as input for the client and output for the server
  grpc::string custom_method_io_type;
    }
    
    namespace grpc_java_generator {
struct Parameters {
  //        //Defines the custom parameter types for methods
  //        //eg: flatbuffers uses flatbuffers.Builder as input for the client
  //        and output for the server grpc::string custom_method_io_type;
    }
    }
    
    #ifndef FLATC_H_
#  define FLATC_H_
    
    inline void IterateValue(ElementaryType type, const uint8_t *val,
                         const TypeTable *type_table, const uint8_t *prev_val,
                         soffset_t vector_index, IterationVisitor *visitor) {
  switch (type) {
    case ET_UTYPE: {
      auto tval = *reinterpret_cast<const uint8_t *>(val);
      visitor->UType(tval, EnumName(tval, type_table));
      break;
    }
    case ET_BOOL: {
      visitor->Bool(*reinterpret_cast<const uint8_t *>(val) != 0);
      break;
    }
    case ET_CHAR: {
      auto tval = *reinterpret_cast<const int8_t *>(val);
      visitor->Char(tval, EnumName(tval, type_table));
      break;
    }
    case ET_UCHAR: {
      auto tval = *reinterpret_cast<const uint8_t *>(val);
      visitor->UChar(tval, EnumName(tval, type_table));
      break;
    }
    case ET_SHORT: {
      auto tval = *reinterpret_cast<const int16_t *>(val);
      visitor->Short(tval, EnumName(tval, type_table));
      break;
    }
    case ET_USHORT: {
      auto tval = *reinterpret_cast<const uint16_t *>(val);
      visitor->UShort(tval, EnumName(tval, type_table));
      break;
    }
    case ET_INT: {
      auto tval = *reinterpret_cast<const int32_t *>(val);
      visitor->Int(tval, EnumName(tval, type_table));
      break;
    }
    case ET_UINT: {
      auto tval = *reinterpret_cast<const uint32_t *>(val);
      visitor->UInt(tval, EnumName(tval, type_table));
      break;
    }
    case ET_LONG: {
      visitor->Long(*reinterpret_cast<const int64_t *>(val));
      break;
    }
    case ET_ULONG: {
      visitor->ULong(*reinterpret_cast<const uint64_t *>(val));
      break;
    }
    case ET_FLOAT: {
      visitor->Float(*reinterpret_cast<const float *>(val));
      break;
    }
    case ET_DOUBLE: {
      visitor->Double(*reinterpret_cast<const double *>(val));
      break;
    }
    case ET_STRING: {
      val += ReadScalar<uoffset_t>(val);
      visitor->String(reinterpret_cast<const String *>(val));
      break;
    }
    case ET_SEQUENCE: {
      switch (type_table->st) {
        case ST_TABLE:
          val += ReadScalar<uoffset_t>(val);
          IterateObject(val, type_table, visitor);
          break;
        case ST_STRUCT: IterateObject(val, type_table, visitor); break;
        case ST_UNION: {
          val += ReadScalar<uoffset_t>(val);
          assert(prev_val);
          auto union_type = *prev_val;  // Always a uint8_t.
          if (vector_index >= 0) {
            auto type_vec = reinterpret_cast<const Vector<uint8_t> *>(prev_val);
            union_type = type_vec->Get(static_cast<uoffset_t>(vector_index));
          }
          auto type_code_idx =
              LookupEnum(union_type, type_table->values, type_table->num_elems);
          if (type_code_idx >= 0 &&
              type_code_idx < static_cast<int32_t>(type_table->num_elems)) {
            auto type_code = type_table->type_codes[type_code_idx];
            switch (type_code.base_type) {
              case ET_SEQUENCE: {
                auto ref = type_table->type_refs[type_code.sequence_ref]();
                IterateObject(val, ref, visitor);
                break;
              }
              case ET_STRING:
                visitor->String(reinterpret_cast<const String *>(val));
                break;
              default: visitor->Unknown(val);
            }
          } else {
            visitor->Unknown(val);
          }
          break;
        }
        case ST_ENUM: assert(false); break;
      }
      break;
    }
    default: {
      visitor->Unknown(val);
      break;
    }
  }
}
    
      // Get and test a field of the FlatBuffer's `struct`.
  auto pos = monster->pos();
  assert(pos);
  assert(pos->z() == 3.0f);
  (void)pos;
    
    static std::string TypeName(const FieldDef &field) {
  return GenTypeGet(field.value.type);
}
    
    class JsonSchemaGenerator : public BaseGenerator {
 private:
  CodeWriter code_;
    }