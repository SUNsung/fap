
        
        StringRef swift::unicode::extractFirstExtendedGraphemeCluster(StringRef S) {
  // Extended grapheme cluster segmentation algorithm as described in Unicode
  // Standard Annex #29.
  if (S.empty())
    return StringRef();
    }
    
    @interface CalendarBridgingTester : NSObject
- (NSCalendar *)autoupdatingCurrentCalendar;
- (BOOL)verifyAutoupdatingCalendar:(NSCalendar *)calendar;
@end
    
      bool hasTitle() const {
    return Title.hasValue();
  }
    
    #ifndef SWIFT_INDEX_INDEXSYMBOL_H
#define SWIFT_INDEX_INDEXSYMBOL_H
    
    #include <dispatch/dispatch.h>
static_assert(std::is_same<swift_once_t, dispatch_once_t>::value,
              'swift_once_t and dispatch_once_t must stay in sync');
#else
    
      unsigned getIndex() const { return Index; }
    
    template <class T>
struct DereferencingComparator { bool operator()(const T a, const T b) const { return *a < *b; } };
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size/5 - 1048576);
}
    
    struct Options;
struct FileMetaData;
    
    const char* leveldb_iter_value(const leveldb_iterator_t* iter, size_t* vlen) {
  Slice s = iter->rep->value();
  *vlen = s.size();
  return s.data();
}
    
    class FormatTest { };
    
    std::string TempFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'dbtmp');
}
    
    Status TableCache::FindTable(uint64_t file_number, uint64_t file_size,
                             Cache::Handle** handle) {
  Status s;
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  Slice key(buf, sizeof(buf));
  *handle = cache_->Lookup(key);
  if (*handle == NULL) {
    std::string fname = TableFileName(dbname_, file_number);
    RandomAccessFile* file = NULL;
    Table* table = NULL;
    s = env_->NewRandomAccessFile(fname, &file);
    if (!s.ok()) {
      std::string old_fname = SSTTableFileName(dbname_, file_number);
      if (env_->NewRandomAccessFile(old_fname, &file).ok()) {
        s = Status::OK();
      }
    }
    if (s.ok()) {
      s = Table::Open(*options_, file, file_size, &table);
    }
    }
    }
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    #include 'db/memtable.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'util/logging.h'
#include 'util/testharness.h'
    
        sqlite3_stmt *replace_stmt, *begin_trans_stmt, *end_trans_stmt;
    std::string replace_str = 'REPLACE INTO test (key, value) VALUES (?, ?)';
    std::string begin_trans_str = 'BEGIN TRANSACTION;';
    std::string end_trans_str = 'END TRANSACTION;';
    
    #endif  // STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_

    
      bool thrown = false;
  try {
    thpp::IntTensor &a = dynamic_cast<thpp::IntTensor&>(*tensor);
  } catch(std::bad_cast &e) {
    thrown = true;
  }
  assert(thrown);
    
    
    {      std::list<Module*> list;
      cursor.map(std::inserter(list, list.end()), [](Module& module) {
        return &module;
      });
      REQUIRE(list.size() == 3);
      auto iterator = list.begin();
      REQUIRE(*iterator++ == &model[0]);
      REQUIRE(*iterator++ == &model[1]);
      REQUIRE(*iterator++ == &model[2]);
      REQUIRE(iterator == list.end());
    }
    
    void THDTensor_(_resize5d)(THDTensor *tensor, int64_t size0, int64_t size1, int64_t size2, int64_t size3, int64_t size4) {
  int64_t sizes[] = {size0, size1, size2, size3, size4};
  THDTensor_(_resize)(tensor, 2, sizes, nullptr);
}
    
    
    {  const float BBOX_XFORM_CLIP = log(1000.0 / 16.0);
  auto result = utils::bbox_transform(
      bbox.array(),
      deltas.array(),
      std::vector<float>{1.0, 1.0, 1.0, 1.0},
      BBOX_XFORM_CLIP,
      true, /* correct_transform_coords */
      true, /* angle_bound_on */
      -90, /* angle_bound_lo */
      90 /* angle_bound_hi */);
  EXPECT_NEAR((result.matrix() - result_gt).norm(), 0.0, 1e-2);
}
    
    inline void _appendData(ByteArray& str, RPCType type) {
  _appendType(str, type);
}
    
    // C++ forbids taking an address of a constructor, so here's a workaround...
// Overload for constructor (R) application
template<typename R, typename T>
inline std::vector<R> fmap(const T& inputs) {
  std::vector<R> r;
  r.reserve(inputs.size());
  for(auto & input : inputs)
    r.push_back(R(input));
  return r;
}
    
    /*
 * Note that the custom deleter deletes in BFS style. Without using
 * the custom deleter, the computation graph is deleted in a DFS style.
 * The BFS deletion is valid (and safe) because if a shared_ptr<Function>
 * 's reference count hits 0, nothing else will access it.
 */
void deleteFunction(Function* function) {
  RecursionDepthCounter recursion_depth;
    }
    
    #if 0   // merge leftover?
        // This will automatically discard a large fraction of the data, useful if the training data is known to be highly correlated
        if (dataDecimationFactor)
        {
            auto& pMBLayout = net->GetMBLayoutPtrOfNetwork();
    }
    
    template<typename T> inline
dnnError_t dnnReLUCreateBackward(
    dnnPrimitive_t* pRelu,
    dnnPrimitiveAttributes_t attributes,
    const dnnLayout_t diffLayout,
    const dnnLayout_t dataLayout,
    T negativeSlope);
    
            auto dimension = sampleShape[0];
        auto numElementsPerSample = sampleShape.SubShape(1).TotalSize();
        NDMaskPtr deviceValueMask = CreateMask(numElementsPerSample, oneHotSequences, sequenceStartFlags, DeviceDescriptor::CPUDevice());
        // If deviceValueMask is null, all the sequences have the same length.
        size_t maxSequenceLength = (deviceValueMask == nullptr) ? (oneHotSequences[0].size() / numElementsPerSample) : deviceValueMask->Shape()[0];
        size_t maxSequenceNumCols = maxSequenceLength * numElementsPerSample;
    
            // overall execution of matrix product, optimized for 128 KB first-level CPU cache
        //  - loop over col stripes {j} of V, e.g. 24 (note that columns are independent)
        //    Col stripes are chosen such that row stripes of V of 1024 rows fit the cache (24x1024=96 KB)
        //    (think of this step as equivalent to actually loading the data into the cache at this point).
        //    For each col stripe {j} of V,
        //     - loop over row stripes {i} of M, e.g. 128 rows (this is a further sub-division of the stripe passed to this function)
        //       For each row stripe {i} of M,
        //        - loop over chunks of the dot product, e.g. 1024 elements {k}
        //          For each chunk {k},
        //           - accumulate matrix patch (24x128=12 KB) into an accumulator on local stack
        //             That's row stripes {i} of M x col stripes {j} of V, sub-components {k} of the dot products.
        //             Rows are read once and applied to {j} columns of V which come from the cache.
    
        float alpha = 1.0f * rng() / rng.max();
    Matrix<float>::ScaleAndAdd(alpha, mAdense, mBdense);
    
    #include 'stdafx.h'
#include 'Actions.h'
#include 'SimpleNetworkBuilder.h'
#include 'NDLNetworkBuilder.h'
#include 'ScriptableObjects.h'
#include 'BrainScriptEvaluator.h'
#include 'BrainScriptParser.h'
    
    // ---------------------------------------------------------------------------
// const_array_ref -- same as array_ref for 'const' (read-only) pointers
// ---------------------------------------------------------------------------
    
    template <typename ElemType>
class CNTKEvalBase : public IEvaluateModelBase<ElemType>
{
protected:
    typedef shared_ptr<ComputationNode<ElemType>> ComputationNodePtr;
    ConfigParameters m_config;
    ComputationNetworkPtr m_net;
    }
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
            // Poll and handle inputs
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        s3eKeyboardUpdate();
        s3ePointerUpdate();
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-06-29: Inputs: Added support for the ImGuiMouseCursor_Hand cursor.
//  2018-06-10: Inputs: Fixed handling of mouse wheel messages to support fine position messages (typically sent by track-pads).
//  2018-06-08: Misc: Extracted imgui_impl_win32.cpp/.h away from the old combined DX9/DX10/DX11/DX12 examples.
//  2018-03-20: Misc: Setup io.BackendFlags ImGuiBackendFlags_HasMouseCursors and ImGuiBackendFlags_HasSetMousePos flags + honor ImGuiConfigFlags_NoMouseCursorChange flag.
//  2018-02-20: Inputs: Added support for mouse cursors (ImGui::GetMouseCursor() value and WM_SETCURSOR message handling).
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
//  2018-02-06: Inputs: Honoring the io.WantSetMousePos by repositioning the mouse (when using navigation and ImGuiConfigFlags_NavMoveMouse is set).
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-01-20: Inputs: Added Horizontal Mouse Wheel support.
//  2018-01-08: Inputs: Added mapping for ImGuiKey_Insert.
//  2018-01-05: Inputs: Added WM_LBUTTONDBLCLK double-click handlers for window classes with the CS_DBLCLKS flag.
//  2017-10-23: Inputs: Added WM_SYSKEYDOWN / WM_SYSKEYUP handlers so e.g. the VK_MENU key can be read.
//  2017-10-23: Inputs: Using Win32 ::SetCapture/::GetCapture() to retrieve mouse positions outside the client area when dragging. 
//  2016-11-12: Inputs: Only call Win32 ::SetCursor(NULL) when io.MouseDrawCursor is set.