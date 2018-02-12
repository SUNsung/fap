
        
            def run(self):
        try:
            self.server_sock = self._create_socket_and_bind()
            # in case self.port = 0
            self.port = self.server_sock.getsockname()[1]
            self.ready_event.set()
            self._handle_requests()
    
    
@pytest.mark.skipif(sys.version_info < (2,7), reason='Only run on Python 2.7+')
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
    This module contains the set of Requests' exceptions.
'''
from urllib3.exceptions import HTTPError as BaseHTTPError
    
        @pytest.mark.parametrize(
        'path', (
            '/',
            __file__,
            pytest.__file__,
            '/etc/invalid/location',
        ))
    def test_unzipped_paths_unchanged(self, path):
        assert path == extract_zipped_paths(path)
    
        By default this will get the strings from the blns.txt file