
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {
    {
    {      // Restore invariant for the next iteration of the loop.
      substitution_base_cost = scratch[j - 1];  // = cost(i - 1, j)
      scratch[j - 1] = cheapest;                // = cost(i, j)
      insertion_cost = cheapest + 1;            // = cost(i, j) + 1
    }
  }
  return scratch[t_size - 1];
}
    
    class DebugGraphDecorator : public DebugGraphDecoratorInterface {
 public:
  DebugGraphDecorator(const DebugOptions& debug_options)
      : debug_options_(debug_options) {}
  virtual ~DebugGraphDecorator() {}
    }
    
    #include 'tensorflow/core/distributed_runtime/partial_run_mgr.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Prefetching support
//
// Defined behavior on some of the uarchs:
// PREFETCH_HINT_T0:
//   prefetch to all levels of the hierarchy (except on p4: prefetch to L2)
// PREFETCH_HINT_NTA:
//   p4: fetch to L2, but limit to 1 way (out of the 8 ways)
//   core: skip L2, go directly to L1
//   k8 rev E and later: skip L2, can go to either of the 2-ways in L1
enum PrefetchHint {
  PREFETCH_HINT_T0 = 3,  // More temporal locality
  PREFETCH_HINT_T1 = 2,
  PREFETCH_HINT_T2 = 1,  // Less temporal locality
  PREFETCH_HINT_NTA = 0  // No temporal locality
};
template <PrefetchHint hint>
void prefetch(const void* x);
    
    #if TENSORFLOW_USE_SYCL
    
      Status OnWorkFinishedLocked() override {
    reader_.reset(nullptr);
    file_.reset(nullptr);
    return Status::OK();
  }
    
    Status AsinhGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
      {{'y'}, 'Asinh', {'x'}},
      {{'cosh'}, 'Cosh', {'y'}},
      {{'dx'}, 'Mul', {'dy', 'cosh'}},  // dy * cosh(y)
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Asinh', AsinhGrad);
    
    
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
    void DBIter::FindNextUserEntry(bool skipping, std::string* skip) {
  // Loop until we hit an acceptable entry to yield
  assert(iter_->Valid());
  assert(direction_ == kForward);
  do {
    ParsedInternalKey ikey;
    if (ParseKey(&ikey) && ikey.sequence <= sequence_) {
      switch (ikey.type) {
        case kTypeDeletion:
          // Arrange to skip all upcoming entries for this key since
          // they are hidden by this deletion.
          SaveKey(ikey.user_key, skip);
          skipping = true;
          break;
        case kTypeValue:
          if (skipping &&
              user_comparator_->Compare(ikey.user_key, *skip) <= 0) {
            // Entry hidden
          } else {
            valid_ = true;
            saved_key_.clear();
            return;
          }
          break;
      }
    }
    iter_->Next();
  } while (iter_->Valid());
  saved_key_.clear();
  valid_ = false;
}
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
    inline ValueType ExtractValueType(const Slice& internal_key) {
  assert(internal_key.size() >= 8);
  const size_t n = internal_key.size();
  uint64_t num = DecodeFixed64(internal_key.data() + n - 8);
  unsigned char c = num & 0xff;
  return static_cast<ValueType>(c);
}
    
    
// Called on every log record (each one of which is a WriteBatch)
// found in a kLogFile.
static void WriteBatchPrinter(uint64_t pos, Slice record, WritableFile* dst) {
  std::string r = '--- offset ';
  AppendNumberTo(&r, pos);
  r += '; ';
  if (record.size() < 12) {
    r += 'log record length ';
    AppendNumberTo(&r, record.size());
    r += ' is too small\n';
    dst->Append(r);
    return;
  }
  WriteBatch batch;
  WriteBatchInternal::SetContents(&batch, record);
  r += 'sequence ';
  AppendNumberTo(&r, WriteBatchInternal::Sequence(&batch));
  r.push_back('\n');
  dst->Append(r);
  WriteBatchItemPrinter batch_item_printer;
  batch_item_printer.dst_ = dst;
  Status s = batch.Iterate(&batch_item_printer);
  if (!s.ok()) {
    dst->Append('  error: ' + s.ToString() + '\n');
  }
}
    
    #include <ctype.h>
#include <stdio.h>
#include 'db/filename.h'
#include 'db/dbformat.h'
#include 'leveldb/env.h'
#include 'util/logging.h'
    
    
    {  // Intentionally copyable
};
    
      // Sets up the network for training. Initializes weights using weights of
  // scale `range` picked according to the random number generator `randomizer`.
  int InitWeights(float range, TRand* randomizer) override;
  // Recursively searches the network for softmaxes with old_no outputs,
  // and remaps their outputs according to code_map. See network.h for details.
  int RemapOutputs(int old_no, const std::vector<int>& code_map) override;
    
      /**
   * Returns a binary image of the current object at the given level.
   * The position and size match the return from BoundingBoxInternal, and so
   * this could be upscaled with respect to the original input image.
   * Use pixDestroy to delete the image after use.
   */
  Pix* GetBinaryImage(PageIteratorLevel level) const;
    
    
    {
    {  // check for missing directory separator
  const char *lastchar = datadir.string();
  lastchar += datadir.length() - 1;
  if ((strcmp(lastchar, '/') != 0) && (strcmp(lastchar, '\\') != 0))
    datadir += '/';
}
}  // namespace tesseract

    
    
    {  if (unicode < 0x80) {
    chars[UNICHAR_LEN - 1] = 1;
    chars[2] = 0;
    chars[1] = 0;
    chars[0] = static_cast<char>(unicode);
  } else if (unicode < 0x800) {
    chars[UNICHAR_LEN - 1] = 2;
    chars[2] = 0;
    chars[1] = static_cast<char>((unicode | bytemark) & bytemask);
    unicode >>= 6;
    chars[0] = static_cast<char>(unicode | 0xc0);
  } else if (unicode < 0x10000) {
    chars[UNICHAR_LEN - 1] = 3;
    chars[2] = static_cast<char>((unicode | bytemark) & bytemask);
    unicode >>= 6;
    chars[1] = static_cast<char>((unicode | bytemark) & bytemask);
    unicode >>= 6;
    chars[0] = static_cast<char>(unicode | 0xe0);
  } else if (unicode <= UNI_MAX_LEGAL_UTF32) {
    chars[UNICHAR_LEN - 1] = 4;
    chars[3] = static_cast<char>((unicode | bytemark) & bytemask);
    unicode >>= 6;
    chars[2] = static_cast<char>((unicode | bytemark) & bytemask);
    unicode >>= 6;
    chars[1] = static_cast<char>((unicode | bytemark) & bytemask);
    unicode >>= 6;
    chars[0] = static_cast<char>(unicode | 0xf0);
  } else {
    memset(chars, 0, UNICHAR_LEN);
  }
}
    
    // Creates and returns a Pix with the same resolution as the original
// in which 1 (black) pixels represent likely non text (photo, line drawing)
// areas of the page, deleting from the blob_block the blobs that were
// determined to be non-text.
// The photo_map is used to bias the decision towards non-text, rather than
// supplying definite decision.
// The blob_block is the usual result of connected component analysis,
// holding the detected blobs.
// The returned Pix should be PixDestroyed after use.
Pix* CCNonTextDetect::ComputeNonTextMask(bool debug, Pix* photo_map,
                                         TO_BLOCK* blob_block) {
  // Insert the smallest blobs into the grid.
  InsertBlobList(&blob_block->small_blobs);
  InsertBlobList(&blob_block->noise_blobs);
  // Add the medium blobs that don't have a good strokewidth neighbour.
  // Those that do go into good_grid as an antidote to spreading beyond the
  // real reaches of a noise region.
  BlobGrid good_grid(gridsize(), bleft(), tright());
  BLOBNBOX_IT blob_it(&blob_block->blobs);
  for (blob_it.mark_cycle_pt(); !blob_it.cycled_list(); blob_it.forward()) {
    BLOBNBOX* blob = blob_it.data();
    double perimeter_area_ratio = blob->cblob()->perimeter() / 4.0;
    perimeter_area_ratio *= perimeter_area_ratio / blob->enclosed_area();
    if (blob->GoodTextBlob() == 0 || perimeter_area_ratio < kMinGoodTextPARatio)
      InsertBBox(true, true, blob);
    else
      good_grid.InsertBBox(true, true, blob);
  }
  noise_density_ = ComputeNoiseDensity(debug, photo_map, &good_grid);
  good_grid.Clear();  // Not needed any more.
  Pix* pix = noise_density_->ThresholdToPix(max_noise_count_);
  if (debug) {
    pixWrite('junknoisemask.png', pix, IFF_PNG);
  }
  ScrollView* win = nullptr;
  #ifndef GRAPHICS_DISABLED
  if (debug) {
    win = MakeWindow(0, 400, 'Photo Mask Blobs');
  }
  #endif  // GRAPHICS_DISABLED
  // Large and medium blobs are not text if they overlap with 'a lot' of small
  // blobs.
  MarkAndDeleteNonTextBlobs(&blob_block->large_blobs,
                            kMaxLargeOverlapsWithSmall,
                            win, ScrollView::DARK_GREEN, pix);
  MarkAndDeleteNonTextBlobs(&blob_block->blobs, kMaxMediumOverlapsWithSmall,
                          win, ScrollView::WHITE, pix);
  // Clear the grid of small blobs and insert the medium blobs.
  Clear();
  InsertBlobList(&blob_block->blobs);
  MarkAndDeleteNonTextBlobs(&blob_block->large_blobs,
                            kMaxLargeOverlapsWithMedium,
                            win, ScrollView::DARK_GREEN, pix);
  // Clear again before we start deleting the blobs in the grid.
  Clear();
  MarkAndDeleteNonTextBlobs(&blob_block->noise_blobs, -1,
                            win, ScrollView::CORAL, pix);
  MarkAndDeleteNonTextBlobs(&blob_block->small_blobs, -1,
                            win, ScrollView::GOLDENROD, pix);
  MarkAndDeleteNonTextBlobs(&blob_block->blobs, -1,
                            win, ScrollView::WHITE, pix);
  if (debug) {
    #ifndef GRAPHICS_DISABLED
    win->Update();
    #endif  // GRAPHICS_DISABLED
    pixWrite('junkccphotomask.png', pix, IFF_PNG);
    #ifndef GRAPHICS_DISABLED
    delete win->AwaitEvent(SVET_DESTROY);
    delete win;
    #endif  // GRAPHICS_DISABLED
  }
  return pix;
}
    
    class BLOCK_LIST;
struct Boxa;
struct Pixa;
class DENORM;
class ScrollView;
class STATS;
class TO_BLOCK;
    
      // Build the projection profile given the input_block containing lists of
  // blobs, a rotation to convert to image coords,
  // and a full-resolution nontext_map, marking out areas to avoid.
  // During construction, we have the following assumptions:
  // The rotation is a multiple of 90 degrees, ie no deskew yet.
  // The blobs have had their left and right rules set to also limit
  // the range of projection.
  void ConstructProjection(TO_BLOCK* input_block,
                           const FCOORD& rotation, Pix* nontext_map);
    
    
    {  private:
    size_t count_;
    uint64_t time_span_;
    std::list<uint64_t> touch_times_;
};
    
    
    
    template <bool TYPE>
struct bool_type {
};
    
    
    {  private:
    JNIEnv* env_;
    jstring jstr_;
    const char* char_;
    bool jstr2char_;
};
    
    template <typename T> struct jni_sig_from_cxx_t;
template <typename R, typename... Args>
struct jni_sig_from_cxx_t<R(Args...)> {
  using JniRet = typename Convert<typename std::decay<R>::type>::jniType;
  using JniSig = JniRet(typename Convert<typename std::decay<Args>::type>::jniType...);
};
    
    
    {  for (size_t i = 0; i < trace.size(); ++i) {
    Dl_info info;
    if (dladdr(trace[i], &info)) {
      symbols.emplace_back(trace[i], info.dli_fbase, info.dli_saddr,
                           info.dli_fname ? info.dli_fname : '',
                           info.dli_sname ? info.dli_sname : '');
    }
  }
}
    
    DEFINE_PRIMITIVE_STATIC_CALL(jboolean, Boolean)
DEFINE_PRIMITIVE_STATIC_CALL(jbyte, Byte)
DEFINE_PRIMITIVE_STATIC_CALL(jchar, Char)
DEFINE_PRIMITIVE_STATIC_CALL(jshort, Short)
DEFINE_PRIMITIVE_STATIC_CALL(jint, Int)
DEFINE_PRIMITIVE_STATIC_CALL(jlong, Long)
DEFINE_PRIMITIVE_STATIC_CALL(jfloat, Float)
DEFINE_PRIMITIVE_STATIC_CALL(jdouble, Double)
#pragma pop_macro('DEFINE_PRIMITIVE_STATIC_CALL')
    
    
namespace detail {
template <typename Repr>
struct ReprAccess {
  using javaobject = JniType<Repr>;
  static void set(Repr& repr, javaobject obj) noexcept {
    repr.JObjectBase::set(obj);
  }
  static javaobject get(const Repr& repr) {
    return static_cast<javaobject>(repr.JObject::get());
  }
};
    }
    
        method(getChildCount);
    
    template<typename... ARGS>
inline void log(int level, const char* tag, const char* msg, ARGS... args) noexcept {
  __android_log_print(level, tag, msg, args...);
}
    
    class ProgramLocation {
public:
  ProgramLocation() : m_functionName('Unspecified'), m_fileName('Unspecified'), m_lineNumber(0) {}
    }