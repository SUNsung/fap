
        
        #ifndef BITCOIN_QT_OPENURIDIALOG_H
#define BITCOIN_QT_OPENURIDIALOG_H
    
    void test_ecdh_api(void) {
    /* Setup context that just counts errors */
    secp256k1_context *tctx = secp256k1_context_create(SECP256K1_CONTEXT_SIGN);
    secp256k1_pubkey point;
    unsigned char res[32];
    unsigned char s_one[32] = { 0 };
    int32_t ecount = 0;
    s_one[31] = 1;
    }
    
    #include 'include/secp256k1_recovery.h'
    
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 0));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 1));
    CHECK(secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 2));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 3));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    
    enum jtokentype {
    JTOK_ERR        = -1,
    JTOK_NONE       = 0,                           // eof
    JTOK_OBJ_OPEN,
    JTOK_OBJ_CLOSE,
    JTOK_ARR_OPEN,
    JTOK_ARR_CLOSE,
    JTOK_COLON,
    JTOK_COMMA,
    JTOK_KW_NULL,
    JTOK_KW_TRUE,
    JTOK_KW_FALSE,
    JTOK_NUMBER,
    JTOK_STRING,
};
    
    
    {
    {					b->prev = NULL;
					h.last = b;
					h.first = b;
				}
			}
    
    
    {	ShaderCompilerGLES2();
};
    
    #include 'syslog_logger.h'
#include 'print_string.h'
#include <syslog.h>
    
    	struct sockaddr_storage addr;
	size_t addr_size = _set_listen_sockaddr(&addr, p_port, sock_type, p_bind_address);
    
    	//WIN32_FILE_ATTRIBUTE_DATA    fileInfo;
    
    
    {#ifdef WINDOWS_USE_MUTEX
	mutex = CreateMutex(NULL, FALSE, NULL);
#else
#ifdef UWP_ENABLED
	InitializeCriticalSectionEx(&mutex, 0, 0);
#else
	InitializeCriticalSection(&mutex);
#endif
#endif
}
    
    Error PacketPeerUDPWinsock::listen(int p_port, const IP_Address &p_bind_address, int p_recv_buffer_size) {
    }
    
    #ifdef WINDOWS_ENABLED
    
    
    {    return CardinalSplineBy::create(_duration, pReverse, _tension);
}
    
        /**
    @brief Set whether lens is concave.
    @param concave Whether lens is concave.
    */
    void setConcave(bool concave) { _concave = concave; }
    
    
    {    va_end(params);
    
    return ret;
}
#endif
    
        /** Adds a frame with an image filename. Internally it will create a SpriteFrame and it will add it.
     * The frame will be added with one 'delay unit'.
     * Added to facilitate the migration from v0.8 to v0.9.
     * @param filename The path of SpriteFrame.
     */
    void addSpriteFrameWithFile(const std::string& filename);
    /**
     * @deprecated. Use addSpriteFrameWithFile() instead.
     @js NA
     */
    CC_DEPRECATED_ATTRIBUTE void addSpriteFrameWithFileName(const std::string& filename){ addSpriteFrameWithFile(filename);}
    
    
    {}