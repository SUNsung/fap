
        
        protected:
	static mbedtls_x509_crt cacert;
	mbedtls_entropy_context entropy;
	mbedtls_ctr_drbg_context ctr_drbg;
	mbedtls_ssl_context ssl;
	mbedtls_ssl_config conf;
    
    Error WebSocketClient::connect_to_url(String p_url, PoolVector<String> p_protocols, bool gd_mp_api) {
	_is_multiplayer = gd_mp_api;
    }