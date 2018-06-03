
        
        
    {
    {}  // namespace functor
}  // namespace tensorflow
    
    #endif  // TENSORFLOW_PLATFORM_PREFETCH_H_

    
    
    {
    {    Encode(context, contents, file_format, bits_per_second, samples_per_second);
  }
};
    
    #include 'tensorflow/core/framework/register_types.h'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/kernels/cuda_device_array_gpu.h'
#include 'tensorflow/core/util/cuda_kernel_helper.h'
    
    
    {  // Invalid names.
  EXPECT_FALSE(IsSameAddrSp('random_invalid_target', 'random_invalid_target'));
  EXPECT_FALSE(IsSameAddrSp('/job:/replica:10/task:10/cpu:0',
                            '/job:/replica:10/task:10/cpu:1'));
  EXPECT_FALSE(IsSameAddrSp('/job:mnist/replica:xx/task:10/cpu:0',
                            '/job:mnist/replica:xx/task:10/cpu:1'));
  EXPECT_FALSE(IsSameAddrSp('/job:mnist/replica:10/task:yy/cpu:0',
                            '/job:mnist/replica:10/task:yy/cpu:1'));
}
    
        NodeDef* const_node2 = graph_def.add_node();
    const_node2->set_name('const_node2');
    const_node2->set_op('Const');
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      // Given slice 'sub' where 'sub' is fully contained in *this,
  // (meaning that the intersection of 'sub' and *this equals 'sub'), computes
  // the 'relative' slice of 'sub' with respect to *this.
  //
  // In other words, if we use A>S to denote slicing a shape S with a slice A,
  // then the function is computing a slice X such that:
  //   X > (this > S) = sub > S
  // for any shape S.
  //
  // In general, along every dimension, the start of the relative slice is the
  // start of the 'sub' slice minus the start of *this; the length of the
  // relative slice is the length of the 'sub' slice.
  //
  // For example, say we have a shape of {3, 4, 5}, 'this' is 0,2:-:1,2, and
  // 'sub' is 1,1:2:2,1,2, then the related slice is 1,1:2,2:0,2.
  //
  // The caller needs to make sure that 'sub' is indeed a sub-slice of *this;
  // otherwise the result is undefined.
  void ComputeRelative(const TensorSlice& sub, TensorSlice* relative) const;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    typedef FunctionDefHelper FDH;
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Memtables and sstables that make the DB representation contain
// (userkey,seq,type) => uservalue entries.  DBIter
// combines multiple entries for the same userkey found in the DB
// representation into a single entry while accounting for sequence
// numbers, deletion markers, overwrites, etc.
class DBIter: public Iterator {
 public:
  // Which direction is the iterator currently moving?
  // (1) When moving forward, the internal iterator is positioned at
  //     the exact entry that yields this->key(), this->value()
  // (2) When moving backwards, the internal iterator is positioned
  //     just before all entries whose user key == this->key().
  enum Direction {
    kForward,
    kReverse
  };
    }
    
    
    {}  // namespace config
    
    Status DumpTable(Env* env, const std::string& fname, WritableFile* dst) {
  uint64_t file_size;
  RandomAccessFile* file = NULL;
  Table* table = NULL;
  Status s = env->GetFileSize(fname, &file_size);
  if (s.ok()) {
    s = env->NewRandomAccessFile(fname, &file);
  }
  if (s.ok()) {
    // We use the default comparator, which may or may not match the
    // comparator used in this database. However this should not cause
    // problems since we only use Table operations that do not require
    // any comparisons.  In particular, we do not call Seek or Prev.
    s = Table::Open(Options(), file, file_size, &table);
  }
  if (!s.ok()) {
    delete table;
    delete file;
    return s;
  }
    }
    
    
    {}  // namespace leveldb
    
     public:
  RandomGenerator() {
    // We use a limited amount of data over and over again and ensure
    // that it is larger than the compression window (32KB), and also
    // large enough to serve all typical value sizes we want to write.
    Random rnd(301);
    std::string piece;
    while (data_.size() < 1048576) {
      // Add a short fragment that is as compressible as specified
      // by FLAGS_compression_ratio.
      test::CompressibleString(&rnd, FLAGS_compression_ratio, 100, &piece);
      data_.append(piece);
    }
    pos_ = 0;
  }
    
    namespace leveldb {
    }
    
    #ifndef STORAGE_LEVELDB_INCLUDE_FILTER_POLICY_H_
#define STORAGE_LEVELDB_INCLUDE_FILTER_POLICY_H_
    
    inline int Slice::compare(const Slice& b) const {
  const size_t min_len = (size_ < b.size_) ? size_ : b.size_;
  int r = memcmp(data_, b.data_, min_len);
  if (r == 0) {
    if (size_ < b.size_) r = -1;
    else if (size_ > b.size_) r = +1;
  }
  return r;
}
    
                cv::Mat eigenvalues, eigenvectors;
            cv::eigen(H, eigenvalues, eigenvectors);
    
                template<typename T>
            static __device__ __forceinline__ T atomicInc(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count;
                unsigned int tag = threadIdx.x << ( (sizeof(unsigned int) << 3) - 5U);
                do
                {
                    count = *address & TAG_MASK;
                    count = tag | (count + 1);
                    *address = count;
                } while (*address != count);
    }
    
    
    {}
#endif //0

    
    #include 'runtime_common.hpp'
    
    #include '../../precomp.hpp'
    
      std::string comparator_;
  uint64_t log_number_;
  uint64_t prev_log_number_;
  uint64_t next_file_number_;
  SequenceNumber last_sequence_;
  bool has_comparator_;
  bool has_log_number_;
  bool has_prev_log_number_;
  bool has_next_file_number_;
  bool has_last_sequence_;
    
      iter->Seek('5');
  ASSERT_EQ(iter->key().ToString(), '5');
  iter->Prev();
  ASSERT_EQ(iter->key().ToString(), '4');
  iter->Prev();
  ASSERT_EQ(iter->key().ToString(), '3');
  iter->Next();
  ASSERT_EQ(iter->key().ToString(), '4');
  iter->Next();
  ASSERT_EQ(iter->key().ToString(), '5');
    
      switch (data[n]) {
    case kNoCompression:
      if (data != buf) {
        // File implementation gave us pointer to some other data.
        // Use it directly under the assumption that it will be live
        // while the file is open.
        delete[] buf;
        result->data = Slice(data, n);
        result->heap_allocated = false;
        result->cachable = false;  // Do not double-cache
      } else {
        result->data = Slice(buf, n);
        result->heap_allocated = true;
        result->cachable = true;
      }
    }
    
      ~AutoCompactTest() {
    delete db_;
    DestroyDB(dbname_, Options());
    delete tiny_cache_;
  }
    
    void DBIter::FindNextUserEntry(bool skipping, std::string* skip) {
  // Loop until we hit an acceptable entry to yield
  assert(iter_->Valid());
  assert(direction_ == kForward);
  do {
    ParsedInternalKey ikey;
    if (ParseKey(&ikey) && ikey.sequence <= sequence_) {
      switch (ikey.type) {
        case kTypeDeletion:
          // Arrange to skip all upcoming entries for this key since
          // they are hidden by this deletion.
          SaveKey(ikey.user_key, skip);
          skipping = true;
          break;
        case kTypeValue:
          if (skipping &&
              user_comparator_->Compare(ikey.user_key, *skip) <= 0) {
            // Entry hidden
          } else {
            valid_ = true;
            saved_key_.clear();
            return;
          }
          break;
      }
    }
    iter_->Next();
  } while (iter_->Valid());
  saved_key_.clear();
  valid_ = false;
}
    
      // Finish building the block and return a slice that refers to the
  // block contents.  The returned slice will remain valid for the
  // lifetime of this builder or until Reset() is called.
  Slice Finish();