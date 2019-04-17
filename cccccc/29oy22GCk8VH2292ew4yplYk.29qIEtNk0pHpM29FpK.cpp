
        
        
    {	int32 offset = 0;
	
	b2PolygonShape *polyShape = new b2PolygonShape;
	int32 ind;
	
    for (int32 i = 0; i < nVertices; ++i) {
		
		//Omit identical neighbors (including wraparound)
		ind = i - offset;
		if (vecs[i].x==vecs[remainder(i+1,nVertices)].x &&
			vecs[i].y==vecs[remainder(i+1,nVertices)].y){
				offset++;
				continue;
		}
		
		vecsToAdd[ind] = vecs[i];
		
    }
	
	polyShape->Set((const b2Vec2*)vecsToAdd, ind+1);
	pd.shape = polyShape;
	
    delete[] vecs;
	delete[] vecsToAdd;
}
#endif
	/**
	 * Finds and fixes 'pinch points,' points where two polygon
	 * vertices are at the same point.
	 *
	 * If a pinch point is found, pin is broken up into poutA and poutB
	 * and true is returned; otherwise, returns false.
	 *
	 * Mostly for internal use.
	 */
bool ResolvePinchPoint(const b2Polygon& pin, b2Polygon& poutA, b2Polygon& poutB){
	if (pin.nVertices < 3) return false;
	float32 tol = .001f;
	bool hasPinchPoint = false;
	int32 pinchIndexA = -1;
	int32 pinchIndexB = -1;
	for (int i=0; i<pin.nVertices; ++i){
		for (int j=i+1; j<pin.nVertices; ++j){
			//Don't worry about pinch points where the points
			//are actually just dupe neighbors
			if (b2Abs(pin.x[i]-pin.x[j])<tol&&b2Abs(pin.y[i]-pin.y[j])<tol&&j!=i+1){
				pinchIndexA = i;
				pinchIndexB = j;
				//printf('pinch: %f, %f == %f, %f\n',pin.x[i],pin.y[i],pin.x[j],pin.y[j]);
				//printf('at indexes %d, %d\n',i,j);
				hasPinchPoint = true;
				break;
			}
		}
		if (hasPinchPoint) break;
	}
	if (hasPinchPoint){
		//printf('Found pinch point\n');
		int32 sizeA = pinchIndexB - pinchIndexA;
		if (sizeA == pin.nVertices) return false;//has dupe points at wraparound, not a problem here
		float32* xA = new float32[sizeA];
		float32* yA = new float32[sizeA];
		for (int32 i=0; i < sizeA; ++i){
			int32 ind = remainder(pinchIndexA+i,pin.nVertices);
			xA[i] = pin.x[ind];
			yA[i] = pin.y[ind];
		}
		b2Polygon tempA(xA,yA,sizeA);
		poutA.Set(tempA);
		delete[] xA;
		delete[] yA;
		
		int32 sizeB = pin.nVertices - sizeA;
		float32* xB = new float32[sizeB];
		float32* yB = new float32[sizeB];
		for (int32 i=0; i<sizeB; ++i){
			int32 ind = remainder(pinchIndexB+i,pin.nVertices);
			xB[i] = pin.x[ind];
			yB[i] = pin.y[ind];
		}
		b2Polygon tempB(xB,yB,sizeB);
		poutB.Set(tempB);
		//printf('Size of a: %d, size of b: %d\n',sizeA,sizeB);
		delete[] xB;
		delete[] yB;
	}
	return hasPinchPoint;
}
    
    			if(pMipImage)
			{
				delete[] pMipImage;
			}
    
    
    {		}
    
    	// ----------------------------------------------------------------------------------------------------
	// perform a single encoding iteration
	// replace the encoding if a better encoding was found
	// subsequent iterations generally take longer for each iteration
	// set m_boolDone if encoding is perfect or encoding is finished based on a_fEffort
	//
	void Block4x4Encoding_ETC1::PerformIteration(float a_fEffort)
	{
		assert(!m_boolDone);
    }
    
    static OPUS_INLINE int DIV32_16_(opus_int64 a, opus_int64 b, char *file, int line)
{
   opus_int64 res;
   if (b==0)
   {
      fprintf(stderr, 'DIV32_16: divide by zero: %d/%d in %s: line %d\n', (int)a, (int)b, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
      return 0;
   }
   if (!VERIFY_INT(a) || !VERIFY_SHORT(b))
   {
      fprintf (stderr, 'DIV32_16: inputs are not int/short: %d %d in %s: line %d\n', (int)a, (int)b, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = a/b;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'DIV32_16: output is not short: %d / %d = %d in %s: line %d\n', (int)a,(int)b,(int)res, file, line);
      if (res>32767)
         res = 32767;
      if (res<-32768)
         res = -32768;
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips+=35;
   return res;
}
    
    /*!
* Downsample 2x, mediocre quality
*/
void silk_resampler_down2(
    opus_int32                  *S,                 /* I/O  State vector [ 2 ]                                          */
    opus_int16                  *out,               /* O    Output signal [ len ]                                       */
    const opus_int16            *in,                /* I    Input signal [ floor(len/2) ]                               */
    opus_int32                  inLen               /* I    Number of input samples                                     */
);
    
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
    
      // When user keys are different, but correctly ordered
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('hello', 200, kTypeValue)));
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
    TEST(LogTest, Empty) {
  ASSERT_EQ('EOF', Read());
}
    
      // Compute the crc of the record type and the payload.
  uint32_t crc = crc32c::Extend(type_crc_[t], ptr, n);
  crc = crc32c::Mask(crc);                 // Adjust for storage
  EncodeFixed32(buf, crc);
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
    
    {  Status FindTable(uint64_t file_number, uint64_t file_size, Cache::Handle**);
};
    
          case kNextFileNumber:
        if (GetVarint64(&input, &next_file_number_)) {
          has_next_file_number_ = true;
        } else {
          msg = 'next file number';
        }
        break;
    
      void Stop(const Slice& name) {
    double finish = Env::Default()->NowMicros() * 1e-6;
    }
    
    #endif /* incl_HPHP_CONFIG_H_ */

    
    /*
 * Attempt to log an entry to the perf warning service.
 *
 * If StructuredLog::enabled() returns false or this event is discarded by the
 * effective sample rate, nothing will be logged. If both of those checks pass,
 * fillCols will be passed a StructuredLogEntry& to populate, which will then
 * be logged. The column names 'event_name' and 'priority' are reserved and
 * will be overwritten is fillCols() sets them.
 *
 * The effective sample rate is determined by Eval.PerfWarningSampleRate * rate
 * (or kDefaultPerfWarningRate for the overloads that don't take a rate). If
 * the effective sample rate is 0, all events will be discarded.
 */
template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols);
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols);
    
    #endif // incl_HPHP_PLAIN_FILE_H_

    
        // Setup Platform/Renderer bindings
    ImGui_ImplGlfw_InitForVulkan(window, true);
    ImGui_ImplVulkan_InitInfo init_info = {};
    init_info.Instance = g_Instance;
    init_info.PhysicalDevice = g_PhysicalDevice;
    init_info.Device = g_Device;
    init_info.QueueFamily = g_QueueFamily;
    init_info.Queue = g_Queue;
    init_info.PipelineCache = g_PipelineCache;
    init_info.DescriptorPool = g_DescriptorPool;
    init_info.Allocator = g_Allocator;
    init_info.MinImageCount = g_MinImageCount;
    init_info.ImageCount = wd->ImageCount;
    init_info.CheckVkResultFn = check_vk_result;
    ImGui_ImplVulkan_Init(&init_info, wd->RenderPass);
    
        for (int request_i = 0; request_i < request_modes_count; request_i++)
        for (uint32_t avail_i = 0; avail_i < avail_count; avail_i++)
            if (request_modes[request_i] == avail_modes[avail_i])
                return request_modes[request_i];
    
    IMGUI_IMPL_API bool     ImGui_ImplDX9_Init(IDirect3DDevice9* device);
IMGUI_IMPL_API void     ImGui_ImplDX9_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX9_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
    // About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually.
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad.
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
#include <GL/gl3w.h>    // Initialize with gl3wInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
#include <GL/glew.h>    // Initialize with glewInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
#include <glad/glad.h>  // Initialize with gladLoadGL()
#else
#include IMGUI_IMPL_OPENGL_LOADER_CUSTOM
#endif
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
            // Start the Dear ImGui frame
        ImGui_ImplOpenGL2_NewFrame();
        ImGui_ImplSDL2_NewFrame(window);
        ImGui::NewFrame();
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }