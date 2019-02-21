
        
        Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
        def test_copy(self):
        copy = self.case_insensitive_dict.copy()
        assert copy is not self.case_insensitive_dict
        assert copy == self.case_insensitive_dict
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        def test_super_len_with_no__len__(self):
        class LenFile(object):
            def __init__(self):
                self.len = 5
    
        def should_strip_auth(self, old_url, new_url):
        '''Decide whether Authorization header should be removed when redirecting'''
        old_parsed = urlparse(old_url)
        new_parsed = urlparse(new_url)
        if old_parsed.hostname != new_parsed.hostname:
            return True
        # Special case: allow http -> https redirect when using the standard
        # ports. This isn't specified by RFC 7235, but is kept to avoid
        # breaking backwards compatibility with older versions of requests
        # that allowed any redirects on the same host.
        if (old_parsed.scheme == 'http' and old_parsed.port in (80, None)
                and new_parsed.scheme == 'https' and new_parsed.port in (443, None)):
            return False
    
    
def urldefragauth(url):
    '''
    Given a url remove the fragment and the authentication part.
    
            .. note:: This method is not reentrant safe.
        '''