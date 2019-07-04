
        
          bool operator==(SrcLoc o) const {
    return start == o.start && past == o.past;
  }
    
      // Special code for overflow handling
  bool cond = (BranchConditions::Always != bc);
  if (bc == BranchConditions::Overflow || bc == BranchConditions::NoOverflow) {
    a.xor(reg::r0, reg::r0, reg::r0,false);
    a.mtspr(Assembler::SpecialReg::XER, reg::r0);
  } else if (cond && immt != ImmType::AnyCompact) {
    // Unconditional branch (jmp or call) doesn't need this reserve bytes
    a.emitNop(2 * instr_size_in_bytes);
  }
    
    
   void EmitDSForm(const uint8_t op,
                   const RegNumber rt,
                   const RegNumber ra,
                   const uint16_t imm,
                   const uint16_t xop) {
    }
    
    #endif

    
    
    {  if (base64) {
    decoded = string_base64_decode(data, data_len, true);
    if (decoded.isNull()) {
      raise_warning('unable to decode base64 data');
      return nullptr;
    }
  } else {
    decoded = url_decode(data, data_len);
  }
  return req::make<MemFile>(decoded.data(), decoded.size());
}
    
    bool ArrayDirectory::isEof() const {
  return m_it.end();
}
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
  int64_t readImpl(char *buffer, int64_t length) override;
  int getc() override;
  int64_t writeImpl(const char *buffer, int64_t length) override;
  bool seek(int64_t offset, int whence = SEEK_SET) override;
  int64_t tell() override;
  bool eof() override;
  bool rewind() override;
  bool flush() override;
  bool truncate(int64_t size) override;
    
    
    {}
    
    template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 0, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 0, rate, fillCols);
}