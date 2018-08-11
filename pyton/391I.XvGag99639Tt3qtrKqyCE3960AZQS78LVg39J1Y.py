
        
        
def get_new_command(command):
    dir = shell.quote(_tar_file(command.script_parts)[1])
    return shell.and_('mkdir -p {dir}', '{cmd} -C {dir}') \
        .format(dir=dir, cmd=command.script)
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
    
class FileModeWarning(RequestsWarning, DeprecationWarning):
    '''A file was opened in text mode, but Requests determined its binary length.'''
    pass
    
    
@pytest.mark.parametrize('var,scheme', _proxy_combos)
def test_use_proxy_from_environment(httpbin, var, scheme):
    url = '{0}://httpbin.org'.format(scheme)
    fake_proxy = Server()  # do nothing with the requests; just close the socket
    with fake_proxy as (host, port):
        proxy_url = 'socks5://{0}:{1}'.format(host, port)
        kwargs = {var: proxy_url}
        with override_environ(**kwargs):
            # fake proxy's lack of response will cause a ConnectionError
            with pytest.raises(requests.exceptions.ConnectionError):
                requests.get(url)
    
        This function works best on CPython and PyPy: in particular, it probably
    doesn't work for Jython or IronPython. Future investigation should be done
    to work out the correct shape of the code for those platforms.
    '''
    implementation = platform.python_implementation()
    
        def handle_redirect(self, r, **kwargs):
        '''Reset num_401_calls counter on redirects.'''
        if r.is_redirect:
            self._thread_local.num_401_calls = 1
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
    type_nullable=     0x1000
type_key=          0x2000
# XXX temporary, localizable?
knownbits = datasizemask | type_valid | type_localizable | \
            typemask | type_nullable | type_key
    
            drive, path = splitdrive(paths[0].replace(altsep, sep))
        common = path.split(sep)
        common = [c for c in common if c and c != curdir]
    
        # arguments are not equal, and if numeric, are too far apart
    if failure is not None:
        fail_fmt = 'expected {!r}, got {!r}'
        fail_msg = fail_fmt.format(expected, got)
        fail_msg += ' ({})'.format(failure)
        return fail_msg
    else:
        return None
    
            class C2:
            def __getnewargs__(self):
                return 'bad args'
        obj = C2()
        for proto in protocols:
            if proto >= 2:
                with self.assertRaises(TypeError):
                    obj.__reduce_ex__(proto)
    
            for cls in bytearray, memoryview:
            path_bytes = cls(os.fsencode(self.path))
            with self.assertWarns(DeprecationWarning):
                entries = list(os.scandir(path_bytes))
            self.assertEqual(len(entries), 1, entries)
            entry = entries[0]
    
        @requires_sha3
    def test_case_sha3_256_0(self):
        self.check('sha3_256', b'',
          'a7ffc6f8bf1ed76651c14756a061d662f580ff4de43b49fa82d80a4b80f8434a')
    
                    if db_setup_debug: print('db: looking for db.h in', f)
                if os.path.exists(f):
                    with open(f, 'rb') as file:
                        f = file.read()
                    m = re.search(br'#define\WDB_VERSION_MAJOR\W(\d+)', f)
                    if m:
                        db_major = int(m.group(1))
                        m = re.search(br'#define\WDB_VERSION_MINOR\W(\d+)', f)
                        db_minor = int(m.group(1))
                        db_ver = (db_major, db_minor)