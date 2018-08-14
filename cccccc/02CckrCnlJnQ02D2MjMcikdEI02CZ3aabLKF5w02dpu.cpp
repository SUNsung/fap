
        
        
    {
    {    SECTION('children() returns only the first level of submodules') {
      auto children = model.children();
      REQUIRE(children.size() == 3);
      REQUIRE(&children.at('0') == &model[0]);
      REQUIRE(&children.at('1') == &model[1]);
      REQUIRE(&children.at('2') == &model[2]);
      REQUIRE(!children.contains('0.0'));
      size_t count = 0;
      for (auto& child : children) {
        REQUIRE(child.key == std::to_string(count));
        REQUIRE(&child.value == &model[count]);
        count += 1;
      }
    }
  }
}
    
    void OptimizerBase::zero_grad() {
  for (auto& parameter : parameters_) {
    auto& grad = parameter.grad();
    if (grad.defined()) {
      grad = grad.detach();
      Tensor(grad).data().zero_();
    }
  }
}
    
    
    {  // unflatten the batch dims
  if (batch_ndim == 0) {
    // slightly faster path for non-batch mode
    output = output.squeeze(0);
  } else if (batch_ndim > 1) {
    auto output_ndim = self.dim() + static_cast<int64_t>(complex_output) - static_cast<int64_t>(complex_input);
    std::vector<int64_t> unflatten_output_shape(output_ndim);
    std::copy(self_shape.begin(), self_shape.begin() + batch_ndim, unflatten_output_shape.begin());
    std::copy(output_sizes.begin() + 1, output_sizes.end(), unflatten_output_shape.begin() + batch_ndim);
    output = output.reshape(unflatten_output_shape);
  }
  return output;
}
    
    std::vector<int64_t> THPUtils_unpackLongs(PyObject *arg) {
  bool tuple = PyTuple_Check(arg);
  bool list = PyList_Check(arg);
  if (tuple || list) {
    int nDim = tuple ? PyTuple_GET_SIZE(arg) : PyList_GET_SIZE(arg);
    std::vector<int64_t> sizes(nDim);
    for (int i = 0; i != nDim; ++i) {
      PyObject* item = tuple ? PyTuple_GET_ITEM(arg, i) : PyList_GET_ITEM(arg, i);
      if (!THPUtils_checkLong(item)) {
        std::ostringstream oss;
        oss << 'expected int at position ' << i << ', but got: ' << THPUtils_typename(item);
        throw std::runtime_error(oss.str());
      }
      sizes[i] = THPUtils_unpackLong(item);
    }
    return sizes;
  }
  throw std::runtime_error('Expected tuple or list');
}
    
        const auto* grad_out_data = grad_out.template data<T>();
    const auto* weight_data = weight.template data<T>();
    const auto* alpha_data = adaptive_ ? Input(5).template data<T>() : 0;
    const auto* val_data = val.template data<T>();
    const auto* key_data = key.template data<TIndex>();
    
    
    {    for (size_t i = 0; i < n_blocks; ++i) {
      ConstEigenVectorArrayMap<uint8_t> input_row(
          input_data + i * block_size, block_size);
      EigenVectorArrayMap<float> output_row(
          output_data + i * block_size, block_size);
      output_row = input_row.template cast<float>() * scale_bias_data[2 * i] +
          scale_bias_data[2 * i + 1];
    }
    return true;
  }
    
    PyObject * THPWrapper_New(void *data, void (*destructor)(void*))
{
  PyObject *args = PyTuple_New(0);
  if (!args) {
    return NULL;
  }
  PyObject *result = PyObject_Call(THPWrapperClass, args, NULL);
  if (result) {
    THPWrapper* wrapper = (THPWrapper*) result;
    wrapper->data = data;
    wrapper->destructor = destructor;
  }
  Py_DECREF(args);
  return result;
}
    
    #include 'THCStorage.h'
// Should work with THStorageClass
#include <TH/THStorageFunctions.hpp>
    
    template<typename real,
         typename = typename std::enable_if<std::is_arithmetic<real>::value>::type>
inline void _appendScalar(ByteArray& str, real data) {
  str.append(reinterpret_cast<char*>(&data), sizeof(data));
}
    
    #include 'dispatch/Communication.cpp'
#include 'dispatch/Generator.cpp'
#include 'dispatch/Storage.cpp'
#include 'dispatch/Tensor.cpp'
#include 'dispatch/TensorCopy.cpp'
#include 'dispatch/TensorMath.cpp'
#include 'dispatch/TensorRandom.cpp'
#include 'dispatch/TensorLapack.cpp'
    
    #include '../master_worker/common/RPC.hpp'
#include 'TH/THStorageFunctions.h'
    
      ReadOptions read_options;
  Iterator *iter = db->NewIterator(read_options);
    
      // Add '<shared><non_shared><value_size>' to buffer_
  PutVarint32(&buffer_, shared);
  PutVarint32(&buffer_, non_shared);
  PutVarint32(&buffer_, value.size());
    
    
    {
    {}  // namespace crc32c
}  // namespace leveldb
    
    uint32_t Hash(const char* data, size_t n, uint32_t seed) {
  // Similar to murmur hash
  const uint32_t m = 0xc6a4a793;
  const uint32_t r = 24;
  const char* limit = data + n;
  uint32_t h = seed ^ (n * m);
    }
    
    
    {  ASSERT_EQ(Hash(0, 0, 0xbc9f1d34), 0xbc9f1d34);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data1), sizeof(data1), 0xbc9f1d34),
      0xef1345c4);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data2), sizeof(data2), 0xbc9f1d34),
      0x5b663814);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data3), sizeof(data3), 0xbc9f1d34),
      0x323c078f);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data4), sizeof(data4), 0xbc9f1d34),
      0xed21633a);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data5), sizeof(data5), 0x12345678),
      0xf333dabb);
}
    
      AutoCompactTest() {
    dbname_ = test::TmpDir() + '/autocompact_test';
    tiny_cache_ = NewLRUCache(100);
    options_.block_cache = tiny_cache_;
    DestroyDB(dbname_, options_);
    options_.create_if_missing = true;
    options_.compression = kNoCompression;
    ASSERT_OK(DB::Open(options_, dbname_, &db_));
  }
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
    namespace leveldb {
    }
    
        // Glut has 1 function for characters and one for 'special keys'. We map the characters in the 0..255 range and the keys above.
    io.KeyMap[ImGuiKey_Tab]         = '\t'; // == 9 == CTRL+I
    io.KeyMap[ImGuiKey_LeftArrow]   = 256 + GLUT_KEY_LEFT;
    io.KeyMap[ImGuiKey_RightArrow]  = 256 + GLUT_KEY_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow]     = 256 + GLUT_KEY_UP;
    io.KeyMap[ImGuiKey_DownArrow]   = 256 + GLUT_KEY_DOWN;
    io.KeyMap[ImGuiKey_PageUp]      = 256 + GLUT_KEY_PAGE_UP;
    io.KeyMap[ImGuiKey_PageDown]    = 256 + GLUT_KEY_PAGE_DOWN;
    io.KeyMap[ImGuiKey_Home]        = 256 + GLUT_KEY_HOME;
    io.KeyMap[ImGuiKey_End]         = 256 + GLUT_KEY_END;
    io.KeyMap[ImGuiKey_Insert]      = 256 + GLUT_KEY_INSERT;
    io.KeyMap[ImGuiKey_Delete]      = 127;
    io.KeyMap[ImGuiKey_Backspace]   = 8;  // == CTRL+H
    io.KeyMap[ImGuiKey_Space]       = ' ';
    io.KeyMap[ImGuiKey_Enter]       = 13; // == CTRL+M
    io.KeyMap[ImGuiKey_Escape]      = 27;
    io.KeyMap[ImGuiKey_A]           = 'A';
    io.KeyMap[ImGuiKey_C]           = 'C';
    io.KeyMap[ImGuiKey_V]           = 'V';
    io.KeyMap[ImGuiKey_X]           = 'X';
    io.KeyMap[ImGuiKey_Y]           = 'Y';
    io.KeyMap[ImGuiKey_Z]           = 'Z';
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }