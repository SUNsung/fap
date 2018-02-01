
        
        namespace leveldb {
    }
    
    // Called on every log record (each one of which is a WriteBatch)
// found in a kDescriptorFile.
static void VersionEditPrinter(uint64_t pos, Slice record, WritableFile* dst) {
  std::string r = '--- offset ';
  AppendNumberTo(&r, pos);
  r += '; ';
  VersionEdit edit;
  Status s = edit.DecodeFrom(record);
  if (!s.ok()) {
    r += s.ToString();
    r.push_back('\n');
  } else {
    r += edit.DebugString();
  }
  dst->Append(r);
}
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
    WriteBatch::WriteBatch() {
  Clear();
}
    
    inline
static void WalCheckpoint(sqlite3* db_) {
  // Flush all writes to disk
  if (FLAGS_WAL_enabled) {
    sqlite3_wal_checkpoint_v2(db_, NULL, SQLITE_CHECKPOINT_FULL, NULL, NULL);
  }
}
    
    
    {}  // namespace leveldb
    
    
    
    
    
    
    
    
    
    
    
    		// Define platform
		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-4.0f, 5.0f);
			m_platform = m_world->CreateBody(&bd);
    }
    
    	static Test* Create()
	{
		return new Breakable;
	}
    
    bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg) {
  return ReadJpeg(reinterpret_cast<const uint8_t*>(data.data()),
                  static_cast<const size_t>(data.size()),
                  mode, jpg);
}
    
    size_t HistogramHeaderCost(const JpegHistogram& histo) {
  size_t header_bits = 17 * 8;
  for (int i = 0; i + 1 < JpegHistogram::kSize; ++i) {
    if (histo.counts[i] > 0) {
      header_bits += 8;
    }
  }
  return header_bits;
}
    
    
    {}  // namespace guetzli
    
    // Entropy encoding (Huffman) utilities.
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
      tmp0 = in[2 * stride];
  tmp1 = kIDCTMatrix[ 2] * tmp0;
  tmp2 = kIDCTMatrix[10] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] -= tmp2;
  out[3] -= tmp1;
  out[4] -= tmp1;
  out[5] -= tmp2;
  out[6] += tmp2;
  out[7] += tmp1;
    
    #include 'guetzli/jpeg_data.h'