
        
        
    {}  // namespace tensorflow

    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/c/tf_status_helper.h'
#include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/python/lib/core/safe_ptr.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Functions for getting information about kernels registered in the binary.
#ifndef TENSORFLOW_PYTHON_UTIL_KERNEL_REGISTRY_H_
#define TENSORFLOW_PYTHON_UTIL_KERNEL_REGISTRY_H_
    
      // Creates a 2d FFT plan.
  virtual std::unique_ptr<Plan> Create2dPlan(Stream *stream, uint64 num_x,
                                             uint64 num_y, Type type,
                                             bool in_place_fft) = 0;
    
    bool CodeGenerator::GenerateAll(
    const std::vector<const FileDescriptor*>& files,
    const string& parameter,
    GeneratorContext* generator_context,
    string* error) const {
  // Default implemenation is just to call the per file method, and prefix any
  // error string with the file to provide context.
  bool succeeded = true;
  for (int i = 0; i < files.size(); i++) {
    const FileDescriptor* file = files[i];
    succeeded = Generate(file, parameter, generator_context, error);
    if (!succeeded && error && error->empty()) {
      *error = 'Code generator returned false but provided no error '
               'description.';
    }
    if (error && !error->empty()) {
      *error = file->name() + ': ' + *error;
      break;
    }
    if (!succeeded) {
      break;
    }
  }
  return succeeded;
}
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
#include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
      desired_output_for_decode = 'abcdezghIJ';
  expected = string('\0abcdezghIJ\0', 12);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    float SafeDoubleToFloat(double value) {
  if (value > std::numeric_limits<float>::max()) {
    return std::numeric_limits<float>::infinity();
  } else if (value < -std::numeric_limits<float>::max()) {
    return -std::numeric_limits<float>::infinity();
  } else {
    return static_cast<float>(value);
  }
}
    
    #include <google/protobuf/io/zero_copy_stream.h>
    
    #endif  // TESSERACT_CCMAIN_OSDETECT_H_

    
    struct TWERD;
    
      // Returns a page by serial number using the current cache_strategy_ to
  // determine the mapping from serial number to page.
  const ImageData* GetPageBySerial(int serial) {
    if (cache_strategy_ == CS_SEQUENTIAL)
      return GetPageSequential(serial);
    else
      return GetPageRoundRobin(serial);
  }
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    // Deserializing an array could give back a different ArrayKind than we need,
// so we have to go with the slow case of calling a collection constructor.
NEVER_INLINE
Object createFromSerialized(CollectionType colType, APCHandle* handle) {
  auto const col = Object::attach(collections::alloc(colType));
  auto const arr = handle->toLocal();
  switch (colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    static_cast<BaseVector*>(col.get())->init(arr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    static_cast<BaseSet*>(col.get())->init(arr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    static_cast<BaseMap*>(col.get())->init(arr);
    break;
  case CollectionType::Pair:
    not_reached();
    break;
  }
  return col;
}
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
    
    Variant PlainDirectory::read() {
  struct dirent entry;
  struct dirent *result;
  int ret = readdir_r(m_dir, &entry, &result);
  if (ret != 0 || !result) {
    return false;
  }
  return String(entry.d_name, CopyString);
}
    
    req::ptr<File>
GlobStreamWrapper::open(const String& filename, const String& /*mode*/,
                        int /*options*/,
                        const req::ptr<StreamContext>& /*context*/) {
  // Can't open a glob as a file, it's meant to be opened as a directory
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-object type
        json str = 'I am a string';
        str.at('the good') = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // writing access