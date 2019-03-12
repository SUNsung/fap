
        
        // Author: qrczak@google.com (Marcin Kowalczyk)
    
    
    {  string comments;
  SourceLocation location;
  if (descriptor_->GetSourceLocation(&location)) {
    comments = BuildCommentsString(location, true);
  } else {
    comments = '';
  }
  variables_['comments'] = comments;
}
    
    static inline int internalInflateInit2(
    z_stream* zcontext, GzipInputStream::Format format) {
  int windowBitsFormat = 0;
  switch (format) {
    case GzipInputStream::GZIP: windowBitsFormat = 16; break;
    case GzipInputStream::AUTO: windowBitsFormat = 32; break;
    case GzipInputStream::ZLIB: windowBitsFormat = 0; break;
  }
  return inflateInit2(zcontext, /* windowBits */15 | windowBitsFormat);
}
    
    void MapLiteTestUtil::ExpectMapFieldsSetInitialized(
    const unittest::TestMapLite& message) {
  MapTestUtilImpl::ExpectMapFieldsSetInitialized<unittest::MapEnumLite,
                                                 unittest::MAP_ENUM_FOO_LITE>(
      message);
}
    
    Status::Status() : error_code_(error::OK) {
}
    
    TEST(TemplateUtilTest, TestTemplateTypeEquals) {
  // Check that the TemplateTypeEquals works correctly.
  bool value = false;
    }