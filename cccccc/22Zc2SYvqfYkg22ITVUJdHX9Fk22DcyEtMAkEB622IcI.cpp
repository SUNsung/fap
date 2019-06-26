
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    int16_t word_blob_quality(WERD_RES *word, ROW *row);
void reject_whole_page(PAGE_RES_IT &page_res_it);
    
    class TBOX;
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                             int32_t n, int32_t sig_x, int64_t sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
    bool ParagraphModel::ValidBodyLine(int lmargin, int lindent,
                                   int rindent, int rmargin) const {
  switch (justification_) {
    case JUSTIFICATION_LEFT:
      return NearlyEqual(lmargin + lindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_RIGHT:
      return NearlyEqual(rmargin + rindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_CENTER:
      return NearlyEqual(lindent, rindent, tolerance_ * 2);
    default:
      // shouldn't happen
      return false;
  }
}
    
    class UnicharAmbigs {
 public:
  UnicharAmbigs() = default;
  ~UnicharAmbigs() {
    replace_ambigs_.delete_data_pointers();
    dang_ambigs_.delete_data_pointers();
    one_to_one_definite_ambigs_.delete_data_pointers();
  }
    }
    
      if (!trans || !trans->isDict ()) {
    ok = gFalse;
    return;
  }
    
    #endif

    
      //----- special access
    
    
    {  if (readAttrs)
  {
    Object tmp;
    Dict *dict = streamObj->getStream()->getDict();
    dict->lookup('F', &tmp);
    if (!tmp.isNull()) {
      Object obj1;
      // valid 'F' key -> external file
      kind = soundExternal;
      if (getFileSpecNameForPlatform (&tmp, &obj1)) {
        fileName = obj1.getString()->copy();
        obj1.free();
      }
    } else {
      // no file specification, then the sound data have to be
      // extracted from the stream
      kind = soundEmbedded;
    }
    tmp.free();
    // sampling rate
    dict->lookup('R', &tmp);
    if (tmp.isNum()) {
      samplingRate = tmp.getNum();
    }
    tmp.free();
    // sound channels
    dict->lookup('C', &tmp);
    if (tmp.isInt()) {
      channels = tmp.getInt();
    }
    tmp.free();
    // bits per sample
    dict->lookup('B', &tmp);
    if (tmp.isInt()) {
      bitsPerSample = tmp.getInt();
    }
    tmp.free();
    // encoding format
    dict->lookup('E', &tmp);
    if (tmp.isName())
    {
      const char *enc = tmp.getName();
      if (strcmp('Raw', enc) == 0) {
        encoding = soundRaw;
      } else if (strcmp('Signed', enc) == 0) {
        encoding = soundSigned;
      } else if (strcmp('muLaw', enc) == 0) {
        encoding = soundMuLaw;
      } else if (strcmp('ALaw', enc) == 0) {
        encoding = soundALaw;
      }
    }
    tmp.free();
  }
}
    
    
    {  glyph.x = -t3Font->glyphX;
  glyph.y = -t3Font->glyphY;
  glyph.w = t3Font->glyphW;
  glyph.h = t3Font->glyphH;
  glyph.aa = colorMode != splashModeMono1;
  glyph.data = data;
  glyph.freeData = gFalse;
  splash->fillGlyph(0, 0, &glyph);
}
    
    public:
    
      fs::path uploadPath;
  if (FLAGS_carver_compression) {
    uploadPath = compressPath_;
    s = compress(archivePath_, compressPath_);
    if (!s.ok()) {
      VLOG(1) << 'Failed to compress carve archive: ' << s.getMessage();
      updateCarveValue(carveGuid_, 'status', 'COMPRESS FAILED');
      return;
    }
  } else {
    uploadPath = archivePath_;
  }
    
      schedule_ = std::make_unique<Schedule>();
  std::map<std::string, QueryPerformance>().swap(performance_);
  std::map<std::string, FileCategories>().swap(files_);
  std::map<std::string, std::string>().swap(hash_);
  valid_ = false;
  loaded_ = false;
  is_first_time_refresh = true;
    
      /**
   * @brief Get the performance stats for a specific query, by name
   *
   * @param name is the name of the query which you'd like to retrieve
   * @param predicate is a function which accepts a const reference to a
   * QueryPerformance struct. predicate will be called on name's related
   * QueryPerformance struct, if it exists.
   *
   * @code{.cpp}
   *   Config::get().getPerformanceStats(
   *     'my_awesome_query',
   *     [](const QueryPerformance& query) {
   *       // use 'query' here
   *     });
   * @endcode
   */
  void getPerformanceStats(
      const std::string& name,
      std::function<void(const QueryPerformance& query)> predicate) const;
    
    #include <cstdlib>
    
    namespace osquery {
    }
    
    enum class DatabaseError {
  // Unknown error, currently unused
  Unknown = 1,
  DbIsNotOpen = 2,
  InvalidPath = 3,
  FailToDestroyDB = 4,
  FailToOpenDatabase = 5,
  FailToReadData = 6,
  FailToWriteData = 7,
  KeyNotFound = 8,
  DomainNotFound = 9,
  // Corruption or other unrecoverable error after DB can't be longer used
  // Database should be closed, destroyed and opened again
  // If this error was received during data access, then application
  // is likely to die soon
  // See message and/or underlying error for details
  Panic = 10,
};
    
    enum class RocksdbMigrationError {
  InvalidArgument = 1,
  FailToOpen = 2,
  FailToGetVersion = 3,
  NoMigrationFromCurrentVersion = 5,
  MigrationLogicError = 6,
  FailToOpenSrcDatabase = 7,
  FailMoveDatabase = 8,
};
    
    
    {
    {#ifdef __linux__
    // Using: ioprio_set(IOPRIO_WHO_PGRP, 0, IOPRIO_CLASS_IDLE);
    syscall(SYS_ioprio_set, IOPRIO_WHO_PGRP, 0, IOPRIO_CLASS_IDLE);
#elif defined(__APPLE__)
    setiopolicy_np(IOPOL_TYPE_DISK, IOPOL_SCOPE_PROCESS, IOPOL_THROTTLE);
#endif
  }
}
    
    
    {} // namespace osquery

    
    /**
 * @brief The request part of a plugin (registry item's) call.
 *
 * To use a plugin use Registry::call with a request and response.
 * The request portion is usually simple and normally includes an 'action'
 * key where the value is the action you want to perform on the plugin.
 * Refer to the registry's documentation for the actions supported by
 * each of its plugins.
 */
using PluginRequest = std::map<std::string, std::string>;
    
    GTEST_TEST(InMemoryDatabaseTest, test_unknown_key) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  ASSERT_FALSE(db->open().isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key', 12).isError());
  auto result = db->getInt32(kPersistentSettings, 'key_');
  EXPECT_FALSE(result);
  EXPECT_EQ(result.takeError(), DatabaseError::KeyNotFound);
}