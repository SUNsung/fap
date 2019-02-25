
        
        
    {      // Close output file if it is big enough
      if (compact->builder->FileSize() >=
          compact->compaction->MaxOutputFileSize()) {
        status = FinishCompactionOutputFile(compact, input);
        if (!status.ok()) {
          break;
        }
      }
    }
    
      // Return an internal iterator over the current state of the database.
  // The keys of this iterator are internal keys (see format.h).
  // The returned iterator should be deleted when no longer needed.
  Iterator* TEST_NewInternalIterator();
    
    
    {  Delete('foo');
  Put('foo', 'v2');
  ASSERT_EQ(AllEntriesFor('foo'), '[ v2, DEL, v1 ]');
  ASSERT_OK(dbfull()->TEST_CompactMemTable());  // Moves to level last-2
  ASSERT_EQ(AllEntriesFor('foo'), '[ v2, DEL, v1 ]');
  Slice z('z');
  dbfull()->TEST_CompactRange(last-2, nullptr, &z);
  // DEL eliminated, but v1 remains because we aren't compacting that level
  // (DEL can be eliminated because v2 hides v1).
  ASSERT_EQ(AllEntriesFor('foo'), '[ v2, v1 ]');
  dbfull()->TEST_CompactRange(last-1, nullptr, nullptr);
  // Merging last-1 w/ last, so we are the base level for 'foo', so
  // DEL is removed.  (as is v1).
  ASSERT_EQ(AllEntriesFor('foo'), '[ v2 ]');
}
    
      fname = InfoLogFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kInfoLogFile, type);
    
    
    {
    {}  // namespace log
}  // namespace leveldb

    
      struct KeyComparator {
    const InternalKeyComparator comparator;
    explicit KeyComparator(const InternalKeyComparator& c) : comparator(c) { }
    int operator()(const char* a, const char* b) const;
  };
  friend class MemTableIterator;
  friend class MemTableBackwardIterator;
    
    
    {      counter++;
      if (empty) {
        empty = false;
        t.meta.smallest.DecodeFrom(key);
      }
      t.meta.largest.DecodeFrom(key);
      if (parsed.sequence > t.max_sequence) {
        t.max_sequence = parsed.sequence;
      }
    }
    if (!iter->status().ok()) {
      status = iter->status();
    }
    delete iter;
    Log(options_.info_log, 'Table #%llu: %d entries %s',
        (unsigned long long) t.meta.number,
        counter,
        status.ToString().c_str());
    
    #ifndef MXNET_IMPERATIVE_H_
#define MXNET_IMPERATIVE_H_
    
    
    {#endif  // DMLC_USE_CXX11
}  // namespace mxnet
#endif  // MXNET_OPERATOR_H_

    
    /*!
 * \brief Environment arguments that is used by the function.
 * These can be things like scalar arguments when add a value with scalar.
 */
struct EnvArguments {
  /*! \brief scalar argument, if enabled */
  real_t scalar;
  /*! \brief keyword arguments */
  std::vector<std::pair<std::string, std::string> > kwargs;
  /*! \brief pointer to the resources requested */
  std::vector<Resource> resource;
};
    
    
    {
    {   private:
    friend class CudaModule;
    /*!
     * \brief constructor
     * \param mod module of this kernel
     * \param mangled_name mangled kernel name
     * \param signature kernel argument signature
     */
    Kernel(const std::shared_ptr<Chunk>& mod,
           const std::string& mangled_name,
           const std::vector<ArgType>& signature);
    /*! \brief mangled kernel name */
    std::string mangled_name_;
    /*! \brief kernel argument signature */
    std::vector<ArgType> signature_;
    /*! \brief module of this kernel */
    std::shared_ptr<Chunk> mod_;
    /*! \brief cached kernel function on each device */
    std::unordered_map<int, CUfunction> func_;
  };
  /*!
   * \brief CudaModule constructor
   * \param source cuda source code.
   * \param exports export symbols before mangling.
   */
  CudaModule(const char* source,
             const std::vector<std::string>& options,
             const std::vector<std::string>& exports)
      : ptr_(std::make_shared<Chunk>(source, options, exports)) {}
  /*!
   * \brief Get cuda kernal from module by name
   * \param name kernel name
   * \param signature kernel signature
   * \return shared pointer to cuda kernel
   */
  std::shared_ptr<Kernel> GetKernel(const std::string& name,
                                    const std::vector<ArgType>& signature);
};
    
    TShape Vector2TShape(const std::vector<int> &vec_int) {
  std::vector<mshadow::index_t> vec;
  for (uint32_t i = 0; i < vec_int.size(); ++i)
    vec.push_back(vec_int[i]);
  // 0-dim represents scalar in caffe
  if (vec_int.size() == 0)
    vec.push_back(1);
  return {vec.begin(), vec.end()};
}
    
    /**
 * \brief The class sets caffe's mode before doing forward/backward
 * \tparam xpu The device that the op will be executed on.
 */
class CaffeMode {
 public:
  template<typename xpu> static void SetMode();
};
    
    
using namespace mxnet;
// http://www.64lines.com/jpeg-width-height
// Gets the JPEG size from the array of data passed to the function, file reference: http://www.obrador.com/essentialjpeg/headerinfo.htm
bool get_jpeg_size(const unsigned char* data, mx_uint data_size, mx_uint *width, mx_uint *height) {
  // Check for valid JPEG image
  mx_uint i = 0;  // Keeps track of the position within the file
  if (data[i] == 0xFF && data[i+1] == 0xD8 && data[i+2] == 0xFF && data[i+3] == 0xE0) {
    i += 4;
    // Check for valid JPEG header (null terminated JFIF)
    if (data[i+2] == 'J' && data[i+3] == 'F' && data[i+4] == 'I'
        && data[i+5] == 'F' && data[i+6] == 0x00) {
      // Retrieve the block length of the first block since
      // the first block will not contain the size of file
      uint16_t block_length = data[i] * 256 + data[i+1];
      while (i < data_size) {
        i+=block_length;  // Increase the file index to get to the next block
        if (i >= data_size) return false;  // Check to protect against segmentation faults
        if (data[i] != 0xFF) return false;  // Check that we are truly at the start of another block
        if (data[i+1] == 0xC0) {
          // 0xFFC0 is the 'Start of frame' marker which contains the file size
          // The structure of the 0xFFC0 block is quite simple
          // [0xFFC0][ushort length][uchar precision][ushort x][ushort y]
          *height = data[i+5]*256 + data[i+6];
          *width = data[i+7]*256 + data[i+8];
          return true;
        } else {
          i+=2;  // Skip the block marker
          block_length = data[i] * 256 + data[i+1];  // Go to the next block
        }
      }
      return false;  // If this point is reached then no size was found
    } else {
      return false;  // Not a valid JFIF string
    }
  } else {
    return false;  // Not a valid SOI header
  }
}
    
      virtual bool Next(void) {
    out_.num_batch_padd = 0;
    out_.batch_size = param_.batch_size;
    this->head_ = 0;
    }
    
        dword(xfx_formater.instruction);
  }
  void EmitXFXForm(const uint8_t op,
                   const RegNumber rs,
                   const uint16_t mask,
                   const uint16_t xo,
                   const uint8_t rsv = 0) {
    
      /**
   * Use the Iterate method for iterating over options that are stored as
   * objects in runtime options (e.g. FilesMatch). This function iterates over
   * the settings passed as ini/hdf, calls back to, generally, the constructor
   * of the object in question.
   *
   * Note: For now, we are not `ini_get()` enabling these type of options as
   * it is not trivial to come up with a non-hacky and workable way to store
   * the data correctly. Also, as usual, Hdf takes priority.
   */
  static void Iterate(std::function<void (const IniSettingMap&,
                                          const Hdf&,
                                          const std::string&)> cb,
                      const IniSettingMap &ini, const Hdf& config,
                      const std::string &name, const bool prepend_hhvm = true);
    
    #endif // HPHP_DATA_STREAM_WRAPPER_H

    
    void PlainDirectory::close() {
  if (m_dir) {
    ::closedir(m_dir);
    m_dir = nullptr;
  }
}
    
      if (ignore_default_configs) {
    // Appending empty file to -c options to avoid loading defaults
    ini_fd = get_tempfile_if_not_exists(ini_fd, ini_path);
  } else {
    // Should only include this default if not explicitly ignored.
#ifdef PHP_DEFAULT_HDF
    newargv.push_back('-c');
    newargv.push_back(PHP_DEFAULT_HDF);
#endif
    }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    #endif // HPHP_GLOB_STREAM_WRAPPER_H

    
    
    {  StructuredLogEntry cols;
  fillCols(cols);
  cols.setStr('event_name', event);
  cols.setInt('priority', priority);
  StructuredLog::log('hhvm_perf_warning', cols);
}
    
    #include <folly/String.h>
    
    #include 'hphp/runtime/base/php-stream-wrapper.h'
#include 'hphp/runtime/base/runtime-error.h'
#include 'hphp/runtime/base/plain-file.h'
#include 'hphp/runtime/base/temp-file.h'
#include 'hphp/runtime/base/mem-file.h'
#include 'hphp/runtime/base/output-file.h'
#include 'hphp/runtime/server/cli-server.h'
#include 'hphp/runtime/server/http-protocol.h'
#include 'hphp/runtime/ext/stream/ext_stream.h'
#include 'hphp/runtime/ext/stream/ext_stream-user-filters.h'
#include <memory>
    
        const int nums[] = {0,4,3,0};
    vector<int> nums_vec( nums, nums + sizeof(nums)/sizeof(int) );
    int target = 0;
    printVec(Solution().twoSum(nums_vec, target));
    
    
void printBool(bool res){
    cout << (res ? 'True' : 'False') << endl;
}
    
    
    {
    {        return retHead;
    }
};
    
            ListNode* pre = dummyHead;
        for(int i = 0; i < m - 1; i ++){
            pre = pre->next
        }
    
    int main() {
    }
    
    #include <iostream>
#include <vector>
#include <queue>
#include <cassert>
    
    private:
    void preorderTraversal(TreeNode* node, vector<int> &res){
    }
    
    
    {    return 0;
}

    
            stack<Command> stack;
        stack.push(Command('go', root) );
        while(!stack.empty()){
            Command command = stack.top();
            stack.pop();
    }
    
    public:
    vector<int> postorderTraversal(TreeNode* root) {
    }