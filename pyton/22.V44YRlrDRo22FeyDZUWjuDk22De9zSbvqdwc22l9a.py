
        
            def __init__(self, id, name):
        self.id = id
        self.name = name
        self.friend_ids = []
    
    
class EnvironmentConfig(object):
    uri = os.getenv('LANDSCAPE_API_URI')
    access_key = os.getenv('LANDSCAPE_API_KEY')
    secret_key = os.getenv('LANDSCAPE_API_SECRET')
    ssl_ca_file = os.getenv('LANDSCAPE_API_SSL_CA_FILE')
    
            # global, resource
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/global/urlMaps'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertTrue('global' in actual)
        self.assertTrue(actual['global'])
        self.assertEquals('urlMaps', actual['resource_name'])
    
        def _finish(self, request):
        self.concurrent -= 1
        if not request.finished and not request._disconnected:
            request.finish()
    
        def __init__(self, contracts):
        for contract in contracts:
            self.contracts[contract.name] = contract
    
        def download_request(self, request, spider):
        scheme = urlparse_cached(request).scheme
        handler = self._get_handler(scheme)
        if not handler:
            raise NotSupported('Unsupported URL scheme '%s': %s' %
                               (scheme, self._notconfigured[scheme]))
        return handler.download_request(request, spider)
    
            # Method command
        self.sendCommand(self.factory.method, self.factory.path)
        # Headers
        for key, values in self.factory.headers.items():
            for value in values:
                self.sendHeader(key, value)
        self.endHeaders()
        # Body
        if self.factory.body is not None:
            self.transport.write(self.factory.body)
    
    import bz2
import gzip
import zipfile
import tarfile
import logging
from tempfile import mktemp
    
    from scrapy import signals
    
        def test_edge_cases(self):
        # quotes
        parsed = loads(r''hello\''; # blah 'heh heh'')
        self.assertEqual(parsed, [[''hello\\'''], ['#', ' blah 'heh heh'']])
    
        def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = '0'
# The full version, including alpha/beta/rc tags.
release = '0'
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        # Implement all methods from IInstaller, remembering to add
    # 'self' as first argument, e.g. def get_all_names(self)...
