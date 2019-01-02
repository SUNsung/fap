STATISTIC(NumRequirementEnvironments, '# of requirement environments');
    
    #include 'swift/ASTSectionImporter/ASTSectionImporter.h'
#include 'swift/Basic/Dwarf.h'
#include 'swift/Serialization/SerializedModuleLoader.h'
#include 'swift/Serialization/Validation.h'
#include 'llvm/Support/Debug.h'
#include 'llvm/Support/raw_ostream.h'
    
    void CacheImpl::destroy() {
  removeAll();
  delete static_cast<DefaultCache*>(Impl);
}
    
    #ifndef PREPOSITION
#  define PREPOSITION(Word)
#endif
    
        StringRef Line = RawText.substr(0, Pos);
    Lines.push_back(Line);
    if (!IsFirstLine) {
      size_t NonWhitespacePos = RawText.find_first_not_of(' ');
      if (NonWhitespacePos != StringRef::npos)
        WhitespaceToTrim =
            std::min(WhitespaceToTrim,
                     static_cast<unsigned>(NonWhitespacePos));
    }
    IsFirstLine = false;
    
      for (; firstLower < n; ++firstLower) {
    if (!clang::isUppercase(string[firstLower]))
      break;
  }
    
    % for start_code_point, end_code_point, value in break_table.property_value_ranges:
%   if start_code_point == 0:
  if (C <= ${end_code_point})
%   else:
  if (C >= ${start_code_point} && C <= ${end_code_point})
%   end
    return GraphemeClusterBreakProperty::${value};
% end
    
    std::string Demangle::getNodeTreeAsString(NodePointer Root) {
  DemanglerPrinter Printer;
  printNode(Printer, Root, 0);
  return std::move(Printer).str();
}
    
    using namespace swift;
using namespace Demangle;
    
    void DBImpl::CleanupCompaction(CompactionState* compact) {
  mutex_.AssertHeld();
  if (compact->builder != nullptr) {
    // May happen if we get a shutdown call in the middle of compaction
    compact->builder->Abandon();
    delete compact->builder;
  } else {
    assert(compact->outfile == nullptr);
  }
  delete compact->outfile;
  for (size_t i = 0; i < compact->outputs.size(); i++) {
    const CompactionState::Output& out = compact->outputs[i];
    pending_outputs_.erase(out.number);
  }
  delete compact;
}
    
      ASSERT_OK(env.CreateDir(dbname));
  ASSERT_TRUE(env.FileExists(dbname));
  std::vector<std::string> children;
  ASSERT_OK(env.GetChildren(dbname, &children));
  // The POSIX env does not filter out '.' and '..' special files.
  ASSERT_EQ(2, children.size());
  ASSERT_OK(DestroyDB(dbname, opts));
  ASSERT_TRUE(!env.FileExists(dbname));
    
    std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
      fname = TempFileName('tmp', 999);
  ASSERT_EQ('tmp/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(999, number);
  ASSERT_EQ(kTempFile, type);
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
      // crc32c values for all supported record types.  These are
  // pre-computed to reduce the overhead of computing the crc of the
  // record type stored in the header.
  uint32_t type_crc_[kMaxRecordType + 1];
    
    bool MemTable::Get(const LookupKey& key, std::string* value, Status* s) {
  Slice memkey = key.memtable_key();
  Table::Iterator iter(&table_);
  iter.Seek(memkey.data());
  if (iter.Valid()) {
    // entry format is:
    //    klength  varint32
    //    userkey  char[klength]
    //    tag      uint64
    //    vlength  varint32
    //    value    char[vlength]
    // Check that it belongs to same user key.  We do not check the
    // sequence number since the Seek() call above should have skipped
    // all entries with overly large sequence numbers.
    const char* entry = iter.key();
    uint32_t key_length;
    const char* key_ptr = GetVarint32Ptr(entry, entry+5, &key_length);
    if (comparator_.comparator.user_comparator()->Compare(
            Slice(key_ptr, key_length - 8),
            key.user_key()) == 0) {
      // Correct user key
      const uint64_t tag = DecodeFixed64(key_ptr + key_length - 8);
      switch (static_cast<ValueType>(tag & 0xff)) {
        case kTypeValue: {
          Slice v = GetLengthPrefixedSlice(key_ptr + key_length);
          value->assign(v.data(), v.size());
          return true;
        }
        case kTypeDeletion:
          *s = Status::NotFound(Slice());
          return true;
      }
    }
  }
  return false;
}
    
    
    {
    {                    // Loop Continuation: we will fall into the pattern following the loop
                    //   (non-greedy, don't execute loop body first), but first do
                    //   a state save to the top of the loop, so that a match failure
                    //   in the following pattern will try another iteration of the loop.
                    fp = StateSave(fp, opValue + 4, status);
                }
            }
            break;
    
    U_NAMESPACE_END
    
        /**
     * Returns TRUE if this instance represents no constraints on significant
     * digits.
     */
    UBool isNoConstraints() const {
        return fMin == 0 && fMax == INT32_MAX;
    }
    
    class UnicodeString;
    
            for (oOutput=0; oOutput<output.length(); ) {
            if (oOutput == cursorPos) {
                // Record the position of the cursor
                newStart = destLimit - destStart; // relative to start
            }
            UChar32 c = output.char32At(oOutput);
            UnicodeReplacer* r = data->lookupReplacer(c);
            if (r == NULL) {
                // Accumulate straight (non-segment) text.
                buf.append(c);
            } else {
                isComplex = TRUE;
    }
    }
    
    bool AccelDeccelAmplitude::initWithAction(Action *action, float duration)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _rate = 1.0f;
        _other = (ActionInterval*)(action);
        action->retain();
    }
    }
    
    void ActionManager::removeAllActions()
{
    for (tHashElement *element = _targets; element != nullptr; )
    {
        auto target = element->target;
        element = (tHashElement*)element->hh.next;
        removeAllActionsFromTarget(target);
    }
}
    
    GridBase* PageTurn3D::getGrid()
{
    auto result = Grid3D::create(_gridSize, _gridNodeTarget->getGridRect());
    if (result)
    {
        result->setNeedDepthTestForBlit(true);
    }
    
    return result;
}
    
        //
    // Overrides
    //
    virtual ProgressTo* clone() const override;
    virtual ProgressTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ProgressTo() {}
    virtual ~ProgressTo() {}
    
    void AtlasNode::setBlendFunc(const BlendFunc &blendFunc)
{
    _blendFunc = blendFunc;
}
    
    PolygonInfo AutoPolygon::generatePolygon(const std::string& filename, const Rect& rect, float epsilon, float threshold)
{
    AutoPolygon ap(filename);
    return ap.generateTriangles(rect, epsilon, threshold);
}

    
        /**
     * get vertex count
     * @return number of vertices
     */
    unsigned int getVertCount() const;
    
    /**
     * get triangles count
     * @return number of triangles
     */
    unsigned int getTrianglesCount() const;