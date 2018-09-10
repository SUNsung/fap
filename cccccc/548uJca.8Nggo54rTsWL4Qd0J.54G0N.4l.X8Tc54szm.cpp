DIRECTIONAL_PREPOSITION(above)
DIRECTIONAL_PREPOSITION(after)
DIRECTIONAL_PREPOSITION(along)
DIRECTIONAL_PREPOSITION(alongside)
DIRECTIONAL_PREPOSITION(as)
DIRECTIONAL_PREPOSITION(at)
DIRECTIONAL_PREPOSITION(before)
DIRECTIONAL_PREPOSITION(below)
DIRECTIONAL_PREPOSITION(by)
DIRECTIONAL_PREPOSITION(following)
DIRECTIONAL_PREPOSITION(for)
DIRECTIONAL_PREPOSITION(from)
DIRECTIONAL_PREPOSITION(given)
DIRECTIONAL_PREPOSITION(in)
DIRECTIONAL_PREPOSITION(including)
DIRECTIONAL_PREPOSITION(inside)
DIRECTIONAL_PREPOSITION(into)
DIRECTIONAL_PREPOSITION(matching)
DIRECTIONAL_PREPOSITION(of)
DIRECTIONAL_PREPOSITION(on)
DIRECTIONAL_PREPOSITION(passing)
DIRECTIONAL_PREPOSITION(preceding)
DIRECTIONAL_PREPOSITION(since)
DIRECTIONAL_PREPOSITION(to)
DIRECTIONAL_PREPOSITION(until)
DIRECTIONAL_PREPOSITION(using)
DIRECTIONAL_PREPOSITION(via)
DIRECTIONAL_PREPOSITION(when)
PREPOSITION(with)
DIRECTIONAL_PREPOSITION(within)
    
    
    {  OutLines.append(Lines.begin(), Lines.end());
}

    
    void DummyTaskQueue::addTask(const char *ExecPath, ArrayRef<const char *> Args,
                             ArrayRef<const char *> Env, void *Context,
                             bool SeparateErrors) {
  QueuedTasks.emplace(std::unique_ptr<DummyTask>(
      new DummyTask(ExecPath, Args, Env, Context, SeparateErrors)));
}
    
    %# Ignore the following admonition; it applies to the resulting .cpp file only
//// Automatically Generated From UnicodeExtendedGraphemeClusters.cpp.gyb.
//// Do Not Edit Directly!
//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
    
    QT_BEGIN_NAMESPACE
class QIcon;
class QMenu;
class QWidget;
QT_END_NAMESPACE
    
    
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
    #include <script/script.h>
    
        /* Check signing with a goofy nonce function */
    
        bool read(const char *raw, size_t len);
    bool read(const char *raw) { return read(raw, strlen(raw)); }
    bool read(const std::string& rawStr) {
        return read(rawStr.data(), rawStr.size());
    }
    
    
    {    return true;
}
    
    int64_t UniValue::get_int64() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int64_t retval;
    if (!ParseInt64(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    private:
   typedef bool (basic_regex_parser::*parser_proc_type)();
   typedef typename traits::string_type string_type;
   typedef typename traits::char_class_type char_class_type;
   parser_proc_type           m_parser_proc;    // the main parser to use
   const charT*               m_base;           // the start of the string being parsed
   const charT*               m_end;            // the end of the string being parsed
   const charT*               m_position;       // our current parser position
   unsigned                   m_mark_count;     // how many sub-expressions we have
   int                        m_mark_reset;     // used to indicate that we're inside a (?|...) block.
   unsigned                   m_max_mark;       // largest mark count seen inside a (?|...) block.
   std::ptrdiff_t             m_paren_start;    // where the last seen ')' began (where repeats are inserted).
   std::ptrdiff_t             m_alt_insert_point; // where to insert the next alternative
   bool                       m_has_case_change; // true if somewhere in the current block the case has changed
#if defined(BOOST_MSVC) && defined(_M_IX86)
   // This is an ugly warning suppression workaround (for warnings *inside* std::vector
   // that can not otherwise be suppressed)...
   BOOST_STATIC_ASSERT(sizeof(long) >= sizeof(void*));
   std::vector<long>           m_alt_jumps;      // list of alternative in the current scope.
#else
   std::vector<std::ptrdiff_t> m_alt_jumps;      // list of alternative in the current scope.
#endif
    
    #ifdef BOOST_REGEX_HAS_OTHER_WCHAR_T
template<>
struct regex_iterator_traits<unsigned short*> : pointer_iterator_traits<unsigned short>{};
template<>
struct regex_iterator_traits<const unsigned short*> : const_pointer_iterator_traits<unsigned short>{};
#endif
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_all_states()
{
   static matcher_proc_type const s_match_vtable[34] = 
   {
      (&perl_matcher<BidiIterator, Allocator, traits>::match_startmark),
      &perl_matcher<BidiIterator, Allocator, traits>::match_endmark,
      &perl_matcher<BidiIterator, Allocator, traits>::match_literal,
      &perl_matcher<BidiIterator, Allocator, traits>::match_start_line,
      &perl_matcher<BidiIterator, Allocator, traits>::match_end_line,
      &perl_matcher<BidiIterator, Allocator, traits>::match_wild,
      &perl_matcher<BidiIterator, Allocator, traits>::match_match,
      &perl_matcher<BidiIterator, Allocator, traits>::match_word_boundary,
      &perl_matcher<BidiIterator, Allocator, traits>::match_within_word,
      &perl_matcher<BidiIterator, Allocator, traits>::match_word_start,
      &perl_matcher<BidiIterator, Allocator, traits>::match_word_end,
      &perl_matcher<BidiIterator, Allocator, traits>::match_buffer_start,
      &perl_matcher<BidiIterator, Allocator, traits>::match_buffer_end,
      &perl_matcher<BidiIterator, Allocator, traits>::match_backref,
      &perl_matcher<BidiIterator, Allocator, traits>::match_long_set,
      &perl_matcher<BidiIterator, Allocator, traits>::match_set,
      &perl_matcher<BidiIterator, Allocator, traits>::match_jump,
      &perl_matcher<BidiIterator, Allocator, traits>::match_alt,
      &perl_matcher<BidiIterator, Allocator, traits>::match_rep,
      &perl_matcher<BidiIterator, Allocator, traits>::match_combining,
      &perl_matcher<BidiIterator, Allocator, traits>::match_soft_buffer_end,
      &perl_matcher<BidiIterator, Allocator, traits>::match_restart_continue,
      // Although this next line *should* be evaluated at compile time, in practice
      // some compilers (VC++) emit run-time initialisation which breaks thread
      // safety, so use a dispatch function instead:
      //(::boost::is_random_access_iterator<BidiIterator>::value ? &perl_matcher<BidiIterator, Allocator, traits>::match_dot_repeat_fast : &perl_matcher<BidiIterator, Allocator, traits>::match_dot_repeat_slow),
      &perl_matcher<BidiIterator, Allocator, traits>::match_dot_repeat_dispatch,
      &perl_matcher<BidiIterator, Allocator, traits>::match_char_repeat,
      &perl_matcher<BidiIterator, Allocator, traits>::match_set_repeat,
      &perl_matcher<BidiIterator, Allocator, traits>::match_long_set_repeat,
      &perl_matcher<BidiIterator, Allocator, traits>::match_backstep,
      &perl_matcher<BidiIterator, Allocator, traits>::match_assert_backref,
      &perl_matcher<BidiIterator, Allocator, traits>::match_toggle_case,
      &perl_matcher<BidiIterator, Allocator, traits>::match_recursion,
      &perl_matcher<BidiIterator, Allocator, traits>::match_fail,
      &perl_matcher<BidiIterator, Allocator, traits>::match_accept,
      &perl_matcher<BidiIterator, Allocator, traits>::match_commit,
      &perl_matcher<BidiIterator, Allocator, traits>::match_then,
   };
    }
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    //
// regex_grep convenience interfaces:
#ifndef BOOST_NO_FUNCTION_TEMPLATE_ORDERING
//
// this isn't really a partial specialisation, but template function
// overloading - if the compiler doesn't support partial specialisation
// then it really won't support this either:
template <class Predicate, class charT, class traits>
inline unsigned int regex_grep(Predicate foo, const charT* str, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   return regex_grep(foo, str, str + traits::length(str), e, flags);
}
    
    
    {} // namespace boost
    
    #ifndef BOOST_REGEX_V4_REGEX_REPLACE_HPP
#define BOOST_REGEX_V4_REGEX_REPLACE_HPP
    
    template <class BidiIterator, class charT, class traits>
bool regex_search(BidiIterator first, BidiIterator last, 
                  const basic_regex<charT, traits>& e, 
                  match_flag_type flags = match_default)
{
   if(e.flags() & regex_constants::failbit)
      return false;
    }
    
    namespace boost{
    }
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct TreeUpdaterReg
    : public dmlc::FunctionRegEntryBase<TreeUpdaterReg,
                                        std::function<TreeUpdater* ()> > {
};
    
    /*!
 * \brief Find the maximum iterator within the iterators
 * \param begin The begining iterator.
 * \param end The end iterator.
 * \return the iterator point to the maximum value.
 * \tparam Iterator The type of the iterator.
 */
template<typename Iterator>
inline Iterator FindMaxIndex(Iterator begin, Iterator end) {
  Iterator maxit = begin;
  for (Iterator it = begin; it != end; ++it) {
    if (*it > *maxit) maxit = it;
  }
  return maxit;
}
    
    #if DMLC_ENABLE_STD_THREAD
#include <dmlc/concurrency.h>
#include <thread>
#endif
    
      void Load(dmlc::Stream* fi) {
    CHECK_EQ(fi->Read(&param, sizeof(param)), sizeof(param))
        << 'GBTree: invalid model file';
    trees.clear();
    trees_to_update.clear();
    for (int i = 0; i < param.num_trees; ++i) {
      std::unique_ptr<RegTree> ptr(new RegTree());
      ptr->Load(fi);
      trees.push_back(std::move(ptr));
    }
    tree_info.resize(param.num_trees);
    if (param.num_trees != 0) {
      CHECK_EQ(
          fi->Read(dmlc::BeginPtr(tree_info), sizeof(int) * param.num_trees),
          sizeof(int) * param.num_trees);
    }
  }
    
    Action::Action()
:_originalTarget(nullptr)
,_target(nullptr)
,_tag(Action::INVALID_TAG)
,_flags(0)
{
#if CC_ENABLE_SCRIPT_BINDING
    ScriptEngineProtocol* engine = ScriptEngineManager::getInstance()->getScriptEngine();
    _scriptType = engine != nullptr ? engine->getScriptType() : kScriptTypeNone;
#endif
}
    
    #ifndef M_PI_X_2
#define M_PI_X_2 (float)M_PI * 2.0f
#endif
    
        if (ret && ret->init(isNeedCleanUp))
    {
        ret->autorelease();
    }
    
    void FadeTo::startWithTarget(Node *target)
{
    ActionInterval::startWithTarget(target);
    }
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
        /** Gets an action given its tag an a target.
     *
     * @param tag       The action's tag.
     * @param target    A certain target.
     * @return  The Action the with the given tag.
     */
    virtual Action* getActionByTag(int tag, const Node *target) const;
    
    /*
 * Update each tick
 * Time is the percentage of the way through the duration
 */
void PageTurn3D::update(float time)
{
    float tt = MAX(0, time - 0.25f);
    float deltaAy = (tt * tt * 500);
    float ay = -100 - deltaAy;
    
    float deltaTheta = sqrtf(time);
    float theta = deltaTheta > 0.5f ? (float)M_PI_2*deltaTheta : (float)M_PI_2*(1-deltaTheta);
    
    float rotateByYAxis = (2-time)* M_PI;
    
    float sinTheta = sinf(theta);
    float cosTheta = cosf(theta);
    
    for (int i = 0; i <= _gridSize.width; ++i)
    {
        for (int j = 0; j <= _gridSize.height; ++j)
        {
            // Get original vertex
            Vec3 p = getOriginalVertex(Vec2(i ,j));
            
            p.x -= getGridRect().origin.x;
            float R = sqrtf((p.x * p.x) + ((p.y - ay) * (p.y - ay)));
            float r = R * sinTheta;
            float alpha = asinf( p.x / R );
            float beta = alpha / sinTheta;
            float cosBeta = cosf( beta );
            
            // If beta > PI then we've wrapped around the cone
            // Reduce the radius to stop these points interfering with others
            if (beta <= M_PI)
            {
                p.x = ( r * sinf(beta));
            }
            else
            {
                // Force X = 0 to stop wrapped
                // points
                p.x = 0;
            }
    }
    }
    }
    
    ProgressFromTo* ProgressFromTo::create(float duration, float fromPercentage, float toPercentage)
{
    ProgressFromTo *progressFromTo = new (std::nothrow) ProgressFromTo();
    if (progressFromTo && progressFromTo->initWithDuration(duration, fromPercentage, toPercentage)) {
        progressFromTo->autorelease();
        return progressFromTo;
    }
    
    delete progressFromTo;
    return nullptr;
}
    
        unsigned int idx = pos.width * _gridSize.height + pos.height;
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    
    {    // update duration
    _totalDelayUnits++;
}
    
    #include 'imgui.h'
#include 'imgui_impl_glfw.h'
#include 'imgui_impl_opengl2.h'
#include <stdio.h>
#include <GLFW/glfw3.h>
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
    
    {    return 0;
}

    
    DEFINE_int32(threads, 16, 'Number of concurrent threads to run.');
DEFINE_int64(cache_size, 8 * KB * KB,
             'Number of bytes to use as a cache of uncompressed data.');
DEFINE_int32(num_shard_bits, 4, 'shard_bits.');
    
    void SuperVersion::Cleanup() {
  assert(refs.load(std::memory_order_relaxed) == 0);
  imm->Unref(&to_delete);
  MemTable* m = mem->Unref();
  if (m != nullptr) {
    auto* memory_usage = current->cfd()->imm()->current_memory_usage();
    assert(*memory_usage >= m->ApproximateMemoryUsage());
    *memory_usage -= m->ApproximateMemoryUsage();
    to_delete.push_back(m);
  }
  current->Unref();
}
    
      // Input statistics
  // TODO(noetzli): The stats are incomplete. They are lacking everything
  // consumed by MergeHelper.
  uint64_t num_input_records = 0;
  uint64_t num_input_deletion_records = 0;
  uint64_t num_input_corrupt_records = 0;
  uint64_t total_input_raw_key_bytes = 0;
  uint64_t total_input_raw_value_bytes = 0;
    
    namespace rocksdb {
    }
    
    #include 'rocksdb/slice.h'
#include 'rocksdb/status.h'
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
      env.now_micros_ += 3024u;  // sleep credit 2000
    
    
    {    // Wrote `done` bytes
    left -= done;
    offset += done;
    src += done;
  }
    
      virtual Status NewRandomAccessFile(const std::string& fname,
                                     unique_ptr<RandomAccessFile>* result,
                                     const EnvOptions& soptions) override;
    
      // open DB with two column families
  std::vector<ColumnFamilyDescriptor> column_families;
  // have to open default column family
  column_families.push_back(ColumnFamilyDescriptor(
      kDefaultColumnFamilyName, ColumnFamilyOptions()));
  // open the new one, too
  column_families.push_back(ColumnFamilyDescriptor(
      'new_cf', ColumnFamilyOptions()));
  std::vector<ColumnFamilyHandle*> handles;
  s = DB::Open(DBOptions(), kDBPath, column_families, &handles, &db);
  assert(s.ok());
    
    // A simple compaction algorithm that always compacts everything
// to the highest level whenever possible.
class FullCompactor : public Compactor {
 public:
  explicit FullCompactor(const Options options) : options_(options) {
    compact_options_.compression = options_.compression;
    compact_options_.output_file_size_limit =
        options_.target_file_size_base;
  }
    }
    
    #include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
    
      /**
   * @brief Receive messages
   * @param frames The messages to receive.
   * @param frame_num The amount of messages to receive.
   * @return The status of the receiving action which is defined by
   *         apollo::common::ErrorCode.
   */
  virtual apollo::common::ErrorCode Receive(std::vector<CanFrame> *const frames,
                                            int32_t *const frame_num);
  /**
   * @brief Get the error string.
   * @param status The status to get the error string.
   */
  virtual std::string GetErrorString(const int32_t status);
  /**
   * @brief Set inited status.
   * @param if status is inited.
   */
  void SetInited(bool init);
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
      ProtocolData<::apollo::canbus::ChassisDetail> mpd;
  SenderMessage<::apollo::canbus::ChassisDetail> msg(1, &mpd);
  EXPECT_FALSE(sender.NeedSend(msg, 1));
  EXPECT_EQ(msg.message_id(), 1);
  int32_t period = msg.curr_period();
  msg.UpdateCurrPeriod(-50);
  EXPECT_EQ(msg.curr_period(), period + 50);
  EXPECT_EQ(msg.CanFrame().id, 1);
    
    template <typename SensorType>
int32_t ProtocolData<SensorType>::GetLength() const {
  return data_length_;
}
    
      /**
   * @brief Get a one-byte unsigned integer representing the lower 4 bits.
   * @return The one-byte unsigned integer representing the lower 4 bits.
   */
  uint8_t get_byte_low_4_bits() const;
    
    TEST(ByteTest, SetBit) {
  unsigned char byte_value = 0xFF;
  Byte value(&byte_value);
  value.set_bit_0(1);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_bit_0(7);
  EXPECT_EQ(0x7D, value.get_byte());
  value.set_bit_1(7);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_value(0x77);
  value.set_bit_1(0);
  EXPECT_EQ(0x77, value.get_byte());
    }
    
    // System gflags
DEFINE_string(node_name, 'chassis', 'The chassis module name in proto');
DEFINE_string(canbus_driver_name, 'canbus', 'Driver name.');