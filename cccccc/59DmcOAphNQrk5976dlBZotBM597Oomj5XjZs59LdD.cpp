
        
          // An AST section consists of one or more AST modules, optionally with
  // headers. Iterate over all AST modules.
  while (!buf.empty()) {
    auto info = serialization::validateSerializedAST(buf);
    }
    
    
    {  for (auto Entry : DCache.Entries) {
    DCache.CBs.keyDestroyCB(Entry.first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry.second, nullptr);
  }
  DCache.Entries.clear();
}
    
    DIRECTIONAL_PREPOSITION(above)
DIRECTIONAL_PREPOSITION(after)
DIRECTIONAL_PREPOSITION(along)
DIRECTIONAL_PREPOSITION(alongside)
DIRECTIONAL_PREPOSITION(as)
DIRECTIONAL_PREPOSITION(at)
DIRECTIONAL_PREPOSITION(before)
DIRECTIONAL_PREPOSITION(below)
DIRECTIONAL_PREPOSITION(by)
DIRECTIONAL_PREPOSITION(following)
DIRECTIONAL_PREPOSITION(for)
DIRECTIONAL_PREPOSITION(from)
DIRECTIONAL_PREPOSITION(given)
DIRECTIONAL_PREPOSITION(in)
DIRECTIONAL_PREPOSITION(including)
DIRECTIONAL_PREPOSITION(inside)
DIRECTIONAL_PREPOSITION(into)
DIRECTIONAL_PREPOSITION(matching)
DIRECTIONAL_PREPOSITION(of)
DIRECTIONAL_PREPOSITION(on)
DIRECTIONAL_PREPOSITION(passing)
DIRECTIONAL_PREPOSITION(preceding)
DIRECTIONAL_PREPOSITION(since)
DIRECTIONAL_PREPOSITION(to)
DIRECTIONAL_PREPOSITION(until)
DIRECTIONAL_PREPOSITION(using)
DIRECTIONAL_PREPOSITION(via)
DIRECTIONAL_PREPOSITION(when)
PREPOSITION(with)
DIRECTIONAL_PREPOSITION(within)
    
    
    {  // Lowercase the first letter, append the rest.
  scratch.clear();
  scratch.push_back(clang::toLowercase(string[0]));
  scratch.append(string.begin() + 1, string.end());
  return StringRef(scratch.data(), scratch.size());
}
    
    %# Ignore the following admonition; it applies to the resulting .cpp file only
//// Automatically Generated From UnicodeExtendedGraphemeClusters.cpp.gyb.
//// Do Not Edit Directly!
//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
    
        void emitDiagnosticMessage(clang::FullSourceLoc Loc,
                               clang::PresumedLoc PLoc,
                               clang::DiagnosticsEngine::Level Level,
                               StringRef Message,
                               ArrayRef<clang::CharSourceRange> Ranges,
                               clang::DiagOrStoredDiag Info) override {
      if (isInSwiftBuffers(Loc)) {
        // FIXME: Ideally, we'd report non-suppressed diagnostics on synthetic
        // buffers, printing their names (eg. <swift-imported-modules>:...) but
        // this risks printing _excerpts_ of those buffers to stderr too; at
        // present the synthetic buffers are 'large blocks of null bytes' which
        // we definitely don't want to print out. So until we have some clever
        // way to print the name but suppress printing excerpts, we just replace
        // the Loc with an invalid one here, which suppresses both.
        Loc = clang::FullSourceLoc();
        if (shouldSuppressDiagInSwiftBuffers(Info))
          return;
      }
      callback(Loc, Level, Message);
    }
    
    
    {  // -- Build the decoded string as UTF32 first because we need random access.
  uint32_t n = initial_n;
  int i = 0;
  int bias = initial_bias;
  /// let output = an empty string indexed from 0
  // consume all code points before the last delimiter (if there is one)
  //  and copy them to output,
  size_t lastDelimiter = InputPunycode.find_last_of(delimiter);
  if (lastDelimiter != StringRef::npos) {
    for (char c : InputPunycode.slice(0, lastDelimiter)) {
      // fail on any non-basic code point
      if (static_cast<unsigned char>(c) > 0x7f)
        return true;
      OutCodePoints.push_back(c);
    }
    // if more than zero code points were consumed then consume one more
    //  (which will be the last delimiter)
    InputPunycode =
        InputPunycode.slice(lastDelimiter + 1, InputPunycode.size());
  }
  
  while (!InputPunycode.empty()) {
    int oldi = i;
    int w = 1;
    for (int k = base; ; k += base) {
      // consume a code point, or fail if there was none to consume
      if (InputPunycode.empty())
        return true;
      char codePoint = InputPunycode.front();
      InputPunycode = InputPunycode.slice(1, InputPunycode.size());
      // let digit = the code point's digit-value, fail if it has none
      int digit = digit_index(codePoint);
      if (digit < 0)
        return true;
      
      i = i + digit * w;
      int t = k <= bias ? tmin
            : k >= bias + tmax ? tmax
            : k - bias;
      if (digit < t)
        break;
      w = w * (base - t);
    }
    bias = adapt(i - oldi, OutCodePoints.size() + 1, oldi == 0);
    n = n + i / (OutCodePoints.size() + 1);
    i = i % (OutCodePoints.size() + 1);
    // if n is a basic code point then fail
    if (n < 0x80)
      return true;
    // insert n into output at position i
    OutCodePoints.insert(OutCodePoints.begin() + i, n);
    i++;
  }
  
  return true;
}
    
    void BackendJobAction::anchor() {}
    
      bool shouldProvideRPathToLinker() const override;
    
    
    {}  // namespace nwapi
    
    #include 'content/nw/src/api/menu/menu.h'
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/nw_shell.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'ui/gfx/point.h'
#include 'vector'
#include 'gtk/gtk.h'
    
    NwClipboardGetListSyncFunction::~NwClipboardGetListSyncFunction() {
}
    
     protected:
  ~NwClipboardReadAvailableTypesFunction() override;
    
    namespace extensions {
    }
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
    const int kMaxBlobAxes = 32;
    
      static vector<string> LayerTypeList() {
    CreatorRegistry& registry = Registry();
    vector<string> layer_types;
    for (typename CreatorRegistry::iterator iter = registry.begin();
         iter != registry.end(); ++iter) {
      layer_types.push_back(iter->first);
    }
    return layer_types;
  }
    
    #include <vector>
    
    #endif  // CAFFE_BASE_CONVOLUTION_LAYER_HPP_

    
      virtual inline const char* type() const { return 'BatchReindex'; }
  virtual inline int ExactNumBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
    int orientation_and_script_detection(STRING& filename,
                                     OSResults*,
                                     tesseract::Tesseract*);
    
    
    {  for (std::map<int, ParamContent*>::iterator iter = vcMap.begin();
                                          iter != vcMap.end();
                                          ++iter) {
    ParamContent* cur = iter->second;
    if (!changes_only || cur->HasChanged()) {
      fprintf(fp, '%-25s   %-12s   # %s\n',
              cur->GetName(), cur->GetValue().string(), cur->GetDescription());
    }
  }
  fclose(fp);
}
#endif // GRAPHICS_DISABLED

    
      int GetId() { return my_id_; }
  bool HasChanged() { return changed_; }
    
      // blow away the copied chopped_word, as we want to work with
  // the blobs from the input chopped_word so seam_arrays can be merged.
  TWERD *chopped = word->chopped_word;
  TWERD *chopped2 = new TWERD;
  chopped2->blobs.reserve(chopped->NumBlobs() - split_pt);
  for (int i = split_pt; i < chopped->NumBlobs(); ++i) {
    chopped2->blobs.push_back(chopped->blobs[i]);
  }
  chopped->blobs.truncate(split_pt);
  word->chopped_word = nullptr;
  delete word2->chopped_word;
  word2->chopped_word = nullptr;
    
    #define UNLV_EXT  '.uzn'  // unlv zone file
    
    // Merges the boxes from start to end, not including end, and deletes
// the boxes between start and end.
void BoxWord::MergeBoxes(int start, int end) {
  start = ClipToRange(start, 0, length_);
  end = ClipToRange(end, 0, length_);
  if (end <= start + 1)
    return;
  for (int i = start + 1; i < end; ++i) {
    boxes_[start] += boxes_[i];
  }
  int shrinkage = end - 1 - start;
  length_ -= shrinkage;
  for (int i = start + 1; i < length_; ++i)
    boxes_[i] = boxes_[i + shrinkage];
  boxes_.truncate(length_);
}
    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return nullptr;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : nullptr;
      int64_t new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != nullptr && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
      // Update the other members if the cost is lower.
  void UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                      int32_t n, int32_t sig_x, int64_t sig_xsq);
    
        DIR128 & operator= (         //assign of int16_t
    int16_t value) {               //value to assign
      value %= MODULUS;          //modulo arithmetic
      if (value < 0)
        value += MODULUS;        //done properly
      dir = (int8_t) value;
      return *this;
    }
    int8_t operator- (             //subtraction
      const DIR128 & minus) const//for signed result
    {
                                 //result
      int16_t result = dir - minus.dir;
    }
    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
      const protobuf::Descriptor* desc =
      descriptor_pool_->FindMessageTypeByName(request->containing_type());
  if (desc == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'Type not found.');
  }
    
    ProtoServerReflectionPlugin::ProtoServerReflectionPlugin()
    : reflection_service_(new grpc::ProtoServerReflection()) {}
    
    std::pair<uint64_t, uint64_t> GetCpuStatsImpl() {
  uint64_t busy = 0, total = 0;
  host_cpu_load_info_data_t cpuinfo;
  mach_msg_type_number_t count = HOST_CPU_LOAD_INFO_COUNT;
  if (host_statistics(mach_host_self(), HOST_CPU_LOAD_INFO,
                      (host_info_t)&cpuinfo, &count) == KERN_SUCCESS) {
    for (int i = 0; i < CPU_STATE_MAX; i++) total += cpuinfo.cpu_ticks[i];
    busy = total - cpuinfo.cpu_ticks[CPU_STATE_IDLE];
  }
  return std::make_pair(busy, total);
}
    
    #include 'src/cpp/server/load_reporter/get_cpu_stats.h'