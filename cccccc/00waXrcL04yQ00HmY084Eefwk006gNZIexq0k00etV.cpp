
        
            if (info.status == serialization::Status::Valid) {
      assert(info.bytes != 0);
      if (!info.name.empty()) {
        StringRef moduleData = buf.substr(0, info.bytes);
        std::unique_ptr<llvm::MemoryBuffer> bitstream(
          llvm::MemoryBuffer::getMemBuffer(moduleData, info.name, false));
    }
    }
    
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
    {  } else {
    assert(clangDiag.hasSourceManager());
    auto clangCI = ImporterImpl.getClangInstance();
    ClangDiagRenderer renderer(clangCI->getLangOpts(),
                               &clangCI->getDiagnosticOpts(), emitDiag);
    clang::FullSourceLoc clangDiagLoc(clangDiag.getLocation(),
                                      clangDiag.getSourceManager());
    renderer.emitDiagnostic(clangDiagLoc, clangDiagLevel, message,
                            clangDiag.getRanges(), clangDiag.getFixItHints(),
                            &clangDiag);
  }
}

    
    void swift::Demangle::Node::dump() {
  std::string TreeStr = getNodeTreeAsString(this);
  fputs(TreeStr.c_str(), stderr);
}
    
    
    {  base::ListValue result;
  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method_Sync(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get()),
      &result));
  return converter->ToV8Value(&result, isolate->GetCurrentContext());
}
    
    namespace remote {
    }
    
    #endif  // CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_

    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
    
    {}  // namespace nw
    
    void Menu::OnMenuClosed() {
  CHECK(!message_loop_quit_.is_null());
  message_loop_quit_.Run();
  
#if !defined(OS_WIN)
  // Ask PlatformEventSource to stop dispatching
  // events in this message loop
  // iteration. We want our menu's loop to return
  // before the next event.
  if (ui::PlatformEventSource::GetInstance())
    ui::PlatformEventSource::GetInstance()->StopCurrentEventStream();
#endif
}
    
        bool Write(ClipboardData& data) {
      switch(data.type) {
        case TYPE_TEXT:
        return WriteText(data);
        break;
        case TYPE_HTML:
        return WriteHTML(data);
        break;
        case TYPE_RTF:
        return WriteRTF(data);
        break;
        case TYPE_PNG:
        case TYPE_JPEG:
        return WriteImage(data);
        break;
        case TYPE_NONE:
        NOTREACHED();
        return false;
      }
      NOTREACHED();
      return false;
    }
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    Status::Status(error::Code error_code, StringPiece error_message)
    : error_code_(error_code) {
  if (error_code != error::OK) {
    error_message_ = error_message.ToString();
  }
}
    
    // ----
// Author: lar@google.com (Laramie Leavitt)
//
// Template metaprogramming utility functions.
//
// This code is compiled directly on many platforms, including client
// platforms like Windows, Mac, and embedded systems.  Before making
// any changes here, make sure that you're not breaking any platforms.
//
//
// The names chosen here reflect those used in tr1 and the boost::mpl
// library, there are similar operations used in the Loki library as
// well.  I prefer the boost names for 2 reasons:
// 1.  I think that portions of the Boost libraries are more likely to
// be included in the c++ standard.
// 2.  It is not impossible that some of the boost libraries will be
// included in our own build in the future.
// Both of these outcomes means that we may be able to directly replace
// some of these with boost equivalents.
//
#ifndef GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_
#define GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_
    
    
    { private:
  const EnumDescriptor* descriptor_;
  std::vector<const EnumValueDescriptor*> base_values_;
  std::vector<const EnumValueDescriptor*> all_values_;
  std::set<const EnumValueDescriptor*> alias_values_to_skip_;
  const string name_;
};
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
      void StartTransportStreamOpBatch(grpc_call_element* elem,
                                   TransportStreamOpBatch* op) override;
    
    MeasureInt64 RpcServerReceivedMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcServerReceivedMessagesPerRpcMeasureName,
                             'Number of messages received per RPC', kCount);
  return measure;
}
    
    // TODO: This may not be needed. Check to see if opencensus requires
// a trailing server response.
// RpcServerStatsEncoding encapsulates the logic for encoding and decoding of
// rpc server stats messages. Rpc server stats consists of a uint64_t time
// value (server latency in nanoseconds).
class RpcServerStatsEncoding {
 public:
  // Size of encoded RPC server stats.
  static constexpr size_t kRpcServerStatsSize = 10;
  // Error value.
  static constexpr size_t kEncodeDecodeFailure = 0;
    }
    
      void StartTransportStreamOpBatch(grpc_call_element* elem,
                                   TransportStreamOpBatch* op) override;
    
    #include 'src/cpp/server/dynamic_thread_pool.h'
    
    #include <grpc/impl/codegen/port_platform.h>
    
    #include <grpc/support/port_platform.h>
    
    
    {
    {}}
    
    
    {
    {
    {
    {
    {          // Special code for overflow handling
          if (bc == BranchConditions::Overflow ||
              bc == BranchConditions::NoOverflow) {
            a.xor(reg::r0, reg::r0, reg::r0,false);
            a.mtspr(Assembler::SpecialReg::XER, reg::r0);
          }
          a.bc (bp.bo(), bp.bi(), diff);
          return;
        }
      }
    }
  }
  // fallback: use CTR to perform absolute branch up to 64 bits
  branchFar(a, bc, lr, ImmType::TocOnly, addrMayChange);
}
    
    //////////////////////////////////////////////////////////////////////
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    class MyFilter : public rocksdb::CompactionFilter {
 public:
  bool Filter(int level, const rocksdb::Slice& key,
              const rocksdb::Slice& existing_value, std::string* new_value,
              bool* value_changed) const override {
    fprintf(stderr, 'Filter(%s)\n', key.ToString().c_str());
    ++count_;
    assert(*value_changed == false);
    return false;
  }
    }
    
      // Do some reads and writes to key 'y'
  s = txn->GetForUpdate(read_options, 'y', &value);
  txn->Put('y', 'y');
    
      {
    PinnableSlice pinnable_val;
    db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
    assert(pinnable_val == 'value');
  }
    
      // Insert to page cache
  //
  // page_key   Identifier to identify a page uniquely across restarts
  // data       Page data
  // size       Size of the page
  virtual Status Insert(const Slice& key, const char* data,
                        const size_t size) = 0;
    
    #include <stddef.h>
    
        /** Returns a new action that performs the exact reverse of the action. 
     *
     * @return A new action that performs the exact reverse of the action.
     * @js NA
     */
    virtual Action* reverse() const
    {
        CC_ASSERT(0);
        return nullptr;
    }
    
        // convert to 'diffs' to 'reverse absolute'
    
    EaseBezierAction* EaseBezierAction::clone() const
{
    // no copy constructor
    if (_inner)
    {
        auto ret = EaseBezierAction::create(_inner->clone());
        if (ret)
        {
            ret->setBezierParamer(_p0,_p1,_p2,_p3);
        }
        return ret;
    }
    }
    
        /** 
    @brief Initializes an action with duration and grid size.
    @param gridSize Specify the grid size of the FlipX3D action.
    @param duration Specify the duration of the FlipX3D action. It's a value in seconds.
    @return If the initialization success, return true; otherwise, return false.
    */
    virtual bool initWithSize(const Size& gridSize, float duration);
    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
        /** @deprecated Use destroyInstance() instead. */
    CC_DEPRECATED_ATTRIBUTE static void purgeSharedAnimationCache() { return AnimationCache::destroyInstance(); }