
        
          struct IndentScope {
    TreePrinter *Printer;
    size_t OldLength;
    IndentScope(TreePrinter *printer, StringRef indent)
        : Printer(printer), OldLength(printer->Indent.size()) {
      Printer->Indent += indent;
    }
    ~IndentScope() { Printer->Indent.resize(OldLength); }
  };
    
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
    
    
    {
    {    void emitNote(clang::FullSourceLoc Loc, StringRef Message) override {
      // We get invalid note locations when trying to describe where a module
      // is imported and the actual location is in Swift. We also want to ignore
      // things like 'in module X imported from <swift-imported-modules>'.
      if (Loc.isInvalid() || isInSwiftBuffers(Loc))
        return;
      emitDiagnosticMessage(Loc, {}, clang::DiagnosticsEngine::Note, Message,
                            {}, {});
    }
  };
} // end anonymous namespace
    
      bool isInstanceMember() const {
    return isImportAsMember() && selfIndex.hasValue();
  }
    
    std::pair<FrontendInputsAndOutputs, std::set<StringRef>>
ArgsToFrontendInputsConverter::createInputFilesConsumingPrimaries(
    std::set<StringRef> primaryFiles) {
  bool hasAnyPrimaryFiles = !primaryFiles.empty();
    }
    
    #include 'swift/AST/DiagnosticConsumer.h'
#include 'swift/AST/DiagnosticEngine.h'
#include 'swift/Frontend/FrontendOptions.h'
#include 'llvm/ADT/SetVector.h'
#include 'llvm/Option/ArgList.h'
#include <set>
    
    #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
      // Read until size drops significantly.
  std::string limit_key = Key(n);
  for (int read = 0; true; read++) {
    ASSERT_LT(read, 100) << 'Taking too long to compact';
    Iterator* iter = db_->NewIterator(ReadOptions());
    for (iter->SeekToFirst();
         iter->Valid() && iter->key().ToString() < limit_key; iter->Next()) {
      // Drop data
    }
    delete iter;
    // Wait a little bit to allow any triggered compactions to complete.
    Env::Default()->SleepForMicroseconds(1000000);
    uint64_t size = Size(Key(0), Key(n));
    fprintf(stderr, 'iter %3d => %7.3f MB [other %7.3f MB]\n', read + 1,
            size / 1048576.0, Size(Key(n), Key(kCount)) / 1048576.0);
    if (size <= initial_size / 10) {
      break;
    }
  }
    
    TEST(CorruptionTest, TableFileIndexData) {
  Build(10000);  // Enough to build multiple Tables
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
  dbi->TEST_CompactMemTable();
    }
    
      ~Writer();
    
    class Env;
    
      // Check that the file exists.
  ASSERT_TRUE(env_->FileExists('/dir/f'));
  ASSERT_OK(env_->GetFileSize('/dir/f', &file_size));
  ASSERT_EQ(0, file_size);
  ASSERT_OK(env_->GetChildren('/dir', &children));
  ASSERT_EQ(1, children.size());
  ASSERT_EQ('f', children[0]);
    
      // Clear all updates buffered in this batch.
  void Clear();
    
    #include <stddef.h>
#include <stdint.h>
    
    #ifndef STORAGE_LEVELDB_TABLE_FILTER_BLOCK_H_
#define STORAGE_LEVELDB_TABLE_FILTER_BLOCK_H_
    
    void TableBuilder::Flush() {
  Rep* r = rep_;
  assert(!r->closed);
  if (!ok()) return;
  if (r->data_block.empty()) return;
  assert(!r->pending_index_entry);
  WriteBlock(&r->data_block, &r->pending_handle);
  if (ok()) {
    r->pending_index_entry = true;
    r->status = r->file->Flush();
  }
  if (r->filter_block != nullptr) {
    r->filter_block->StartBlock(r->offset);
  }
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {
    {        s1 %= ADLER_MOD, s2 %= ADLER_MOD;
        buflen -= blocklen;
        blocklen = 5552;
    }
    return (s2 << 16) + s1;
}
    
    // Helper functions
    
    
    {        ImGui::Render();
    }
    
    int main(int, char**)
{
    // Setup SDL
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMECONTROLLER) != 0)
    {
        printf('Error: %s\n', SDL_GetError());
        return -1;
    }
    }
    
    // All the ImGui_ImplVulkanH_XXX structures/functions are optional helpers used by the demo. 
// Your real engine/app may not use them.
static void SetupVulkanWindow(ImGui_ImplVulkanH_Window* wd, VkSurfaceKHR surface, int width, int height)
{
    wd->Surface = surface;
    }
    
    bool ImGui_ImplSDL2_InitForVulkan(SDL_Window* window)
{
#if !SDL_HAS_VULKAN
    IM_ASSERT(0 && 'Unsupported');
#endif
    return ImGui_ImplSDL2_Init(window);
}
    
    #include <vector>
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    TEST(ByteTest, SetGetHighLowBit) {
  unsigned char byte_value = 0x37;
  Byte value(&byte_value);
  value.set_value_high_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x07, value.get_byte_low_4_bits());
  value.set_value_low_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x0B, value.get_byte_low_4_bits());
}
    
    int ClusterGeneralInfo701::dynprop(const std::uint8_t* bytes,
                                   int32_t length) const {
  Byte t0(bytes + 6);
  uint32_t x = t0.get_byte(0, 3);
  int ret = x;
  return ret;
}
    
    
    {  x <<= 2;
  x |= t;
  double ret = x * OBJECT_VREL_RES + OBJECT_VREL_LONG_MIN;
  return ret;
}
    
    
    {  double ret = x * 0.001000;
  return ret;
}
    
    
    {
    {
    {}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
    #include 'glog/logging.h'