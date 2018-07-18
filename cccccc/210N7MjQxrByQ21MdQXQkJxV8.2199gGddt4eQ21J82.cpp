void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    // Get string from resource_id.
base::StringPiece GetStringResource(int resource_id);
    
    #endif  // CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_

    
    
#include 'content/nw/src/api/event/event.h'
#include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/gfx/screen.h'
    
    class BaseEvent {
  friend class EventListener;
  DISALLOW_COPY_AND_ASSIGN(BaseEvent);
    }
    
     protected:
  ~NwAppQuitFunction() override;
    
      // implement nw.Screen.getScreens()
  class NwScreenGetScreensFunction: public NWSyncExtensionFunction {
    public:
      NwScreenGetScreensFunction();
      bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    #ifndef STORAGE_LEVELDB_DB_BUILDER_H_
#define STORAGE_LEVELDB_DB_BUILDER_H_
    
    void DBIter::SeekToFirst() {
  direction_ = kForward;
  ClearSavedValue();
  iter_->SeekToFirst();
  if (iter_->Valid()) {
    FindNextUserEntry(false, &saved_key_ /* temporary storage */);
  } else {
    valid_ = false;
  }
}
    
    void AppendInternalKey(std::string* result, const ParsedInternalKey& key) {
  result->append(key.user_key.data(), key.user_key.size());
  PutFixed64(result, PackSequenceAndType(key.sequence, key.type));
}
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
          case kNextFileNumber:
        if (GetVarint64(&input, &next_file_number_)) {
          has_next_file_number_ = true;
        } else {
          msg = 'next file number';
        }
        break;
    
    #include 'db/memtable.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'util/logging.h'
#include 'util/testharness.h'
    
        if (bytes_ > 0) {
      char rate[100];
      snprintf(rate, sizeof(rate), '%6.1f MB/s',
               (bytes_ / 1048576.0) / (finish - start_));
      if (!message_.empty()) {
        message_  = std::string(rate) + ' ' + message_;
      } else {
        message_ = rate;
      }
    }
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
    #ifndef STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_
#define STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_
    
      // Create a slice that refers to the contents of 's'
  Slice(const std::string& s) : data_(s.data()), size_(s.size()) { }
    
    
    {            size_t stFrame = 0;
            for (size_t iUtt = 0; iUtt < extraMaps.size(); iUtt++)
            {
                size_t numFramesInThisUtterance = lattices[iUtt]->getnumframes();
                size_t iParallelSeq = extraMaps[iUtt]; // i-th utterance belongs to iParallelSeq-th parallel sequence
                if (iParallelSeq >= parallelSeqStId && iParallelSeq < parallelSeqEnId)
                {
                    // this utterance has been selected
                    decimatedLattices->push_back(lattices[iUtt]);
                    decimatedBoundaryPtr->insert(decimatedBoundaryPtr->end(), boundaries.begin() + stFrame, boundaries.begin() + stFrame + numFramesInThisUtterance);
                    decimatedUidPtr->insert(decimatedUidPtr->end(), uids.begin() + stFrame, uids.begin() + stFrame + numFramesInThisUtterance);
                    decimatedExtraMapPtr->push_back(extraMaps[iUtt] - parallelSeqStId);
                }
                stFrame += numFramesInThisUtterance;
            }
        }
    
        template <typename ElementType>
    void Value::CopyVariableValueToVector(const Variable& outputVariable, std::vector<std::vector<ElementType>>& sequences)
    { 
        // Check the data type matches
        if (AsDataType<ElementType>() != GetDataType())
            InvalidArgument('The specified ElementType %s does not match the DataType %s', typeid(ElementType).name(), DataTypeName(GetDataType()));
    }
    
        InvalidateCompiledNetwork();
    
        // accessors
    SectionFile* GetSectionFile() const
    {
        return m_file;
    }
    SectionHeader* GetHeader() const
    {
        return m_sectionHeader;
    }
    size_t GetFilePosition() const
    {
        return m_filePosition;
    }
    void SetFilePosition(size_t filePosition)
    {
        m_filePosition = filePosition;
    }
    MappingType GetMappingType() const
    {
        return m_mappingType;
    }
    void SetMappingType(MappingType mappingType)
    {
        m_mappingType = mappingType;
    }
    size_t GetSize() const
    {
        return m_sectionHeader->size;
    }
    void SetSize(size_t size)
    {
        m_sectionHeader->size = size;
    }
    size_t GetSizeAll() const
    {
        return m_sectionHeader->sizeAll;
    }
    void SetSizeAll(size_t size)
    {
        m_sectionHeader->sizeAll = size;
    }
    size_t GetHeaderSize() const
    {
        return m_sectionHeader->sizeHeader;
    }
    void SetHeaderSize(size_t size)
    {
        assert(size < 0x10000);
        m_sectionHeader->sizeHeader = (WORD) size;
    }
    size_t GetMappedSize() const
    {
        return m_mappedSize;
    }
    void SetMappedSize(size_t mappedSize)
    {
        m_mappedSize = mappedSize;
    }
    void SetDescription(const std::string& description)
    {
        assert(description.size() < _countof(m_sectionHeader->nameDescription));
        strcpy(m_sectionHeader->nameDescription, description.c_str());
    }
    char* GetDescription() const
    {
        return m_sectionHeader->nameDescription;
    }
    void SetDataTypeSize(SectionData dataType, size_t size)
    {
        assert(size < 0x10000);
        m_sectionHeader->bytesPerElement = (WORD) size;
        m_sectionHeader->sectionData = (WORD) dataType;
    }
    void GetDataTypeSize(SectionData& dataType, size_t& size) const
    {
        size = m_sectionHeader->bytesPerElement;
        dataType = (SectionData) m_sectionHeader->sectionData;
    }
    // ElementSize - number of bytes per element, (0 means variable)
    void SetElementSize(size_t elementSize)
    {
        assert(elementSize < 0x10000);
        m_sectionHeader->bytesPerElement = (WORD) elementSize;
    }
    size_t GetElementSize() const
    {
        return (size_t) m_sectionHeader->bytesPerElement;
    }
    // ElementsPerRecord - number of elements per record
    void SetElementsPerRecord(size_t elementsPerRecord)
    {
        assert(elementsPerRecord < 0x10000);
        m_sectionHeader->elementsPerRecord = (WORD) elementsPerRecord;
    }
    size_t GetElementsPerRecord() const
    {
        return (size_t) m_sectionHeader->elementsPerRecord;
    }
    // ElementCount - number of total elements stored
    void SetElementCount(size_t elementCount)
    {
        m_sectionHeader->elementsCount = elementCount;
    }
    size_t GetElementCount() const
    {
        return m_sectionHeader->elementsCount;
    }
    
    	XLoggerInfo xlog_info;
	gettimeofday(&xlog_info.timeval, NULL);
	xlog_info.level = (TLogLevel)_level;
	xlog_info.line = (int)_line;
	xlog_info.pid = (int)_pid;
	xlog_info.tid = LONGTHREADID2INT(_tid);
	xlog_info.maintid = LONGTHREADID2INT(_maintid);
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {  private:
    TServicesMap m_services;
    TServicesMap m_publicservices;
    std::vector<ServiceBase*> m_releasevec;
};
    
    #ifndef SERVICEBASE_H_
#define SERVICEBASE_H_
    
    //
//  testspy_spy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-14.
//
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
      virtual void setChangeGlobalOption(bool f) CXX11_OVERRIDE;
    
    bool AbstractProxyRequestCommand::executeInternal()
{
  // socket->setBlockingMode();
  if (httpConnection_->sendBufferIsEmpty()) {
    auto httpRequest = make_unique<HttpRequest>();
    httpRequest->setUserAgent(getOption()->get(PREF_USER_AGENT));
    httpRequest->setRequest(getRequest());
    httpRequest->setProxyRequest(proxyRequest_);
    }
    }
    
      virtual ~AbstractProxyResponseCommand();
    
      void reconfigure(const std::vector<std::vector<std::string>>& announceList);
  void reconfigure(const std::string& url);
    
    class AuthConfig;