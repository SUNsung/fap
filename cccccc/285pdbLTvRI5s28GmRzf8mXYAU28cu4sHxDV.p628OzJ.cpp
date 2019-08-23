
        
        
    {private:
    Ui::OpenURIDialog *ui;
};
    
        BOOST_CHECK_EQUAL(obj.setObject(), true);
    UniValue uv;
    uv.setInt(42);
    obj.__pushKV('age', uv);
    BOOST_CHECK_EQUAL(obj.size(), 1);
    BOOST_CHECK_EQUAL(obj['age'].getValStr(), '42');
    
    #endif // BITCOIN_CRYPTO_RIPEMD160_H

    
      const Comparator* user_comparator() const { return user_comparator_; }
    
    
    {    if (!supportsFlags (getFlags (version)))
    {
        THROW (IEX_NAMESPACE::InputExc, 'The file format version number's flag field '
                              'contains unrecognized flags.');
    }
}
    
        if (usesLongNames (header))
        version |= LONG_NAMES_FLAG;
    
    #ifndef IMFGENERICOUTPUTFILE_H_
#define IMFGENERICOUTPUTFILE_H_
    
    const Header &
InputPart::header () const
{
    return file->header();
}
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    #include <gtest/gtest.h>
    
    #include <errno.h>
#include <fcntl.h>
#include <string.h>
    
    #define GPR_GLOBAL_CONFIG_DEFINE_BOOL(name, default_value, help)         \
  static char g_env_str_##name[] = #name;                                \
  static ::grpc_core::GlobalConfigEnvBool g_env_##name(g_env_str_##name, \
                                                       default_value);   \
  bool gpr_global_config_get_##name() { return g_env_##name.Get(); }     \
  void gpr_global_config_set_##name(bool value) { g_env_##name.Set(value); }
    
      gpr_unsetenv(bool_var_name);
  EXPECT_TRUE(GPR_GLOBAL_CONFIG_GET(bool_var));
    
      MockEchoTestServiceStub stub;
  auto w = new MockClientWriter<EchoRequest>();
  EchoResponse resp;
  resp.set_message('hello, world');
    
    #include 'src/core/lib/gpr/tls.h'
#include 'src/core/lib/iomgr/port.h'
#include 'src/proto/grpc/testing/echo.grpc.pb.h'
#include 'test/core/util/port.h'
#include 'test/core/util/test_config.h'
    
     private:
  TestServerBuilderPlugin* CheckPresent() {
    auto it = builder_->plugins_.begin();
    for (; it != builder_->plugins_.end(); it++) {
      if ((*it)->name() == PLUGIN_NAME) break;
    }
    if (it != builder_->plugins_.end()) {
      return static_cast<TestServerBuilderPlugin*>(it->get());
    } else {
      return nullptr;
    }
  }
    
    #ifndef STORAGE_LEVELDB_DB_DB_ITER_H_
#define STORAGE_LEVELDB_DB_DB_ITER_H_
    
    #include 'db/filename.h'
#include 'leveldb/env.h'
#include 'leveldb/table.h'
#include 'util/coding.h'
    
      static Status InsertInto(const WriteBatch* batch, MemTable* memtable);
    
    // See doc/table_format.md for an explanation of the filter block format.
    
    Iterator* NewErrorIterator(const Status& status) {
  return new EmptyIterator(status);
}
    
    class Comparator;
class Iterator;
    
      const char* p = s.data();
  for (int power = 0; power <= 63; power++) {
    uint64_t v = static_cast<uint64_t>(1) << power;
    uint64_t actual;
    actual = DecodeFixed64(p);
    ASSERT_EQ(v - 1, actual);
    p += sizeof(uint64_t);
    }
    
    void Top::_appendToUsageMap(BSONObjBuilder& b, const UsageMap& map) const {
    // pull all the names into a vector so we can sort them for the user
    }
    
    /**
 * DB usage monitor.
 */
    
    class InsertNoId : public Base {
public:
    void run() {
        WriteUnitOfWork wunit(&_opCtx);
        BSONObj x = BSON('x' << 1);
        ASSERT(x['_id'].type() == 0);
        Collection* collection = _context.db()->getOrCreateCollection(&_opCtx, nss());
        OpDebug* const nullOpDebug = nullptr;
        ASSERT(!collection->insertDocument(&_opCtx, InsertStatement(x), nullOpDebug, true).isOK());
    }
    }
    
        const uint32_t allFlags = UREGEX_CANON_EQ | UREGEX_CASE_INSENSITIVE | UREGEX_COMMENTS |
                              UREGEX_DOTALL   | UREGEX_MULTILINE        | UREGEX_UWORD |
                              UREGEX_ERROR_ON_UNKNOWN_ESCAPES           | UREGEX_UNIX_LINES | UREGEX_LITERAL;
    
    U_CAPI UBool U_EXPORT2
uhash_equalsScriptSet(const UElement key1, const UElement key2) {
    icu::ScriptSet *s1 = static_cast<icu::ScriptSet *>(key1.pointer);
    icu::ScriptSet *s2 = static_cast<icu::ScriptSet *>(key2.pointer);
    return (*s1 == *s2);
}
    
    SharedBreakIterator::SharedBreakIterator(
        BreakIterator *biToAdopt) : ptr(biToAdopt) { }
    
    #if !UCONFIG_NO_BREAK_ITERATION
    
    void    ImGui_ImplOpenGL3_Shutdown()
{
    ImGui_ImplOpenGL3_DestroyDeviceObjects();
}
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}
    
            // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;
    }
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).