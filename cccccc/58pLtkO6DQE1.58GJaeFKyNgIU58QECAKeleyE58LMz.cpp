
        
            TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    namespace leveldb {
    }
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
    
    {}  // namespace leveldb
    
      // Compute the crc of the record type and the payload.
  uint32_t crc = crc32c::Extend(type_crc_[t], ptr, n);
  crc = crc32c::Mask(crc);                 // Adjust for storage
  EncodeFixed32(buf, crc);
    
      Status OpenWithStatus(Options* options = nullptr) {
    Close();
    Options opts;
    if (options != nullptr) {
      opts = *options;
    } else {
      opts.reuse_logs = true;  // TODO(sanjay): test both ways
      opts.create_if_missing = true;
    }
    if (opts.env == nullptr) {
      opts.env = env_;
    }
    return DB::Open(opts, dbname_, &db_);
  }
    
    
    {    // Do not record a version edit for this conversion to a Table
    // since ExtractMetaData() will also generate edits.
    FileMetaData meta;
    meta.number = next_file_number_++;
    Iterator* iter = mem->NewIterator();
    status = BuildTable(dbname_, env_, options_, table_cache_, iter, &meta);
    delete iter;
    mem->Unref();
    mem = nullptr;
    if (status.ok()) {
      if (meta.file_size > 0) {
        table_numbers_.push_back(meta.number);
      }
    }
    Log(options_.info_log, 'Log #%llu: %d ops saved to Table #%llu %s',
        (unsigned long long) log,
        counter,
        (unsigned long long) meta.number,
        status.ToString().c_str());
    return status;
  }
    
      // Removes a SnapshotImpl from this list.
  //
  // The snapshot must have been created by calling New() on this list.
  //
  // The snapshot pointer should not be const, because its memory is
  // deallocated. However, that would force us to change DB::ReleaseSnapshot(),
  // which is in the API, and currently takes a const Snapshot.
  void Delete(const SnapshotImpl* snapshot) {
#if !defined(NDEBUG)
    assert(snapshot->list_ == this);
#endif  // !defined(NDEBUG)
    snapshot->prev_->next_ = snapshot->next_;
    snapshot->next_->prev_ = snapshot->prev_;
    delete snapshot;
  }
    
      void EmitXX2Form(const uint8_t op,
                   const RegNumber t,
                   const uint8_t uim,
                   const RegNumber b,
                   const uint16_t xo,
                   const bool bx,
                   const bool tx)  {
    XX2_form_t xx2_formater {{
      tx,
      bx,
      xo,
      static_cast<uint32_t>(b),
      static_cast<uint32_t>(uim & 0x3),
      static_cast<uint32_t>(t),
      op
    }};
    dword(xx2_formater.instruction);
  }
    
    struct ObjectData;
struct Object;
    
      const char* data = filename.data();
  int data_len = filename.length();
  bool base64 = false;
  if (strncmp(data, 'data:', sizeof('data:') - 1)) {
    return nullptr;
  }
  data += sizeof('data:') - 1;
  data_len -= sizeof('data:') - 1;
    
    #ifndef HPHP_DATA_STREAM_WRAPPER_H
#define HPHP_DATA_STREAM_WRAPPER_H
    
    int emulate_zend(int argc, char** argv) {
  std::vector<std::string> newargv;
    }
    
    
    {    if (isPHP == php) {
      callback(spath + ename, false);
    }
  }
    
    #include 'hphp/runtime/base/runtime-option.h'
    
    
    {}
    
        // change element with key 'the bad'
    object.at('the bad') = 'il cattivo';
    
    #include 'modules/drivers/canbus/can_client/socket/socket_can_client_raw.h'
    
    TEST(ByteTest, SetBit) {
  unsigned char byte_value = 0xFF;
  Byte value(&byte_value);
  value.set_bit_0(1);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_bit_0(7);
  EXPECT_EQ(0x7D, value.get_byte());
  value.set_bit_1(7);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_value(0x77);
  value.set_bit_1(0);
  EXPECT_EQ(0x77, value.get_byte());
    }
    
    #include 'modules/drivers/radar/conti_radar/protocol/object_quality_info_60c.h'
#include 'modules/drivers/radar/conti_radar/protocol/const_vars.h'
    
    Eigen::MatrixXd SplineSegKernel::Kernel(const uint32_t num_params,
                                        const double accumulated_x) {
  if (num_params > reserved_order_ + 1) {
    CalculateFx(num_params);
  }
  Eigen::MatrixXd term_matrix;
  IntegratedTermMatrix(num_params, accumulated_x, 'fx', &term_matrix);
  return kernel_fx_.block(0, 0, num_params, num_params)
      .cwiseProduct(term_matrix);
}
    
    namespace apollo {
namespace routing {
    }
    }
    
    #include 'gtest/gtest.h'