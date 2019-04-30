
        
        
    {} // namespace caffe2

    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
        // Setup render state
    const float blend_factor[4] = { 0.f, 0.f, 0.f, 0.f };
    ctx->OMSetBlendState(g_pBlendState, blend_factor, 0xffffffff);
    ctx->OMSetDepthStencilState(g_pDepthStencilState, 0);
    ctx->RSSetState(g_pRasterizerState);
    
    
    {    return 0;
}
    
    
    {        template <int i>
        static inline void f(uint32_t *a, uint32_t *b) {
            switch (state) {
            case 1:
                a[i % 5] += ((a[(3 + i) % 5] & (a[(2 + i) % 5] ^ a[(1 + i) % 5])) ^ a[(1 + i) % 5]) + b[i] + 0x5a827999 + rol(a[(4 + i) % 5], 5);
                a[(3 + i) % 5] = rol(a[(3 + i) % 5], 30);
                break;
            case 2:
                b[i] = blk(b, i);
                a[(1 + i) % 5] += ((a[(4 + i) % 5] & (a[(3 + i) % 5] ^ a[(2 + i) % 5])) ^ a[(2 + i) % 5]) + b[i] + 0x5a827999 + rol(a[(5 + i) % 5], 5);
                a[(4 + i) % 5] = rol(a[(4 + i) % 5], 30);
                break;
            case 3:
                b[(i + 4) % 16] = blk(b, (i + 4) % 16);
                a[i % 5] += (a[(3 + i) % 5] ^ a[(2 + i) % 5] ^ a[(1 + i) % 5]) + b[(i + 4) % 16] + 0x6ed9eba1 + rol(a[(4 + i) % 5], 5);
                a[(3 + i) % 5] = rol(a[(3 + i) % 5], 30);
                break;
            case 4:
                b[(i + 8) % 16] = blk(b, (i + 8) % 16);
                a[i % 5] += (((a[(3 + i) % 5] | a[(2 + i) % 5]) & a[(1 + i) % 5]) | (a[(3 + i) % 5] & a[(2 + i) % 5])) + b[(i + 8) % 16] + 0x8f1bbcdc + rol(a[(4 + i) % 5], 5);
                a[(3 + i) % 5] = rol(a[(3 + i) % 5], 30);
                break;
            case 5:
                b[(i + 12) % 16] = blk(b, (i + 12) % 16);
                a[i % 5] += (a[(3 + i) % 5] ^ a[(2 + i) % 5] ^ a[(1 + i) % 5]) + b[(i + 12) % 16] + 0xca62c1d6 + rol(a[(4 + i) % 5], 5);
                a[(3 + i) % 5] = rol(a[(3 + i) % 5], 30);
                break;
            case 6:
                b[i] += a[4 - i];
            }
        }
    };
    
        struct optparse_long longopts[] = {
        {'port', 'p', OPTPARSE_REQUIRED},
        {'help', 'h', OPTPARSE_NONE},
        {'passphrase', 'a', OPTPARSE_REQUIRED},
        {'key', 'k', OPTPARSE_REQUIRED},
        {'cert', 'c', OPTPARSE_REQUIRED},
        {'dh_params', 'd', OPTPARSE_REQUIRED},
        {0}
    };
    
    #include 'WebSocketProtocol.h'
#include 'AsyncSocketData.h'
#include 'PerMessageDeflate.h'
    
    #ifndef LOOPDATA_H
#define LOOPDATA_H
    
            if (zlibContext->dynamicDeflationBuffer.length()) {
            zlibContext->dynamicDeflationBuffer.append(zlibContext->deflationBuffer, DEFLATE_OUTPUT_CHUNK - deflationStream.avail_out);
    }
    
        /* Subscribe to a topic according to MQTT rules and syntax */
    void subscribe(std::string_view topic) {
        WebSocketContextData<SSL> *webSocketContextData = (WebSocketContextData<SSL> *) us_new_socket_context_ext(SSL,
            (us_new_socket_context_t *) us_new_socket_context(SSL, (us_new_socket_t *) this)
        );
    }
    
            if (opCode == uWS::TEXT) {
            if (!uWS::protocol::isValidUtf8((unsigned char *)data, length)) {
                /* Return break */
                return true;
            }
        } else if (opCode == uWS::CLOSE) {
            uWS::protocol::parseClosePayload((char *)data, length);
        }