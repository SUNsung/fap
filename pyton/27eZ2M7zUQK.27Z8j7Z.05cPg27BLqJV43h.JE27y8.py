
        
            :param filepath: Optional filepath the the blns.txt file
    :returns: The list of naughty strings
    '''
    
    from tornado.options import define, options
    
        @gen_test
    def test_put_timeout_preempted(self):
        q = queues.Queue(1)
        q.put_nowait(0)
        put = q.put(1, timeout=timedelta(seconds=0.01))
        q.get()
        yield gen.sleep(0.02)
        yield put  # No TimeoutError.
    
            sock, port = bind_unused_port()
        server = namespace['TestServer']()
        server.add_socket(sock)
        client = IOStream(socket.socket())
        yield client.connect(('localhost', port))
        result = yield client.read_until_close()
        self.assertEqual(result, b'data')
        server.stop()
        client.close()