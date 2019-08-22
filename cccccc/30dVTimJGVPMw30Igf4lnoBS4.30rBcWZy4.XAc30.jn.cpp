
        
            // Create the pipes to which the ConPTY will connect
    if (CreatePipe(&hPipePTYIn, phPipeOut, NULL, 0) &&
        CreatePipe(phPipeIn, &hPipePTYOut, NULL, 0))
    {
        // Determine required size of Pseudo Console
        COORD consoleSize{};
        CONSOLE_SCREEN_BUFFER_INFO csbi{};
        HANDLE hConsole{ GetStdHandle(STD_OUTPUT_HANDLE) };
        if (GetConsoleScreenBufferInfo(hConsole, &csbi))
        {
            consoleSize.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
            consoleSize.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
        }
    }
    
    	for (Map<ConstraintSW *, int>::Element *E = constraint_map.front(); E; E = E->next()) {
    }
    
    #endif // CPU_PARTICLES_2D_EDITOR_PLUGIN_H

    
    protected:
	static void _bind_methods();
    
    #include 'core/math/face3.h'
#include 'core/reference.h'
    
    InputEventMouseMotion::InputEventMouseMotion() {
}
    
    #endif // AUDIO_STREAM_PREVIEW_H

    
    
    {	if (err != OK) {
		mkdirerr->popup_centered_minsize(Size2(250, 80) * EDSCALE);
	} else {
		opened_paths.insert(dir);
		//reload(dir.plus_file(makedirname->get_text()));
		EditorFileSystem::get_singleton()->scan_changes(); //we created a dir, so rescan changes
	}
	makedirname->set_text(''); // reset label
}
    
    #include 'scene/gui/box_container.h'
#include 'scene/gui/menu_button.h'
    
      void RunServerInterceptors() {
    auto* rpc_info = call_->server_rpc_info();
    if (!reverse_) {
      current_interceptor_index_ = 0;
    } else {
      current_interceptor_index_ = rpc_info->interceptors_.size() - 1;
    }
    rpc_info->RunInterceptor(this, current_interceptor_index_);
  }
    
    void ChannelArguments::SetLoadBalancingPolicyName(
    const grpc::string& lb_policy_name) {
  SetString(GRPC_ARG_LB_POLICY_NAME, lb_policy_name);
}
    
    #endif

    
    static void iomgr_platform_shutdown_background_closure(void) {}
    
    
    {  padded = gpr_leftpad('foo', '0', 5);
  GPR_ASSERT(0 == strcmp('00foo', padded));
  gpr_free(padded);
}
    
    static grpc::internal::GrpcLibraryInitializer g_gli_initializer;
ChannelCredentials::ChannelCredentials() { g_gli_initializer.summon(); }
    
    #include <grpcpp/security/credentials.h>
    
      request.set_message('Hello');
  EXPECT_TRUE(stream->Write(request));
  EXPECT_TRUE(stream->Read(&response));
  EXPECT_EQ(response.message(), request.message());
    
    #include <stdio.h>
#include <stdlib.h>
#include 'PSTokenizer.h'
    
    #ifdef USE_GCC_PRAGMAS
#pragma interface
#endif
    
      // get alignment
  if (dict->lookup('Dm', &obj)->isName()) {
    const char *dm = obj.getName();
    
    if (strcmp('H', dm) == 0)
      alignment = transitionHorizontal;
    else if (strcmp('V', dm) == 0)
      alignment = transitionVertical;
  }
  obj.free();
    
    void Parser::shift(int objNum) {
  if (inlineImg > 0) {
    if (inlineImg < 2) {
      ++inlineImg;
    } else {
      // in a damaged content stream, if 'ID' shows up in the middle
      // of a dictionary, we need to reset
      inlineImg = 0;
    }
  } else if (buf2.isCmd('ID')) {
    lexer->skipChar();		// skip char after 'ID' command
    inlineImg = 1;
  }
  buf1.free();
  buf2.shallowCopy(&buf1);
  if (inlineImg > 0)		// don't buffer inline image data
    buf2.initNull();
  else
    lexer->getObj(&buf2, objNum);
}

    
    #include <stdlib.h>
#include <stddef.h>
#include 'ProfileData.h'
    
      MediaParameters* getMHParameters() { return &MH; }
  MediaParameters* getBEParameters() { return &BE; }
    
      newsound->kind = kind;
  if (fileName) {
    newsound->fileName = fileName->copy();
  }
  newsound->samplingRate = samplingRate;
  newsound->channels = channels;
  newsound->bitsPerSample = bitsPerSample;
  newsound->encoding = encoding;
    
      //----- update graphics state
  virtual void updateAll(GfxState *state);
  virtual void updateCTM(GfxState *state, double m11, double m12,
			 double m21, double m22, double m31, double m32);
  virtual void updateLineDash(GfxState *state);
  virtual void updateFlatness(GfxState *state);
  virtual void updateLineJoin(GfxState *state);
  virtual void updateLineCap(GfxState *state);
  virtual void updateMiterLimit(GfxState *state);
  virtual void updateLineWidth(GfxState *state);
  virtual void updateStrokeAdjust(GfxState *state);
  virtual void updateFillColor(GfxState *state);
  virtual void updateStrokeColor(GfxState *state);
  virtual void updateBlendMode(GfxState *state);
  virtual void updateFillOpacity(GfxState *state);
  virtual void updateStrokeOpacity(GfxState *state);