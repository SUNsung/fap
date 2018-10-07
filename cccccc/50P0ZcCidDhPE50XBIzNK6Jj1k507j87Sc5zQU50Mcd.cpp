
        
        // This is initialized with a default, stub implementation.
// If python-google.protobuf.cc is loaded, the function pointer is overridden
// with a full implementation.
const Message* (*GetCProtoInsidePyProtoPtr)(PyObject* msg) =
    GetCProtoInsidePyProtoStub;
Message* (*MutableCProtoInsidePyProtoPtr)(PyObject* msg) =
    MutableCProtoInsidePyProtoStub;
    
    // Moves are enabled only when compiling with a C++11 compiler or newer.
#if LANG_CXX11
    
    void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enumDescriptor) {
    WriteDocCommentBody(printer, enumDescriptor);
}
void WriteEnumValueDocComment(io::Printer* printer, const EnumValueDescriptor* value) {
    WriteDocCommentBody(printer, value);
}
    
    void ImmutableMapFieldGenerator::
GenerateEqualsCode(io::Printer* printer) const {
  printer->Print(
      variables_,
      'result = result && internalGet$capitalized_name$().equals(\n'
      '    other.internalGet$capitalized_name$());\n');
}
    
    namespace protobuf {
namespace compiler {
namespace objectivec {
    }
    }
    }
    
    #include 'intsimdmatrix.h'
#include 'genericvector.h'      // for GenericVector
#include 'intsimdmatrixavx2.h'  // for IntSimdMatrixAVX2
#include 'intsimdmatrixsse.h'   // for IntSimdMatrixSSE
#include 'matrix.h'             // for GENERIC_2D_ARRAY
#include 'simddetect.h'         // for SIMDDetect
    
    namespace tesseract {
    }
    
    /**
 * Returns whether this iterator is positioned
 *   before other:   -1
 *   equal to other:  0
 *   after other:     1
 */
int PageIterator::Cmp(const PageIterator &other) const {
  int word_cmp = it_->cmp(*other.it_);
  if (word_cmp != 0)
    return word_cmp;
  if (blob_index_ < other.blob_index_)
    return -1;
  if (blob_index_ == other.blob_index_)
    return 0;
  return 1;
}
    
    
    {}  // namespace
    
    // Copy the first N words from the source string to the target string.
// Words are delimited by '_'.
void ParamsEditor::GetFirstWords(
                     const char *s,  // source string
                     int n,          // number of words
                     char *t         // target string
                    ) {
  int full_length = strlen(s);
  int reqd_len = 0;              // No. of chars requird
  const char *next_word = s;
    }