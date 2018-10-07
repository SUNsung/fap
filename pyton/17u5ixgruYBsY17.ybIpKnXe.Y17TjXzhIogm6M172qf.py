
        
            elif METHOD == 'LIST':
        domain = compat_urllib_parse_urlparse(test['url']).netloc
        if not domain:
            print('\nFail: {0}'.format(test['name']))
            continue
        domain = '.'.join(domain.split('.')[-2:])
    
    sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
        params = {
        'data_files': data_files,
    }
    if setuptools_available:
        params['entry_points'] = {'console_scripts': ['youtube-dl = youtube_dl:main']}
    else:
        params['scripts'] = ['bin/youtube-dl']
    
    
class FakeYDL(YoutubeDL):
    def __init__(self, override=None):
        # Different instances of the downloader can't share the same dictionary
        # some test set the 'sublang' parameter, which would break the md5 checks.
        params = get_params(override=override)
        super(FakeYDL, self).__init__(params, auto_init=False)
        self.result = []
    
    from .compat import is_py2, builtin_str, str
    
        return {
        'platform': platform_info,
        'implementation': implementation_info,
        'system_ssl': system_ssl_info,
        'using_pyopenssl': pyopenssl is not None,
        'pyOpenSSL': pyopenssl_info,
        'urllib3': urllib3_info,
        'chardet': chardet_info,
        'cryptography': cryptography_info,
        'idna': idna_info,
        'requests': {
            'version': requests_version,
        },
    }
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    setup(
    name=about['__title__'],
    version=about['__version__'],
    description=about['__description__'],
    long_description=readme,
    long_description_content_type='text/markdown',
    author=about['__author__'],
    author_email=about['__author_email__'],
    url=about['__url__'],
    packages=packages,
    package_data={'': ['LICENSE', 'NOTICE'], 'requests': ['*.pem']},
    package_dir={'requests': 'requests'},
    include_package_data=True,
    python_requires='>=2.6, !=3.0.*, !=3.1.*, !=3.2.*, !=3.3.*',
    install_requires=requires,
    license=about['__license__'],
    zip_safe=False,
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Intended Audience :: Developers',
        'Natural Language :: English',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: Implementation :: CPython',
        'Programming Language :: Python :: Implementation :: PyPy'
    ],
    cmdclass={'test': PyTest},
    tests_require=test_requirements,
    extras_require={
        'security': [PYOPENSSL_VERSION, 'cryptography>=1.3.4', 'idna>=2.0.0'],
        'socks': ['PySocks>=1.5.6, !=1.5.7'],
        'socks:sys_platform == 'win32' and (python_version == '2.7' or python_version == '2.6')': ['win_inet_pton'],
    },
)

    
        def __init__(self):
        self._content = False
        self._content_consumed = False
        self._next = None
    
            # install new cert
        xlog.info('Add cert to database $HOME/.pki/nssdb')
        cmd_line = 'certutil -d sql:$HOME/.pki/nssdb -A -t 'C,,' -n '%s' -i '%s'' % (common_name, ca_file)
        os.system(cmd_line)
        return True
    
    def message_html(title, banner, detail=''):
    MESSAGE_TEMPLATE = '''
    <html><head>
    <meta http-equiv='content-type' content='text/html;charset=utf-8'>
    <title>$title</title>
    <style><!--
    body {font-family: arial,sans-serif}
    div.nav {margin-top: 1ex}
    div.nav A {font-size: 10pt; font-family: arial,sans-serif}
    span.nav {font-size: 10pt; font-family: arial,sans-serif; font-weight: bold}
    div.nav A,span.big {font-size: 12pt; color: #0000cc}
    div.nav A {font-size: 10pt; color: black}
    A.l:link {color: #6f6f6f}
    A.u:link {color: green}
    //--></style>
    </head>
    <body text=#000000 bgcolor=#ffffff>
    <table border=0 cellpadding=2 cellspacing=0 width=100%>
    <tr><td bgcolor=#3366cc><font face=arial,sans-serif color=#ffffff><b>Message</b></td></tr>
    <tr><td> </td></tr></table>
    <blockquote>
    <H1>$banner</H1>
    $detail
    <p>
    </blockquote>
    <table width=100% cellpadding=0 cellspacing=0><tr><td bgcolor=#3366cc><img alt='' width=1 height=4></td></tr></table>
    </body></html>
    '''
    return string.Template(MESSAGE_TEMPLATE).substitute(title=title, banner=banner, detail=detail)
    
    
    def noViableAlt(self, s, input):
        if self.recognizer._state.backtracking > 0:
            raise BacktrackingFailed
    
            return m
    
            return {
            'type': typename,
            'message': ''.join(msg),
            '': ''.join(tb),
        }
    
                positional arguments:
              bar                   bar help
    
    
# Debug build?
Py_DEBUG = hasattr(sys, 'gettotalrefcount')
    
    # To simplify imports in test code
_pack_uint32 = _bootstrap_external._pack_uint32
_unpack_uint32 = _bootstrap_external._unpack_uint32
    
        # verify that none of the target files exist
    assert not lexists('foo.txt')
    assert not lexists('bar.txt')
    assert not lexists('baz.txt')
    try:
        with open('foo.txt', 'w'):  # Creating the file
            pass
    
    *TL;DR80
Encapsulates how a set of objects interact.
'''
    
    
### OUTPUT ###
# <NumObj: -1>
# <NumObj: 0>
# <NumObj: 1>
# <NumObj: 2>
# -- committed
# <NumObj: 3>
# <NumObj: 4>
# <NumObj: 5>
# -- rolled back
# <NumObj: 2>
# -- now doing stuff ...
# -> doing stuff failed!
# Traceback (most recent call last):
# File 'memento.py', line 97, in <module>
#     num_obj.do_stuff()
#   File 'memento.py', line 52, in transaction
#     raise e
#   File 'memento.py', line 49, in transaction
#     return self.method(obj, *args, **kwargs)
#   File 'memento.py', line 70, in do_stuff
#     self.increment()     # <- will fail and rollback
#   File 'memento.py', line 65, in increment
#     self.value += 1
# TypeError: Can't convert 'int' object to str implicitly
# <NumObj: 2>

    
        def publish(self, msg):
        self.provider.notify(msg)
    
        print('After subclassing: ')
    for k in RegistryHolder.REGISTRY:
        print(k)
    
        def __init__(self, one, other):
        self._one = one
        self._other = other
    
        def get_objects(self):
        '''Get all objects'''
        return self._objects
    
        def __init__(self):
        self.time_provider = datetime.datetime
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
            path.append(start)
        if start == end:
            return path
        for node in self.graph.get(start, []):
            if node not in path:
                newpath = self.find_path(node, end, path[:])
                if newpath:
                    return newpath