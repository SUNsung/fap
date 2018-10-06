
        
        
def win_OpenSCManager():
    res = advapi32.OpenSCManagerW(None, None, SC_MANAGER_ALL_ACCESS)
    if not res:
        raise Exception('Opening service manager failed - '
                        'are you running this as administrator?')
    return res
    
    
iv = key = [0x20, 0x15] + 14 * [0]
    
    
if len(sys.argv) <= 1:
    print('Specify the version number as parameter')
    sys.exit()
version = sys.argv[1]
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    
if __name__ == '__main__':
    main()

    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
    
# Import youtube_dl
ROOT_DIR = os.path.join(os.path.dirname(__file__), '..')
sys.path.insert(0, ROOT_DIR)
import youtube_dl
    
    
def filter_options(readme):
    ret = ''
    in_options = False
    for line in readme.split('\n'):
        if line.startswith('# '):
            if line[2:].startswith('OPTIONS'):
                in_options = True
            else:
                in_options = False
    
    from youtube_dl.compat import (
    compat_print,
    compat_urllib_request,
)
from youtube_dl.utils import format_bytes
    
        with open(ZSH_COMPLETION_FILE, 'w') as f:
        f.write(template)
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'youtube-dldoc'

    
        def run(self):
        spawn(
            [sys.executable, 'devscripts/make_lazy_extractors.py', 'youtube_dl/extractor/lazy_extractors.py'],
            dry_run=self.dry_run,
        )
    
    from test.helper import try_rm
    
        def decode(self, value):
        if value != self.resource_type:
            raise jose.DeserializationError(
                'Wrong resource type: {0} instead of {1}'.format(
                    value, self.resource_type))
        return value

    
        def test_default_decoder_raises_deserialization_error(self):
        from acme.fields import RFC3339Field
        self.assertRaises(
            jose.DeserializationError, RFC3339Field.default_decoder, '')
    
        def test_kid_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url, kid=self.kid)
        self.assertEqual(jws.signature.combined.nonce, self.nonce)
        self.assertEqual(jws.signature.combined.url, self.url)
        self.assertEqual(jws.signature.combined.kid, self.kid)
        self.assertEqual(jws.signature.combined.jwk, None)
        # TODO: check that nonce is in protected header
    
    # The reST default role (used for this markup: `text`) to use for all
# documents.
default_role = 'py:obj'
    
            if self.unsaved_files():
            self.save_notes += '(autosave)'
            self.save()
    
    def clean_pdf_link(link):
    if 'arxiv' in link:
        link = link.replace('abs', 'pdf')   
        if not(link.endswith('.pdf')):
            link = '.'.join((link, 'pdf'))