
        
        INSTANTIATE_TEST_CASE_P(InstantiationName,
                        FooTest,
                        Values('meeny', 'miny', 'moe'));
    
    #if GTEST_HAS_STD_WSTRING
template <>
class UniversalTersePrinter<const wchar_t*> {
 public:
  static void Print(const wchar_t* str, ::std::ostream* os) {
    if (str == NULL) {
      *os << 'NULL';
    } else {
      UniversalPrint(::std::wstring(str), os);
    }
  }
};
#endif
    
    // The 'Types' template argument below must have spaces around it
// since some compilers may choke on '>>' when passing a template
// instance (e.g. Types<int>)
# define TYPED_TEST_CASE(CaseName, Types) \
  typedef ::testing::internal::TypeList< Types >::type \
      GTEST_TYPE_PARAMS_(CaseName)
    
    typedef internal::TimeInMillis TimeInMillis;
    
    
    {  // 7. Ill-formed data should throw exception
  for (const char* str : {'data = C:\\My Documents\\cat.csv', 'cow=',
                          'C# = 100%', '= woof ',
                          'interaction_constraints = [[0, 2], [1]]',
                          'data = \'train.txt#cache',
                          'data = \'train.txt#cache', 'foo = \'bar\''}) {
    ASSERT_THROW(parser.ParseKeyValuePair(str, &key, &value), dmlc::Error);
  }
}
    
    // explicit instantiations are required, as HostDeviceVector isn't header-only
template class HostDeviceVector<bst_float>;
template class HostDeviceVector<GradientPair>;
template class HostDeviceVector<int>;
template class HostDeviceVector<Entry>;
template class HostDeviceVector<size_t>;
    
    
    {
    {
    {                    // Create crop node with offsets but without inputs (will be attached later in resolve phase).
                    nodePtr = builder.Crop(nullptr, nullptr, offsetX, offsetY, name);
                }
                else
                {
                    // We have 4 node inputs (2 crop inputs and 2 equivalence node inputs).
                    nodePtr = builder.Crop(nullptr, nullptr, nullptr, nullptr, name);
                }
            }
            else
            {
                // Just two inputs, must be node inputs which will be attached in the resolve phase below.
                nodePtr = builder.Crop(nullptr, nullptr, name);
            }
            // Done processing in this phase.
            nodeParamStart = 0;
            nodeParamCount = 0;
        }
        else
        {
            // In non-initial phase we just process node inputs below, here we just set inputs of interest.
            nodeParamStart = 0;
            nodeParamCount = nodePtr->GetNumInputs();
        }
    }
    else if (cnNodeType == OperationName2Of(CastNode))
    {
        if (parameter.size() < 1)
            RuntimeError('%ls should have 1 or more parameters (node and cast precision).', cnNodeType.c_str());
    
    
    {
    {
    {}}}

    
        // ParseParameters - parse the parameters of a macro, or an array
    // ndlNode - node we should add the parameters to
    // value - parameters as config value
    // createNew - create a new parameter node if one does not exist
    void ParseParameters(NDLNode<ElemType>* ndlNode, const ConfigValue& value, bool createNew = false)
    {
        ConfigArray parameters = value;
        for (auto iter = parameters.begin(); iter != parameters.end(); ++iter)
        {
            ConfigValue param = *iter;
            NDLNode<ElemType>* paramNode = NULL;
            auto foundBrace = param.find_first_of(FUNCTIONOPEN);
            if (foundBrace != npos) // a nested call as a parameter
                paramNode = ParseCall(param);
            else // must be predefined variable or constant
            {
                paramNode = ParseVariable(param, createNew);
    }
    }
    }
    
                for (int i = 1; i < numHiddenLayers; i++)
            {
                u = builder.CreateLearnableParameter(msra::strfun::wstrprintf(L'U%d', i), m_layerSizes[i + 1], m_layerSizes[i]);
                m_net->RandomInitLearnableParameters(u, m_uniformInit, randomSeed++, m_initValueScale);
                if (m_recurrentLayers.size() > 0 && m_recurrentLayers[recur_idx] == i + 1)
                {
                    w = builder.CreateLearnableParameter(msra::strfun::wstrprintf(L'W%d', i), m_layerSizes[i + 1], m_layerSizes[i + 1]);
                    m_net->RandomInitLearnableParameters(w, m_uniformInit, randomSeed++, m_initValueScale);
                    std::list<ComputationNodeBasePtr> recurrent_loop;
                    pastValue = builder.PastValue(NULL, m_defaultHiddenActivity, m_layerSizes[i + 1], 1);
                    output = SimpleNetworkBuilder<ElemType>::ApplyNonlinearFunction(builder.Plus(builder.Times(u, input), builder.Times(w, pastValue)), i);
                    pastValue->AttachInputs({ output });
                    recur_idx++;
                }
                else
                {
                    output = SimpleNetworkBuilder<ElemType>::ApplyNonlinearFunction(builder.Plus(builder.Times(u, input), b), i);
                }
    }
    
            // Get option used by multiverso sparse update
        m_getOptions.reserve(m_localBufferNum);
        m_addOptions.reserve(m_localBufferNum);
    
            // decide start column and end column
        size_t st = numParallelSequences *  rank      / numProcs;
        size_t en = numParallelSequences * (rank + 1) / numProcs;
        assert(rank < numProcs);
        en = en > numParallelSequences ? numParallelSequences : en; // TODO: why are these two tests necessary? We should rather test rank
        en = (rank + 1 == numProcs) ? numParallelSequences : en;
        size_t numNewParallelSequence = en - st;
    
    #include 'Basics.h'
#include 'MPIWrapper.h'
#include 'Matrix.h'
#include 'SimpleDistGradAggregatorHelper.h'
#include 'DistGradHeader.h'
#include 'IDistGradAggregator.h'
#include 'SimpleDistGradAggregator.h'
#include 'V2SimpleDistGradAggregator.h'
    
    // The config may be accessed and updated asynchronously; use mutexes.
Mutex config_hash_mutex_;
Mutex config_refresh_mutex_;
Mutex config_backup_mutex_;
    
      // Initialize a discovery cache at time 0.
  discovery_cache_ = std::make_pair<size_t, bool>(0, false);
  valid_ = true;
    
    class InMemoryDatabase final : public Database {
 public:
  explicit InMemoryDatabase(std::string name) : Database(std::move(name)){};
  ~InMemoryDatabase() override {}
    }
    
    ExpectedSuccess<DatabaseError> RocksdbDatabase::putStringsUnsafe(
    const std::string& domain,
    const std::vector<std::pair<std::string, std::string>>& data) {
  auto handle = getHandle(domain);
  if (handle) {
    std::shared_ptr<Handle> handle_ptr = handle.take();
    rocksdb::WriteBatch batch;
    }
    }
    
    #include <osquery/core/database/in_memory_database.h>
#include <osquery/database.h>