
        
            exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
            for response in responses:
    
    
def get_filename_max_length(directory):
    max_len = 255
    try:
        pathconf = os.pathconf
    except AttributeError:
        pass  # non-posix
    else:
        try:
            max_len = pathconf(directory, 'PC_NAME_MAX')
        except OSError as e:
            if e.errno != errno.EINVAL:
                raise
    return max_len
    
            Return a ``requests.auth.AuthBase`` subclass instance.
    
        @pytest.mark.parametrize('verify_value', ['false', 'fALse'])
    def test_verify_false_OK(self, httpbin_secure, verify_value):
        r = http(httpbin_secure.url + '/get', '--verify', verify_value)
        assert HTTP_OK in r
    
        @property
    def path(self):
        '''Return the config file path creating basedir, if needed.'''
        path = self._get_path()
        try:
            os.makedirs(os.path.dirname(path), mode=0o700)
        except OSError as e:
            if e.errno != errno.EEXIST:
                raise
        return path
    
        def copy_certs_and_keys(self, cert_path, key_path, chain_path=None):
        '''Copies certs and keys into the temporary directory'''
        cert_and_key_dir = os.path.join(self._temp_dir, 'certs_and_keys')
        if not os.path.isdir(cert_and_key_dir):
            os.mkdir(cert_and_key_dir)
    
        # Implement all methods from IInstaller, remembering to add
    # 'self' as first argument, e.g. def get_all_names(self)...
