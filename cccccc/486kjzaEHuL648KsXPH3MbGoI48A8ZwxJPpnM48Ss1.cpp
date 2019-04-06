
        
        #endif  // STORAGE_LEVELDB_DB_DB_ITER_H_

    
    
// Owned filenames have the form:
//    dbname/CURRENT
//    dbname/LOCK
//    dbname/LOG
//    dbname/LOG.old
//    dbname/MANIFEST-[0-9]+
//    dbname/[0-9]+.(log|sst|ldb)
bool ParseFileName(const std::string& filename,
                   uint64_t* number,
                   FileType* type) {
  Slice rest(filename);
  if (rest == 'CURRENT') {
    *number = 0;
    *type = kCurrentFile;
  } else if (rest == 'LOCK') {
    *number = 0;
    *type = kDBLockFile;
  } else if (rest == 'LOG' || rest == 'LOG.old') {
    *number = 0;
    *type = kInfoLogFile;
  } else if (rest.starts_with('MANIFEST-')) {
    rest.remove_prefix(strlen('MANIFEST-'));
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    if (!rest.empty()) {
      return false;
    }
    *type = kDescriptorFile;
    *number = num;
  } else {
    // Avoid strtoull() to keep filename format independent of the
    // current locale
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    Slice suffix = rest;
    if (suffix == Slice('.log')) {
      *type = kLogFile;
    } else if (suffix == Slice('.sst') || suffix == Slice('.ldb')) {
      *type = kTableFile;
    } else if (suffix == Slice('.dbtmp')) {
      *type = kTempFile;
    } else {
      return false;
    }
    *number = num;
  }
  return true;
}
    
    unsigned int Reader::ReadPhysicalRecord(Slice* result) {
  while (true) {
    if (buffer_.size() < kHeaderSize) {
      if (!eof_) {
        // Last read was a full read, so this is a trailer to skip
        buffer_.clear();
        Status status = file_->Read(kBlockSize, &buffer_, backing_store_);
        end_of_buffer_offset_ += buffer_.size();
        if (!status.ok()) {
          buffer_.clear();
          ReportDrop(kBlockSize, status);
          eof_ = true;
          return kEof;
        } else if (buffer_.size() < kBlockSize) {
          eof_ = true;
        }
        continue;
      } else {
        // Note that if buffer_ is non-empty, we have a truncated header at the
        // end of the file, which can be caused by the writer crashing in the
        // middle of writing the header. Instead of considering this an error,
        // just report EOF.
        buffer_.clear();
        return kEof;
      }
    }
    }
    }
    
    TEST(LogTest, UnexpectedFullType) {
  Write('foo');
  Write('bar');
  SetByte(6, kFirstType);
  FixChecksum(0, 3);
  ASSERT_EQ('bar', Read());
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ(3, DroppedBytes());
  ASSERT_EQ('OK', MatchError('partial record without end'));
}
    
    namespace leveldb {
namespace log {
    }
    }
    
    #include 'db/table_cache.h'
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include 'Utils.h'
    
            bool IsPacked() const { return m_isPacked; }
    
    
    {    ~CrossProcessMutex()
    {
        if (m_handle != NULL)
        {
            Release();
        }
    }
};
    
    size_t DataReader::GetCurrentSamplePosition()
{
    // BUGBUG: composition of old readers is not supported.
    // Returning just for the last reader.
    return m_dataReaders[m_ioNames.back()]->GetCurrentSamplePosition();
}
    
    // base class that we can catch, independent of the type parameter
struct /*interface*/ IExceptionWithCallStackBase
{
    virtual const char * CallStack() const = 0;
    virtual ~IExceptionWithCallStackBase() noexcept = default;
};
    
        double ElapsedSeconds();
    
        virtual void /*ComputationNodeBase::*/ Validate(bool isFinalValidationPass) override
    {
        ValidateBinaryReduce(isFinalValidationPass);
    }
    
        template <class ElemType>
    void RequestRelease(shared_ptr<Matrix<ElemType>> *pMatrixPtr)
    {
        auto memInfo = GetMemInfo(pMatrixPtr);
        if (memInfo != nullptr)
        {
            memInfo->SetReleaseStep(m_stepCounter);
        }
        m_stepCounter++; 
    }