
        
        
parser = youtube_dl.parseOpts()[0]
build_completion(parser)

    
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

    
    with io.open(README_FILE, encoding='utf-8') as f:
    oldreadme = f.read()
    
    sys.path.insert(0, dirn(dirn((os.path.abspath(__file__)))))
import youtube_dl
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
]
    
        proc.sendline(u'fuck')
    assert proc.expect([TIMEOUT, u'echo test'])
    assert proc.expect([TIMEOUT, u'enter'])
    assert proc.expect_exact([TIMEOUT, u'ctrl+c'])
    proc.send('\n')
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
        assert not match(command)
    
     edit-sources - edit the source information file
'''
apt_operations = ['list', 'search', 'show', 'update', 'install', 'remove',
                  'upgrade', 'full-upgrade', 'edit-sources']
    
    no_such_subcommand = '''error: no such subcommand