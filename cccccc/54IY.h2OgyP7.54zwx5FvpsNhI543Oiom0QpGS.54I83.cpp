
        
        SILDebugScope::SILDebugScope(SILLocation Loc)
    : Loc(Loc), InlinedCallSite(nullptr) {}
    
    
    {  StringRef getReceiverUSR() const {
    for (auto Relation: Relations) {
      if (Relation.roles & (SymbolRoleSet) SymbolRole::RelationReceivedBy)
        return Relation.USR;
    }
    return StringRef();
  }
};
    
    #include 'swift/Runtime/HeapObject.h'
#include <mutex>
    
    /// This class represents a field in an allocated object. It consists of a
/// base that is the tracked SILValue, and a projection path to the
/// represented field.
class LSLocation : public LSBase {
public:
  /// Constructors.
  LSLocation() {}
  LSLocation(SILValue B, const Optional<ProjectionPath> &P, KeyKind K = Normal)
      : LSBase(B, P, K) {}
  LSLocation(KeyKind Kind) : LSBase(Kind) {}
  /// Use the concatenation of the 2 ProjectionPaths as the Path.
  LSLocation(SILValue B, const ProjectionPath &BP, const ProjectionPath &AP)
      : LSBase(B) {
    ProjectionPath P((*Base).getType());
    P.append(BP);
    P.append(AP);
    Path = P;
  }
    }
    
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
    
    std::string Key2(int i) {
  return Key1(i) + '_xxx';
}
    
    BlockBuilder::BlockBuilder(const Options* options)
    : options_(options),
      restarts_(),
      counter_(0),
      finished_(false) {
  assert(options->block_restart_interval >= 1);
  restarts_.push_back(0);       // First restart point is at offset 0
}
    
    static int NextLength(int length) {
  if (length < 10) {
    length += 1;
  } else if (length < 100) {
    length += 10;
  } else if (length < 1000) {
    length += 100;
  } else {
    length += 1000;
  }
  return length;
}
    
    
    {}  // namespace leveldb
    
    inline bool DBIter::ParseKey(ParsedInternalKey* ikey) {
  Slice k = iter_->key();
  ssize_t n = k.size() + iter_->value().size();
  bytes_counter_ -= n;
  while (bytes_counter_ < 0) {
    bytes_counter_ += RandomPeriod();
    db_->RecordReadSample(k);
  }
  if (!ParseInternalKey(k, ikey)) {
    status_ = Status::Corruption('corrupted internal key in DBIter');
    return false;
  } else {
    return true;
  }
}
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    class TestWriteChainAsyncTransportWrapper :
  public WriteChainAsyncTransportWrapper<folly::AsyncTransportWrapper> {
 public:
  TestWriteChainAsyncTransportWrapper() :
    WriteChainAsyncTransportWrapper<folly::AsyncTransportWrapper>(nullptr) {}
    }
    
      /**
   * Called by `Singleton<T>.shouldEagerInit()` to ensure the instance
   * is built when `doEagerInit[Via]` is called; see those methods
   * for more info.
   */
  void addEagerInitSingleton(detail::SingletonHolderBase* entry);
    
    #include <folly/synchronization/Hazptr.h>
    
    TEST_F(ConstexprMathTest, constexpr_pow) {
  {
    constexpr auto a = folly::constexpr_pow(uint64_t(0), 15);
    EXPECT_EQ(0, a);
  }
  {
    constexpr auto a = folly::constexpr_pow(uint64_t(15), 0);
    EXPECT_EQ(1, a);
  }
  {
    constexpr auto a = folly::constexpr_pow(uint64_t(2), 6);
    EXPECT_EQ(64, a);
  }
}
    
    
    { private:
  LifoSem sem_;
  UMPMCQueue<T, false, 6> queue_;
};
    
    // Functions to provide smarter use of jemalloc, if jemalloc is being used.
// http://www.canonware.com/download/jemalloc/jemalloc-latest/doc/jemalloc.html
    
        if (0 != st.hash && st.hash != adler32(0, (const unsigned char*)_rawbuf + st.head_length,  st.total_length - st.head_length)) return __LINE__;
    
        xassert2(now > touch_times_.front());
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.