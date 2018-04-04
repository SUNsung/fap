
        
        namespace osquery {
namespace tables {
    }
    }
    
      /// Pause until the requested millisecond delay has elapsed or a cancel.
  void pause(size_t milli) {
    pause(std::chrono::milliseconds(milli));
  }
    
      /// Keep a lookup of the external item name to assigned extension UUID.
  std::map<std::string, RouteUUID> external_;
    
      // Create the IOCTL (and more) device node.
  osquery.devfs = devfs_make_node(makedev(osquery.major_number, 0),
                                  DEVFS_CHAR,
                                  UID_ROOT,
                                  GID_WHEEL,
                                  0600,
                                  'osquery',
                                  0);
  if (osquery.devfs == NULL) {
    dbg_printf('Could not get a devfs entry!\n');
    goto error_exit;
  }
    
    TEST_F(YogaTest_HadOverflowTests, spacing_overflow_no_wrap_and_no_flex_children) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 10);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeInsertChild(root, child1, 1);
    }
    
    #include <yoga/Yoga.h>
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
#include <dlfcn.h>
    
    static bool IsSeparator(char C) {
  return C == '\\' || C == '/';
}
    
    // Tries detecting a memory leak on the particular input that we have just
// executed before calling this function.
void Fuzzer::TryDetectingAMemoryLeak(const uint8_t *Data, size_t Size,
                                     bool DuringInitialCorpusExecution) {
  if (!HasMoreMallocsThanFrees) return;  // mallocs==frees, a leak is unlikely.
  if (!Options.DetectLeaks) return;
  if (!&(EF->__lsan_enable) || !&(EF->__lsan_disable) ||
      !(EF->__lsan_do_recoverable_leak_check))
    return;  // No lsan.
  // Run the target once again, but with lsan disabled so that if there is
  // a real leak we do not report it twice.
  EF->__lsan_disable();
  ExecuteCallback(Data, Size);
  EF->__lsan_enable();
  if (!HasMoreMallocsThanFrees) return;  // a leak is unlikely.
  if (NumberOfLeakDetectionAttempts++ > 1000) {
    Options.DetectLeaks = false;
    Printf('INFO: libFuzzer disabled leak detection after every mutation.\n'
           '      Most likely the target function accumulates allocated\n'
           '      memory in a global state w/o actually leaking it.\n'
           '      You may try running this binary with -trace_malloc=[12]'
           '      to get a trace of mallocs and frees.\n'
           '      If LeakSanitizer is enabled in this process it will still\n'
           '      run on the process shutdown.\n');
    return;
  }
  // Now perform the actual lsan pass. This is expensive and we must ensure
  // we don't call it too often.
  if (EF->__lsan_do_recoverable_leak_check()) { // Leak is found, report it.
    if (DuringInitialCorpusExecution)
      Printf('\nINFO: a leak has been found in the initial corpus.\n\n');
    Printf('INFO: to ignore leaks on libFuzzer side use -detect_leaks=0.\n\n');
    CurrentUnitSize = Size;
    DumpCurrentUnit('leak-');
    PrintFinalStats();
    _Exit(Options.ErrorExitCode);  // not exit() to disable lsan further on.
  }
}