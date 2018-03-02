
        
        PyObject* NewFileExtensionsByName(const FileDescriptor* descriptor);
    
    void RepeatedEnumFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(variables_,
    'PrintField(\'$descriptor_name$\', $name$_, writer);\n');
}
    
    #include <sstream>
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    #include <map>
#include <string>
    
    DEFINE_FIND_STATIC_METHOD(KXlog_setAppenderMode, KXlog, 'setAppenderMode', '(I)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_setAppenderMode
  (JNIEnv *, jclass, jint _mode) {
	appender_setmode((TAppenderMode)_mode);
}
    
    class DNS {
  public:
   typedef std::vector<std::string> (*DNSFunc)(const std::string& host);
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #endif
    
    void Test_Spy_Sample::TestFun0()
{
    SPY_HOOK_THIS_API(TestFun0);
    int i = 0;
    SPY_ATTACH_VARIABLE('TestFun0 i', i);
    i++;
    xinfo2(TSF'Test');
    }
    
    
    {  private:
    virtual void __OnAttach(const char* _key) {}
    virtual void __OnDetach(const char* _key) {}
};

    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    JNIEnv* ScopeJEnv::GetEnv() {
    return env_;
}
    
    // Parses one dictionary entry.
// If successfull, write the enty to Unit and returns true,
// otherwise returns false.
bool ParseOneDictionaryEntry(const std::string &Str, Unit *U);
// Parses the dictionary file, fills Units, returns true iff all lines
// were parsed succesfully.
bool ParseDictionaryFile(const std::string &Text, std::vector<Unit> *Units);
    
      if (Flags.jobs > 0 && Flags.workers == 0) {
    Flags.workers = std::min(NumberOfCpuCores() / 2, Flags.jobs);
    if (Flags.workers > 1)
      Printf('Running %u workers\n', Flags.workers);
  }
    
    #include 'FuzzerExtFunctions.def'
    
    void CopyFileToErr(const std::string &Path) {
  Printf('%s', FileToString(Path).c_str());
}
    
      bool InFuzzingThread() const { return IsMyThread; }
  size_t GetCurrentUnitInFuzzingThead(const uint8_t **Data) const;
  void TryDetectingAMemoryLeak(const uint8_t *Data, size_t Size,
                               bool DuringInitialCorpusExecution);
    
    
    {  bool Parse(std::istream &IS, bool ParseCoverage);
  bool Parse(const std::string &Str, bool ParseCoverage);
  void ParseOrExit(std::istream &IS, bool ParseCoverage);
  size_t Merge(std::vector<std::string> *NewFiles);
};
    
    namespace fuzzer {
    }
    
    void sha1_writebyte(sha1nfo *s, uint8_t data) {
	++s->byteCount;
	sha1_addUncounted(s, data);
}
    
    void TraceState::TraceMemcmpCallback(size_t CmpSize, const uint8_t *Data1,
                                     const uint8_t *Data2) {
  if (!RecordingMemcmp || !F->InFuzzingThread()) return;
  CmpSize = std::min(CmpSize, Word::GetMaxSize());
  int Added2 = TryToAddDesiredData(Data1, Data2, CmpSize);
  int Added1 = TryToAddDesiredData(Data2, Data1, CmpSize);
  if ((Added1 || Added2) && Options.Verbosity >= 3) {
    Printf('MemCmp Added %d%d: ', Added1, Added2);
    if (Added1) PrintASCII(Data1, CmpSize);
    if (Added2) PrintASCII(Data2, CmpSize);
    Printf('\n');
  }
}
    
    public:
  RequestGroup* getRequestGroup() const { return requestGroup_; }
    
    #include 'TimerA2.h'
    
    
    {} // namespace aria2

    
      /**
   * Moves current tier pointer to the tier to which the 'stopped' event can
   * be sent.
   * 2-stage search operation is made.
   * The first search operation is performed from current pointer position
   * to the end. If no such tier is found, the second search is performed from
   * the first to the current pointer position.
   */
  void moveToStoppedAllowedTier();
  void moveToCompletedAllowedTier();
    
    #else // defined(__MAC_10_7)
#if defined(__MAC_10_6)