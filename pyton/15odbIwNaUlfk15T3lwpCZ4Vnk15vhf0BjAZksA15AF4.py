
        
            class _Mgr(object):
        def __enter__(self):
            return self
    
    
def _lookup_req_object(name):
    top = _request_ctx_stack.top
    if top is None:
        raise RuntimeError(_request_ctx_err_msg)
    return getattr(top, name)
    
    
class Timeout(RequestException):
    '''The request timed out.
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
                        resp = HTTPResponse.from_httplib(
                        r,
                        pool=conn,
                        connection=low_conn,
                        preload_content=False,
                        decode_content=False
                    )
                except:
                    # If we hit any problems here, clean up the connection.
                    # Then, reraise so that we can handle the actual exception.
                    low_conn.close()
                    raise
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
            with server as (host, port):
            r = requests.get('http://{}:{}'.format(host, port))
    
    This module implements the Requests API.
    
            r = requests.Response()
        r.raw = io.BytesIO(b'the content')
        chunks = r.iter_content(None)
        assert list(chunks) == [b'the content']
    
    for excname in MULTIPROCESSING_EXCEPTIONS:
    NAME_MAPPING[('multiprocessing', excname)] = ('multiprocessing.context', excname)
    
    
if __name__ == '__main__':
    unittest.main()

    
    
# Return the longest prefix of all list elements.
def commonprefix(m):
    'Given a list of pathnames, returns the longest common leading component'
    if not m: return ''
    # Some people pass in a list of pathname parts to operate in an OS-agnostic
    # fashion; don't try to translate in that case as that's an abuse of the
    # API and they are already doing what they need to be OS-agnostic and so
    # they most likely won't be using an os.PathLike object in the sublists.
    if not isinstance(m[0], (list, tuple)):
        m = tuple(map(os.fspath, m))
    s1 = min(m)
    s2 = max(m)
    for i, c in enumerate(s1):
        if c != s2[i]:
            return s1[:i]
    return s1
    
        # Initialize and populate our database.
    conn = sqlite3.connect(':memory:')
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE memos(key INTEGER PRIMARY KEY, task TEXT)')
    tasks = (
        'give food to fish',
        'prepare group meeting',
        'fight with a zebra',
        )
    for task in tasks:
        cursor.execute('INSERT INTO memos VALUES(NULL, ?)', (task,))
    
    # Now add the related image to the html part.
with open('roasted-asparagus.jpg', 'rb') as img:
    msg.get_payload()[1].add_related(img.read(), 'image', 'jpeg',
                                     cid=asparagus_cid)
    
    # Function to return the operator module
def get_operator_module():
    return operator
    
    con = sqlite3.connect(DB_FILE)
cur = con.cursor()
cur.execute('''
        create table people
        (
          name_last      varchar(20),
          age            integer
        )
        ''')
    
        for i, filename in enumerate(files, 1):
        out = str(dest.joinpath(filename))
        link = urllib.request.urljoin(base, filename)
        urllib.request.urlretrieve(link, out)
        print('Downloaded {link} to {out} [{i}/{N}]'.format(
            link=link, out=out, i=i, N=N
        ))
    
    
def test_getitem_callable():
    # GH 12533
    s = pd.Series(4, index=list('ABCD'))
    result = s[lambda x: 'A']
    assert result == s.loc['A']
    
    The full list of fixtures may be found in the ``conftest.py`` next to this
file.