
        
            app.config.update(dict(
        DATABASE=os.path.join(app.root_path, 'flaskr.db'),
        DEBUG=True,
        SECRET_KEY=b'_5#y2L'F4Q8z\n\xec]/',
        USERNAME='admin',
        PASSWORD='default'
    ))
    app.config.update(config or {})
    app.config.from_envvar('FLASKR_SETTINGS', silent=True)
    
        if address_family == socket.AF_INET:
        if len(packed_ip) != ctypes.sizeof(addr.ipv4_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv4_addr, packed_ip, 4)
    elif address_family == socket.AF_INET6:
        if len(packed_ip) != ctypes.sizeof(addr.ipv6_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv6_addr, packed_ip, 16)
    else:
        raise socket.error('unknown address family')
    
            time_last_read = time.time()
        while True:
            if start > end:
                https_manager.save_ssl_connection_for_reuse(response.ssl_sock, host, call_time=time_request)
                xlog.info('DIRECT t:%d s:%d %d %s %s', (time.time()-time_request)*1000, length, response.status, host, url)
                return
    
    
    def seek(self, index):
        '''
        Set the input cursor to the position indicated by index.  This is
        normally used to seek ahead in the input stream.  No buffering is
        required to do this unless you know your stream will use seek to
        move backwards such as when backtracking.