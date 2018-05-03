
        
        
    { private:
  DISALLOW_COPY_AND_ASSIGN(URLRequestAsyncAsarJob);
};
    
    
    {}  // namespace atom
    
      // ui::EventRewriter:
  ui::EventRewriteStatus RewriteEvent(
      const ui::Event& event,
      std::unique_ptr<ui::Event>* rewritten_event) override;
  ui::EventRewriteStatus NextDispatchEvent(
      const ui::Event& last_event,
      std::unique_ptr<ui::Event>* new_event) override;
    
    namespace atom {
    }
    
    class UnresponsiveSuppressor {
 public:
  UnresponsiveSuppressor();
  ~UnresponsiveSuppressor();
    }
    
    #include <memory>
    
    #ifndef ATOM_COMMON_API_REMOTE_CALLBACK_FREER_H_
#define ATOM_COMMON_API_REMOTE_CALLBACK_FREER_H_
#include 'atom/common/api/object_life_monitor.h'
#include 'content/public/browser/web_contents_observer.h'
    
    // Attempts to send the current command line to an already running instance of
// Chrome via a WM_COPYDATA message.
// Returns true if a running Chrome is found and successfully notified.
// |fast_start| is true when this is being called on the window fast start path.
NotifyChromeResult AttemptToNotifyRunningChrome(HWND remote_window,
                                                bool fast_start);
    
    #include <windows.h>
    
      // Sets time interval between updates. By default list of sources and their
  // thumbnail are updated once per second. If called after StartUpdating() then
  // it will take effect only after the next update.
  virtual void SetUpdatePeriod(base::TimeDelta period) = 0;
    
      base::Lock mutex_;  // Protects the two members below.
  // Whether one request to FetchMonitorFromWidget() has been made already.
  bool request_sent_;
  // The native display ID for the RenderFrameHost.
  CGDirectDisplayID display_id_;
    
      // ppapi::host::ResourceMessageFilter implementation.
  scoped_refptr<base::TaskRunner> OverrideTaskRunnerForMessage(
      const IPC::Message& msg) override;
  int32_t OnResourceMessageReceived(
      const IPC::Message& msg,
      ppapi::host::HostMessageContext* context) override;
    
    void leveldb_delete(
    leveldb_t* db,
    const leveldb_writeoptions_t* options,
    const char* key, size_t keylen,
    char** errptr) {
  SaveError(errptr, db->rep->Delete(options->rep, Slice(key, keylen)));
}
    
    TEST(FormatTest, InternalKey_EncodeDecode) {
  const char* keys[] = { '', 'k', 'hello', 'longggggggggggggggggggggg' };
  const uint64_t seq[] = {
    1, 2, 3,
    (1ull << 8) - 1, 1ull << 8, (1ull << 8) + 1,
    (1ull << 16) - 1, 1ull << 16, (1ull << 16) + 1,
    (1ull << 32) - 1, 1ull << 32, (1ull << 32) + 1
  };
  for (int k = 0; k < sizeof(keys) / sizeof(keys[0]); k++) {
    for (int s = 0; s < sizeof(seq) / sizeof(seq[0]); s++) {
      TestKey(keys[k], seq[s], kTypeValue);
      TestKey('hello', 1, kTypeDeletion);
    }
  }
}
    
    
    {  std::vector< std::pair<int, InternalKey> > compact_pointers_;
  DeletedFileSet deleted_files_;
  std::vector< std::pair<int, FileMetaData> > new_files_;
};
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    namespace {
class MemTableInserter : public WriteBatch::Handler {
 public:
  SequenceNumber sequence_;
  MemTable* mem_;
    }
    }
    
        // FLAGS_page_size is defaulted to 1024
    if (FLAGS_page_size != 1024) {
      char page_size[100];
      snprintf(page_size, sizeof(page_size), 'PRAGMA page_size = %d',
               FLAGS_page_size);
      status = sqlite3_exec(db_, page_size, NULL, NULL, &err_msg);
      ExecErrorCheck(status, err_msg);
    }
    
    // Comma-separated list of operations to run in the specified order
//   Actual benchmarks:
//
//   fillseq       -- write N values in sequential key order in async mode
//   fillrandom    -- write N values in random key order in async mode
//   overwrite     -- overwrite N values in random key order in async mode
//   fillseqsync   -- write N/100 values in sequential key order in sync mode
//   fillrandsync  -- write N/100 values in random key order in sync mode
//   fillrand100K  -- write N/1000 100K values in random order in async mode
//   fillseq100K   -- write N/1000 100K values in seq order in async mode
//   readseq       -- read N times sequentially
//   readseq100K   -- read N/1000 100K values in sequential order in async mode
//   readrand100K  -- read N/1000 100K values in sequential order in async mode
//   readrandom    -- read N times in random order
static const char* FLAGS_benchmarks =
    'fillseq,'
    'fillseqsync,'
    'fillrandsync,'
    'fillrandom,'
    'overwrite,'
    'readrandom,'
    'readseq,'
    'fillrand100K,'
    'fillseq100K,'
    'readseq100K,'
    'readrand100K,'
    ;
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
      if (!getenv('HHVM_JIT_TIMER_NO_SORT')) {
    auto totalSort = [] (const TimerName& a, const TimerName& b) {
      return s_counters[a.name].total > s_counters[b.name].total;
    };
    std::sort(begin(names_copy), end(names_copy), totalSort);
  }
    
      static void GetRealtimeTime(timespec &sp);
  static void GetMonotonicTime(timespec &sp);
  static int64_t GetCurrentTimeMicros();
  static int64_t GetRusageMicros(Type t, Who who);
  static int64_t GetThreadCPUTimeNanos();
  const char *getName() const;
  int64_t getMicroSeconds() const;
  void report() const;
    
    
void Instruction::SetBranchImmTarget(Instruction* target) {
  assert(((target - this) & 3) == 0);
  Instr branch_imm = 0;
  uint32_t imm_mask = 0;
  int offset = (target - this) >> kInstructionSizeLog2;
  switch (BranchType()) {
    case CondBranchType: {
      branch_imm = Assembler::ImmCondBranch(offset);
      imm_mask = ImmCondBranch_mask;
      break;
    }
    case UncondBranchType: {
      branch_imm = Assembler::ImmUncondBranch(offset);
      imm_mask = ImmUncondBranch_mask;
      break;
    }
    case CompareBranchType: {
      branch_imm = Assembler::ImmCmpBranch(offset);
      imm_mask = ImmCmpBranch_mask;
      break;
    }
    case TestBranchType: {
      branch_imm = Assembler::ImmTestBranch(offset);
      imm_mask = ImmTestBranch_mask;
      break;
    }
    default: not_reached();
  }
  SetInstructionBits(Mask(~imm_mask) | branch_imm);
}
    
    /*
 * Clean up any /tmp files that we created at process shutdown time.
 */
void embedded_data_cleanup();
    
    CurlShareResource::CurlShareResource() {
  m_share = curl_share_init();
}
    
    #include 'hphp/runtime/vm/jit/abi.h'
#include 'hphp/runtime/vm/jit/arg-group.h'
#include 'hphp/runtime/vm/jit/bc-marker.h'
#include 'hphp/runtime/vm/jit/call-spec.h'
#include 'hphp/runtime/vm/jit/code-gen-helpers.h'
#include 'hphp/runtime/vm/jit/extra-data.h'
#include 'hphp/runtime/vm/jit/ir-instruction.h'
#include 'hphp/runtime/vm/jit/ir-opcode.h'
#include 'hphp/runtime/vm/jit/prof-data.h'
#include 'hphp/runtime/vm/jit/ssa-tmp.h'
#include 'hphp/runtime/vm/jit/tc.h'
#include 'hphp/runtime/vm/jit/translator-inline.h'
#include 'hphp/runtime/vm/jit/types.h'
#include 'hphp/runtime/vm/jit/unique-stubs.h'
#include 'hphp/runtime/vm/jit/vasm-gen.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-reg.h'
#include 'hphp/runtime/vm/jit/write-lease.h'
    
    
    {	String idbfs_err = String::utf8(p_idbfs_err);
	if (!idbfs_err.empty()) {
		print_line('IndexedDB not available: ' + idbfs_err);
	}
	os->set_idbfs_available(idbfs_err.empty());
	// Ease up compatibility
	ResourceLoader::set_abort_on_missing_resources(false);
	Main::start();
	os->main_loop_begin();
	emscripten_set_main_loop(main_loop, 0, false);
}
    
    // YCbCr H1V1 (1x1:1:1, 3 m_blocks per MCU) to RGB
void jpeg_decoder::H1V1Convert()
{
  int row = m_max_mcu_y_size - m_mcu_lines_left;
  uint8 *d = m_pScan_line_0;
  uint8 *s = m_pSample_buf + row * 8;
    }
    
        jmp_buf m_jmp_state;
    mem_block *m_pMem_blocks;
    int m_image_x_size;
    int m_image_y_size;
    jpeg_decoder_stream *m_pStream;
    int m_progressive_flag;
    uint8 m_huff_ac[JPGD_MAX_HUFF_TABLES];
    uint8* m_huff_num[JPGD_MAX_HUFF_TABLES];      // pointer to number of Huffman codes per bit size
    uint8* m_huff_val[JPGD_MAX_HUFF_TABLES];      // pointer to Huffman codes per bit size
    jpgd_quant_t* m_quant[JPGD_MAX_QUANT_TABLES]; // pointer to quantization tables
    int m_scan_type;                              // Gray, Yh1v1, Yh1v2, Yh2v1, Yh2v2 (CMYK111, CMYK4114 no longer supported)
    int m_comps_in_frame;                         // # of components in frame
    int m_comp_h_samp[JPGD_MAX_COMPONENTS];       // component's horizontal sampling factor
    int m_comp_v_samp[JPGD_MAX_COMPONENTS];       // component's vertical sampling factor
    int m_comp_quant[JPGD_MAX_COMPONENTS];        // component's quantization table selector
    int m_comp_ident[JPGD_MAX_COMPONENTS];        // component's ID
    int m_comp_h_blocks[JPGD_MAX_COMPONENTS];
    int m_comp_v_blocks[JPGD_MAX_COMPONENTS];
    int m_comps_in_scan;                          // # of components in scan
    int m_comp_list[JPGD_MAX_COMPS_IN_SCAN];      // components in this scan
    int m_comp_dc_tab[JPGD_MAX_COMPONENTS];       // component's DC Huffman coding table selector
    int m_comp_ac_tab[JPGD_MAX_COMPONENTS];       // component's AC Huffman coding table selector
    int m_spectral_start;                         // spectral selection start
    int m_spectral_end;                           // spectral selection end
    int m_successive_low;                         // successive approximation low
    int m_successive_high;                        // successive approximation high
    int m_max_mcu_x_size;                         // MCU's max. X size in pixels
    int m_max_mcu_y_size;                         // MCU's max. Y size in pixels
    int m_blocks_per_mcu;
    int m_max_blocks_per_row;
    int m_mcus_per_row, m_mcus_per_col;
    int m_mcu_org[JPGD_MAX_BLOCKS_PER_MCU];
    int m_total_lines_left;                       // total # lines left in image
    int m_mcu_lines_left;                         // total # lines left in this MCU
    int m_real_dest_bytes_per_scan_line;
    int m_dest_bytes_per_scan_line;               // rounded up
    int m_dest_bytes_per_pixel;                   // 4 (RGB) or 1 (Y)
    huff_tables* m_pHuff_tabs[JPGD_MAX_HUFF_TABLES];
    coeff_buf* m_dc_coeffs[JPGD_MAX_COMPONENTS];
    coeff_buf* m_ac_coeffs[JPGD_MAX_COMPONENTS];
    int m_eob_run;
    int m_block_y_mcu[JPGD_MAX_COMPONENTS];
    uint8* m_pIn_buf_ofs;
    int m_in_buf_left;
    int m_tem_flag;
    bool m_eof_flag;
    uint8 m_in_buf_pad_start[128];
    uint8 m_in_buf[JPGD_IN_BUF_SIZE + 128];
    uint8 m_in_buf_pad_end[128];
    int m_bits_left;
    uint m_bit_buf;
    int m_restart_interval;
    int m_restarts_left;
    int m_next_restart_num;
    int m_max_mcus_per_row;
    int m_max_blocks_per_mcu;
    int m_expanded_blocks_per_mcu;
    int m_expanded_blocks_per_row;
    int m_expanded_blocks_per_component;
    bool  m_freq_domain_chroma_upsample;
    int m_max_mcus_per_col;
    uint m_last_dc_val[JPGD_MAX_COMPONENTS];
    jpgd_block_t* m_pMCU_coefficients;
    int m_mcu_block_max_zag[JPGD_MAX_BLOCKS_PER_MCU];
    uint8* m_pSample_buf;
    int m_crr[256];
    int m_cbb[256];
    int m_crg[256];
    int m_cbg[256];
    uint8* m_pScan_line_0;
    uint8* m_pScan_line_1;
    jpgd_status m_error_code;
    bool m_ready_flag;
    int m_total_bytes_read;
    
    #endif /* HAVE_ARM_NE10 */
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
        if (sub_batch->Has(String::NewSymbol('column_family'))) {
      if (!has_key_for_array(sub_batch, 'put') &&
          !has_key_for_array(sub_batch, 'delete')) {
        return scope.Close(Boolean::New(false));
      }
    }
    
     public: // Insert/Update
  /// Insert value before/after pivot in (list: key). Return the length.
  /// May throw RedisListException
  int InsertBefore(const std::string& key, const std::string& pivot,
                   const std::string& value);
  int InsertAfter(const std::string& key, const std::string& pivot,
                  const std::string& value);
    
     private:
  std::shared_ptr<Logger> info_log_;
  const unique_ptr<SequentialFileReader> file_;
  Reporter* const reporter_;
  bool const checksum_;
  char* const backing_store_;
  Slice buffer_;
  bool eof_;   // Last Read() indicated EOF by returning < kBlockSize
  bool read_error_;   // Error occurred while reading from file
    
    
    {   private:
     const std::set<uint32_t> m_ignore_histograms;
 };
    
    
    {  void clear() {
    user_key.clear();
    sequence = 0;
    type = kTypeDeletion;
  }
};