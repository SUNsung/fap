void leveldb_options_set_block_restart_interval(leveldb_options_t* opt, int n) {
  opt->rep.block_restart_interval = n;
}
    
      // Successful parses
  static struct {
    const char* fname;
    uint64_t number;
    FileType type;
  } cases[] = {
    { '100.log',            100,   kLogFile },
    { '0.log',              0,     kLogFile },
    { '0.sst',              0,     kTableFile },
    { '0.ldb',              0,     kTableFile },
    { 'CURRENT',            0,     kCurrentFile },
    { 'LOCK',               0,     kDBLockFile },
    { 'MANIFEST-2',         2,     kDescriptorFile },
    { 'MANIFEST-7',         7,     kDescriptorFile },
    { 'LOG',                0,     kInfoLogFile },
    { 'LOG.old',            0,     kInfoLogFile },
    { '18446744073709551615.log', 18446744073709551615ull, kLogFile },
  };
  for (int i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
    std::string f = cases[i].fname;
    ASSERT_TRUE(ParseFileName(f, &number, &type)) << f;
    ASSERT_EQ(cases[i].type, type) << f;
    ASSERT_EQ(cases[i].number, number) << f;
  }
    
    
    {
    {    if (!s.ok()) {
      assert(table == NULL);
      delete file;
      // We do not cache error results so that if the error is transient,
      // or somebody repairs the file, we recover automatically.
    } else {
      TableAndFile* tf = new TableAndFile;
      tf->file = file;
      tf->table = table;
      *handle = cache_->Insert(key, tf, 1, &DeleteEntry);
    }
  }
  return s;
}
    
    
    {}  // namespace leveldb

    
    
    {  std::vector< std::pair<int, InternalKey> > compact_pointers_;
  DeletedFileSet deleted_files_;
  std::vector< std::pair<int, FileMetaData> > new_files_;
};
    
    TEST(VersionEditTest, EncodeDecode) {
  static const uint64_t kBig = 1ull << 50;
    }
    
    
    {  input.remove_prefix(kHeader);
  Slice key, value;
  int found = 0;
  while (!input.empty()) {
    found++;
    char tag = input[0];
    input.remove_prefix(1);
    switch (tag) {
      case kTypeValue:
        if (GetLengthPrefixedSlice(&input, &key) &&
            GetLengthPrefixedSlice(&input, &value)) {
          handler->Put(key, value);
        } else {
          return Status::Corruption('bad WriteBatch Put');
        }
        break;
      case kTypeDeletion:
        if (GetLengthPrefixedSlice(&input, &key)) {
          handler->Delete(key);
        } else {
          return Status::Corruption('bad WriteBatch Delete');
        }
        break;
      default:
        return Status::Corruption('unknown WriteBatch tag');
    }
  }
  if (found != WriteBatchInternal::Count(this)) {
    return Status::Corruption('WriteBatch has wrong count');
  } else {
    return Status::OK();
  }
}
    
    namespace leveldb {
    }
    
    #include <string>
    
        for (UINT driverTypeIndex = 0; driverTypeIndex < numDriverTypes; driverTypeIndex++)
    {
        g_driverType = driverTypes[driverTypeIndex];
        hr = D3D11CreateDeviceAndSwapChain(NULL, g_driverType, NULL, createDeviceFlags, featureLevels, numFeatureLevels,
                D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &g_featureLevel, &g_pImmediateContext);
        if (SUCCEEDED(hr))
            break;
    }
    if (FAILED(hr))
        return hr;
    
        // fill Hessian matrix
    cv::Mat H(3, 3, CV_64F);
    H.at<double>(0,0) = cv::Mat(cv::Mat(f1coeff).rowRange(1,21).t()*cv::Mat(20, 1, CV_64F, &Hs1)).at<double>(0,0);
    H.at<double>(0,1) = cv::Mat(cv::Mat(f1coeff).rowRange(1,21).t()*cv::Mat(20, 1, CV_64F, &Hs2)).at<double>(0,0);
    H.at<double>(0,2) = cv::Mat(cv::Mat(f1coeff).rowRange(1,21).t()*cv::Mat(20, 1, CV_64F, &Hs3)).at<double>(0,0);
    
    void ComputeJacobians(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                      const IntrinsicParams& param,  InputArray omc, InputArray Tc,
                      const int& check_cond, const double& thresh_cond, Mat& JJ2_inv, Mat& ex3);
    
    namespace cv {
    }
    
    CV_EXPORTS_W void multiply(InputArray src1, Scalar src2, OutputArray dst, double scale=1, int dtype=-1);
    
    namespace cv {
    }
    
    #ifndef CV_CL_GET_PROC_ADDRESS
#ifdef __GNUC__
#warning('OPENCV: OpenCL BLAS dynamic library loader: check configuration')
#else
#pragma message('WARNING: OPENCV: OpenCL BLAS dynamic library loader: check configuration')
#endif
#define CV_CL_GET_PROC_ADDRESS(name) NULL
#endif
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    #include 'guetzli/jpeg_data.h'
    
    // Integer implementation of the Inverse Discrete Cosine Transform (IDCT).
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli
    
    IMGUI_API bool        ImGui_ImplDX10_Init(void* hwnd, ID3D10Device* device);
IMGUI_API void        ImGui_ImplDX10_Shutdown();
IMGUI_API void        ImGui_ImplDX10_NewFrame();
IMGUI_API void        ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
        // Upload texture to graphics system
    g_FontTexture = new CIwTexture();
    g_FontTexture->SetModifiable(true);
    CIwImage& image = g_FontTexture->GetImage();
    image.SetFormat(CIwImage::ARGB_8888);
    image.SetWidth(width);
    image.SetHeight(height);
    image.SetBuffers();                                    // allocates and own buffers
    image.ReadTexels(pixels);
    g_FontTexture->SetMipMapping(false);
    g_FontTexture->SetFiltering(false);
    g_FontTexture->Upload();
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('ImGui DirectX10 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    #include <s3eKeyboard.h>
#include <s3ePointer.h>
#include <IwGx.h>
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
      void PrintStats() {
    for (size_t i = 0; i < Inputs.size(); i++) {
      const auto &II = *Inputs[i];
      Printf('  [%zd %s]\tsz: %zd\truns: %zd\tsucc: %zd\n', i,
             Sha1ToString(II.Sha1).c_str(), II.U.size(),
             II.NumExecutedMutations, II.NumSuccessfullMutations);
    }
  }
    
    ExternalFunctions::ExternalFunctions() {
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  this->NAME = GetFnPtr<decltype(ExternalFunctions::NAME)>(#NAME, WARN)
    }
    
    template <typename T>
static T *GetFnPtr(T *Fun, T *FunDef, const char *FnName, bool WarnIfMissing) {
  if (Fun == FunDef) {
    if (WarnIfMissing)
      Printf('WARNING: Failed to find function \'%s\'.\n', FnName);
    return nullptr;
  }
  return Fun;
}
    
    namespace fuzzer {
    }
    
    #ifndef SHA_BIG_ENDIAN
	// Swap byte order back
	int i;
	for (i=0; i<5; i++) {
		s->state[i]=
			  (((s->state[i])<<24)& 0xff000000)
			| (((s->state[i])<<8) & 0x00ff0000)
			| (((s->state[i])>>8) & 0x0000ff00)
			| (((s->state[i])>>24)& 0x000000ff);
	}
#endif
    
    #include 'FuzzerDefs.h'
#include <cstddef>
#include <stdint.h>
    
      void StopTraceRecording() {
    if (!RecordingMemcmp)
      return;
    RecordingMemcmp = false;
    for (size_t i = 0; i < NumMutations; i++) {
      auto &M = Mutations[i];
      if (Options.Verbosity >= 2) {
        AutoDictUnitCounts[M.W]++;
        AutoDictAdds++;
        if ((AutoDictAdds & (AutoDictAdds - 1)) == 0) {
          typedef std::pair<size_t, Word> CU;
          std::vector<CU> CountedUnits;
          for (auto &I : AutoDictUnitCounts)
            CountedUnits.push_back(std::make_pair(I.second, I.first));
          std::sort(CountedUnits.begin(), CountedUnits.end(),
                    [](const CU &a, const CU &b) { return a.first > b.first; });
          Printf('AutoDict:\n');
          for (auto &I : CountedUnits) {
            Printf('   %zd ', I.first);
            PrintASCII(I.second.data(), I.second.size());
            Printf('\n');
          }
        }
      }
      MD.AddWordToAutoDictionary({M.W, M.Pos});
    }
    for (auto &W : InterestingWords)
      MD.AddWordToAutoDictionary({W});
  }