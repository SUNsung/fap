
        
        namespace leveldb {
    }
    
    void leveldb_iter_destroy(leveldb_iterator_t* iter) {
  delete iter->rep;
  delete iter;
}
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
    // Make the CURRENT file point to the descriptor file with the
// specified number.
extern Status SetCurrentFile(Env* env, const std::string& dbname,
                             uint64_t descriptor_number);
    
    struct FileMetaData {
  int refs;
  int allowed_seeks;          // Seeks allowed until compaction
  uint64_t number;
  uint64_t file_size;         // File size in bytes
  InternalKey smallest;       // Smallest internal key served by table
  InternalKey largest;        // Largest internal key served by table
    }
    
    namespace leveldb {
    }
    
    #endif  // STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_

    
    
    {  // 'filter' contains the data appended by a preceding call to
  // CreateFilter() on this class.  This method must return true if
  // the key was in the list of keys passed to CreateFilter().
  // This method may return true or false if the key was not on the
  // list, but it should aim to return false with a high probability.
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const = 0;
};
    
    	if (PathFileExists(cpuCfgPath)) {
		if (PathFileExists(cfgPath)) {
			if (!CopyFile(cfgPath, cpuCfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu.xml file to ConEmu-%COMPUTERNAME%.xml backup location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu.xml file to ConEmu-%COMPUTERNAME%.xml backup location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
		else
		{
			if (!CopyFile(cpuCfgPath, cfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu-%COMPUTERNAME%.xml file to vendored ConEmu.xml location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu-%COMPUTERNAME%.xml file to vendored ConEmu.xml location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
	}
	else if (PathFileExists(userCfgPath)) {
		if (PathFileExists(cfgPath)) {
			if (!CopyFile(cfgPath, userCfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu.xml file to backup location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu.xml file to backup location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
		else
		{
			if (!CopyFile(userCfgPath, cfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu.xml file to vendored ConEmu.xml location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu.xml file to vendored ConEmu.xml location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
	}
	else if (PathFileExists(cfgPath)) {
		if (!CopyFile(cfgPath, userCfgPath, FALSE))
		{
			MessageBox(NULL,
				(GetLastError() == ERROR_ACCESS_DENIED)
				? L'Failed to copy ConEmu.xml file to user-conemu.xml backup location! Restart Cmder as Administrator.'
				: L'Failed to copy ConEmu.xml file to user-conemu.xml backup location!', MB_TITLE, MB_ICONSTOP);
			exit(1);
		}
	}
	else {
		if (!CopyFile(defaultCfgPath, cfgPath, FALSE))
		{
			MessageBox(NULL,
				(GetLastError() == ERROR_ACCESS_DENIED)
				? L'Failed to copy Cmder default ConEmu.xml file to vendored ConEmu.xml location! Restart Cmder as Administrator.'
				: L'Failed to copy Cmder default ConEmu.xml file to vendored ConEmu.xml location!', MB_TITLE, MB_ICONSTOP);
			exit(1);
		}
	}
    
    /// See FLAG, but EXTENSION_FLAG%s are only available to extensions.
#define EXTENSION_FLAG(t, n, v, d) OSQUERY_FLAG(t, n, v, d, 0, 1, 0, 0)
    
      // Enables use of gtest (ASSERT|EXPECT)_NE
  bool operator!=(const Status& rhs) const { return !operator==(rhs); }
    
     protected:
  void SetUp() override {
    createMockFileStructure();
  }
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    namespace osquery {
    }
    
                // FIXME-OPT: Merge the different loops, possibly remove the temporary buffer.
            unsigned int idx1 = _VtxCurrentIdx;
            for (int i1 = 0; i1 < count; i1++)
            {
                const int i2 = (i1+1) == points_count ? 0 : i1+1;
                unsigned int idx2 = (i1+1) == points_count ? _VtxCurrentIdx : idx1+3;
    }
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSdlGL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
        }
        ImGui_ImplSdlGL2_NewFrame(window);
    }
    
    
    {    (void)mods; // Modifiers are not reliable across systems
    io.KeyCtrl = io.KeysDown[GLFW_KEY_LEFT_CONTROL] || io.KeysDown[GLFW_KEY_RIGHT_CONTROL];
    io.KeyShift = io.KeysDown[GLFW_KEY_LEFT_SHIFT] || io.KeysDown[GLFW_KEY_RIGHT_SHIFT];
    io.KeyAlt = io.KeysDown[GLFW_KEY_LEFT_ALT] || io.KeysDown[GLFW_KEY_RIGHT_ALT];
    io.KeySuper = io.KeysDown[GLFW_KEY_LEFT_SUPER] || io.KeysDown[GLFW_KEY_RIGHT_SUPER];
}
    
        void SetStaticObjectField(jclass clazz, jfieldID fieldID, jobject value)
    { functions->SetStaticObjectField(this, clazz, fieldID, value); }
    void SetStaticBooleanField(jclass clazz, jfieldID fieldID, jboolean value)
    { functions->SetStaticBooleanField(this, clazz, fieldID, value); }
    void SetStaticByteField(jclass clazz, jfieldID fieldID, jbyte value)
    { functions->SetStaticByteField(this, clazz, fieldID, value); }
    void SetStaticCharField(jclass clazz, jfieldID fieldID, jchar value)
    { functions->SetStaticCharField(this, clazz, fieldID, value); }
    void SetStaticShortField(jclass clazz, jfieldID fieldID, jshort value)
    { functions->SetStaticShortField(this, clazz, fieldID, value); }
    void SetStaticIntField(jclass clazz, jfieldID fieldID, jint value)
    { functions->SetStaticIntField(this, clazz, fieldID, value); }
    void SetStaticLongField(jclass clazz, jfieldID fieldID, jlong value)
    { functions->SetStaticLongField(this, clazz, fieldID, value); }
    void SetStaticFloatField(jclass clazz, jfieldID fieldID, jfloat value)
    { functions->SetStaticFloatField(this, clazz, fieldID, value); }
    void SetStaticDoubleField(jclass clazz, jfieldID fieldID, jdouble value)
    { functions->SetStaticDoubleField(this, clazz, fieldID, value); }
    
    #pragma once
    
    class ProgramLocation {
public:
  ProgramLocation() : m_functionName('Unspecified'), m_fileName('Unspecified'), m_lineNumber(0) {}
    }
    
      T *get() const {
    return (T*)pthread_getspecific(m_key);
  }
    
    #if ENABLE_FBASSERT
#define FBASSERTMSGF(expr, msg, ...) !(expr) ? facebook::assertInternal('Assert (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__) : (void) 0
#else
#define FBASSERTMSGF(expr, msg, ...)
#endif // ENABLE_FBASSERT
    
    #include <cassert>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>
    
    #endif // LIBFUZZER_APPLE

    
    static FILE *OutputFile = stderr;
    
    
    {}  // namespace fuzzer
    
    using namespace std::chrono;
    
    void sha1_addUncounted(sha1nfo *s, uint8_t data) {
	uint8_t * const b = (uint8_t*) s->buffer;
#ifdef SHA_BIG_ENDIAN
	b[s->bufferOffset] = data;
#else
	b[s->bufferOffset ^ 3] = data;
#endif
	s->bufferOffset++;
	if (s->bufferOffset == BLOCK_LENGTH) {
		sha1_hashBlock(s);
		s->bufferOffset = 0;
	}
}