
        
        
    {}  // namespace tesseract.

    
    namespace tesseract {
    }
    
      // Returns the direction of the fitted line as a unit vector, using the
  // least mean squared perpendicular distance. The line runs through the
  // mean_point, i.e. a point p on the line is given by:
  // p = mean_point() + lambda * vector_fit() for some real number lambda.
  // Note that the result (0<=x<=1, -1<=y<=-1) is directionally ambiguous
  // and may be negated without changing its meaning, since a line is only
  // unique to a range of pi radians.
  // Modernists prefer to think of this as an Eigenvalue problem, but
  // Pearson had the simple solution in 1901.
  //
  // Note that this is equivalent to returning the Principal Component in PCA,
  // or the eigenvector corresponding to the largest eigenvalue in the
  // covariance matrix.
  FCOORD vector_fit() const;
    
    
    {  // WARNING! Keep data as the first element! KDPairInc and KDPairDec depend
  // on the order of these elements so they can downcast pointers appropriately
  // for use by GenericHeap::Reshuffle.
  Data data;
  Key key;
};
// Specialization of KDPair to provide operator< for sorting in increasing order
// and recasting of data pointers for use with DoublePtr.
template <typename Key, typename Data>
struct KDPairInc : public KDPair<Key, Data> {
  KDPairInc() = default;
  KDPairInc(Key k, Data d) : KDPair<Key, Data>(k, d) {}
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPairInc<Key, Data>& other) const {
    return this->key < other.key;
  }
  // Returns the input Data pointer recast to a KDPairInc pointer.
  // Just casts a pointer to the first element to a pointer to the whole struct.
  static KDPairInc* RecastDataPointer(Data* data_ptr) {
    return reinterpret_cast<KDPairInc*>(data_ptr);
  }
};
// Specialization of KDPair to provide operator< for sorting in decreasing order
// and recasting of data pointers for use with DoublePtr.
template <typename Key, typename Data>
struct KDPairDec : public KDPair<Key, Data> {
  KDPairDec() = default;
  KDPairDec(Key k, Data d) : KDPair<Key, Data>(k, d) {}
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPairDec<Key, Data>& other) const {
    return this->key > other.key;
  }
  // Returns the input Data pointer recast to a KDPairDec pointer.
  // Just casts a pointer to the first element to a pointer to the whole struct.
  static KDPairDec* RecastDataPointer(Data* data_ptr) {
    return reinterpret_cast<KDPairDec*>(data_ptr);
  }
};
    
    #include 'leveldb/export.h'
    
    
    {}  // namespace leveldb
    
      // Drop reference count.  Delete if no more references exist.
  void Unref() {
    --refs_;
    assert(refs_ >= 0);
    if (refs_ <= 0) {
      delete this;
    }
  }
    
    template <typename Key, class Comparator>
SkipList<Key, Comparator>::SkipList(Comparator cmp, Arena* arena)
    : compare_(cmp),
      arena_(arena),
      head_(NewNode(0 /* any key will do */, kMaxHeight)),
      max_height_(1),
      rnd_(0xdeadbeef) {
  for (int i = 0; i < kMaxHeight; i++) {
    head_->SetNext(i, nullptr);
  }
}
    
    class TableCache {
 public:
  TableCache(const std::string& dbname, const Options& options, int entries);
  ~TableCache();
    }
    
      // Verify that overwriting an open file will result in the new file data
  // being read from files opened before the write.
  Slice result;
  char scratch[kFileDataLen];
  ASSERT_OK(rand_file->Read(0, kFileDataLen, &result, scratch));
  ASSERT_EQ(0, result.compare(kWrite2Data));
    
    
    {  // If true, the write will be flushed from the operating system
  // buffer cache (by calling WritableFile::Sync()) before the write
  // is considered complete.  If this flag is true, writes will be
  // slower.
  //
  // If this flag is false, and the machine crashes, some recent
  // writes may be lost.  Note that if it is just the process that
  // crashes (i.e., the machine does not reboot), no writes will be
  // lost even if sync==false.
  //
  // In other words, a DB write with sync==false has similar
  // crash semantics as the 'write()' system call.  A DB write
  // with sync==true has similar crash semantics to a 'write()'
  // system call followed by 'fsync()'.
  bool sync = false;
};
    
    #include 'leveldb/slice.h'
#include 'util/hash.h'
    
        void ProgressWriter::UpdateDistributedSync(size_t samples, const ValuePtr& accumulatedMetric)
    {
        m_distributedSync->Update(samples, nullptr, accumulatedMetric,
            [this](const std::pair<size_t, size_t> samples, std::pair<size_t, size_t> updates,
                   const std::pair<double, double> /*aggregateLoss*/, std::pair<double, double> aggregateMetric)
        {
            OnWriteDistributedSyncUpdate(samples, updates, aggregateMetric);
        });
    }
    
    void ProgressWriter::WriteTrainingSummary(const ValuePtr& accumulatedLoss, const ValuePtr& accumulatedMetric)
    {
        m_training->WriteSummary(
            accumulatedLoss, accumulatedMetric,
            [this](size_t samples, size_t updates, size_t summaries, double aggregateLoss, double aggregateMetric,
                   uint64_t elapsedMs)
            {
                OnWriteTrainingSummary(samples, updates, summaries, aggregateLoss, aggregateMetric, elapsedMs);
            });
    }
    
    // Destroy - cleanup and remove this class
// NOTE: this destroys the object, and it can't be used past this point
void DataReader::Destroy()
{
    // newer code that explicitly place multiple streams for inputs
    foreach_index (i, m_ioNames) // inputNames should map to node names
    {
        m_dataReaders[m_ioNames[i]]->Destroy();
    }
}
    
    
    {
    {            if (map.size() > RAND_MAX * (size_t) RAND_MAX)
                RuntimeError('RandomOrdering: too large training set: need to change to different random generator!');
            srand((unsigned int) seed);
            size_t retries = 0;
            foreach_index (t, map)
            {
                for (int tries = 0; tries < 5; tries++)
                {
                    // swap current pos with a random position
                    // Random positions are limited to t+randomizationrange.
                    // This ensures some locality suitable for paging with a sliding window.
                    const size_t tbegin = max((size_t) t, randomizationrange / 2) - randomizationrange / 2; // range of window  --TODO: use bounds() function above
                    const size_t tend = min(t + randomizationrange / 2, map.size());
                    assert(tend >= tbegin);                  // (guard against potential numeric-wraparound bug)
                    const size_t trand = rand(tbegin, tend); // random number within windows
                    assert((size_t) t <= trand + randomizationrange / 2 && trand < (size_t) t + randomizationrange / 2);
                    // if range condition is fulfilled then swap
                    if (trand <= map[t] + randomizationrange / 2 && map[t] < trand + randomizationrange / 2 && (size_t) t <= map[trand] + randomizationrange / 2 && map[trand] < (size_t) t + randomizationrange / 2)
                    {
                        std::swap(map[t], map[trand]);
                        break;
                    }
                    // but don't multi-swap stuff out of its range (for swapping positions that have been swapped before)
                    // instead, try again with a different random number
                    retries++;
                }
            }
            fprintf(stderr, 'RandomOrdering: %lu retries for %lu elements (%.1f%%) to ensure window condition\n', (unsigned long) retries, (unsigned long) map.size(), 100.0 * retries / map.size());
            // ensure the window condition
            foreach_index (t, map)
                assert((size_t) t <= map[t] + randomizationrange / 2 && map[t] < (size_t) t + randomizationrange / 2);
#if 0 // and a live check since I don't trust myself here yet
            foreach_index (t, map) if (!((size_t) t <= map[t] + randomizationrange/2 && map[t] < (size_t) t + randomizationrange/2))
            {
                fprintf (stderr, 'RandomOrdering: windowing condition violated %d -> %d\n', t, map[t]);
                LogicError('RandomOrdering: windowing condition violated');
            }
#endif
#if 0 // test whether it is indeed a unique complete sequence
            auto map2 = map;
            ::sort (map2.begin(), map2.end());
            foreach_index (t, map2) assert (map2[t] == (size_t) t);
#endif
            fprintf(stderr, 'RandomOrdering: recached sequence for seed %d: %d, %d, ...\n', (int) seed, (int) map[0], (int) map[1]);
            currentseed = seed;
        }
        return map; // caller can now access it through operator[]
    }
    
        // Initialize with bilinear interpolation coefficients (useful for deconvolution layer).
    void InitBilinear(size_t kernelWidth, size_t kernelHeight)
    {
        InitBilinear(Value(), GetSampleLayout(), kernelWidth, kernelHeight, m_deviceId);
    }
    
        // change an array element
    j.at('/array/1'_json_pointer) = 21;
    // output the changed array
    std::cout << j['array'] << '\n';
    
        // create an object from std::unordered_multimap
    std::unordered_multimap<std::string, bool> c_ummap
    {
        {'one', true}, {'two', true}, {'three', false}, {'three', true}
    };
    json j_ummap(c_ummap); // only one entry for key 'three' is used