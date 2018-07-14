
        
        
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
    
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
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    
class InvalidHeader(RequestException, ValueError):
    '''The header value provided was somehow invalid.'''
    
        authstr = 'Basic ' + to_native_string(
        b64encode(b':'.join((username, password))).strip()
    )
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
    logging.getLogger(__name__).addHandler(NullHandler())
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.
    
    
print('\n# ======================================================================')
print('#                               Factorial')
print('# ======================================================================\n')
    
    
def _lock_file(f, dotlock=True):
    '''Lock file f using lockf and dot locking.'''
    dotlock_done = False
    try:
        if fcntl:
            try:
                fcntl.lockf(f, fcntl.LOCK_EX | fcntl.LOCK_NB)
            except OSError as e:
                if e.errno in (errno.EAGAIN, errno.EACCES, errno.EROFS):
                    raise ExternalClashError('lockf: lock unavailable: %s' %
                                             f.name)
                else:
                    raise
        if dotlock:
            try:
                pre_lock = _create_temporary(f.name + '.lock')
                pre_lock.close()
            except OSError as e:
                if e.errno in (errno.EACCES, errno.EROFS):
                    return  # Without write access, just skip dotlocking.
                else:
                    raise
            try:
                try:
                    os.link(pre_lock.name, f.name + '.lock')
                    dotlock_done = True
                except (AttributeError, PermissionError):
                    os.rename(pre_lock.name, f.name + '.lock')
                    dotlock_done = True
                else:
                    os.unlink(pre_lock.name)
            except FileExistsError:
                os.remove(pre_lock.name)
                raise ExternalClashError('dot lock unavailable: %s' %
                                         f.name)
    except:
        if fcntl:
            fcntl.lockf(f, fcntl.LOCK_UN)
        if dotlock_done:
            os.remove(f.name + '.lock')
        raise
    
    
def read_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> str:
    '''Return the decoded string of the resource.
    
        def applies_to(self, filename):
        return self.path == '*' or filename.startswith(self.path)
    
            [['blorpie'],[ 'whoops' ] , [
                                 ],\t'd-shtaeou',\r'd-nthiouh',
        'i-vhbjkhnth', {'nifty':87}, {'morefield' :\tfalse,'field'
            :'yes'}  ]
           '''