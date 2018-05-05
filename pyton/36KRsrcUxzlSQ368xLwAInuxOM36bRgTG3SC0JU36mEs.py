
        
            def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
        Usage::
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
                sock.close()
    
            # If response is not 4xx, do not auth
        # See https://github.com/requests/requests/issues/3772
        if not 400 <= r.status_code < 500:
            self._thread_local.num_401_calls = 1
            return r
    
    
class ChunkedEncodingError(RequestException):
    '''The server declared chunked encoding but sent an invalid chunk.'''
    
        'ipv6': re.compile(
        r'''^
            (?:{0}:){{7}}{0}|           # uncompressed: 1:2:3:4:5:6:7:8
            (?:{0}:){{1,6}}:|           # compressed variants, which are all
            (?:{0}:)(?::{0}){{1,6}}|    # a::b for various lengths of a,b
            (?:{0}:){{2}}(?::{0}){{1,5}}|
            (?:{0}:){{3}}(?::{0}){{1,4}}|
            (?:{0}:){{4}}(?::{0}){{1,3}}|
            (?:{0}:){{5}}(?::{0}){{1,2}}|
            (?:{0}:){{6}}(?::{0})|      # ...all with 2 <= a+b <= 7
            :(?::{0}){{1,6}}|           # ::ffff(:ffff...)
            {0}?::|                     # ffff::, ::
                                        # ipv4-in-ipv6 variants
            (?:0:){{6}}(?:{0}\.){{3}}{0}|
            ::(?:ffff:)?(?:{0}\.){{3}}{0}|
            (?:0:){{5}}ffff:(?:{0}\.){{3}}{0}
            $
        '''.format(ipv6_component), re.X | re.I
    ),
    
    from ansible.module_utils._text import to_bytes
from ansible.parsing.yaml.objects import AnsibleMapping, AnsibleSequence, AnsibleUnicode
from ansible.parsing.yaml.objects import AnsibleVaultEncryptedUnicode
from ansible.utils.unsafe_proxy import wrap_var
from ansible.parsing.vault import VaultLib
    
    # The suffix(es) of source filenames.
# You can specify multiple suffix as a list of string:
# source_suffix = ['.rst', '.md']
source_suffix = '.rst'
    
            cert = os.path.join(cert_and_key_dir, 'cert')
        shutil.copy(cert_path, cert)
        key = os.path.join(cert_and_key_dir, 'key')
        shutil.copy(key_path, key)
        if chain_path:
            chain = os.path.join(cert_and_key_dir, 'chain')
            shutil.copy(chain_path, chain)
        else:
            chain = None
    
    def shorten_title(title):
    m1 = re.search('[[0-9]*]', title)
    m2 = re.search(''.*'', title)
    if m1:
        title = m1.group(0)
    if m2:
        title = ' '.join((title, m2.group(0)))   
    return title[:50] + ' [...]'    
    
    
@click.command()
@click.argument('catalog_file', type=click.Path())
def cli(catalog_file):
    # Read the old ones back.  Once we are in, we will never go.
    with open(catalog_file) as f:
        rv = json.load(f)['supported_locales']