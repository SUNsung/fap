
        
        #include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
    
    
    {} // namespace caffe2
    
    
    {  // The 64 records in the first two log blocks are completely lost.
  Check(36, 36);
}
    
    
    {    // Just keep the messages from one thread
    if (message_.empty()) message_ = other.message_;
  }
    
    #include <stdint.h>
#include 'leveldb/db.h'
#include 'db/dbformat.h'
    
            Reopen();
        ASSERT_TRUE(CompareIterators(step, &model, db_, nullptr, nullptr));
    
      ASSERT_TRUE(ParseInternalKey(in, &decoded));
  ASSERT_EQ(key, decoded.user_key.ToString());
  ASSERT_EQ(seq, decoded.sequence);
  ASSERT_EQ(vt, decoded.type);
    
    std::string LockFileName(const std::string& dbname) {
  return dbname + '/LOCK';
}
    
    #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
    size_t LogTest::initial_offset_record_sizes_[] =
    {10000,  // Two sizable records in first block
     10000,
     2 * log::kBlockSize - 1000,  // Span three blocks
     1,
     13716,  // Consume all but two bytes of block 3.
     log::kBlockSize - kHeaderSize, // Consume the entirety of block 4.
    };
    
        const size_t avail = kBlockSize - block_offset_ - kHeaderSize;
    const size_t fragment_length = (left < avail) ? left : avail;
    
     private:
  MemTable::Table::Iterator iter_;
  std::string tmp_;       // For passing to EncodeKey
    
      void ScanTable(uint64_t number) {
    TableInfo t;
    t.meta.number = number;
    std::string fname = TableFileName(dbname_, number);
    Status status = env_->GetFileSize(fname, &t.meta.file_size);
    if (!status.ok()) {
      // Try alternate file name.
      fname = SSTTableFileName(dbname_, number);
      Status s2 = env_->GetFileSize(fname, &t.meta.file_size);
      if (s2.ok()) {
        status = Status::OK();
      }
    }
    if (!status.ok()) {
      ArchiveFile(TableFileName(dbname_, number));
      ArchiveFile(SSTTableFileName(dbname_, number));
      Log(options_.info_log, 'Table #%llu: dropped: %s',
          (unsigned long long) t.meta.number,
          status.ToString().c_str());
      return;
    }
    }
    
    
    {        // Advance to next key in the valid key space
        if (key(pos) < key(current)) {
          pos = MakeKey(key(pos) + 1, 0);
        } else {
          pos = MakeKey(key(pos), gen(pos) + 1);
        }
      }
    
    //---- Include imgui_user.h at the end of imgui.h as a convenience
//#define IMGUI_INCLUDE_IMGUI_USER_H
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
        glutMainLoop();
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
    
        // You can set those flags on a per font basis in ImFontConfig::RasterizerFlags.
    // Use the 'extra_flags' parameter of BuildFontAtlas() to force a flag on all your fonts.
    enum RasterizerFlags
    {
        // By default, hinting is enabled and the font's native hinter is preferred over the auto-hinter.
        NoHinting       = 1 << 0,   // Disable hinting. This generally generates 'blurrier' bitmap glyphs when the glyph are rendered in any of the anti-aliased modes.
        NoAutoHint      = 1 << 1,   // Disable auto-hinter.
        ForceAutoHint   = 1 << 2,   // Indicates that the auto-hinter is preferred over the font's native hinter.
        LightHinting    = 1 << 3,   // A lighter hinting algorithm for gray-level modes. Many generated glyphs are fuzzier but better resemble their original shape. This is achieved by snapping glyphs to the pixel grid only vertically (Y-axis), as is done by Microsoft's ClearType and Adobe's proprietary font renderer. This preserves inter-glyph spacing in horizontal text.
        MonoHinting     = 1 << 4,   // Strong hinting algorithm that should only be used for monochrome output.
        Bold            = 1 << 5,   // Styling: Should we artificially embolden the font?
        Oblique         = 1 << 6    // Styling: Should we slant the font, emulating italic style?
    };
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
      int64_t num_record_drop_hidden = 0;
  int64_t num_record_drop_obsolete = 0;
  int64_t num_record_drop_range_del = 0;
  int64_t num_range_del_drop_obsolete = 0;
  // Deletions obsoleted before bottom level due to file gap optimization.
  int64_t num_optimized_del_drop_obsolete = 0;
  uint64_t total_filter_time = 0;
    
      PinnableSlice pinnable_val;
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key1', &pinnable_val);
  assert(s.IsNotFound());
  // Reset PinnableSlice after each use and before each reuse
  pinnable_val.Reset();
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
  assert(pinnable_val == 'value');
  pinnable_val.Reset();
  // The Slice pointed by pinnable_val is not valid after this point
    
    #pragma once
#ifndef ROCKSDB_LITE
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    TEST(ByteTest, CopyConstructor) {
  unsigned char byte_value = 0xFF;
  Byte value(&byte_value);
  Byte another_value(value);
  EXPECT_EQ(another_value.to_hex_string(), value.to_hex_string());
  EXPECT_EQ(another_value.to_binary_string(), value.to_binary_string());
}
    
    /**
 * @file : spline_1d_seg.cc
 * @brief: polynomial smoothing spline segment
 **/
    
    GemMessageManager::GemMessageManager() {
  // Control Messages
  AddSendProtocolData<Accelcmd67, true>();
  AddSendProtocolData<Brakecmd6b, true>();
  AddSendProtocolData<Globalcmd69, true>();
  AddSendProtocolData<Headlightcmd76, true>();
  AddSendProtocolData<Horncmd78, true>();
  AddSendProtocolData<Shiftcmd65, true>();
  AddSendProtocolData<Steeringcmd6d, true>();
  AddSendProtocolData<Turncmd63, true>();
  AddSendProtocolData<Wipercmd90, true>();
    }
    
    TEST_F(GemMessageManagerTest, GetSendProtocols) {
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Accelcmd67::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Brakecmd6b::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Globalcmd69::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Headlightcmd76::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Horncmd78::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Shiftcmd65::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Steeringcmd6d::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Turncmd63::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Wipercmd90::ID) != nullptr);
}
    
    
    {  double ret = x * 0.001000;
  return ret;
}
    
    #include 'modules/canbus/vehicle/gem/protocol/accel_rpt_68.h'
    
    using ::apollo::drivers::canbus::Byte;
    
    // config detail: {'name': 'brake_on_off', 'enum': {0: 'BRAKE_ON_OFF_OFF', 1:
// 'BRAKE_ON_OFF_ON'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False,
// 'offset': 0.0, 'physical_range': '[0|1]', 'bit': 48, 'type': 'enum', 'order':
// 'motorola', 'physical_unit': ''}
Brake_rpt_6c::Brake_on_offType Brakerpt6c::brake_on_off(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(0, 1);
    }
    
    #define SIZE    100
    
        for (i = 1; i < 1024; i++)
    {
        uint32_t key = (rand() % (20000 * 37));
        if (key % 37 == 0)
        {
            continue;
        }
        int ret = (int) (long) swRbtree_find(tree, key);
        ASSERT_EQ(ret, 0);
    }
    
            int setContext(redisAsyncContext * ac) {
            if (ac->ev.data != NULL) {
                return REDIS_ERR;
            }
            m_ctx = ac;
            m_ctx->ev.data = this;
            m_ctx->ev.addRead = RedisQtAddRead;
            m_ctx->ev.delRead = RedisQtDelRead;
            m_ctx->ev.addWrite = RedisQtAddWrite;
            m_ctx->ev.delWrite = RedisQtDelWrite;
            m_ctx->ev.cleanup = RedisQtCleanup;
            return REDIS_OK;
        }
    
    
    {    friend
    void getCallback(redisAsyncContext *, void *, void *);
};
    
        _pipe = eventfd(0, 0);
    
    using namespace swoole;
    
                wait_task *task = nullptr;
            if (waitpid_map.find(__pid) != waitpid_map.end())
            {
                task = waitpid_map[__pid];
                waitpid_map.erase(__pid);
            }
            else if (!wait_list.empty())
            {
                task = wait_list.front();
                wait_list.pop();
            }
            else
            {
                child_processes[__pid] = __stat_loc;
            }