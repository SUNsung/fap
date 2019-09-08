
        
        REGISTER_CPU_OPERATOR(
    MergeMultiScalarFeatureTensorsGradient,
    MergeMultiScalarFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeMultiScalarFeatureTensorsGradient)
    .SetDoc(
        'Explode given multi-feature tensors with scalar features into many.' +
        doc)
    .NumInputs([](int n) { return n >= 2; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'out_values_grad', '.values_grad')
    .Output(0, 'in1_values_grad', '.values_grad');
REGISTER_GRADIENT(
    MergeMultiScalarFeatureTensors,
    GetMergeMultiScalarFeatureTensorsGradient);
    
    OPERATOR_SCHEMA(Floor)
    .NumInputs(1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .SetDoc(R'DOC(
Element-wise application of the floor function ($y=floor(x)$) to the input
tensor `X`. Output tensor shape is the same as the input tensor. This
operator can be used in an in-place fashion by using the same input blob as the
output blob.
    
    Example 2 (with KEY):
DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
KEY   = [0, 1, 3, 2, 1, 0, 1, 0]
RANGES = [
  [
    [2, 4],
    [0, 2],
  ],
  [
    [0, 0],
    [6, 2],
  ]
]
lengths = [4, 2]
OUTPUT[0] = [[6, 5, 4, 3], [0, 0, 0, 0]]
OUTPUT[1] = [[1, 2], [8, 7]]
    
    template <typename T, class Context>
class BernoulliJSDGradientOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDGradientOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    String ResourceImporterOGGVorbis::get_resource_type() const {
    }
    
    	if (GjkEpa2::Penetration(p_shape_A, p_transform_A, p_shape_B, p_transform_B, p_transform_B.origin - p_transform_A.origin, res)) {
		if (p_result_callback) {
			if (p_swap)
				p_result_callback(res.witnesses[1], res.witnesses[0], p_userdata);
			else
				p_result_callback(res.witnesses[0], res.witnesses[1], p_userdata);
		}
		return true;
	}
    
    void FileAccessNetwork::close() {
    }
    
    		bool active;
		Vector<Surface *> surfaces;
		int blend_shape_count;
		VS::BlendShapeMode blend_shape_mode;
		AABB custom_aabb;
		mutable uint64_t last_pass;
		SelfList<MultiMesh>::List multimeshes;
		_FORCE_INLINE_ void update_multimeshes() {
    }
    
    void DictionaryPropertyEdit::_notif_changev(const String &p_v) {
	_change_notify(p_v.utf8().get_data());
}
    
    protected:
	static void _bind_methods();
    
    	if (!singleton->make_flags.has(path)) {
		singleton->make_flags[path] = 0;
	}
    
    
    {    // By default ImGuiFreeType will use IM_ALLOC()/IM_FREE().
    // However, as FreeType does lots of allocations we provide a way for the user to redirect it to a separate memory heap if desired:
    IMGUI_API void SetAllocatorFunctions(void* (*alloc_func)(size_t sz, void* user_data), void (*free_func)(void* ptr, void* user_data), void* user_data = NULL);
}

    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSDL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
            if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE && event.window.windowID == SDL_GetWindowID(window))
                done = true;
        }
    }
    
    // Auto-detect GL version
#if !defined(IMGUI_IMPL_OPENGL_ES2) && !defined(IMGUI_IMPL_OPENGL_ES3)
#if (defined(__APPLE__) && (TARGET_OS_IOS || TARGET_OS_TV)) || (defined(__ANDROID__))
#define IMGUI_IMPL_OPENGL_ES3       // iOS, Android  -> GL ES 3, '#version 300 es'
#elif defined(__EMSCRIPTEN__)
#define IMGUI_IMPL_OPENGL_ES2       // Emscripten    -> GL ES 2, '#version 100'
#endif
#endif
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        CleanupDeviceD3D();
    ::DestroyWindow(hwnd);
    ::UnregisterClass(wc.lpszClassName, wc.hInstance);
    
        // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::const_reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        ret = p.write(&p, (void*) SW_STRS('hello world1'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world2'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world3'));
    ASSERT_GT(ret, 0);
    
        un1.sun_family = AF_UNIX;
    un2.sun_family = AF_UNIX;
    
        signals:
        void finished();
    
            auto iter = cache_map.find(key);
        if (iter != cache_map.end())
        {
            iter->second->second.first = expire_time;
            iter->second->second.second = val;
            cache_list.splice(cache_list.begin(), cache_list, iter->second);
            return;
        }
    
    
    {    // prepare RSA public key
    BIO *bio = NULL;
    RSA *public_rsa = NULL;
    if (sw_unlikely((bio = BIO_new_mem_buf((void *)rsa_public_key, -1)) == NULL))
    {
        swWarn('BIO_new_mem_buf publicKey error!');
        goto _error;
    }
    // PEM_read_bio_RSA_PUBKEY
    ERR_clear_error();
    if (sw_unlikely((public_rsa = PEM_read_bio_RSA_PUBKEY(bio, NULL, NULL, NULL)) == NULL))
    {
        char err_buf[512];
        ERR_load_crypto_strings();
        ERR_error_string_n(ERR_get_error(), err_buf, sizeof(err_buf));
        swWarn('[PEM_read_bio_RSA_PUBKEY ERROR]: %s', err_buf);
        goto _error;
    }
    BIO_free_all(bio);
    // encrypt with RSA public key
    int rsa_len = RSA_size(public_rsa);
    unsigned char encrypt_msg[rsa_len];
    // RSA_public_encrypt
    ERR_clear_error();
    size_t flen = rsa_len - 42;
    flen = password_bytes_length > flen ? flen : password_bytes_length;
    swTraceLog(SW_TRACE_MYSQL_CLIENT, 'rsa_len=%d', rsa_len);
    if (sw_unlikely(RSA_public_encrypt(flen, (const unsigned char *) password_bytes, (unsigned char *) encrypt_msg, public_rsa, RSA_PKCS1_OAEP_PADDING) < 0))
    {
        char err_buf[512];
        ERR_load_crypto_strings();
        ERR_error_string_n(ERR_get_error(), err_buf, sizeof(err_buf));
        swWarn('[RSA_public_encrypt ERROR]: %s', err_buf);
        goto _error;
    }
    RSA_free(public_rsa);
    memcpy(data.body, (char *)encrypt_msg, rsa_len); // copy rsa to buf
    set_header(rsa_len, raw_data_pakcet->header.number + 1);
    swMysqlPacketDump(get_length(), get_number(), get_data(), 'Protocol::AuthSignatureResponse');
#endif
}
    
    #include <limits.h>
#include <Zend/zend_llist.h>
#ifdef ZTS
#include <TSRM/TSRM.h>
#endif