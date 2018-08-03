
        
            def __init__(self, first_user, second_user):
        super(PrivateChat, self).__init__()
        self.users.append(first_user)
        self.users.append(second_user)
    
    
class State(Enum):
    unvisited = 0
    visited = 1
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
    
class RequestsWarning(Warning):
    '''Base warning for Requests.'''
    pass
    
    
# -- Options for manual page output ---------------------------------------
    
    from . import utils
from . import packages
from .models import Request, Response, PreparedRequest
from .api import request, get, head, post, patch, put, delete, options
from .sessions import session, Session
from .status_codes import codes
from .exceptions import (
    RequestException, Timeout, URLRequired,
    TooManyRedirects, HTTPError, ConnectionError,
    FileModeWarning, ConnectTimeout, ReadTimeout
)
    
    
class AuthenticatorTest(test_util.TempDirTestCase,
                        dns_test_common_lexicon.BaseLexiconAuthenticatorTest):
    
    # The master toctree document.
master_doc = 'index'
    
            chain_file, abs_chain_path =\
                _open_pem_file('chain_path', chain_path)
        fullchain_file, abs_fullchain_path =\
                _open_pem_file('fullchain_path', fullchain_path)
    
            self.addr1 = Addr.fromstring('127.0.0.1')
        self.addr2 = Addr.fromstring('127.0.0.1:*')
    
    
def fetch_zip(commit_hash, zip_dir, *, org='python', binary=False, verbose):
    repo = f'cpython-{'bin' if binary else 'source'}-deps'
    url = f'https://github.com/{org}/{repo}/archive/{commit_hash}.zip'
    reporthook = None
    if verbose:
        reporthook = print
    zip_dir.mkdir(parents=True, exist_ok=True)
    filename, headers = urlretrieve(
        url,
        zip_dir / f'{commit_hash}.zip',
        reporthook=reporthook,
    )
    return filename
    
    
class TypeDefVisitor(EmitVisitor):
    def visitModule(self, mod):
        for dfn in mod.dfns:
            self.visit(dfn)
    
        def clear(self):
        for ta in self._array:
            ta._text.clear()
    
    import sys
    
    
class Tests(unittest.TestCase):
    
    N = 8                                   # Default; command line overrides
    
        subtracted
    >>> a - b
    Vec(-2, 0, 2)