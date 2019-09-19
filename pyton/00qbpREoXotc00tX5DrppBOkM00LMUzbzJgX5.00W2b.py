
        
        
class CallCenter(object):
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        _TESTS = [{
        'url': 'http://www.southpark.nl/full-episodes/s18e06-freemium-isnt-free',
        'info_dict': {
            'title': 'Freemium Isn\'t Free',
            'description': 'Stan is addicted to the new Terrance and Phillip mobile game.',
        },
        'playlist_mincount': 3,
    }]
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    
if len(sys.argv) <= 1:
    print('Specify the version number as parameter')
    sys.exit()
version = sys.argv[1]
    
    
if __name__ == '__main__':
    main()

    
        out = issue_template_tmpl % {'version': locals()['__version__']}
    
    names = []
for ie in ordered_cls:
    name = ie.__name__
    src = build_lazy_ie(ie, name)
    module_contents.append(src)
    if ie in _ALL_CLASSES:
        names.append(name)
    
    
# Import youtube_dl
ROOT_DIR = os.path.join(os.path.dirname(__file__), '..')
sys.path.insert(0, ROOT_DIR)
import youtube_dl
    
    '''
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
        def get_value(self, fn, depends_on, args, kwargs):
        if self._db is None:
            self._init_db()
    
    
try:
    if int(pkg_resources.get_distribution('pip').version.split('.')[0]) < 6:
        print('pip older than 6.0 not supported, please upgrade pip with:\n\n'
              '    pip install -U pip')
        sys.exit(-1)
except pkg_resources.DistributionNotFound:
    pass
    
        def test_how_to_configure(self, shell):
        assert shell.how_to_configure() is None
    
        def test_how_to_configure_when_config_not_found(self, shell,
                                                    config_exists):
        config_exists.return_value = False
        assert not shell.how_to_configure().can_configure_automatically
    
        def how_to_configure(self):
        if os.path.join(os.path.expanduser('~'), '.bashrc'):
            config = '~/.bashrc'
        elif os.path.join(os.path.expanduser('~'), '.bash_profile'):
            config = '~/.bash_profile'
        else:
            config = 'bash config'
    
        def _expand_aliases(self, command_script):
        aliases = self.get_aliases()
        binary = command_script.split(' ')[0]
        if binary in aliases and aliases[binary] != binary:
            return command_script.replace(binary, aliases[binary], 1)
        elif binary in aliases:
            return u'fish -ic '{}''.format(command_script.replace(''', r'\''))
        else:
            return command_script
    
        def _get_version(self):
        '''Returns the version of the current shell'''
        proc = Popen(['tcsh', '--version'], stdout=PIPE, stderr=DEVNULL)
        return proc.stdout.read().decode('utf-8').split()[1]

    
        def _get_version(self):
        '''Returns the version of the current shell'''
        proc = Popen(['zsh', '-c', 'echo $ZSH_VERSION'],
                     stdout=PIPE, stderr=DEVNULL)
        return proc.stdout.read().decode('utf-8').strip()

    
    
@pytest.mark.parametrize('script, output', [
    ('pyenv global', 'system'),
    ('pyenv versions', '  3.7.0\n  3.7.1\n* 3.7.2\n'),
    ('pyenv install --list', '  3.7.0\n  3.7.1\n  3.7.2\n'),
])
def test_not_match(script, output):
    assert not match(Command(script, output=output))
    
    
@for_app('pyenv')
def get_new_command(command):
    broken = re.findall(r'pyenv: no such command `([^']*)'', command.output)[0]
    matched = [replace_argument(command.script, broken, common_typo)
               for common_typo in COMMON_TYPOS.get(broken, [])]
    matched.extend(replace_command(command, broken, get_pyenv_commands()))
    return matched

    
            # User always has permissions to add and change Authors, and Holders,
        # the main (parent) models of the inlines. Permissions on the inlines
        # vary per test.
        permission = Permission.objects.get(codename='add_author', content_type=cls.author_ct)
        cls.user.user_permissions.add(permission)
        permission = Permission.objects.get(codename='change_author', content_type=cls.author_ct)
        cls.user.user_permissions.add(permission)
        permission = Permission.objects.get(codename='add_holder2', content_type=cls.holder_ct)
        cls.user.user_permissions.add(permission)
        permission = Permission.objects.get(codename='change_holder2', content_type=cls.holder_ct)
        cls.user.user_permissions.add(permission)
    
            def _get_postgis_func(self, func):
            if func == 'postgis_lib_version':
                if self.version is None:
                    raise ProgrammingError
                else:
                    return self.version
            elif func == 'version':
                pass
            else:
                raise NotImplementedError('This function was not expected to be called')
    
    
class OFTWideString(Field):
    pass
    
        @property
    def fields(self):
        '''
        Return a list of string names corresponding to each of the Fields
        available in this Layer.
        '''
        return [force_str(
            capi.get_field_name(capi.get_field_defn(self._ldefn, i)),
            self._ds.encoding, strings_only=True,
        ) for i in range(self.num_fields)]
    
        @cached_property
    def is_vsi_based(self):
        return self.name.startswith(VSI_FILESYSTEM_BASE_PATH)
    
        def difference(self, other):
        '''
        Return a Geometry representing the points making up this Geometry
        that do not make up other.
        '''
        return self._topology(capi.geos_difference(self.ptr, other.ptr))
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin and self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    # noinspection PyUnresolvedReferences
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
    
def repr_dict(d: dict) -> str:
    return pformat(d)
    
    
def get_package_meta(package_name):
    api_url = f'https://pypi.python.org/pypi/{package_name}/json'
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(f'{package_name}: download not found: {resp}')
    
    
class HTTPRequest(HTTPMessage):
    '''A :class:`requests.models.Request` wrapper.'''
    
            if self.has_stdin_data:
            self._body_from_file(self.env.stdin)
        if not URL_SCHEME_RE.match(self.args.url):
            if os.path.basename(program_name) == 'https':
                scheme = 'https://'
            else:
                scheme = self.args.default_scheme + '://'
    
    
class RetryError(RequestException):
    '''Custom retries logic failed'''
    
        @possible_keys
    def test_getitem(self, key):
        assert self.case_insensitive_dict[key] == 'application/json'
    
    
class Server(threading.Thread):
    '''Dummy server using for unit testing'''
    WAIT_EVENT_TIMEOUT = 5
    
    
    {        Generic:                   '#000000',        # class: 'g'
        Generic.Deleted:           '#a40000',        # class: 'gd'
        Generic.Emph:              'italic #000000', # class: 'ge'
        Generic.Error:             '#ef2929',        # class: 'gr'
        Generic.Heading:           'bold #000080',   # class: 'gh'
        Generic.Inserted:          '#00A000',        # class: 'gi'
        Generic.Output:            '#888',           # class: 'go'
        Generic.Prompt:            '#745334',        # class: 'gp'
        Generic.Strong:            'bold #000000',   # class: 'gs'
        Generic.Subheading:        'bold #800080',   # class: 'gu'
        Generic.Traceback:         'bold #a40000',   # class: 'gt'
    }

    
    import sys
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    # Keep OrderedDict for backwards compatibility.
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
        def copy(self):
        p = PreparedRequest()
        p.method = self.method
        p.url = self.url
        p.headers = self.headers.copy() if self.headers is not None else None
        p._cookies = _copy_cookie_jar(self._cookies)
        p.body = self.body
        p.hooks = self.hooks
        p._body_position = self._body_position
        return p
    
        @pytest.mark.parametrize(
        'url', (
            'http://192.168.1.1:5000/',
            'http://192.168.1.1/',
            'http://www.requests.com/',
        ))
    def test_not_bypass(self, url):
        assert get_environ_proxies(url, no_proxy=None) != {}
    
        if cryptography_version < [1, 3, 4]:
        warning = 'Old version of cryptography ({}) may cause slowdown.'.format(cryptography_version)
        warnings.warn(warning, RequestsDependencyWarning)
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
            self.assertEqual(self.vhosts[5], self._call(self.vhosts))
    
            self.addr1 = Addr.fromstring('127.0.0.1')
        self.addr2 = Addr.fromstring('127.0.0.1:443')
        self.addr_default = Addr.fromstring('_default_:443')
    
    from acme import challenges
    
    .. code-block:: none
   :caption: Sample BIND configuration
    
        lineage = domains.split(',')[0]
    server_cert = ssl.get_server_certificate(('localhost', context.tls_alpn_01_port))
    with open(os.path.join(context.workspace, 'conf/live/{0}/cert.pem'.format(lineage)), 'r') as file:
        certbot_cert = file.read()
    
        grouper = libreduction.SeriesBinGrouper(obj, np.mean, bins, dummy)
    result, counts = grouper.get_result()
    
            tm.assert_index_equal(index.left, Index(np.arange(10)))
        tm.assert_index_equal(index.right, Index(np.arange(1, 11)))
        tm.assert_index_equal(index.mid, Index(np.arange(0.5, 10.5)))
    
        def time_get_index(self):
        self.foo = self.df.index
    
    
class AddOverflowScalar:
    
    
class SeriesDtypesConstructors:
    def setup(self):
        N = 10 ** 4
        self.arr = np.random.randn(N)
        self.arr_str = np.array(['foo', 'bar', 'baz'], dtype=object)
        self.s = Series(
            [Timestamp('20110101'), Timestamp('20120101'), Timestamp('20130101')]
            * N
            * 10
        )
    
    USAGE = 'usage:    python extract_tags_stop_words.py [file name] -k [top k]'
    
    if withWeight is True:
    for tag in tags:
        print('tag: %s\t\t weight: %f' % (tag[0],tag[1]))
else:
    print(','.join(tags))

    
    if len(sys.argv)<2:
    print('usage: extract_topic.py directory [n_topic] [n_top_words]')
    sys.exit(0)
    
    print('speed %s bytes/second' % (len(content)/tm_cost))