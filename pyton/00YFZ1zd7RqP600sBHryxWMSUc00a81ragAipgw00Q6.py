
        
        import os
import sys
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    import json
import sys
import hashlib
import os.path
    
    signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
    bp = Blueprint('auth', __name__, url_prefix='/auth')
    
    
@pytest.fixture
def auth(client):
    return AuthActions(client)

    
        Checks that the id exists and optionally that the current user is
    the author.
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
        def syntax(self):
        return '<spider>'
    
        def _print_bytes(self, bytes_):
        bytes_writer = sys.stdout if six.PY2 else sys.stdout.buffer
        bytes_writer.write(bytes_ + b'\n')
    
                # backward-compatible SSL/TLS method:
            #
            # * this will respect `method` attribute in often recommended
            #   `ScrapyClientContextFactory` subclass
            #   (https://github.com/scrapy/scrapy/issues/1429#issuecomment-131782133)
            #
            # * getattr() for `_ssl_method` attribute for context factories
            #   not calling super(..., self).__init__
            return CertificateOptions(verify=False,
                        method=getattr(self, 'method',
                                       getattr(self, '_ssl_method', None)),
                        fixBrokenPeers=True,
                        acceptableCiphers=DEFAULT_CIPHERS)
    
        def _debug_cookie(self, request, spider):
        if self.debug:
            cl = [to_native_str(c, errors='replace')
                  for c in request.headers.getlist('Cookie')]
            if cl:
                cookies = '\n'.join('Cookie: {}\n'.format(c) for c in cl)
                msg = 'Sending cookies to: {}\n{}'.format(request, cookies)
                logger.debug(msg, extra={'spider': spider})
    
        def __init__(self, headers):
        self._headers = headers
    
            # same but for an index
        assert df.set_index('a').to_csv(decimal='^') == expected