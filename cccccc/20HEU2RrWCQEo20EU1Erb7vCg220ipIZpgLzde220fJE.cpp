
        
        	virtual void poll() = 0;
	virtual Error accept_stream(Ref<StreamPeer> p_base) = 0;
	virtual Error connect_to_stream(Ref<StreamPeer> p_base, bool p_validate_certs = false, const String &p_for_hostname = String()) = 0;
	virtual Status get_status() const = 0;
    
    #include 'io/stream_peer_ssl.h'
    
    #if defined(MBEDTLS_SSL_PROTO_TLS1_2) && ( !defined(MBEDTLS_SHA1_C) &&     \
    !defined(MBEDTLS_SHA256_C) && !defined(MBEDTLS_SHA512_C) )
#error 'MBEDTLS_SSL_PROTO_TLS1_2 defined, but not all prerequisites'
#endif
    
    protected:
	void _notification(int p_what);
	static void _bind_methods();
    
    		case NOTIFICATION_ENTER_TREE: {
    }
    
    	bool initialize();
	bool terminate();
    
    /**
 * oc_ilog32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_32() or OC_ILOGNZ_32() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog32(ogg_uint32_t _v);
/**
 * oc_ilog64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_64() or OC_ILOGNZ_64() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog64(ogg_int64_t _v);
    
      // delete second key range
  batch.Clear();
  for (size_t i = 0; i < kNumKeys; i++) {
    batch.Delete(Key2(i));
  }
  ASSERT_OK(db->Write(leveldb::WriteOptions(), &batch));
    
    static const int kVerbose = 1;
    
    #include 'util/hash.h'
#include 'util/testharness.h'
    
    #ifndef STORAGE_LEVELDB_UTIL_HISTOGRAM_H_
#define STORAGE_LEVELDB_UTIL_HISTOGRAM_H_
    
    namespace leveldb {
    }
    
    #include <stdint.h>
    
    #ifndef STORAGE_LEVELDB_TABLE_BLOCK_H_
#define STORAGE_LEVELDB_TABLE_BLOCK_H_
    
    
    {  // No copying allowed
  BlockBuilder(const BlockBuilder&);
  void operator=(const BlockBuilder&);
};
    
        // Copy and convert all vertices into a single contiguous buffer
    ImDrawVert* vtx_dst = NULL;
    ImDrawIdx* idx_dst = NULL;
    g_pVB->Map(D3D10_MAP_WRITE_DISCARD, 0, (void**)&vtx_dst);
    g_pIB->Map(D3D10_MAP_WRITE_DISCARD, 0, (void**)&idx_dst);
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        memcpy(vtx_dst, cmd_list->VtxBuffer.Data, cmd_list->VtxBuffer.Size * sizeof(ImDrawVert));
        memcpy(idx_dst, cmd_list->IdxBuffer.Data, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
        vtx_dst += cmd_list->VtxBuffer.Size;
        idx_dst += cmd_list->IdxBuffer.Size;
    }
    g_pVB->Unmap();
    g_pIB->Unmap();
    
            const float ascent = font_face.Info.Ascender;
        const float descent = font_face.Info.Descender;
        ImFontAtlasBuildSetupFont(atlas, dst_font, &cfg, ascent, descent);
        const float off_x = cfg.GlyphOffset.x;
        const float off_y = cfg.GlyphOffset.y + (float)(int)(dst_font->Ascent + 0.5f);
    
        // Show the window
    ShowWindow(hwnd, SW_SHOWDEFAULT);
    UpdateWindow(hwnd);
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    TEST(IOBuf, pushEmptyByteRange) {
  // Test pushing an empty ByteRange.  This mainly tests that we do not
  // trigger UBSAN warnings by calling memcpy() with an null source pointer,
  // which is undefined behavior even if the length is 0.
  IOBuf buf{IOBuf::CREATE, 2};
  ByteRange emptyBytes;
    }
    
    
    {  {
    const auto start = Clock::now();
    const auto deadline = time_point_cast<Duration>(
        start - 2 * start.time_since_epoch());
    EXPECT_EQ(f.futexWaitUntil(0, deadline), FutexResult::TIMEDOUT);
    LOG(INFO) << 'Futex wait with invalid deadline timed out after waiting for '
              << duration_cast<milliseconds>(Clock::now() - start).count()
              << 'ms using clock with ' << Duration::period::den
              << ' precision, should be ~0ms';
  }
}
    
    #pragma once
    
    #endif

    
      // when we know more data has been written to the file. we can use this
  // function to force the reader to look again in the file.
  // Also aligns the file position indicator to the start of the next block
  // by reading the rest of the data from the EOF position to the end of the
  // block that was partially read.
  void UnmarkEOF();
    
    
    {   private:
     const std::set<uint32_t> m_ignore_histograms;
 };
    
      /**
   * @brief append data to file
   * @details
   *  Append will save all written data in buffer util buffer size
   *  reaches buffer max size. Then, it will write buffer into rados
   *
   * @param data [description]
   * @return [description]
   */
  Status Append(const Slice& data) {
    // append buffer
    LOG_DEBUG('[IN] %i | %s\n', (int)data.size(), data.data());
    int r = 0;
    }
    
      // Drop reference count.
  // If the refcount goes to zero return this memtable, otherwise return null.
  // REQUIRES: external synchronization to prevent simultaneous
  // operations on the same MemTable.
  MemTable* Unref() {
    --refs_;
    assert(refs_ >= 0);
    if (refs_ <= 0) {
      return this;
    }
    return nullptr;
  }
    
    TEST_F(InlineSkipTest, InsertWithHint_Sequential) {
  const int N = 100000;
  Arena arena;
  TestComparator cmp;
  TestInlineSkipList list(cmp, &arena);
  void* hint = nullptr;
  for (int i = 0; i < N; i++) {
    Key key = i;
    InsertWithHint(&list, key, &hint);
  }
  Validate(&list);
}
    
    void AbstractOptionHandler::setChangeOption(bool f)
{
  updateFlags(FLAG_CHANGE_OPTION, f);
}
    
    protected:
  virtual bool executeInternal() CXX11_OVERRIDE;
    
    namespace aria2 {
    }
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
      virtual bool getVerifyPeer() const CXX11_OVERRIDE { return verifyPeer_; }