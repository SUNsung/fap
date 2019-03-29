
        
            ~reverse_lock() {
        templock.lock();
        templock.swap(lock);
    }
    
    
    {    /* Test r/s equal to zero */
    {
        /* (1,1) encoded in DER. */
        unsigned char sigcder[8] = {0x30, 0x06, 0x02, 0x01, 0x01, 0x02, 0x01, 0x01};
        unsigned char sigc64[64] = {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
        };
        secp256k1_pubkey pubkeyc;
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sigc64, 0) == 1);
        CHECK(secp256k1_ecdsa_recover(ctx, &pubkeyc, &rsig, msg32) == 1);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigcder, sizeof(sigcder)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyc) == 1);
        sigcder[4] = 0;
        sigc64[31] = 0;
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sigc64, 0) == 1);
        CHECK(secp256k1_ecdsa_recover(ctx, &pubkeyb, &rsig, msg32) == 0);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigcder, sizeof(sigcder)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyc) == 0);
        sigcder[4] = 1;
        sigcder[7] = 0;
        sigc64[31] = 1;
        sigc64[63] = 0;
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sigc64, 0) == 1);
        CHECK(secp256k1_ecdsa_recover(ctx, &pubkeyb, &rsig, msg32) == 0);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigcder, sizeof(sigcder)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyc) == 0);
    }
}
    
        std::map<std::string,UniValue> kv;
    obj.getObjMap(kv);
    BOOST_CHECK_EQUAL(kv['age'].getValStr(), '43');
    BOOST_CHECK_EQUAL(kv['name'].getValStr(), 'foo bar');
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    
    {  if (FileContainsExtensions(file)) {
    files->push_back(file);
    for (int i = 0; i < file->dependency_count(); i++) {
      const FileDescriptor* dep = file->dependency(i);
      PruneFileAndDepsMarkingAsVisited(dep, files, files_visited);
    }
  } else {
    for (int i = 0; i < file->dependency_count(); i++) {
      const FileDescriptor* dep = file->dependency(i);
      CollectMinimalFileDepsContainingExtensionsWorker(dep, files,
                                                       files_visited);
    }
  }
}
    
      EXPECT_EQ(
      1, TimeUtil::DurationToNanoseconds(TimeUtil::NanosecondsToDuration(1)));
  EXPECT_EQ(
      -1, TimeUtil::DurationToNanoseconds(TimeUtil::NanosecondsToDuration(-1)));
  EXPECT_EQ(
      1, TimeUtil::DurationToMicroseconds(TimeUtil::MicrosecondsToDuration(1)));
  EXPECT_EQ(-1, TimeUtil::DurationToMicroseconds(
                    TimeUtil::MicrosecondsToDuration(-1)));
  EXPECT_EQ(
      1, TimeUtil::DurationToMilliseconds(TimeUtil::MillisecondsToDuration(1)));
  EXPECT_EQ(-1, TimeUtil::DurationToMilliseconds(
                    TimeUtil::MillisecondsToDuration(-1)));
  EXPECT_EQ(1, TimeUtil::DurationToSeconds(TimeUtil::SecondsToDuration(1)));
  EXPECT_EQ(-1, TimeUtil::DurationToSeconds(TimeUtil::SecondsToDuration(-1)));
  EXPECT_EQ(1, TimeUtil::DurationToMinutes(TimeUtil::MinutesToDuration(1)));
  EXPECT_EQ(-1, TimeUtil::DurationToMinutes(TimeUtil::MinutesToDuration(-1)));
  EXPECT_EQ(1, TimeUtil::DurationToHours(TimeUtil::HoursToDuration(1)));
  EXPECT_EQ(-1, TimeUtil::DurationToHours(TimeUtil::HoursToDuration(-1)));
    
    namespace tesseract {
class Tesseract;
}
    
      /**
   * Returns information about the current paragraph, if available.
   *
   *   justification -
   *     LEFT if ragged right, or fully justified and script is left-to-right.
   *     RIGHT if ragged left, or fully justified and script is right-to-left.
   *     unknown if it looks like source code or we have very few lines.
   *   is_list_item -
   *     true if we believe this is a member of an ordered or unordered list.
   *   is_crown -
   *     true if the first line of the paragraph is aligned with the other
   *     lines of the paragraph even though subsequent paragraphs have first
   *     line indents.  This typically indicates that this is the continuation
   *     of a previous paragraph or that it is the very first paragraph in
   *     the chapter.
   *   first_line_indent -
   *     For LEFT aligned paragraphs, the first text line of paragraphs of
   *     this kind are indented this many pixels from the left edge of the
   *     rest of the paragraph.
   *     for RIGHT aligned paragraphs, the first text line of paragraphs of
   *     this kind are indented this many pixels from the right edge of the
   *     rest of the paragraph.
   *     NOTE 1: This value may be negative.
   *     NOTE 2: if *is_crown == true, the first line of this paragraph is
   *             actually flush, and first_line_indent is set to the 'common'
   *             first_line_indent for subsequent paragraphs in this block
   *             of text.
   */
  void ParagraphInfo(tesseract::ParagraphJustification *justification,
                     bool *is_list_item,
                     bool *is_crown,
                     int *first_line_indent) const;
    
      // Clean up the bounding boxes from the polygonal approximation by
  // expanding slightly, then clipping to the blobs from the original_word
  // that overlap. If not null, the block provides the inverse rotation.
  void ClipToOriginalWord(const BLOCK* block, WERD* original_word);
    
    // AMBIG_SPEC_LIST stores a list of dangerous ambigs that
// start with the same unichar (e.g. r->t rn->m rr1->m).
class AmbigSpec : public ELIST_LINK {
 public:
  AmbigSpec();
  ~AmbigSpec() = default;
    }
    
    void Config::ParseIniFile(const std::string &filename, IniSettingMap &ini,
                          const bool constants_only /* = false */,
                          const bool is_system /* = true */ ) {
    std::ifstream ifs(filename);
    std::string str((std::istreambuf_iterator<char>(ifs)),
                    std::istreambuf_iterator<char>());
    std::string with_includes;
    Config::ReplaceIncludesWithIni(filename, str, with_includes);
    Config::SetParsedIni(ini, with_includes, filename, constants_only,
                         is_system);
}
    
    void logAHMSubMapWarning(folly::StringPiece mapName);