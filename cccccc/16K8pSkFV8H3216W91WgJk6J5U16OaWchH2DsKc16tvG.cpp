
        
        #include <grpcpp/security/auth_context.h>
    
    #include <grpc/support/port_platform.h>
    
      void Destroy(grpc_call_element* elem, const grpc_call_final_info* final_info,
               grpc_closure* then_call_closure) override;
    
    
    {  const protobuf::FileDescriptor* file_desc =
      descriptor_pool_->FindFileContainingSymbol(symbol);
  if (file_desc == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'Symbol not found.');
  }
  std::unordered_set<grpc::string> seen_files;
  FillFileDescriptorResponse(file_desc, response, &seen_files);
  return Status::OK;
}
    
    #if !defined(GPR_LINUX) && !defined(GPR_WINDOWS) && !defined(GPR_APPLE)
    
    #endif  // GPR_WINDOWS

    
    TEST(AutoCompactTest, ReadHalf) {
  DoReads(kCount/2);
}
    
      fname = TempFileName('tmp', 999);
  ASSERT_EQ('tmp/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(999, number);
  ASSERT_EQ(kTempFile, type);
    
    namespace leveldb {
namespace log {
    }
    }
    
    Status TableCache::Get(const ReadOptions& options,
                       uint64_t file_number,
                       uint64_t file_size,
                       const Slice& k,
                       void* arg,
                       void (*saver)(void*, const Slice&, const Slice&)) {
  Cache::Handle* handle = nullptr;
  Status s = FindTable(file_number, file_size, &handle);
  if (s.ok()) {
    Table* t = reinterpret_cast<TableAndFile*>(cache_->Value(handle))->table;
    s = t->InternalGet(options, k, arg, saver);
    cache_->Release(handle);
  }
  return s;
}
    
    class TableCache {
 public:
  TableCache(const std::string& dbname, const Options& options, int entries);
  ~TableCache();
    }
    
    U_NAMESPACE_BEGIN
    
    //----------------------------------------------------------------------------
//
//  ScriptSet implementation
//
//----------------------------------------------------------------------------
ScriptSet::ScriptSet() {
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        bits[i] = 0;
    }
}
    
    U_NAMESPACE_END
    
        /**
     * Get maximum significant digits. INT32_MAX means no maximum.
     */
    int32_t getMax() const {
        return fMax;
    }
    
    U_NAMESPACE_BEGIN
    
        /**
     * Returns TRUE if this class can format positiveValue using
     * the given range of digit counts.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UBool canFormat(
            int32_t positiveValue, const IntDigitCountRange &range);
    
    /**
 * UnicodeFunctor API.  Cast 'this' to a UnicodeReplacer* pointer
 * and return the pointer.
 */
UnicodeReplacer* StringMatcher::toReplacer() const {
  StringMatcher  *nonconst_this = const_cast<StringMatcher *>(this);
  UnicodeReplacer *nonconst_base = static_cast<UnicodeReplacer *>(nonconst_this);
  
  return nonconst_base;
}
    
      virtual ~Extension_call_args() throw();
  std::string registry;
  std::string item;
  ExtensionPluginRequest request;
    
    typedef struct _ExtensionManager_registerExtension_presult__isset {
  _ExtensionManager_registerExtension_presult__isset() : success(false) {}
  bool success :1;
} _ExtensionManager_registerExtension_presult__isset;
    
      _ExtensionStatus__isset __isset;
    
    
    {
    {
    {    osquery::Row r;
    for (i = 0; i < nArg; ++i) {
      if (azCol[i] != nullptr) {
        r[std::string(azCol[i])] = (azArg[i] == nullptr)
                                       ? osquery::FLAGS_nullvalue
                                       : std::string(azArg[i]);
      }
    }
    osquery::computeRowLengths(r, p->prettyPrint->lengths);
    p->prettyPrint->results.push_back(r);
    break;
  }
  case MODE_Line: {
    int w = 5;
    if (azArg == nullptr) {
      break;
    }
    for (i = 0; i < nArg; i++) {
      int len = strlen30(azCol[i] != nullptr ? azCol[i] : '');
      if (len > w) {
        w = len;
      }
    }
    if (p->cnt++ > 0) {
      fprintf(p->out, '\n');
    }
    for (i = 0; i < nArg; i++) {
      fprintf(p->out,
              '%*s = %s\n',
              w,
              azCol[i],
              azArg[i] != nullptr ? azArg[i] : p->nullvalue);
    }
    break;
  }
  case MODE_Column: {
    if (p->cnt++ == 0) {
      for (i = 0; i < nArg; i++) {
        int w;
        if (i < ArraySize(p->colWidth)) {
          w = p->colWidth[i];
        } else {
          w = 0;
        }
        if (w == 0) {
          w = strlen30(azCol[i] != nullptr ? azCol[i] : '');
          if (w < 10) {
            w = 10;
          }
          int n = strlen30((azArg != nullptr) && (azArg[i] != nullptr)
                               ? azArg[i]
                               : p->nullvalue);
          if (w < n) {
            w = n;
          }
        }
        if (i < ArraySize(p->actualWidth)) {
          p->actualWidth[i] = w;
        }
        if (p->showHeader != 0) {
          if (w < 0) {
            fprintf(p->out,
                    '%*.*s%s',
                    -w,
                    -w,
                    azCol[i],
                    i == nArg - 1 ? '\n' : '  ');
          } else {
            fprintf(p->out,
                    '%-*.*s%s',
                    w,
                    w,
                    azCol[i],
                    i == nArg - 1 ? '\n' : '  ');
          }
        }
      }
      if (p->showHeader != 0) {
        for (i = 0; i < nArg; i++) {
          int w;
          if (i < ArraySize(p->actualWidth)) {
            w = p->actualWidth[i];
            if (w < 0) {
              w = -w;
            }
          } else {
            w = 10;
          }
          fprintf(p->out,
                  '%-*.*s%s',
                  w,
                  w,
                  '-----------------------------------'
                  '----------------------------------------------------------',
                  i == nArg - 1 ? '\n' : '  ');
        }
      }
    }
    if (azArg == nullptr) {
      break;
    }
    for (i = 0; i < nArg; i++) {
      int w;
      if (i < ArraySize(p->actualWidth)) {
        w = p->actualWidth[i];
      } else {
        w = 10;
      }
      if (i == 1 && (p->aiIndent != nullptr) && (p->pStmt != nullptr)) {
        if (p->iIndent < p->nIndent) {
          fprintf(p->out, '%*.s', p->aiIndent[p->iIndent], '');
        }
        p->iIndent++;
      }
      if (w < 0) {
        fprintf(p->out,
                '%*.*s%s',
                -w,
                -w,
                azArg[i] != nullptr ? azArg[i] : p->nullvalue,
                i == nArg - 1 ? '\n' : '  ');
      } else {
        fprintf(p->out,
                '%-*.*s%s',
                w,
                w,
                azArg[i] != nullptr ? azArg[i] : p->nullvalue,
                i == nArg - 1 ? '\n' : '  ');
      }
    }
    break;
  }
  case MODE_Semi:
  case MODE_List: {
    if (p->cnt++ == 0 && (p->showHeader != 0)) {
      for (i = 0; i < nArg; i++) {
        fprintf(p->out, '%s%s', azCol[i], i == nArg - 1 ? '\n' : p->separator);
      }
    }
    if (azArg == nullptr) {
      break;
    }
    for (i = 0; i < nArg; i++) {
      const char* z = azArg[i];
      if (z == nullptr) {
        z = p->nullvalue;
      }
      fprintf(p->out, '%s', z);
      if (i < nArg - 1) {
        fprintf(p->out, '%s', p->separator);
      } else if (p->mode == MODE_Semi) {
        fprintf(p->out, ';\n');
      } else {
        fprintf(p->out, '\n');
      }
    }
    break;
  }
  case MODE_Csv: {
    if (p->cnt++ == 0 && (p->showHeader != 0)) {
      for (i = 0; i < nArg; i++) {
        output_csv(p,
                   azCol[i] != nullptr ? azCol[i] : '',
                   static_cast<int>(i < nArg - 1));
      }
      fprintf(p->out, '\n');
    }
    if (azArg == nullptr) {
      break;
    }
    for (i = 0; i < nArg; i++) {
      output_csv(p, azArg[i], static_cast<int>(i < nArg - 1));
    }
    fprintf(p->out, '\n');
    break;
  }
  }
  return 0;
}
    
    #pragma once
    
    
    {
    {} // namespace perf_event_open
} // namespace osquery

    
    #include <osquery/utils/expected/expected.h>
#include <osquery/utils/system/posix/errno.h>
    
    EnterExitJoiner::KeyType createKey(EventType const type,
                                   __s32 const pid,
                                   __s32 const tgid) {
  auto key = EnterExitJoiner::KeyType(static_cast<std::uint32_t>(pid));
  key <<= 32;
  key |= static_cast<std::uint32_t>(tgid);
  key <<= 32;
  key |= static_cast<std::uint32_t>(type);
  return key;
}
    
        {BPF_JMP | BPF_K | BPF_CALL  ,          0,         0,    0,  BPF_FUNC_get_current_pid_tgid},
    {BPF_STX | BPF_W | BPF_MEM   , BPF_REG_10, BPF_REG_0,  -36,  0}, // Event.body.pid
    {BPF_ALU64 | BPF_K | BPF_RSH ,          0,         0,    0,  32},
    {BPF_STX | BPF_W | BPF_MEM   , BPF_REG_10, BPF_REG_0,  -32,  0}, // Event.body.tgid
    
    #pragma once
    
    #include 'rocksdb/db.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/options.h'
    
      // Initialize pointer options for each column family
  for (size_t i = 0; i < loaded_cf_descs.size(); ++i) {
    auto* loaded_bbt_opt = reinterpret_cast<BlockBasedTableOptions*>(
        loaded_cf_descs[0].options.table_factory->GetOptions());
    // Expect the same as BlockBasedTableOptions will be loaded form file.
    assert(loaded_bbt_opt->block_size == bbt_opts.block_size);
    // However, block_cache needs to be manually initialized as documented
    // in rocksdb/utilities/options_util.h.
    loaded_bbt_opt->block_cache = cache;
  }
  // In addition, as pointer options are initialized with default value,
  // we need to properly initialized all the pointer options if non-defalut
  // values are used before calling DB::Open().
  assert(loaded_cf_descs[0].options.compaction_filter == nullptr);
  loaded_cf_descs[0].options.compaction_filter = compaction_filter.get();
    
    class DbDumpTool {
 public:
  bool Run(const DumpOptions& dump_options,
           rocksdb::Options options = rocksdb::Options());
};
    
    
    {
    {}  // namespace experimental
}  // namespace rocksdb

    
     virtual void SetTtl(int32_t ttl) = 0;
    
    
    {CC_CONSTRUCTOR_ACCESS:
    FlipY3D() {}
    virtual ~FlipY3D() {}
private:
    CC_DISALLOW_COPY_AND_ASSIGN(FlipY3D);
};
    
        /** Sets the inner action.
     *
     * @param action The inner action.
     */
    void setInnerAction(FiniteTimeAction *action)
    {
        if (_innerAction != action)
        {
            CC_SAFE_RETAIN(action);
            CC_SAFE_RELEASE(_innerAction);
            _innerAction = action;
        }
    }
    
    /**
 @brief This action simulates a page turn from the bottom right hand corner of the screen.
 
 @details It's not much use by itself but is used by the PageTurnTransition.
         Based on an original paper by L Hong et al.
         http://www.parc.com/publication/1638/turning-pages-of-3d-electronic-books.html
  
 @since v0.8.2
 */
class CC_DLL PageTurn3D : public Grid3DAction
{
public:
    /**
     * @js NA 
     */
    virtual GridBase* getGrid() override;
    }
    
    
    {    for (int i = 0; i < _gridSize.width; ++i)
    {
        for ( int j = 0; j < _gridSize.height; ++j)
        {
            tileArray->position.set((float)i, (float)j);
            tileArray->startPosition.set((float)i, (float)j);
            tileArray->delta = getDelta(Size(i, j));
            ++tileArray;
        }
    }
}
    
    bool ActionTween::initWithDuration(float duration, const std::string& key, float from, float to)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _key    = key;
        _to       = to;
        _from     = from;
        return true;
    }
    }
    
    void AnimationCache::parseVersion2(const ValueMap& animations)
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/