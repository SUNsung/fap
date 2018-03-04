
        
        #endif // __cocos2dx_builder_h__

    
    bool js_cocos2dx_studio_Bone_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_Bone_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_Bone(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_Bone_isTransformDirty(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_setBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_isIgnoreMovementBoneData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_updateZOrder(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_getDisplayRenderNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_isBlendDirty(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_addChildBone(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_getWorldInfo(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_getTween(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_getParentBone(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_updateColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_setTransformDirty(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_getDisplayRenderNodeType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_removeDisplay(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_setBoneData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_setParentBone(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_addDisplay(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_setIgnoreMovementBoneData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_getBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_removeFromParent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_getColliderDetector(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_getChildArmature(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_changeDisplayWithIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_changeDisplayWithName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_setArmature(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_setBlendDirty(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_removeChildBone(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_setChildArmature(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_getNodeToArmatureTransform(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_getDisplayManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_getArmature(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Bone_Bone(JSContext *cx, uint32_t argc, jsval *vp);
    
            ok &= luaval_to_number(tolua_S, 5,&arg3, 'cc.SimpleAudioEngine:playEffect');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect'', nullptr);
            return 0;
        }
        unsigned int ret = cobj->playEffect(arg0, arg1, arg2, arg3);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 5) 
    {
        const char* arg0;
        bool arg1;
        double arg2;
        double arg3;
        double arg4;
    
    
    
    /// Test settings. Some can be controlled in the GUI.
struct Settings
{
	Settings()
	{
		viewCenter.Set(0.0f, 20.0f);
		hz = 60.0f;
		velocityIterations = 8;
		positionIterations = 3;
		drawShapes = 1;
		drawJoints = 1;
		drawAABBs = 0;
		drawContactPoints = 0;
		drawContactNormals = 0;
		drawContactImpulse = 0;
		drawFrictionImpulse = 0;
		drawCOMs = 0;
		drawStats = 0;
		drawProfile = 0;
		enableWarmStarting = 1;
		enableContinuous = 1;
		enableSubStepping = 0;
		enableSleep = 1;
		pause = 0;
		singleStep = 0;
	}
    }
    
    #include 'guetzli/idct.h'
#include 'guetzli/color_transform.h'
#include 'guetzli/dct_double.h'
#include 'guetzli/gamma_correct.h'
#include 'guetzli/preprocess_downsample.h'
#include 'guetzli/quantize.h'
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
    void ComputeBlockIDCT(const coeff_t* block, uint8_t* out) {
  coeff_t colidcts[kDCTBlockSize];
  const int kColScale = 11;
  const int kColRound = 1 << (kColScale - 1);
  for (int x = 0; x < 8; ++x) {
    int colbuf[8] = { 0 };
    Compute1dIDCT(&block[x], 8, colbuf);
    for (int y = 0; y < 8; ++y) {
      colidcts[8 * y + x] = (colbuf[y] + kColRound) >> kColScale;
    }
  }
  const int kRowScale = 18;
  const int kRowRound = 257 << (kRowScale - 1);  // includes offset by 128
  for (int y = 0; y < 8; ++y) {
    const int rowidx = 8 * y;
    int rowbuf[8] = { 0 };
    Compute1dIDCT(&colidcts[rowidx], 1, rowbuf);
    for (int x = 0; x < 8; ++x) {
      out[rowidx + x] =
          std::max(0, std::min(255, (rowbuf[x] + kRowRound) >> kRowScale));
    }
  }
}
    
    // Creates a JPEG from the rgb pixel data. Returns true on success.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg);
    
      JpegHistogram() { Clear(); }
  void Clear() {
    memset(counts, 0, sizeof(counts));
    counts[kSize - 1] = 1;
  }
  void Add(int symbol) {
    counts[symbol] += 2;
  }
  void Add(int symbol, int weight) {
    counts[symbol] += 2 * weight;
  }
  void AddHistogram(const JpegHistogram& other) {
    for (int i = 0; i + 1 < kSize; ++i) {
      counts[i] += other.counts[i];
    }
    counts[kSize - 1] = 1;
  }
  int NumSymbols() const {
    int n = 0;
    for (int i = 0; i + 1 < kSize; ++i) {
      n += (counts[i] > 0 ? 1 : 0);
    }
    return n;
  }
    
    // Butteraugli scores that correspond to JPEG quality levels, starting at
// kLowestQuality. They were computed by taking median BA scores of JPEGs
// generated using libjpeg-turbo at given quality from a set of PNGs.
// The scores above quality level 100 are just linearly decreased so that score
// for 110 is 90% of the score for 100.
const double kScoreForQuality[] = {
  2.810761,  // 70
  2.729300,
  2.689687,
  2.636811,
  2.547863,
  2.525400,
  2.473416,
  2.366133,
  2.338078,
  2.318654,
  2.201674,  // 80
  2.145517,
  2.087322,
  2.009328,
  1.945456,
  1.900112,
  1.805701,
  1.750194,
  1.644175,
  1.562165,
  1.473608,  // 90
  1.382021,
  1.294298,
  1.185402,
  1.066781,
  0.971769,  // 95
  0.852901,
  0.724544,
  0.611302,
  0.443185,
  0.211578,  // 100
  0.209462,
  0.207346,
  0.205230,
  0.203114,
  0.200999,  // 105
  0.198883,
  0.196767,
  0.194651,
  0.192535,
  0.190420,  // 110
  0.190420,
};
    
      if (op.state_ != AsyncIOOp::State::UNINITIALIZED) {
    os << op.iocb_;
  }
    
    LogHandlerConfig::LogHandlerConfig() {}
    
    // Return the includes needed for generated mock file.
grpc::string GetMockIncludes(grpc_generator::File *file,
                             const Parameters &params);
    
    void GenerateServerMethod(const grpc_generator::Method *method, grpc_generator::Printer *printer,
                          std::map<grpc::string, grpc::string> vars) {
	vars['Method'] = exportName(method->name());
	vars['Request'] = method->get_input_type_name();
	vars['Response'] = (vars['CustomMethodIO'] == '') ? method->get_output_type_name() : vars['CustomMethodIO'];
	vars['FullMethodName'] = '/' + vars['Package'] + '.' + vars['Service'] + '/' + vars['Method'];
	vars['Handler'] = '_' + vars['Service'] + '_' + vars['Method'] + '_Handler';
	if (method->NoStreaming()) {
		printer->Print(vars, 'func $Handler$(srv interface{}, ctx $context$.Context,\n\tdec func(interface{}) error, interceptor $grpc$.UnaryServerInterceptor) (interface{}, error) {\n');
		printer->Indent();
		printer->Print(vars, 'in := new($Request$)\n');
		printer->Print('if err := dec(in); err != nil { return nil, err }\n');
		printer->Print(vars, 'if interceptor == nil { return srv.($Service$Server).$Method$(ctx, in) }\n');
		printer->Print(vars, 'info := &$grpc$.UnaryServerInfo{\n');
		printer->Indent();
		printer->Print('Server: srv,\n');
		printer->Print(vars, 'FullMethod: \'$FullMethodName$\',\n');
		printer->Outdent();
		printer->Print('}\n\n');
		printer->Print(vars, 'handler := func(ctx $context$.Context, req interface{}) (interface{}, error) {\n');
		printer->Indent();
		printer->Print(vars, 'return srv.($Service$Server).$Method$(ctx, req.(* $Request$))\n');
		printer->Outdent();
		printer->Print('}\n');
		printer->Print('return interceptor(ctx, in, info, handler)\n');
		printer->Outdent();
		printer->Print('}\n\n');
		return;
	}
	vars['StreamType'] = vars['ServiceUnexported'] + vars['Method'] + 'Server';
	printer->Print(vars, 'func $Handler$(srv interface{}, stream $grpc$.ServerStream) error {\n');
	printer->Indent();
	if (ServerOnlyStreaming(method)) {
		printer->Print(vars, 'm := new($Request$)\n');
		printer->Print(vars, 'if err := stream.RecvMsg(m); err != nil { return err }\n');
		printer->Print(vars, 'return srv.($Service$Server).$Method$(m, &$StreamType${stream})\n');
	} else {
		printer->Print(vars, 'return srv.($Service$Server).$Method$(&$StreamType${stream})\n');
	}
	printer->Outdent();
	printer->Print('}\n\n');
    }
    
    
    {    flatbuffers::grpc::Message<Monster> response;
    auto stream = stub->Retrieve(&context, request);
    while (stream->Read(&response)) {
      auto resp = response.GetRoot()->name();
      std::cout << 'RPC Streaming response: ' << resp->str() << std::endl;
    }
  }
    
    
    {}  // namespace flatbuffers
    
      // Get the first directory entry.
  WIN32_FIND_DATAA FindInfo;
  HANDLE FindHandle(FindFirstFileA(Path.c_str(), &FindInfo));
  if (FindHandle == INVALID_HANDLE_VALUE)
  {
    Printf('No file found in: %s.\n', Dir.c_str());
    return;
  }
    
      bool InFuzzingThread() const { return IsMyThread; }
  size_t GetCurrentUnitInFuzzingThead(const uint8_t **Data) const;
  void TryDetectingAMemoryLeak(const uint8_t *Data, size_t Size,
                               bool DuringInitialCorpusExecution);
    
    struct Merger {
  std::vector<MergeFileInfo> Files;
  size_t NumFilesInFirstCorpus = 0;
  size_t FirstNotProcessedFile = 0;
  std::string LastFailure;
    }
    
    unsigned NumberOfCpuCores() {
  unsigned N = std::thread::hardware_concurrency();
  if (!N) {
    Printf('WARNING: std::thread::hardware_concurrency not well defined for '
           'your platform. Assuming CPU count of 1.\n');
    N = 1;
  }
  return N;
}