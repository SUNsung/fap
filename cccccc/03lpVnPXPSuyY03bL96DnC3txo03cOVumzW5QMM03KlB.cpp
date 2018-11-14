
        
        
    {
    {
    {        for (;;) {
          auto start = index.fetch_add(work_chunk);
          auto const stop = std::min(start + work_chunk, inputs.size());
          if (start >= stop) break;
          for (auto i = start; i != stop; ++i) func(inputs[i]);
        }
      } catch (const std::exception& e) {
        std::fprintf(stderr,
          'worker thread exited with exception: %s\n', e.what());
        failed = true;
      }
    }));
  }
    
    void Assembler::rldicr(const Reg64& ra, const Reg64& rs, uint8_t sh,
                       uint8_t mb, bool rc) {
  EmitMDForm(30, rn(rs), rn(ra), sh, mb, 1, rc);
}
    
    template<class T>
void fillCollection(T* coll, const APCArray* ar) {
  for (auto i = uint32_t{0}; i < ar->size(); ++i) {
    coll->add(*ar->getValue(i)->toLocal().asTypedValue());
  }
}
    
    struct RequestTimeoutException : ResourceExceededException {
  RequestTimeoutException(const std::string& msg, const Array& backtrace)
    : ResourceExceededException(msg, backtrace)
  {}
  EXCEPTION_COMMON_IMPL(RequestTimeoutException);
};
    
    inline const req::ptr<StreamContext>& ExecutionContext::getStreamContext() {
  return m_streamContext;
}
    
    struct FileStreamWrapper final : Stream::Wrapper {
  static req::ptr<MemFile> openFromCache(const String& filename,
                                         const String& mode);
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  int access(const String& path, int mode) override {
    return ::access(File::TranslatePath(path).data(), mode);
  }
  int stat(const String& path, struct stat* buf) override {
    return ::stat(File::TranslatePath(path).data(), buf);
  }
  int lstat(const String& path, struct stat* buf) override {
    return ::lstat(File::TranslatePath(path).data(), buf);
  }
  int unlink(const String& path) override;
  int rename(const String& oldname, const String& newname) override;
  int mkdir(const String& path, int mode, int options) override;
  int rmdir(const String& path, int /*options*/) override {
    ERROR_RAISE_WARNING(::rmdir(File::TranslatePath(path).data()));
    return ret;
  }
  bool isNormalFileStream() const override { return true; }
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    #ifndef HPHP_GLOB_STREAM_WRAPPER_H
#define HPHP_GLOB_STREAM_WRAPPER_H
    
    
    {///////////////////////////////////////////////////////////////////////////////
}

    
      t8 = a[7].imag;
  t6 = a[3].imag - t8;
  t8 += a[3].imag;
  a[3].imag = t8;
  t1 = t3 - t6;
  t3 += t6;
    
      // Returns true if the argument of the last Compare() call (or the baseline
  // image, if Compare() was not called yet) meets the image acceptance
  // criteria. The target_mul modifies the acceptance criteria used in this call
  // the following way:
  //    = 1.0 : the original acceptance criteria is used,
  //    < 1.0 : a more strict acceptance criteria is used,
  //    > 1.0 : a less strict acceptance criteria is used.
  virtual bool DistanceOK(double target_mul) const = 0;
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    namespace guetzli {
    }
    
    
// these are the macro required by COLUMN_*
#define LOAD_CST(dst, src) (dst) = (src)
#define LOAD(dst, src) (dst) = (src)
#define MULT(a, b)  (a) = (((a) * (b)) >> 16)
#define ADD(a, b)   (a) = (a) + (b)
#define SUB(a, b)   (a) = (a) - (b)
#define LSHIFT(a, n) (a) = ((a) << (n))
#define STORE16(a, b) (a) = (b)
#define CORRECT_LSB(a) (a) += 1
    
    namespace guetzli {
    }
    
      int ReadBits(int nbits) {
    FillBitWindow();
    uint64_t val = (val_ >> (bits_left_ - nbits)) & ((1ULL << nbits) - 1);
    bits_left_ -= nbits;
    return val;
  }
    
    // Functions for reading a jpeg byte stream into a JPEGData object.
    
    BOOST_FORCEINLINE void pause() BOOST_NOEXCEPT
{
#if defined(_MSC_VER) && (defined(_M_AMD64) || defined(_M_IX86))
    _mm_pause();
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
    __asm__ __volatile__('pause;');
#endif
}