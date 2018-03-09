
        
            def __getstate__(self):
        # Consume everything; accessing the content attribute makes
        # sure the content has been fully read.
        if not self._content_consumed:
            self.content
    
        from urllib3.packages.ordered_dict import OrderedDict
    
    
@pytest.mark.skipif(os.name != 'nt', reason='Test only on Windows')
@pytest.mark.parametrize(
    'url, expected, override', (
            ('http://192.168.0.1:5000/', True, None),
            ('http://192.168.0.1/', True, None),
            ('http://172.16.1.1/', True, None),
            ('http://172.16.1.1:5000/', True, None),
            ('http://localhost.localdomain:5000/v1.0/', True, None),
            ('http://172.16.1.22/', False, None),
            ('http://172.16.1.22:5000/', False, None),
            ('http://google.com:5000/v1.0/', False, None),
            ('http://mylocalhostname:5000/v1.0/', True, '<local>'),
            ('http://192.168.0.1/', False, ''),
    ))
def test_should_bypass_proxies_win_registry(url, expected, override,
                                            monkeypatch):
    '''Tests for function should_bypass_proxies to check if proxy
    can be bypassed or not with Windows registry settings
    '''
    if override is None:
        override = '192.168.*;127.0.0.1;localhost.localdomain;172.16.1.1'
    if compat.is_py3:
        import winreg
    else:
        import _winreg as winreg
    
            # Merge all the kwargs.
        proxies = merge_setting(proxies, self.proxies)
        stream = merge_setting(stream, self.stream)
        verify = merge_setting(verify, self.verify)
        cert = merge_setting(cert, self.cert)
    
    # Dynamic inventory script which lets you use nodes discovered by Canonical's
# Landscape (http://www.ubuntu.com/management/landscape-features).
#
# Requires the `landscape_api` Python module
# See:
#   - https://landscape.canonical.com/static/doc/api/api-client-package.html
#   - https://landscape.canonical.com/static/doc/api/python-api.html
#
# Environment variables
# ---------------------
#   - `LANDSCAPE_API_URI`
#   - `LANDSCAPE_API_KEY`
#   - `LANDSCAPE_API_SECRET`
#   - `LANDSCAPE_API_SSL_CA_FILE` (optional)
    
        if not os.path.exists(to_bytes(filename, errors='surrogate_or_strict')) or os.path.isdir(to_bytes(filename, errors='strict')):
        return None
    digest = hash_func()
    blocksize = 64 * 1024
    try:
        infile = open(to_bytes(filename, errors='surrogate_or_strict'), 'rb')
        block = infile.read(blocksize)
        while block:
            digest.update(block)
            block = infile.read(blocksize)
        infile.close()
    except IOError as e:
        raise AnsibleError('error while accessing the file %s, error was: %s' % (filename, e))
    return digest.hexdigest()
    
        parser.add_argument('--job-number',
                        metavar='N',
                        action='append',
                        type=int,
                        help='limit downloads to the given job number')
    
                self.baseurl = '%s/api/%s' % (self._api_server, server_version)
            self.version = server_version  # for future use
            display.vvvv('Base API: %s' % self.baseurl)
            self.initialized = True
        return method(self, *args, **kwargs)
    return wrapped
    
        def on_open_shell(self):
        try:
            for cmd in (b'set terminal length 0', b'set terminal width 512'):
                self._exec_cli_command(cmd)
            self._exec_cli_command(b'set terminal length %d' % self.terminal_length)
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')
