
        
        #else
    
            //left&right borders
        if (borderType != BORDER_MODE_CONSTANT)
            for (s32 k = 0; k < cn; ++k)
            {
                lanea[-cn+k] = lanea[idx_l + k];
                lanea[colsn+k] = lanea[idx_r + k];
                laneb[-cn+k] = laneb[idx_l + k];
                laneb[colsn+k] = laneb[idx_r + k];
            }
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin, size_t endMargin)
{
    ptrdiff_t p = _p + (ptrdiff_t)startMargin;
    size_t len = _len + startMargin + endMargin;
    if( (size_t)p < len )
        return _p;
    else if( borderType == BORDER_MODE_REPLICATE )
        p = p < 0 ? 0 : (ptrdiff_t)len - 1;
    else if( borderType == BORDER_MODE_REFLECT || borderType == BORDER_MODE_REFLECT101 )
    {
        s32 delta = borderType == BORDER_MODE_REFLECT101;
        if( len == 1 )
            return 0;
        do
        {
            if( p < 0 )
                p = -p - 1 + delta;
            else
                p = (ptrdiff_t)len - 1 - (p - (ptrdiff_t)len) - delta;
        }
        while( (size_t)p >= len );
    }
    else if( borderType == BORDER_MODE_WRAP )
    {
        if( p < 0 )
            p -= ((p-(ptrdiff_t)len+1)/(ptrdiff_t)len)*(ptrdiff_t)len;
        if( p >= (ptrdiff_t)len )
            p %= (ptrdiff_t)len;
    }
    else if( borderType == BORDER_MODE_CONSTANT )
        p = -1;
    else
        internal::assertSupportedConfiguration(false);
    return p - (ptrdiff_t)startMargin;
}
    
    template<>
inline XGBOOST_DEVICE float GradientPairInternal<int64_t>::GetGrad() const {
  return grad_ * 1e-4f;
}
template<>
inline XGBOOST_DEVICE float GradientPairInternal<int64_t>::GetHess() const {
  return hess_ * 1e-4f;
}
template<>
inline XGBOOST_DEVICE void GradientPairInternal<int64_t>::SetGrad(float g) {
  grad_ = static_cast<int64_t>(std::round(g * 1e4));
}
template<>
inline XGBOOST_DEVICE void GradientPairInternal<int64_t>::SetHess(float h) {
  hess_ = static_cast<int64_t>(std::round(h * 1e4));
}
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    SEXP XGBoosterDumpModel_R(SEXP handle, SEXP fmap, SEXP with_stats, SEXP dump_format) {
  SEXP out;
  R_API_BEGIN();
  bst_ulong olen;
  const char **res;
  const char *fmt = CHAR(asChar(dump_format));
  CHECK_CALL(XGBoosterDumpModelEx(R_ExternalPtrAddr(handle),
                                CHAR(asChar(fmap)),
                                asInteger(with_stats),
                                fmt,
                                &olen, &res));
  out = PROTECT(allocVector(STRSXP, olen));
  if (!strcmp('json', fmt)) {
    std::stringstream stream;
    stream <<  '[\n';
    for (size_t i = 0; i < olen; ++i) {
      stream << res[i];
      if (i < olen - 1) {
        stream << ',\n';
      } else {
        stream << '\n';
      }
    }
    stream <<  ']';
    SET_STRING_ELT(out, 0, mkChar(stream.str().c_str()));
  } else {
    for (size_t i = 0; i < olen; ++i) {
      std::stringstream stream;
      stream <<  'booster[' << i <<']\n' << res[i];
      SET_STRING_ELT(out, i, mkChar(stream.str().c_str()));
    }
  }
  R_API_END();
  UNPROTECT(1);
  return out;
}
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    
    {
    {  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    #include <osquery/config.h>
    
      // Generate content to update/add to the config.
  std::string content;
  auto s = readFile(kTestDataPath + 'test_parse_items.conf', content);
  EXPECT_TRUE(s.ok());
  std::map<std::string, std::string> config;
  config['awesome'] = content;
    
    
    {
    {      // View has been updated
      osquery::query('DROP VIEW ' + name, r);
      auto s = osquery::query('CREATE VIEW ' + name + ' AS ' + query, r);
      if (s.ok()) {
        setDatabaseValue(kQueries, kConfigViews + name, query);
      } else {
        LOG(INFO) << 'Error creating view (' << name << '): ' << s.getMessage();
      }
    }
  }
    
      /**
   * @brief Update the internal context buffer with additional content
   *
   * This method allows you to chunk up large content so that it doesn't all
   * have to be loaded into memory at the same time
   *
   * @param buffer The buffer to be hashed
   * @param size The size of the buffer to be hashed
   */
  void update(const void* buffer, size_t size);
    
    TEST_F(ProcessTests, test_launchExtension) {
  {
    auto process =
        PlatformProcess::launchExtension(kProcessTestExecPath.c_str(),
                                         kExpectedExtensionArgs[3],
                                         kExpectedExtensionArgs[5],
                                         kExpectedExtensionArgs[7],
                                         true);
    EXPECT_NE(nullptr, process.get());
    }
    }