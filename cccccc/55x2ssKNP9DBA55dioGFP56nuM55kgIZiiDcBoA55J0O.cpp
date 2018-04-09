
        
        static THDTensor *THDTensor_(_alloc)() {
  THDTensor *new_tensor = new THDTensor();
  std::memset(reinterpret_cast<void*>(new_tensor), 0, sizeof(THDTensor));
  new_tensor->size = nullptr;
  new_tensor->stride = nullptr;
  new_tensor->nDimension = 0;
    }
    
      assert(peekType(msg) == thpp::Type::LONG_STORAGE);
  THLongStorage *storage2 = unpackTHLongStorage(msg);
  assert(storage2->size == STORAGE_SIZE);
  for (int64_t i = 0; i < STORAGE_SIZE; i++)
    assert(storage2->data[i] == i);
  
  int vec_size = unpackInteger(msg);
  assert(vec_size == VEC_SIZE);
  for (int i = 0; i < VEC_SIZE; i++)
    assert(unpackInteger(msg) == 7);
    
    #include 'ATen/Config.h'
namespace at {
namespace native {
    }
    }
    
    ${Storage}::${Storage}(Context* context, ${THStorage}* storage):
    storage(storage), context(context) {}
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHCudaByteTensor(THCudaByteTensor *tensor) {
  return at::getType(at::Backend::CUDA, at::ScalarType::Byte).unsafeTensorFromTH((void*)tensor, true);
}
#endif

    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    namespace xgboost {
namespace common {
/*!
 * \brief base implementation of config reader
 */
class ConfigReaderBase {
 public:
  /*!
   * \brief get current name, called after Next returns true
   * \return current parameter name
   */
  inline const char *name(void) const {
    return s_name.c_str();
  }
  /*!
   * \brief get current value, called after Next returns true
   * \return current parameter value
   */
  inline const char *val(void) const {
    return s_val.c_str();
  }
  /*!
   * \brief move iterator to next position
   * \return true if there is value in next position
   */
  inline bool Next(void) {
    while (!this->IsEnd()) {
      GetNextToken(&s_name);
      if (s_name == '=') return false;
      if (GetNextToken(&s_buf) || s_buf != '=')  return false;
      if (GetNextToken(&s_val) || s_val == '=')  return false;
      return true;
    }
    return false;
  }
  // called before usage
  inline void Init(void) {
    ch_buf = this->GetChar();
  }
    }
    }
    }
    
    #include <dmlc/io.h>
#include <string>
#include <cstring>
#include './sync.h'
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }