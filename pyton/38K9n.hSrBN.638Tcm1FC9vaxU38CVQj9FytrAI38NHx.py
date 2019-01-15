
        
        
class PythonBuilder(object):
    def __init__(self, **kwargs):
        python_version = kwargs.pop('python', '3.4')
        python_path = None
        for node in ('Wow6432Node\\', ''):
            try:
                key = compat_winreg.OpenKey(
                    compat_winreg.HKEY_LOCAL_MACHINE,
                    r'SOFTWARE\%sPython\PythonCore\%s\InstallPath' % (node, python_version))
                try:
                    python_path, _ = compat_winreg.QueryValueEx(key, '')
                finally:
                    compat_winreg.CloseKey(key)
                break
            except Exception:
                pass
    
    with open('update/LATEST_VERSION', 'w') as f:
    f.write(version)
    
    import datetime
import io
import json
import textwrap
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
total_bytes = 0
    
    ZSH_COMPLETION_FILE = 'youtube-dl.zsh'
ZSH_COMPLETION_TEMPLATE = 'devscripts/zsh-completion.in'
    
    
# noinspection PyAbstractClass
class BuiltinAuthPlugin(AuthPlugin):
    
    
MOD_SSL_CONF_DEST = 'options-ssl-nginx.conf'
'''Name of the mod_ssl config file as saved in `IConfig.config_dir`.'''
    
        def test_nonce_decoder(self):
        from acme.jws import Header
        nonce_field = Header._fields['nonce']
    
    HEADER_ARGS = {'Strict-Transport-Security': HSTS_ARGS,
               'Upgrade-Insecure-Requests': UIR_ARGS}
    
        def test_invalid_variable_parsing(self):
        del self.parser.variables['tls_port']
    
            self.vhost1 = VirtualHost(
            'filep', 'vh_path', set([self.addr1]), False, False, 'localhost')
    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#html_use_opensearch = ''
    
        for url in urls:
        if not url.startswith('http'):
            print('markdown file name: ' + url)
            continue
        if check_live_url(url):
            print(url)
        else:
            print(url, file=sys.stderr)