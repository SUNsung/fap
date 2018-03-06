
        
        
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    
class RequestException(IOError):
    '''There was an ambiguous exception that occurred while handling your
    request.
    '''
    
    Some codes have multiple names, and both upper- and lower-case versions of
the names are allowed. For example, ``codes.ok``, ``codes.OK``, and
``codes.okay`` all correspond to the HTTP status code 200.
'''
    
            if (not has_actual_code
            and not line.strip().startswith('//')
            and not line.strip().startswith('???')
            and not line.strip() == ''):
            has_actual_code = True
    
    def shorten_title(title):
    m1 = re.search('[[0-9]*]', title)
    m2 = re.search(''.*'', title)
    if m1:
        title = m1.group(0)
    if m2:
        title = ' '.join((title, m2.group(0)))   
    return title[:50] + ' [...]'    