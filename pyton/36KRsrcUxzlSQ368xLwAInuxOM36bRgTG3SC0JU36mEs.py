
        
            if test_config is None:
        # load the instance config, if it exists, when not testing
        app.config.from_pyfile('config.py', silent=True)
    else:
        # load the test config if passed in
        app.config.update(test_config)
    
        Checks that the id exists and optionally that the current user is
    the author.
    
    
def close_db(e=None):
    '''If this request connected to the database, close the
    connection.
    '''
    db = g.pop('db', None)
    
        monkeypatch.setattr('flaskr.db.init_db', fake_init_db)
    result = runner.invoke(args=['init-db'])
    assert 'Initialized' in result.output
    assert Recorder.called

    
            app.add_url_rule('/counter', view_func=CounterAPI.as_view('counter'))
    '''
    
    
def set_init_version(version):
    info('Setting __init__.py version to %s', version)
    set_filename_version('flask/__init__.py', version, '__version__')
    
    '''
requests._internal_utils
~~~~~~~~~~~~~~
    
        def __getitem__(self, key):
        return self._store[key.lower()][1]
    
        def cert_verify(self, conn, url, verify, cert):
        '''Verify a SSL certificate. This method should not be called from user
        code, and is only exposed for use when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
            with Server(handler) as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
            sock.sendall(question)
            text = sock.recv(1000)
            assert text == answer
            sock.close()
    
        @pytest.mark.parametrize(
        'stream, value', (
            (StringIO.StringIO, 'Test'),
            (BytesIO, b'Test'),
            pytest.mark.skipif('cStringIO is None')((cStringIO, 'Test')),
        ))
    def test_io_streams(self, stream, value):
        '''Ensures that we properly deal with different kinds of IO streams.'''
        assert super_len(stream()) == 0
        assert super_len(stream(value)) == 4
    
            :param url: URL for the new :class:`Request` object.
        :param data: (optional) Dictionary, list of tuples, bytes, or file-like
            object to send in the body of the :class:`Request`.
        :param \*\*kwargs: Optional arguments that ``request`` takes.
        :rtype: requests.Response
        '''
    
            Will successfully encode parameters when passed as a dict or a list of
        2-tuples. Order is retained if data is a list of 2-tuples but arbitrary
        if parameters are supplied as a dict.
        '''
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')