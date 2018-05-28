
        
        template<typename T>
inline bool contains(std::vector<T> v, T value) {
  return std::find(v.begin(), v.end(), value) != v.end();
}
    
    #include <THPP/tensors/THTensor.hpp>
    
    #undef THPStorage_
#undef THPStorage
#undef THPStorageBaseStr
#undef THPStorageStr
#undef THPStorageClass
#undef THPStorageType