
        
          std::vector<string> output;
  string input_tensors_needed_out;
  tensorflow::Status status = RunCppShapeInferenceImpl(
      graph_def_version, serialized_node_def, input_serialized_shapes,
      input_constant_tensor_values_v, input_constant_tensor_as_shape_values,
      &output, &input_tensors_needed_out);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
     protected:
  // Print: def Function(parameters):
  void AddDefLine(const string& function_name, const string& parameters);
  void AddDefLine(const string& parameters);
    
    // Register the bfloat16 numpy type.
void RegisterNumpyBfloat16();
    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/core/platform/logging.h'
    
    
    {
    {}  // namespace io
}  // namespace tensorflow
    
    /*! \brief registry for TBlob functions */
class SimpleOpRegistry {
 public:
  /*!
   * \brief Internal function to register a name function under name.
   * \param name name of the function
   * \return ref to the registered entry, used to set properties
   */
  SimpleOpRegEntry &__REGISTER_OR_FIND__(char const* name);
  /*!
   * \brief Find the entry with corresponding name.
   * \param name name of the function
   * \return the corresponding function, can be NULL
   */
  inline static const SimpleOpRegEntry *Find(const std::string &name) {
    return Get()->fmap_.at(name);
  }
  /*! \return global singleton of the registry */
  static SimpleOpRegistry* Get();
    }
    
    std::vector<int> TShape2Vector(const TShape &tshape) {
  std::vector<int> s;
  for (uint32_t i =0 ; i < tshape.ndim(); ++i)
    s.push_back(tshape[i]);
  return s;
}
    
      std::string TypeString() const override {
    return 'CaffeOp';
  }
    
      for (auto& e : idx.outputs()) {
    ++ref_count[idx.entry_id(e)];
  }
  for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    for (auto &e : idx[nid].inputs) {
      ++ref_count[idx.entry_id(e)];
    }
  }
    
    /*!
 * \brief tblob batch
 *
 * data are stored in tblob before going into NDArray
 */
struct TBlobBatch {
 public:
  /*! \brief unique id for instance, can be NULL, sometimes is useful */
  unsigned *inst_index;
  /*! \brief number of instance */
  mshadow::index_t batch_size;
  /*! \brief number of padding elements in this batch,
       this is used to indicate the last elements in the batch are only padded up to match the batch, and should be discarded */
  mshadow::index_t num_batch_padd;
  /*! \brief content of dense data */
  std::vector<TBlob> data;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
  /*! \brief constructor */
  TBlobBatch(void) {
    inst_index = NULL;
    batch_size = 0; num_batch_padd = 0;
  }
  /*! \brief destructor */
  ~TBlobBatch() {
    delete[] inst_index;
  }
};  // struct TBlobBatch
    
      virtual bool Next() {
    if (end_) return false;
    while (data_ptr_ >= data_size_) {
      if (!data_parser_->Next()) {
        end_ = true; return false;
      }
      data_ptr_ = 0;
      data_size_ = data_parser_->Value().size;
    }
    out_.index = inst_counter_++;
    CHECK_LT(data_ptr_, data_size_);
    const auto data_row = data_parser_->Value()[data_ptr_++];
    // data, indices and indptr
    out_.data[0] = AsDataBlob(data_row);
    out_.data[1] = AsIdxBlob(data_row);
    out_.data[2] = AsIndPtrPlaceholder(data_row);
    }
    
    
ExtensionManager_extensions_result::~ExtensionManager_extensions_result() throw() {
}
    
    
uint32_t ExtensionResponse::read(::apache::thrift::protocol::TProtocol* iprot) {
    }
    
    std::pair<JSON, QueryData> getSerializedQueryData() {
  auto r = getSerializedRow(false);
  QueryData q = {r.second, r.second};
    }
    
    // getSerializedQueryData() return an std::pair where pair->first is a string
// which should serialize to pair->second. pair->second should
// deserialize to pair->first. getSerializedQueryDataWithColumnOrder
// returns a pair where pair->second is a tree that has a repeated column and
// the child nodes are not in alphabetical order
std::pair<JSON, QueryData> getSerializedQueryData();
std::pair<JSON, QueryData> getSerializedQueryDataWithColumnOrder();
std::pair<std::string, QueryData> getSerializedQueryDataJSON();
    
    #include <osquery/core.h>
#include <osquery/database.h>
#include <osquery/filesystem/filesystem.h>
#include <osquery/logger.h>
#include <osquery/tables.h>
    
    Expected<Mask, Error> decodeMaskFromString(const std::string& encoded_str) {
  auto mask = Mask{};
  if (encoded_str.empty()) {
    return mask;
  }
  using It = boost::split_iterator<std::string::const_iterator>;
  for (auto it = boost::make_split_iterator(
           encoded_str, boost::first_finder(',', boost::is_equal()));
       it != It{};
       ++it) {
    auto const interval = boost::copy_range<std::string>(*it);
    auto const dash_pos = interval.find('-');
    if (dash_pos == std::string::npos) {
      auto num_exp = decodeCpuNumber(interval);
      if (num_exp.isError()) {
        return num_exp.takeError();
      }
      if (num_exp.get() < mask.size()) {
        mask.set(num_exp.get());
      } else {
        return createError(Error::IncorrectRange, '')
               << 'CPU number ' << num_exp.get() << ' out of bound [0,'
               << mask.size() << ')';
      }
    } else {
      auto from_exp = decodeCpuNumber(interval.substr(0, dash_pos));
      if (from_exp.isError()) {
        return from_exp.takeError();
      }
      auto to_exp = decodeCpuNumber(interval.substr(dash_pos + 1));
      if (to_exp.isError()) {
        return to_exp.takeError();
      }
      if (to_exp.get() < from_exp.get()) {
        return createError(Error::IncorrectRange,
                           'Incorrect CPU number interval ')
               << boost::io::quoted(interval);
      }
      if (to_exp.get() >= mask.size()) {
        return createError(Error::IncorrectRange, '')
               << 'CPU number ' << to_exp.get() << ' out of bound [0,'
               << mask.size() << ')';
      }
      for (auto pos = from_exp.get(); pos <= to_exp.get(); ++pos) {
        mask.set(pos);
      }
    }
  }
  return mask;
}
    
    TEST_F(ScopeGuardTests, guard_is_called) {
  auto guard_has_been_called = false;
  {
    auto guard = scope_guard::create(
        [&guard_has_been_called]() { guard_has_been_called = true; });
    ASSERT_FALSE(guard_has_been_called);
  }
  ASSERT_TRUE(guard_has_been_called);
}
    
    /**
 * Helper functions to look up in key-value tables.
 *
 * There are several reasons for using this code:
 *   1. To reduce amount of code and increase the readability of it.
 *      Instead of verbose piece of code such as:
 *      @code{.cpp}
 *        auto takenValue = ValueType{};
 *        auto const it = table.find('key');
 *        if (it != table.end()) {
 *          takenValue = it->second;
 *        }
 *      @endcode
 *      Have more short and simple:
 *      @code{.cpp}
 *        auto const takenValue = tryTakeCopy(table, 'key').takeOr(ValueType{});
 *      @endcode
 *
 *   2. To avoid nonoptimal code with two exactly the same lookups, e.g.:
 *      @code{.cpp}
 *        auto takenValue = table.count(key) ? table.at(key) : ValueType{};
 *      @endcode
 *
 *   3. To reduce the possibility of dangerous misstypes such as:
 *      @code{.cpp}
 *        auto takenValue = table.count('key') ? table.at('KeY') : ValueType{};
 *      @endcode
 */
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(Lens3D);
};
    
    
    {    CC_SAFE_DELETE(ret);
    return nullptr;
}
    
        /** 
     * Creates the action with X Y Z factor.
     * @param duration Duration time, in seconds.
     * @param sx Scale factor of x.
     * @param sy Scale factor of y.
     * @param sz Scale factor of z.
     * @return An autoreleased ScaleTo object.
     */
    static ScaleTo* create(float duration, float sx, float sy, float sz);
    
    
    {    if (element->actions->num == 0)
    {
        if (_currentTarget == element)
        {
            _currentTargetSalvaged = true;
        }
        else
        {
            deleteHashElement(element);
        }
    }
}
    
    // implementation of FadeOutDownTiles
    
    AnimationFrame* AnimationFrame::create(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo)
{
    auto ret = new (std::nothrow) AnimationFrame();
    if (ret && ret->initWithSpriteFrame(spriteFrame, delayUnits, userInfo))
    {
        ret->autorelease();
    }
    else
    {
        CC_SAFE_DELETE(ret);
    }
    return ret;
}
    
    
    {    /** how many times the animation is going to loop. 0 means animation is not animated. 1, animation is executed one time, ... */
    unsigned int _loops;
    
private:
    CC_DISALLOW_COPY_AND_ASSIGN(Animation);
};
    
    void PolygonInfo::releaseVertsAndIndices()
{
    if(_isVertsOwner)
    {
        if(nullptr != triangles.verts)
        {
            CC_SAFE_DELETE_ARRAY(triangles.verts);
        }
        
        if(nullptr != triangles.indices)
        {
            CC_SAFE_DELETE_ARRAY(triangles.indices);
        }
    }
}