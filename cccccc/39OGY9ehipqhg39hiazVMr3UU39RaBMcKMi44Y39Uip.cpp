
        
        
    {  // Calling ExecutorDone and PartialRunDone on the step_id should still only
  // result in the callback being called once.
  // This proves that the original PartialRun has been removed.
  partial_run_mgr.PartialRunDone(
      step_id, [&called](Status status) { called++; }, Status::OK());
  partial_run_mgr.ExecutorDone(step_id, Status::OK());
  EXPECT_EQ(1, called);
}
    
    #endif  // TENSORFLOW_COMMON_RUNTIME_SESSION_FACTORY_H_

    
    class Cluster;
struct GrapplerItem;
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    TEST_F(NodeDefBuilderTest, TypeListNoMin) {
  Op(OpDefBuilder('TypeListNoMin').Input('a: T').Attr('T: list(type) >= 0'));
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      ConvertUTF8toUTF32(&SourceNext, SourceStart + S.size(), &TargetStart, C + 1,
                     llvm::lenientConversion);
  if (TargetStart == C) {
    // The source string contains an ill-formed subsequence at the end.
    return S;
  }
    
      IndexRecordWriter recordWriter(indexStorePath);
  std::string error;
  auto result = recordWriter.beginRecord(
      Filename, record.hashRecord(), error, &outRecordFile);
  switch (result) {
  case IndexRecordWriter::Result::Failure:
    diags->diagnose(SourceLoc(), diag::error_write_index_record, error);
    return true;
  case IndexRecordWriter::Result::AlreadyExists:
    return false;
  case IndexRecordWriter::Result::Success:
    break;
  }
    
    class ParamField final : public PrivateExtension,
    private llvm::TrailingObjects<ParamField, MarkupASTNode *> {
  friend TrailingObjects;
    }
    
      // The following strings are guaranteed to live at least as long as the
  // current indexing action.
  StringRef name;
  StringRef USR; // USR may be safely compared by pointer.
  StringRef group;
    
    
    {  int getLineOffset(SourceLoc Loc) const {
    if (auto VFile = getVirtualFile(Loc))
      return VFile->LineOffset;
    else
      return 0;
  }
};
    
    #endif  // 0
    
      // Returns true if the death test passed; that is, the test process
  // exited during the test, its exit status matches a user-supplied
  // predicate, and its stderr output matches a user-supplied regular
  // expression.
  // The user-supplied predicate may be a macro expression rather
  // than a function pointer or functor, or else Wait and Passed could
  // be combined.
  virtual bool Passed(bool exit_status_ok) = 0;
    
      // Returns a copy of the FilePath with the directory part removed.
  // Example: FilePath('path/to/file').RemoveDirectoryName() returns
  // FilePath('file'). If there is no directory part ('just_a_file'), it returns
  // the FilePath unmodified. If there is no file part ('just_a_dir/') it
  // returns an empty FilePath ('').
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveDirectoryName() const;
    
      // Compares two wide C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike wcscasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL wide C string,
  // including the empty string.
  // NB: The implementations on different platforms slightly differ.
  // On windows, this method uses _wcsicmp which compares according to LC_CTYPE
  // environment variable. On GNU platform this method uses wcscasecmp
  // which compares according to LC_CTYPE category of the current locale.
  // On MacOS X, it uses towlower, which also uses LC_CTYPE category of the
  // current locale.
  static bool CaseInsensitiveWideCStringEquals(const wchar_t* lhs,
                                               const wchar_t* rhs);
    
    template <>
class tuple<> {
 public:
  tuple() {}
  tuple(const tuple& /* t */)  {}
  tuple& operator=(const tuple& /* t */) { return *this; }
};
    
      // Now, we have that n is odd and n >= 3.
    
        FreeType font driver for pcf fonts
    
    # if defined(OC_COLLECT_METRICS)
typedef struct oc_mode_metrics oc_mode_metrics;
# endif
typedef struct oc_mode_rd      oc_mode_rd;
    
    static const vorbis_info_residue0 _residue_44_high={
  0,-1, -1, 10,-1,-1,
  /* 0   1   2   3   4   5   6   7   8  */
  {0},
  {-1},
  {  0,  1,  2,  4,  8, 16, 32, 71,157},
  {  0,  1,  2,  3,  4,  8, 16, 71,157},
};
    
    /*
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:
    
    /** 32x32 multiplication, followed by a 31-bit shift right. Results fits in 32 bits */
#undef MULT32_32_Q31
#define MULT32_32_Q31(a,b) (opus_val32)((((opus_int64)(a)) * ((opus_int64)(b)))>>31)
    
    #define _ISOC9X_SOURCE 1
#define _ISOC99_SOURCE 1
    
      /// Allow shutdown before exit.
  static void shutdown();
    
      /**
   * @brief Create a routes table for this registry.
   *
   * This is called by the extensions API to allow an extension process to
   * broadcast each registry and the set of plugins (and their optional) route
   * information.
   *
   * The 'table' registry and table plugins are the primary user of the route
   * information. Each plugin will include the SQL statement used to attach
   * an equivalent virtual table.
   */
  RegistryRoutes getRoutes() const;
    
    class ViewsConfigParserPluginTests : public testing::Test {};
    
    inline void ColorTransformYCbCrToRGB(uint8_t* pixel) {
  int y  = pixel[0];
  int cb = pixel[1];
  int cr = pixel[2];
  pixel[0] = kRangeLimit[y + kCrToRedTable[cr]];
  pixel[1] = kRangeLimit[y +
                         ((kCrToGreenTable[cr] + kCbToGreenTable[cb]) >> 16)];
  pixel[2] = kRangeLimit[y + kCbToBlueTable[cb]];
}
    
    // kDCTMatrix[8*u+x] = 0.5*alpha(u)*cos((2*x+1)*u*M_PI/16),
// where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
static const double kDCTMatrix[64] = {
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.4903926402,  0.4157348062,  0.2777851165,  0.0975451610,
 -0.0975451610, -0.2777851165, -0.4157348062, -0.4903926402,
  0.4619397663,  0.1913417162, -0.1913417162, -0.4619397663,
 -0.4619397663, -0.1913417162,  0.1913417162,  0.4619397663,
  0.4157348062, -0.0975451610, -0.4903926402, -0.2777851165,
  0.2777851165,  0.4903926402,  0.0975451610, -0.4157348062,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.2777851165, -0.4903926402,  0.0975451610,  0.4157348062,
 -0.4157348062, -0.0975451610,  0.4903926402, -0.2777851165,
  0.1913417162, -0.4619397663,  0.4619397663, -0.1913417162,
 -0.1913417162,  0.4619397663, -0.4619397663,  0.1913417162,
  0.0975451610, -0.2777851165,  0.4157348062, -0.4903926402,
  0.4903926402, -0.4157348062,  0.2777851165, -0.0975451610,
};
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    const double* Srgb8ToLinearTable() {
  static const double* const kSrgb8ToLinearTable = NewSrgb8ToLinearTable();
  return kSrgb8ToLinearTable;
}
    
    
    {}  // namespace guetzli
    
    #ifndef GUETZLI_JPEG_ERROR_H_
#define GUETZLI_JPEG_ERROR_H_
    
      // Special case code with only one value.
  if (total_count == 1) {
    code.bits = 0;
    code.value = symbols[0];
    for (key = 0; key < total_size; ++key) {
      table[key] = code;
    }
    return total_size;
  }
    
    // Gamma-compensated chroma subsampling.
// Returns Y, U, V image planes, each with width x height dimensions, but the
// U and V planes are composed of 2x2 blocks with the same values.
std::vector<std::vector<float> > RGBToYUV420(
    const std::vector<uint8_t>& rgb_in, const int width, const int height);