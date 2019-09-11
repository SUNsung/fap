
        
        class OpenURIDialog : public QDialog
{
    Q_OBJECT
    }
    
    #include <QDialog>
    
        ~reverse_lock() {
        templock.lock();
        templock.swap(lock);
    }
    
    
    {    /* d = (a0*2) * a3 */
    'leaq (%%r10,%%r10,1),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rbx\n'
    'movq %%rdx,%%rcx\n'
    /* d += (a1*2) * a2 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c = a4 * a4 */
    'movq %%r14,%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* a4 *= 2 */
    'addq %%r14,%%r14\n'
    /* d += a0 * a4 */
    'movq %%r10,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d+= (a1*2) * a3 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a2 * a2 */
    'movq %%r12,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * a0 */
    'movq %%r10,%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a1 * a4 */
    'movq %%r11,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += (a2*2) * a3 */
    'leaq (%%r12,%%r12,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* a0 *= 2 */
    'addq %%r10,%%r10\n'
    /* c += a0 * a1 */
    'movq %%r10,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a2 * a4 */
    'movq %%r12,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a3 * a3 */
    'movq %%r13,%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a0 * a2 (last use of %%r10) */
    'movq %%r10,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0),t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* c += a1 * a1 */
    'movq %%r11,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a3 * a4 */
    'movq %%r13,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rbx only) */
    'shrdq $52,%%rcx,%%rbx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rbx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'D'(r)
: '%rax', '%rbx', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    double UniValue::get_real() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not a number as expected');
    double retval;
    if (!ParseDouble(getValStr(), &retval))
        throw std::runtime_error('JSON double out of range');
    return retval;
}
    
    ROTATE_ARGS
	movdqa	XTMP2, XTMP3	; XTMP2 = W[-15]
    mov	y0, e		; y0 = e
    mov	y1, a		; y1 = a
	movdqa	XTMP4, XTMP3	; XTMP4 = W[-15]
    ror	y0, (25-11)	; y0 = e >> (25-11)
    xor	y0, e		; y0 = e ^ (e >> (25-11))
    mov	y2, f		; y2 = f
    ror	y1, (22-13)	; y1 = a >> (22-13)
	pslld	XTMP3, (32-18)
    xor	y1, a		; y1 = a ^ (a >> (22-13)
    ror	y0, (11-6)	; y0 = (e >> (11-6)) ^ (e >> (25-6))
    xor	y2, g		; y2 = f^g
	psrld	XTMP2, 18
    ror	y1, (13-2)	; y1 = (a >> (13-2)) ^ (a >> (22-2))
    xor	y0, e		; y0 = e ^ (e >> (11-6)) ^ (e >> (25-6))
    and	y2, e		; y2 = (f^g)&e
    ror	y0, 6		; y0 = S1 = (e>>6) & (e>>11) ^ (e>>25)
	pxor	XTMP1, XTMP3
    xor	y1, a		; y1 = a ^ (a >> (13-2)) ^ (a >> (22-2))
    xor	y2, g		; y2 = CH = ((f^g)&e)^g
	psrld	XTMP4, 3	; XTMP4 = W[-15] >> 3
    add	y2, y0		; y2 = S1 + CH
    add	y2, [rsp + _XFER + 1*4]	; y2 = k + w + S1 + CH
    ror	y1, 2		; y1 = S0 = (a>>2) ^ (a>>13) ^ (a>>22)
	pxor	XTMP1, XTMP2	; XTMP1 = W[-15] ror 7 ^ W[-15] ror 18
    mov	y0, a		; y0 = a
    add	h, y2		; h = h + S1 + CH + k + w
    mov	y2, a		; y2 = a
	pxor	XTMP1, XTMP4	; XTMP1 = s0
    or	y0, c		; y0 = a|c
    add	d, h		; d = d + h + S1 + CH + k + w
    and	y2, c		; y2 = a&c
	;; compute low s1
	pshufd	XTMP2, X3, 11111010b	; XTMP2 = W[-2] {BBAA}
    and	y0, b		; y0 = (a|c)&b
    add	h, y1		; h = h + S1 + CH + k + w + S0
	paddd	XTMP0, XTMP1	; XTMP0 = W[-16] + W[-7] + s0
    or	y0, y2		; y0 = MAJ = (a|c)&b)|(a&c)
    add	h, y0		; h = h + S1 + CH + k + w + S0 + MAJ
    
    // Filter policy wrapper that converts from internal keys to user keys
class InternalFilterPolicy : public FilterPolicy {
 private:
  const FilterPolicy* const user_policy_;
 public:
  explicit InternalFilterPolicy(const FilterPolicy* p) : user_policy_(p) { }
  virtual const char* Name() const;
  virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const;
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const;
};
    
    Status FaultInjectionTestEnv::DropUnsyncedFileData() {
  Status s;
  MutexLock l(&mutex_);
  for (std::map<std::string, FileState>::const_iterator it =
           db_file_state_.begin();
       s.ok() && it != db_file_state_.end(); ++it) {
    const FileState& state = it->second;
    if (!state.IsFullySynced()) {
      s = state.DropUnsyncedData();
    }
  }
  return s;
}
    
    std::string LogFileName(const std::string& name, uint64_t number) {
  assert(number > 0);
  return MakeFileName(name, number, 'log');
}
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
extern std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
        if (type == kZeroType && length == 0) {
      // Skip zero length record without reporting any drops since
      // such records are produced by the mmap based writing code in
      // env_posix.cc that preallocates file regions.
      buffer_.clear();
      return kBadRecord;
    }
    
    
    {        err = vkResetFences(g_Device, 1, &fd->Fence);
        check_vk_result(err);
    }
    {
        err = vkResetCommandPool(g_Device, fd->CommandPool, 0);
        check_vk_result(err);
        VkCommandBufferBeginInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        info.flags |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        err = vkBeginCommandBuffer(fd->CommandBuffer, &info);
        check_vk_result(err);
    }
    {
        VkRenderPassBeginInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
        info.renderPass = wd->RenderPass;
        info.framebuffer = fd->Framebuffer;
        info.renderArea.extent.width = wd->Width;
        info.renderArea.extent.height = wd->Height;
        info.clearValueCount = 1;
        info.pClearValues = &wd->ClearValue;
        vkCmdBeginRenderPass(fd->CommandBuffer, &info, VK_SUBPASS_CONTENTS_INLINE);
    }
    
    // Forward declarations of helper functions
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    // Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data)
{
    // Avoid rendering when minimized
    if (draw_data->DisplaySize.x <= 0.0f || draw_data->DisplaySize.y <= 0.0f)
        return;
    }
    
      std::shared_ptr<DHTNode> newNode_;
    
    #include <vector>
#include <string>
#include <memory>
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    
    {} // namespace aria2
    
    #ifndef incl_HPHP_MYSQLSTATS_H_
#define incl_HPHP_MYSQLSTATS_H_
    
              /* Get value of parameter */
          cur = get_node_ex(resp, (char*)name, (char*)ns);
          if (!cur) {
            cur = get_node(resp, (char*)name);
            /* TODO: produce warning invalid ns */
          }
          if (!cur && fnb->style == SOAP_RPC) {
            cur = resp;
          }
          if (cur) {
            if (fnb->style == SOAP_DOCUMENT) {
              val = cur;
            } else {
              val = get_node(cur->children, (char*)param->paramName.c_str());
              if (res_count == 1) {
                if (val == nullptr) {
                  val = get_node(cur->children, 'return');
                }
                if (val == nullptr) {
                  val = get_node(cur->children, 'result');
                }
                if (val == nullptr && cur->children && !cur->children->next) {
                  val = cur->children;
                }
              }
            }
          }
    
    
    { protected:
  RangeState& m_state;
  uint32_t m_maxHugePages{0};
  uint32_t m_currHugePages{0};
  uint32_t m_interleaveMask;            // 0 indicates no NUMA
  short m_nextNode{0};
  bool m_failed{false};
  RangeMapper* m_fallback{nullptr};
};
    
    HealthLevel HostHealthMonitor::evaluate() {
#ifdef USE_JEMALLOC
  mallctl_epoch();
#endif
  HealthLevel res = HealthLevel::Bold;
  std::lock_guard<std::mutex> g(m_lock);
  for (auto metric : m_metrics) {
    res = std::max(res, metric->evaluate());
  }
  return res;
}
    
    std::string insertSchema(const char* path) {
  assert(strstr(repoSchemaId().begin(), kSchemaPlaceholder) == nullptr);
  std::string result = path;
  size_t idx;
  if ((idx = result.find(kSchemaPlaceholder)) != std::string::npos) {
    result.replace(idx, strlen(kSchemaPlaceholder), repoSchemaId().begin());
  }
  return result;
}
    
    struct InlineState {
  /*
   * The current depth of inlining.  0 means we're not inlining.
   */
  uint16_t depth{0};
    }
    
    /**
 * @brief Return true if the failed query is no longer blacklisted.
 *
 * There are two scenarios where a blacklisted query becomes 'unblacklisted'.
 * The first is simple, the amount of time it was blacklisted for has expired.
 * The second is more complex, the query failed but the schedule has requested
 * that the query should not be blacklisted.
 *
 * @param blt The time the query was originally blacklisted.
 * @param query The scheduled query and its options.
 */
static inline bool blacklistExpired(size_t blt, const ScheduledQuery& query) {
  if (getUnixTime() > blt) {
    return true;
  }
    }
    
    Expected<int32_t, DatabaseError> RocksdbDatabase::getInt32(
    const std::string& domain, const std::string& key) {
  Expected<std::string, DatabaseError> buffer = getRawBytes(domain, key);
  if (buffer) {
    std::string value = buffer.take();
    if (BOOST_LIKELY(validateInt32StorageBuffer(value))) {
      int32_t result = *(reinterpret_cast<const int32_t*>(value.data()));
      return ntohl(result);
    } else {
      auto type_error = createError(RocksdbError::UnexpectedValueType)
                        << 'Fetching string as integer';
      auto error =
          createError(DatabaseError::KeyNotFound, std::move(type_error));
      assert(false && error.getMessage().c_str());
      LOG(ERROR) << error.getMessage();
      debug_only::fail(error.getMessage().c_str());
      return std::move(error);
    }
  }
  return buffer.takeError();
}
    
    
    {
    {    auto status = db.db_handle->Get(options,
                                    raw_handle,
                                    std::string('database_schema_version'),
                                    &version_str);
    if (status.IsNotFound()) {
      // Fallback to old version storage
      auto default_family_handle_iter = db.handles.find('default');
      if (default_family_handle_iter != db.handles.end()) {
        status = db.db_handle->Get(options,
                                   default_family_handle_iter->second.get(),
                                   std::string('results_version'),
                                   &version_str);
      }
    }
    if (!status.ok()) {
      return createError(RocksdbMigrationError::FailToGetVersion)
             << status.ToString();
    }
    auto result = tryTo<int>(version_str);
    if (result) {
      return *result;
    }
    return createError(RocksdbMigrationError::FailToGetVersion,
                       result.takeError());
  }
  return createError(RocksdbMigrationError::FailToGetVersion)
         << 'Verion data is not found';
}
    
    enum class RocksdbMigrationError {
  InvalidArgument = 1,
  FailToOpen = 2,
  FailToGetVersion = 3,
  NoMigrationFromCurrentVersion = 5,
  MigrationLogicError = 6,
  FailToOpenSrcDatabase = 7,
  FailMoveDatabase = 8,
};
    
    TEST_F(RocksdbDatabaseTest, test_unknown_key) {
  auto db = std::make_unique<RocksdbDatabase>('test', path_);
  ASSERT_TRUE(db->open());
  EXPECT_TRUE(db->putInt32(kPersistentSettings, 'key', 12));
  auto result = db->getInt32(kPersistentSettings, 'key_');
  EXPECT_FALSE(result);
  EXPECT_EQ(result.takeError(), DatabaseError::KeyNotFound);
}
    
    
    // Constant parameters
    const auto HAND_CCN_DECREASE_FACTOR = 8.f;
    const std::string HAND_PROTOTXT{'hand/pose_deploy.prototxt'};
    const std::string HAND_TRAINED_MODEL{'hand/pose_iter_102000.caffemodel'};