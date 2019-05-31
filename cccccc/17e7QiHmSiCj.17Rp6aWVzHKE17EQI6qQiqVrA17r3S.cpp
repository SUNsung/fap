
        
        bool b2Triangle::IsInside(float32 _x, float32 _y){
	if (_x < x[0] && _x < x[1] && _x < x[2]) return false;
	if (_x > x[0] && _x > x[1] && _x > x[2]) return false;
	if (_y < y[0] && _y < y[1] && _y < y[2]) return false;
	if (_y > y[0] && _y > y[1] && _y > y[2]) return false;
		
		float32 vx2 = _x-x[0]; float32 vy2 = _y-y[0];
		float32 vx1 = x[1]-x[0]; float32 vy1 = y[1]-y[0];
		float32 vx0 = x[2]-x[0]; float32 vy0 = y[2]-y[0];
		
		float32 dot00 = vx0*vx0+vy0*vy0;
		float32 dot01 = vx0*vx1+vy0*vy1;
		float32 dot02 = vx0*vx2+vy0*vy2;
		float32 dot11 = vx1*vx1+vy1*vy1;
		float32 dot12 = vx1*vx2+vy1*vy2;
		float32 invDenom = 1.0f / (dot00*dot11 - dot01*dot01);
		float32 u = (dot11*dot02 - dot01*dot12)*invDenom;
		float32 v = (dot00*dot12 - dot01*dot02)*invDenom;
		
		return ((u>=0)&&(v>=0)&&(u+v<=1));    
}
    
    			for (unsigned int uiBlockPixelV = 0; uiBlockPixelV < Block4x4::ROWS; uiBlockPixelV++)
			{
				unsigned int uiSourcePixelV = m_uiSourceV + uiBlockPixelV;
    }
    
    		Data data;
    
    #endif /* FASTLZ_H */

    
    #ifndef FIXED_ARMv4_H
#define FIXED_ARMv4_H
    
    /** 16x32 multiplication, followed by a 16-bit shift right (round-to-nearest). Results fits in 32 bits */
#if OPUS_FAST_INT64
#define MULT16_32_P16(a,b) ((opus_val32)PSHR((opus_int64)((opus_val16)(a))*(b),16))
#else
#define MULT16_32_P16(a,b) ADD32(MULT16_16((a),SHR((b),16)), PSHR(MULT16_16SU((a),((b)&0x0000ffff)),16))
#endif
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    
    {}  // namespace leveldb
    
      void Build(int n) {
    std::string key_space, value_space;
    WriteBatch batch;
    for (int i = 0; i < n; i++) {
      // if ((i % 100) == 0) fprintf(stderr, '@ %d of %d\n', i, n);
      Slice key = Key(i, &key_space);
      batch.Clear();
      batch.Put(key, Value(i, &value_space));
      WriteOptions options;
      // Corrupt() doesn't work without this sync on windows; stat reports 0 for
      // the file size.
      if (i == n - 1) {
        options.sync = true;
      }
      ASSERT_OK(db_->Write(options, &batch));
    }
  }
    
     private:
  // Extend record types with the following special values
  enum {
    kEof = kMaxRecordType + 1,
    // Returned whenever we find an invalid physical record.
    // Currently there are three situations in which this happens:
    // * The record has an invalid CRC (ReadPhysicalRecord reports a drop)
    // * The record is a 0-length record (No drop is reported)
    // * The record is below constructor's initial_offset (No drop is reported)
    kBadRecord = kMaxRecordType + 2
  };
    
      // Returns an estimate of the number of bytes of data in use by this
  // data structure. It is safe to call when MemTable is being modified.
  size_t ApproximateMemoryUsage();
    
      // Moves to the next entry in the source.  After this call, Valid() is
  // true iff the iterator was not positioned at the last entry in the source.
  // REQUIRES: Valid()
  virtual void Next() = 0;
    
      // Size of the file generated so far.  If invoked after a successful
  // Finish() call, returns the size of the final generated file.
  uint64_t FileSize() const;
    
    #ifndef STORAGE_LEVELDB_INCLUDE_WRITE_BATCH_H_
#define STORAGE_LEVELDB_INCLUDE_WRITE_BATCH_H_
    
    void MetaInfo::SaveBinary(dmlc::Stream *fo) const {
  int32_t version = kVersion;
  fo->Write(&version, sizeof(version));
  fo->Write(&num_row_, sizeof(num_row_));
  fo->Write(&num_col_, sizeof(num_col_));
  fo->Write(&num_nonzero_, sizeof(num_nonzero_));
  fo->Write(labels_.HostVector());
  fo->Write(group_ptr_);
  fo->Write(qids_);
  fo->Write(weights_.HostVector());
  fo->Write(root_index_);
  fo->Write(base_margin_.HostVector());
}
    
    class ColumnMatrix;
    
    
    { protected:
  /*! \brief internal base score of the model */
  bst_float base_score_;
  /*! \brief objective function */
  std::unique_ptr<ObjFunction> obj_;
  /*! \brief The gradient booster used by the model*/
  std::unique_ptr<GradientBooster> gbm_;
  /*! \brief The evaluation metrics used to evaluate the model. */
  std::vector<std::unique_ptr<Metric> > metrics_;
  /*! \brief Training parameter. */
  LearnerTrainParam tparam_;
};
    
      static GPUDistribution Granular(GPUSet devices, int granularity) {
    return GPUDistribution(devices, granularity, 0, std::vector<size_t>());
  }
    
      /**
   * \struct  PredictionCacheEntry
   *
   * \brief Contains pointer to input matrix and associated cached predictions.
   */
  struct PredictionCacheEntry {
    std::shared_ptr<DMatrix> data;
    std::vector<bst_float> predictions;
  };
    
      if (pzErrMsg != nullptr) {
    *pzErrMsg = nullptr;
  }
    
    struct TestMessage {
  int a_;
  int b_;
  char c_;
  char d_;
};
    
    // Sanity check integration test for iokit_registry
// Spec file: specs/darwin/iokit_registry.table
    
    // Sanity check integration test for kernel_info
// Spec file: specs/kernel_info.table
    
    class kernelPanics : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};