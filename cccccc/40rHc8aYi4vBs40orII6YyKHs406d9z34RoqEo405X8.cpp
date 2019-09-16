
        
        bool swift::_swift_reportFatalErrorsToDebugger = true;
    
    KNOWN_STDLIB_TYPE_DECL(Optional, EnumDecl, 1)
    
    template <>
const char *
_swift_stdlib_strtoX_clocale_impl<long double>(const char *str, long double *result) {
  if (swift_stringIsSignalingNaN(str)) {
    *result = std::numeric_limits<long double>::signaling_NaN();
    return str + std::strlen(str);
  }
    }
    
      /// Retrieve the buffer containing the argument label locations.
  MutableArrayRef<SourceLoc> getArgumentLabelLocsBuffer() {
    if (!asDerived().hasArgumentLabelLocs())
      return { };
    }
    
    /// Check whether a type conforms to a given native Swift protocol,
/// visible from the named module.
///
/// If so, returns a pointer to the witness table for its conformance.
/// Returns void if the type does not conform to the protocol.
///
/// \param type The metadata for the type for which to do the conformance
///             check.
/// \param protocol The protocol descriptor for the protocol to check
///                 conformance for.
SWIFT_RUNTIME_EXPORT
const WitnessTable *swift_conformsToProtocol(const Metadata *type,
                                            const ProtocolDescriptor *protocol);
    
    int secp256k1_ecdsa_recoverable_signature_serialize_compact(const secp256k1_context* ctx, unsigned char *output64, int *recid, const secp256k1_ecdsa_recoverable_signature* sig) {
    secp256k1_scalar r, s;
    }
    
        ASSERT_OK(dbfull()->TEST_CompactMemTable());
    ASSERT_GT(NumTableFilesAtLevel(0), 0);
    
    #endif  // STORAGE_LEVELDB_DB_DBFORMAT_H_

    
    // Print contents of a log file. (*func)() is called on every record.
Status PrintLogContents(Env* env, const std::string& fname,
                        void (*func)(uint64_t, Slice, WritableFile*),
                        WritableFile* dst) {
  SequentialFile* file;
  Status s = env->NewSequentialFile(fname, &file);
  if (!s.ok()) {
    return s;
  }
  CorruptionReporter reporter;
  reporter.dst_ = dst;
  log::Reader reader(file, &reporter, true, 0);
  Slice record;
  std::string scratch;
  while (reader.ReadRecord(&record, &scratch)) {
    (*func)(reader.LastRecordOffset(), record, dst);
  }
  delete file;
  return Status::OK();
}
    
    TestWritableFile::~TestWritableFile() {
  if (writable_file_opened_) {
    Close();
  }
  delete target_;
}
    
      fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
        IMF_EXPORT
    Iterator                    end ();
    IMF_EXPORT
    ConstIterator               end () const;
    
    #ifndef IMFGENERICOUTPUTFILE_H_
#define IMFGENERICOUTPUTFILE_H_
    
        if (maxImageWidth > 0 &&
        maxImageWidth < (dataWindow.max.x - dataWindow.min.x + 1))
    {
	THROW (IEX_NAMESPACE::ArgExc, 'The width of the data window exceeds the '
			    'maximum width of ' << maxImageWidth << 'pixels.');
    }
    
        template <class T> T*	findTypedAttribute (const std::string &name);
    template <class T> const T*	findTypedAttribute (const std::string &name)
								       const;
    
    
    {	    if (zerun >= 2)
	    {
		if (zerun >= SHORTEST_LONG_RUN)
		{
		    outputBits (6, LONG_ZEROCODE_RUN, c, lc, p);
		    outputBits (8, zerun - SHORTEST_LONG_RUN, c, lc, p);
		}
		else
		{
		    outputBits (6, SHORT_ZEROCODE_RUN + zerun - 2, c, lc, p);
		}
		continue;
	    }
	}
    
        InputFile (InputPartData* part);
    InputFile (const InputFile &);			// not implemented
    InputFile & operator = (const InputFile &);		// not implemented
    
            IMF_EXPORT
        const char *        fileName () const;
        IMF_EXPORT
        const Header &      header () const;
        IMF_EXPORT
        int                 version () const;
        IMF_EXPORT
        void                setFrameBuffer (const FrameBuffer &frameBuffer);
        IMF_EXPORT
        const FrameBuffer & frameBuffer () const;
        IMF_EXPORT
        bool                isComplete () const;
        IMF_EXPORT
        bool                isOptimizationEnabled () const;
        IMF_EXPORT
        void                readPixels (int scanLine1, int scanLine2);
        IMF_EXPORT
        void                readPixels (int scanLine);
        IMF_EXPORT
        void                rawPixelData (int firstScanLine,
                                          const char *&pixelData,
                                          int &pixelDataSize);
    
    
    {  C10_DISABLE_COPY_AND_ASSIGN(AsyncSchedulingNet);
};
    
    REGISTER_CPU_OPERATOR(
    SubGradient,
    BinaryElementwiseGradientOp<
        NumericTypes,
        CPUContext,
        SubFunctor<CPUContext>>);
    
    
    {
    {SHOULD_NOT_DO_GRADIENT(FindDuplicateElements);
} // namespace
} // namespace caffe2

    
    OPERATOR_SCHEMA(Floor)
    .NumInputs(1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .SetDoc(R'DOC(
Element-wise application of the floor function ($y=floor(x)$) to the input
tensor `X`. Output tensor shape is the same as the input tensor. This
operator can be used in an in-place fashion by using the same input blob as the
output blob.
    
        // Create Window Surface
    VkSurfaceKHR surface;
    VkResult err = glfwCreateWindowSurface(g_Instance, window, g_Allocator, &surface);
    check_vk_result(err);
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
        // Poll and handle events (inputs, window resize, etc.)
    // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
    // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
    // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
    // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        ImGui_ImplSDL2_ProcessEvent(&event);
        // Capture events here, based on io.WantCaptureMouse and io.WantCaptureKeyboard
    }
    
        // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    
    #pragma once
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    
    {
    {
    {
    {                    // Bind texture, Draw
                    glBindTexture(GL_TEXTURE_2D, (GLuint)(intptr_t)pcmd->TextureId);
                    glDrawElements(GL_TRIANGLES, (GLsizei)pcmd->ElemCount, sizeof(ImDrawIdx) == 2 ? GL_UNSIGNED_SHORT : GL_UNSIGNED_INT, idx_buffer);
                }
            }
            idx_buffer += pcmd->ElemCount;
        }
    }
    
    
    {
    {            if (overwriteInputGradient)
                input1Gradient.AssignMatrixProductOf(false/*transC*/, input0, !m_transpose/*transA*/, outputGradient, false/*transB*/);
            else
                input1Gradient.AddMatrixProductOf(false/*transC*/, input0, !m_transpose/*transA*/, outputGradient, false/*transB*/);
        }
    }
    
        {
        if (pass > ndlPassInitial && evaluateNode)
        {
            std::string name = nodeParam->GetName();
            std::wstring wname = Microsoft::MSR::CNTK::ToFixedWStringFromMultiByte(name);
            if (nodeParam->GetType() == ndlTypeDotParameter)
            {
                // When we see a variable of the form 'A.B' in a macro, we need to resolve it to an actual node, by first constructing it's
                // fully-qualified name. There are 2 possibilities:
                // 1) 'A' was defined locally within the macro.  In this case, we must find the fully-qualified name of the node that this macro
                //    call is being assigned to (eg, 'C' in the example 'C=Macro(X)'), and concatenate it's name with 'A.B' (eg, 'C.A.B').
                // 2) 'A' was passed in as a parameter to a macro.  In this case, we must find the fully-qualified name of the node that
                //    was passed in as 'A', and replace the 'A' and 'A.B' with this name.
    }
    }
    }
    
    // function to create an object of a certain type, using both old CNTK config and BrainScript
template <class C>
shared_ptr<C> CreateObject(const ScriptableObjects::IConfigRecord& config, const wchar_t* id)
{
    // TODO: CNTK config added 'traceLevel = 0' to 'config'. In BS, we cannot do that (IConfigRecord is immutable). Solution: Just say 'traceLevel = 0' in the BS macros for readers.
    return config[id].AsPtr<C>(); // BS instantiates this object through this call
}
template <class C>
shared_ptr<C> CreateObject(const ConfigParameters& config, const wchar_t* id)
{
    ConfigParameters objConfig(config(id));
    const auto& readerType = string(objConfig('readerType', ''));
    if (objConfig.ExistsCurrent('traceLevel') || // do not overwrite 'traceLevel' if it's already present
        AreEqualIgnoreCase(readerType, 'CNTKTextFormatReader') || // do not overwrite 'traceLevel' when creating a CTF reader
        AreEqualIgnoreCase(readerType, 'CNTKBinaryReader'))  // do not overwrite 'traceLevel' when creating a binary reader
    {
        return make_shared<C>(objConfig);
    }
    }
    
    #pragma once
    
    enum class ParentGradientOptimization
{
    None,       // no parent gradient optimization
    Overwrite,  // parent overwrite gradient with beta = 0, so child don't need to reset its value
    Reuse       // parent gradient matrix is reused by child
};
    
    
    {
    {
    {} } }

    
    template std::shared_ptr<IDistGradAggregator<double>> GetSimpleDistGradAggregator<double>(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce);
    
    #endif // OPENPOSE_EXAMPLES_TUTORIAL_USER_POST_PROCESSING_HPP

    
            Point<T>& operator*=(const T value);
    
        template<typename T>
    Point<T>& Point<T>::operator-=(const Point<T>& point)
    {
        try
        {
            x -= point.x;
            y -= point.y;
            // Return
            return *this;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return *this;
        }
    }