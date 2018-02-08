
        
        # TODO: response is the only one
    
            # Send the request.
        send_kwargs = {
            'timeout': timeout,
            'allow_redirects': allow_redirects,
        }
        send_kwargs.update(settings)
        resp = self.send(prep, **send_kwargs)
    
    
def get_from_rhc_config(variable):
    global configparser
    CONF_FILE = os.path.expanduser('~/.openshift/express.conf')
    if os.path.exists(CONF_FILE):
        if not configparser:
            ini_str = '[root]\n' + open(CONF_FILE, 'r').read()
            configparser = ConfigParser.SafeConfigParser()
            configparser.readfp(StringIO.StringIO(ini_str))
        try:
            return configparser.get('root', variable)
        except ConfigParser.NoOptionError:
            return None
    
        old_runs_prefix = 'https://app.shippable.com/runs/'
    
            spider_loader = self.crawler_process.spider_loader
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
    # If true, show URL addresses after external links.
#man_show_urls = False
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_failure(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        cert.set_serial_number(1337)
        mock_probe_sni.return_value = OpenSSL.crypto.X509()
        self.assertFalse(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    
def win32_version_string():
    import ctypes
    class OSVERSIONINFOEXW(ctypes.Structure):
        _fields_ = [('dwOSVersionInfoSize', ctypes.c_ulong),
                    ('dwMajorVersion', ctypes.c_ulong),
                    ('dwMinorVersion', ctypes.c_ulong),
                    ('dwBuildNumber', ctypes.c_ulong),
                    ('dwPlatformId', ctypes.c_ulong),
                    ('szCSDVersion', ctypes.c_wchar*128),
                    ('wServicePackMajor', ctypes.c_ushort),
                    ('wServicePackMinor', ctypes.c_ushort),
                    ('wSuiteMask', ctypes.c_ushort),
                    ('wProductType', ctypes.c_byte),
                    ('wReserved', ctypes.c_byte)]
    '''
    Get's the OS major and minor versions.  Returns a tuple of
    (OS_MAJOR, OS_MINOR).
    '''
    os_version = OSVERSIONINFOEXW()
    os_version.dwOSVersionInfoSize = ctypes.sizeof(os_version)
    retcode = ctypes.windll.Ntdll.RtlGetVersion(ctypes.byref(os_version))
    if retcode != 0:
        raise Exception('Failed to get OS version')
    
            If you override, make sure to update syntaxErrors if you care about
        that.
        
        '''
        
        # if we've already reported an error and have not matched a token
        # yet successfully, don't report any errors.
        if self._state.errorRecovery:
            return
    
            raise NotImplementedError
    
    def setTokenIndex(self, index):
        '''@brief Set the index in the input stream.