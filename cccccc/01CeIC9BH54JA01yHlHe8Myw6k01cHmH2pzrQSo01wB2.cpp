
        
          /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Datum.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<Datum> & datum_vector,
                Blob<Dtype>* transformed_blob);
    
      /**
   * Called by the parent Layer's SetUp to check that the number of bottom
   * and top Blobs provided as input match the expected numbers specified by
   * the {ExactNum,Min,Max}{Bottom,Top}Blobs() functions.
   */
  virtual void CheckBlobCounts(const vector<Blob<Dtype>*>& bottom,
                               const vector<Blob<Dtype>*>& top) {
    if (ExactNumBottomBlobs() >= 0) {
      CHECK_EQ(ExactNumBottomBlobs(), bottom.size())
          << type() << ' Layer takes ' << ExactNumBottomBlobs()
          << ' bottom blob(s) as input.';
    }
    if (MinBottomBlobs() >= 0) {
      CHECK_LE(MinBottomBlobs(), bottom.size())
          << type() << ' Layer takes at least ' << MinBottomBlobs()
          << ' bottom blob(s) as input.';
    }
    if (MaxBottomBlobs() >= 0) {
      CHECK_GE(MaxBottomBlobs(), bottom.size())
          << type() << ' Layer takes at most ' << MaxBottomBlobs()
          << ' bottom blob(s) as input.';
    }
    if (ExactNumTopBlobs() >= 0) {
      CHECK_EQ(ExactNumTopBlobs(), top.size())
          << type() << ' Layer produces ' << ExactNumTopBlobs()
          << ' top blob(s) as output.';
    }
    if (MinTopBlobs() >= 0) {
      CHECK_LE(MinTopBlobs(), top.size())
          << type() << ' Layer produces at least ' << MinTopBlobs()
          << ' top blob(s) as output.';
    }
    if (MaxTopBlobs() >= 0) {
      CHECK_GE(MaxTopBlobs(), top.size())
          << type() << ' Layer produces at most ' << MaxTopBlobs()
          << ' top blob(s) as output.';
    }
    if (EqualNumBottomTopBlobs()) {
      CHECK_EQ(bottom.size(), top.size())
          << type() << ' Layer produces one top blob as output for each '
          << 'bottom blob input.';
    }
  }
    
    
    { protected:
  TransformationParameter transform_param_;
  shared_ptr<DataTransformer<Dtype> > data_transformer_;
  bool output_labels_;
};
    
      virtual inline const char* type() const { return 'Convolution'; }
    
    
    {
    {  // Recursive copy function: this is similar to crop_copy() but loops over all
  // but the last two dimensions to allow for ND cropping while still relying on
  // a CUDA kernel for the innermost two dimensions for performance reasons.  An
  // alterantive implementation could rely on the kernel more by passing
  // offsets, but this is problematic because of its variable length.
  // Since in the standard (N,C,W,H) case N,C are usually not cropped a speedup
  // could be achieved by not looping the application of the copy_kernel around
  // these dimensions.
  void crop_copy_gpu(const vector<Blob<Dtype>*>& bottom,
                const vector<Blob<Dtype>*>& top,
                const vector<int>& offsets,
                vector<int> indices,
                int cur_dim,
                const Dtype* src_data,
                Dtype* dest_data,
                bool is_forward);
};
}  // namespace caffe
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      AutoCompactTest() {
    dbname_ = test::TmpDir() + '/autocompact_test';
    tiny_cache_ = NewLRUCache(100);
    options_.block_cache = tiny_cache_;
    DestroyDB(dbname_, options_);
    options_.create_if_missing = true;
    options_.compression = kNoCompression;
    ASSERT_OK(DB::Open(options_, dbname_, &db_));
  }
    
      // Queue of writers.
  std::deque<Writer*> writers_ GUARDED_BY(mutex_);
  WriteBatch* tmp_batch_ GUARDED_BY(mutex_);
    
      DBTest() : option_config_(kDefault),
             env_(new SpecialEnv(Env::Default())) {
    filter_policy_ = NewBloomFilterPolicy(10);
    dbname_ = test::TmpDir() + '/db_test';
    DestroyDB(dbname_, Options());
    db_ = nullptr;
    Reopen();
  }
    
    
    {  ASSERT_TRUE(!ParseInternalKey(Slice('bar'), &decoded));
}
    
    #include <stdio.h>
    
    // Return the name of the lock file for the db named by
// 'dbname'.  The result will be prefixed with 'dbname'.
std::string LockFileName(const std::string& dbname);
    
    TEST(LogTest, ReadSecondStart) {
  CheckInitialOffsetRecord(10007, 1);
}
    
    #ifndef STORAGE_LEVELDB_DB_SNAPSHOT_H_
#define STORAGE_LEVELDB_DB_SNAPSHOT_H_
    
    static void ImGui_ImplDX11_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
    }
    
    void ImGui_ImplFreeGLUT_NewFrame()
{
    // Setup time step
    ImGuiIO& io = ImGui::GetIO();
    int current_time = glutGet(GLUT_ELAPSED_TIME);
    io.DeltaTime = (current_time - g_Time) / 1000.0f;
    g_Time = current_time;
    }
    
        glutMainLoop();
    
    		bool isBackward() const { return !orEqual && offset<=0; } // True if the resolution of the KeySelector depends only on keys less than key
		bool isFirstGreaterOrEqual() const { return !orEqual && offset==1; }
		bool isFirstGreaterThan() const { return orEqual && offset==1; }
		bool isLastLessOrEqual() const { return orEqual && offset==0; }
    
    		virtual Future<Reference<DirectorySubspace>> open(Reference<Transaction> const& tr, Path const& path, Standalone<StringRef> const& layer = Standalone<StringRef>()) = 0;
		virtual Future<Reference<DirectorySubspace>> createOrOpen(Reference<Transaction> const& tr, Path const& path, Standalone<StringRef> const& layer = Standalone<StringRef>()) = 0;
    
    
    {		// FIXME: test that this uses the keyRange arena and doesn't create another one
		keyRange.KeyRangeRef::operator=(KeyRangeRef(StringRef(begin.begin(), begin.size()), StringRef(end.begin(), end.size())));
		return keyRange;
	}
    
    	static size_t find_string_terminator(const Standalone<VectorRef<unsigned char> > data, size_t offset ) {
		size_t i = offset;
		while (i < data.size() - 1 && !(data[i] == '\x00' && data[i+1] != (uint8_t)'\xff')) {
			i += (data[i] == '\x00' ? 2 : 1);
		}
    }
    
    	private:
		static const uint8_t NULL_CODE;
		static const uint8_t BYTES_CODE;
		static const uint8_t STRING_CODE;
		static const uint8_t NESTED_CODE;
		static const uint8_t INT_ZERO_CODE;
		static const uint8_t POS_INT_END;
		static const uint8_t NEG_INT_START;
		static const uint8_t FLOAT_CODE;
		static const uint8_t DOUBLE_CODE;
		static const uint8_t FALSE_CODE;
		static const uint8_t TRUE_CODE;
		static const uint8_t UUID_CODE;
    
    
    {		void logEvent(std::string id) const {
			TraceEvent('TransactionTrace_GetError').detail('TransactionID', id).detail('ErrCode', errCode).detail('Key', printable(key));
		}
	};
    
    template<class S, class T>
ThreadFuture<T> flatMapThreadFuture(ThreadFuture<S> source, std::function<ErrorOr<ThreadFuture<T>>(ErrorOr<S>)> mapValue) {
	return ThreadFuture<T>(new FlatMapSingleAssignmentVar<S, T>(source, mapValue));
}
    
    //          Copyright John W. Wilkinson 2007 - 2014
// Distributed under the MIT License, see accompanying file LICENSE-OSS
    
    template <class Key, class Val, class Range, class Metric, class MetricFunc>
void RangeMap<Key,Val,Range,Metric,MetricFunc>::insert( const Range& keys, const Val& value ) {
	if(keys.begin == keys.end)
		return;
    }
    
    	void setTotal( double total, double t = timer() ) { addDelta( total - this->total, t); }
	void addDelta( double delta, double t = timer() ) {
		update(t);
		total += delta;
	}
	// smoothTotal() is a continuous (under)estimate of the sum of all addDeltas()
	double smoothTotal( double t = timer() ) {
		update(t);
		return estimate;
	}
	// smoothRate() is d/dt[smoothTotal], and is NOT continuous
	double smoothRate( double t = timer() ) {
		update(t);
		return (total-estimate) / eFoldingTime;
	}