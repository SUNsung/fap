#include 'tensorflow/core/distributed_runtime/worker_cache.h'
#include 'tensorflow/core/platform/mutex.h'
#include 'tensorflow/core/platform/thread_annotations.h'
#include 'tensorflow/core/platform/types.h'
#include 'tensorflow/core/protobuf/worker.pb.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    template <typename Device, typename T>
struct Reverse<Device, T, 0> {
  void operator()(const Device& d, typename TTypes<T, 0>::ConstTensor input,
                  const Eigen::array<bool, 0>& reverse_dims,
                  typename TTypes<T, 0>::Tensor output) {
    // Reversing a scalar is copying it.
    output.device(d) = input;
  }
};
    
    
    {  std::unique_ptr<PartialRunState> partial_run = MakeUnique<PartialRunState>();
  partial_run->cancellation_manager = MakeUnique<CancellationManager>();
  *cancellation_manager = partial_run->cancellation_manager.get();
  step_id_to_partial_run_[step_id] = std::move(partial_run);
  return true;
}
    
    
    {  TF_DISALLOW_COPY_AND_ASSIGN(RecordWriter);
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    class TextLineReader : public ReaderBase {
 public:
  TextLineReader(const string& node_name, int skip_header_lines, Env* env)
      : ReaderBase(strings::StrCat('TextLineReader '', node_name, ''')),
        skip_header_lines_(skip_header_lines),
        env_(env),
        line_number_(0) {}
    }
    
      Status ResetLocked() override {
    offset_ = 0;
    reader_.reset(nullptr);
    file_.reset(nullptr);
    return ReaderBase::ResetLocked();
  }
    
        NodeDef* mul_node1 = graph_def.add_node();
    mul_node1->set_name('mul_node1');
    mul_node1->set_op('Mul');
    mul_node1->set_device('//cpu:0');
    mul_node1->add_input('add_node2');
    mul_node1->add_input('add_node3');
    
    MPIUtils::MPIUtils(const std::string& worker_name) {
  InitMPI();
  // Connect the MPI process IDs to the worker names that are used by TF.
  // Gather the names of all the active processes (name can't be longer than
  // 128 bytes)
  int proc_id = 0, number_of_procs = 1;
  char my_name[max_worker_name_length];
  MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
  MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    }
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
REGISTER_COMPLEX(GPU, float, complex64);
REGISTER_COMPLEX(GPU, double, complex128);
#endif
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #ifndef ATOM_BROWSER_WINDOW_LIST_OBSERVER_H_
#define ATOM_BROWSER_WINDOW_LIST_OBSERVER_H_
    
      // Send when a context menu is shown. Used to notify tests that the context
  // menu has been created and shown.
  NOTIFICATION_RENDER_VIEW_CONTEXT_MENU_SHOWN,
    
    #endif  // CHROME_BROWSER_EXTENSIONS_GLOBAL_SHORTCUT_LISTENER_H_

    
    // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    #include 'content/nw/src/api/base/base.h'
    
    namespace content {
class RenderFrameHost;
}
    
    MenuDelegate::MenuDelegate(ObjectManager* object_manager)
    : object_manager_(object_manager) {
}
    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
    #include 'base/run_loop.h'
#include 'content/public/browser/browsing_data_remover.h'
#include 'extensions/browser/extension_function.h'
    
    using namespace extensions::nwapi::nw__clipboard;
    
    bool NwObjAllocateIdFunction::RunNWSync(base::ListValue* response, std::string* error) {
  response->AppendInteger(nw::ObjectManager::AllocateId());
  return true;
}
    
        std::string type;
    switch(src.id.type) {
    case content::DesktopMediaID::TYPE_WINDOW:
      type = 'window';
      break;
    case content::DesktopMediaID::TYPE_SCREEN:
      type = 'screen';
      break;
    case content::DesktopMediaID::TYPE_NONE:
      type = 'none';
      break;
    default:
      type = 'unknown';
      break;
    }
    
        state->preFilterType = CV_STEREO_BM_XSOBEL; //CV_STEREO_BM_NORMALIZED_RESPONSE;
    state->preFilterSize = 9;
    state->preFilterCap = 31;
    state->SADWindowSize = 15;
    state->minDisparity = 0;
    state->numberOfDisparities = numberOfDisparities > 0 ? numberOfDisparities : 64;
    state->textureThreshold = 10;
    state->uniquenessRatio = 15;
    state->speckleRange = state->speckleWindowSize = 0;
    state->trySmallerWindows = 0;
    state->roi1 = state->roi2 = cvRect(0,0,0,0);
    state->disp12MaxDiff = -1;
    
    #endif

    
    CV_EXPORTS_W void min(InputArray src1, Scalar src2, OutputArray dst);
    
    const uchar g_Saturate8u[] =
{
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
     32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,
     48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63,
     64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  79,
     80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  90,  91,  92,  93,  94,  95,
     96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
    112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
    176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255
};
    
    // A macro for testing Google Test assertions or code that's expected to
// generate Google Test non-fatal failures.  It asserts that the given
// statement will cause exactly one non-fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_NONFATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// 'statement' is allowed to reference local variables and members of
// the current object.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  If we do that, the code won't compile when the user gives
// EXPECT_NONFATAL_FAILURE() a statement that contains a macro that
// expands to code containing an unprotected comma.  The
// AcceptsMacroThatExpandsToUnprotectedComma test in gtest_unittest.cc
// catches that.
//
// For the same reason, we have to write
//   if (::testing::internal::AlwaysTrue()) { statement; }
// instead of
//   GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement)
// to avoid an MSVC warning on unreachable code.
#define EXPECT_NONFATAL_FAILURE(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    namespace testing {
    }
    
    // DeathTest is a class that hides much of the complexity of the
// GTEST_DEATH_TEST_ macro.  It is abstract; its static Create method
// returns a concrete class that depends on the prevailing death test
// style, as defined by the --gtest_death_test_style and/or
// --gtest_internal_run_death_test flags.
    
    // FilePath - a class for file and directory pathname manipulation which
// handles platform-specific conventions (like the pathname separator).
// Used for helper functions for naming files in a directory for xml output.
// Except for Set methods, all methods are const or static, which provides an
// 'immutable value object' -- useful for peace of mind.
// A FilePath with a value ending in a path separator ('like/this/') represents
// a directory, otherwise it is assumed to represent a file. In either case,
// it may or may not represent an actual file or directory in the file system.
// Names are NOT checked for syntax correctness -- no checking for illegal
// characters, malformed paths, etc.
    
      linked_ptr& operator=(linked_ptr const& ptr) {
    if (&ptr != this) {
      depart();
      copy(&ptr);
    }
    return *this;
  }
    
    
    {  return result;
}
    
    class Tesseract;
    
    /**********************************************************************
 * DIR128::DIR128
 *
 * Quantize the direction of an FCOORD to make a DIR128.
 **********************************************************************/
    
    #include 'errcode.h'
    
    template <bool del, class P1, class P2, class P3, class A1, class A2, class A3, class A4>
class _TessFunctionResultCallback_3_4<del, void, P1, P2, P3, A1, A2, A3, A4> : public TessCallback4<A1,A2,A3,A4> {
 public:
  typedef TessCallback4<A1,A2,A3,A4> base;
  typedef void (*FunctionSignature)(P1,P2,P3,A1,A2,A3,A4);
    }
    
    int UNICHAR::const_iterator::operator*() const {
  ASSERT_HOST(it_ != nullptr);
  const int len = utf8_step(it_);
  if (len == 0) {
    tprintf('WARNING: Illegal UTF8 encountered\n');
    return ' ';
  }
  UNICHAR uch(it_, len);
  return uch.first_uni();
}
    
    
    {}  // namespace tesseract.
    
    int16_t loop_bounding_box(                    //get bounding box
                        CRACKEDGE *&start,  //edge loop
                        ICOORD &botleft,    //bounding box
                        ICOORD &topright) {
  int16_t length;                  //length of loop
  int16_t leftmost;                //on top row
  CRACKEDGE *edgept;             //current point
  CRACKEDGE *realstart;          //topleft start
    }
    
    struct CrackPos {
  CRACKEDGE** free_cracks;   // Freelist for fast allocation.
  int x;                     // Position of new edge.
  int y;
};
    
     private:
  // Internal version of EvaluateBox returns the unclipped gradients as well
  // as the result of EvaluateBox.
  // hgrad1 and hgrad2 are the gradients for the horizontal textline.
  int EvaluateBoxInternal(const TBOX& box, const DENORM* denorm, bool debug,
                          int* hgrad1, int* hgrad2,
                          int* vgrad1, int* vgrad2) const;
    
    // Make blocks out of any partitions in this WorkingPartSet, and append
// them to the end of the blocks list. bleft, tright and resolution give
// the bounds and resolution of the source image, so that blocks can be
// made to fit in the bounds.
// All ColPartitions go in the used_parts list, as they need to be kept
// around, but are no longer needed.
void WorkingPartSet::ExtractCompletedBlocks(const ICOORD& bleft,
                                            const ICOORD& tright,
                                            int resolution,
                                            ColPartition_LIST* used_parts,
                                            BLOCK_LIST* blocks,
                                            TO_BLOCK_LIST* to_blocks) {
  MakeBlocks(bleft, tright, resolution, used_parts);
  BLOCK_IT block_it(blocks);
  block_it.move_to_last();
  block_it.add_list_after(&completed_blocks_);
  TO_BLOCK_IT to_block_it(to_blocks);
  to_block_it.move_to_last();
  to_block_it.add_list_after(&to_blocks_);
}
    
    #pragma once
    
    std::string stringFromCFNumber(const CFDataRef& cf_number, CFNumberType type) {
  // Make sure the type is a number.
  if (CFGetTypeID(cf_number) != CFNumberGetTypeID()) {
    return '0';
  }
    }
    
    std::string wstringToString(const wchar_t* src) {
  if (src == nullptr) {
    return std::string('');
  }
    }
    
    TEST_F(RocksDBDatabasePluginTests, test_corruption) {
  ASSERT_TRUE(pathExists(path_));
  ASSERT_FALSE(pathExists(path_ + '.backup'));
    }
    
    namespace osquery {
    }
    
    
    {  // Make sure we can connect to designated stream
  VLOG(1) << 'Firehose logging initialized with stream: '
          << FLAGS_aws_firehose_stream;
  return Status(0);
}
    
      virtual ~AbstractAuthResolver();
    
    #include <memory>
    
      virtual void hide() CXX11_OVERRIDE;
    
      virtual ~ActivePeerConnectionCommand();
    
    
    {} // namespace aria2