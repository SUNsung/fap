
        
        /// Translate the given operator character into its mangled form.
///
/// Current operator characters:   @/=-+*%<>!&|^~ and the special operator '..'
char Mangle::translateOperatorChar(char op) {
  switch (op) {
    case '&': return 'a'; // 'and'
    case '@': return 'c'; // 'commercial at sign'
    case '/': return 'd'; // 'divide'
    case '=': return 'e'; // 'equal'
    case '>': return 'g'; // 'greater'
    case '<': return 'l'; // 'less'
    case '*': return 'm'; // 'multiply'
    case '!': return 'n'; // 'negate'
    case '|': return 'o'; // 'or'
    case '+': return 'p'; // 'plus'
    case '?': return 'q'; // 'question'
    case '%': return 'r'; // 'remainder'
    case '-': return 's'; // 'subtract'
    case '~': return 't'; // 'tilde'
    case '^': return 'x'; // 'xor'
    case '.': return 'z'; // 'zperiod' (the z is silent)
    default:
      return op;
  }
}
    
    using namespace swift;
using namespace Demangle;
    
    #include 'ArgsToFrontendOutputsConverter.h'
#include 'swift/AST/DiagnosticsFrontend.h'
#include 'swift/Basic/Defer.h'
#include 'swift/Frontend/FrontendOptions.h'
#include 'swift/Option/Options.h'
#include 'swift/Parse/Lexer.h'
#include 'swift/Strings.h'
#include 'llvm/Option/Arg.h'
#include 'llvm/Option/ArgList.h'
#include 'llvm/Option/Option.h'
#include 'llvm/Support/ErrorHandling.h'
#include 'llvm/Support/FileSystem.h'
#include 'llvm/Support/LineIterator.h'
#include 'llvm/Support/Path.h'
    
    class PAGE_RES_IT;
class ROW;
class WERD_RES;
    
    #endif  // TESSERACT_CSTRUCT_BOXWORD_H_

    
    STRING ParagraphModel::ToString() const {
  char buffer[200];
  const STRING &alignment = ParagraphJustificationToString(justification_);
  snprintf(buffer, sizeof(buffer),
           'margin: %d, first_indent: %d, body_indent: %d, alignment: %s',
           margin_, first_indent_, body_indent_, alignment.string());
  return STRING(buffer);
}

    
    // Computes the histogram for the given image rectangle, and the given
// single channel. Each channel is always one byte per pixel.
// Histogram is always a kHistogramSize(256) element array to count
// occurrences of each pixel value.
void HistogramRect(Pix* src_pix, int channel,
                   int left, int top, int width, int height,
                   int* histogram);
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(nullptr) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
    }
    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }
    
    /*!
 * \brief create matrix content from dense matrix
 * \param data pointer to the data space
 * \param nrow number of rows
 * \param ncol number columns
 * \param missing which value to represent missing value
 * \param out created dmatrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromMat(const float *data,
                                   bst_ulong nrow,
                                   bst_ulong ncol,
                                   float missing,
                                   DMatrixHandle *out);
/*!
 * \brief create matrix content from dense matrix
 * \param data pointer to the data space
 * \param nrow number of rows
 * \param ncol number columns
 * \param missing which value to represent missing value
 * \param out created dmatrix
 * \param nthread number of threads (up to maximum cores available, if <=0 use all cores)
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromMat_omp(const float *data,  // NOLINT
                                       bst_ulong nrow, bst_ulong ncol,
                                       float missing, DMatrixHandle *out,
                                       int nthread);
/*!
 * \brief create matrix content from python data table
 * \param data pointer to pointer to column data
 * \param feature_stypes pointer to strings
 * \param nrow number of rows
 * \param ncol number columns
 * \param out created dmatrix
 * \param nthread number of threads (up to maximum cores available, if <=0 use all cores)
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromDT(void** data,
                                  const char ** feature_stypes,
                                  bst_ulong nrow,
                                  bst_ulong ncol,
                                  DMatrixHandle* out,
                                  int nthread);
/*!
 * \brief create a new dmatrix from sliced content of existing matrix
 * \param handle instance of data matrix to be sliced
 * \param idxset index set
 * \param len length of index set
 * \param out a sliced new matrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSliceDMatrix(DMatrixHandle handle,
                                  const int *idxset,
                                  bst_ulong len,
                                  DMatrixHandle *out);
/*!
 * \brief create a new dmatrix from sliced content of existing matrix
 * \param handle instance of data matrix to be sliced
 * \param idxset index set
 * \param len length of index set
 * \param out a sliced new matrix
 * \param allow_groups allow slicing of an array with groups
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSliceDMatrixEx(DMatrixHandle handle,
                                    const int *idxset,
                                    bst_ulong len,
                                    DMatrixHandle *out,
                                    int allow_groups);
/*!
 * \brief free space in data matrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixFree(DMatrixHandle handle);
/*!
 * \brief load a data matrix into binary file
 * \param handle a instance of data matrix
 * \param fname file name
 * \param silent print statistics when saving
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSaveBinary(DMatrixHandle handle,
                                const char *fname, int silent);
/*!
 * \brief set float vector to a content in info
 * \param handle a instance of data matrix
 * \param field field name, can be label, weight
 * \param array pointer to float vector
 * \param len length of array
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSetFloatInfo(DMatrixHandle handle,
                                  const char *field,
                                  const float *array,
                                  bst_ulong len);
/*!
 * \brief set uint32 vector to a content in info
 * \param handle a instance of data matrix
 * \param field field name
 * \param array pointer to unsigned int vector
 * \param len length of array
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSetUIntInfo(DMatrixHandle handle,
                                 const char *field,
                                 const unsigned *array,
                                 bst_ulong len);
/*!
 * \brief set label of the training matrix
 * \param handle a instance of data matrix
 * \param group pointer to group size
 * \param len length of array
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixSetGroup(DMatrixHandle handle,
                              const unsigned *group,
                              bst_ulong len);
/*!
 * \brief get float info vector from matrix
 * \param handle a instance of data matrix
 * \param field field name
 * \param out_len used to set result length
 * \param out_dptr pointer to the result
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixGetFloatInfo(const DMatrixHandle handle,
                                  const char *field,
                                  bst_ulong* out_len,
                                  const float **out_dptr);
/*!
 * \brief get uint32 info vector from matrix
 * \param handle a instance of data matrix
 * \param field field name
 * \param out_len The length of the field.
 * \param out_dptr pointer to the result
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixGetUIntInfo(const DMatrixHandle handle,
                                 const char *field,
                                 bst_ulong* out_len,
                                 const unsigned **out_dptr);
/*!
 * \brief get number of rows.
 * \param handle the handle to the DMatrix
 * \param out The address to hold number of rows.
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixNumRow(DMatrixHandle handle,
                            bst_ulong *out);
/*!
 * \brief get number of columns
 * \param handle the handle to the DMatrix
 * \param out The output of number of columns
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixNumCol(DMatrixHandle handle,
                            bst_ulong *out);
// --- start XGBoost class
/*!
 * \brief create xgboost learner
 * \param dmats matrices that are set to be cached
 * \param len length of dmats
 * \param out handle to the result booster
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGBoosterCreate(const DMatrixHandle dmats[],
                            bst_ulong len,
                            BoosterHandle *out);
/*!
 * \brief free obj in handle
 * \param handle handle to be freed
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGBoosterFree(BoosterHandle handle);
    
      const char *format = jenv->GetStringUTFChars(jformat, 0);
  bst_ulong len = 0;
  char **result;
    
      void Write(const void* dptr, size_t size) override {
    LOG(FATAL) << 'Not implemented';
  }