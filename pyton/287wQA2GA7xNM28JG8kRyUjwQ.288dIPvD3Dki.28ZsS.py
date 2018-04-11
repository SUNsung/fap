
        
        This module provides the capabilities for the Requests hooks system.
    
    
def get(url, params=None, **kwargs):
    r'''Sends a GET request.
    
        All keys are expected to be strings. The structure remembers the
    case of the last key to be set, and ``iter(instance)``,
    ``keys()``, ``items()``, ``iterkeys()``, and ``iteritems()``
    will contain case-sensitive keys. However, querying and contains
    testing is case insensitive::
    
        possible_keys = pytest.mark.parametrize('key', ('accept', 'ACCEPT', 'aCcEpT', 'Accept'))
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    
class InvalidHeader(RequestException, ValueError):
    '''The header value provided was somehow invalid.'''
    
        def test_super_len_correctly_calculates_len_of_partially_read_file(self):
        '''Ensure that we handle partially consumed file like objects.'''
        s = StringIO.StringIO()
        s.write('foobarbogus')
        assert super_len(s) == 0