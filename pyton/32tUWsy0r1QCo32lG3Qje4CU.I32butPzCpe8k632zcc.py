
        
        
def format_size(bytes):
    return '%s (%d bytes)' % (format_bytes(bytes), bytes)
    
    from .nuevo import NuevoBaseIE
    
            mvp_id = self._search_mvp_id(webpage)
    
    
for package_info in packages.values():
    print('''
  resource '{name}' do
    url '{url}'
    sha256 '{sha256}'
  end'''.format(**package_info))

    
    
with open(BIN_FILE_PATH, 'rb') as f:
    BIN_FILE_CONTENT = f.read()
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    
def test_unicode_url_query_arg_item_verbose(httpbin):
    r = http('--verbose', httpbin.url + '/get', u'test==%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
        Uses threading to periodically update the status (speed, ETA, etc.).
    
            if color_scheme != PRESET_STYLE and env.colors == 256:
            fmt_class = Terminal256Formatter
        else:
            fmt_class = TerminalFormatter
        self.formatter = fmt_class(style=style_class)
    
        def test_verify_custom_ca_bundle_invalid_path(self, httpbin_secure):
        # since 2.14.0 requests raises IOError
        with pytest.raises((SSLError, IOError)):
            http(httpbin_secure.url + '/get', '--verify', '/__not_found__')
    
    '''
__version__ = '1.0.0-dev'
__author__ = 'Jakub Roztocil'
__licence__ = 'BSD'
    
        def _apply_no_options(self, no_options):
        '''For every `--no-OPTION` in `no_options`, set `args.OPTION` to
        its default value. This allows for un-setting of options, e.g.,
        specified in config.