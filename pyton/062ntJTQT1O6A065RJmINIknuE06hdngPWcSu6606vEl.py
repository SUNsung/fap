
        
        
def win_install_service(service_name, cmdline):
    manager = win_OpenSCManager()
    try:
        h = advapi32.CreateServiceW(
            manager, service_name, None,
            SC_MANAGER_CREATE_SERVICE, SERVICE_WIN32_OWN_PROCESS,
            SERVICE_AUTO_START, SERVICE_ERROR_NORMAL,
            cmdline, None, None, None, None, None)
        if not h:
            raise OSError('Service creation failed: %s' % ctypes.FormatError())
    
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
    
    versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
    with io.open('update/releases.atom', 'w', encoding='utf-8') as atom_file:
    atom_file.write(atom_template)

    
        bug_text = re.search(
        r'(?s)#\s*BUGS\s*[^\n]*\s*(.*?)#\s*COPYRIGHT', readme).group(1)
    dev_text = re.search(
        r'(?s)(#\s*DEVELOPER INSTRUCTIONS.*?)#\s*EMBEDDING YOUTUBE-DL',
        readme).group(1)
    
    import io
import optparse
    
    
def get_base_name(base):
    if base is InfoExtractor:
        return 'LazyLoadExtractor'
    elif base is SearchInfoExtractor:
        return 'LazyLoadSearchExtractor'
    else:
        return base.__name__
    
        def test_cache(self):
        ydl = FakeYDL({
            'cachedir': self.test_dir,
        })
        c = Cache(ydl)
        obj = {'x': 1, 'y': ['ä', '\\a', True]}
        self.assertEqual(c.load('test_cache', 'k.'), None)
        c.store('test_cache', 'k.', obj)
        self.assertEqual(c.load('test_cache', 'k2'), None)
        self.assertFalse(_is_empty(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), obj)
        self.assertEqual(c.load('test_cache', 'y'), None)
        self.assertEqual(c.load('test_cache2', 'k.'), None)
        c.remove()
        self.assertFalse(os.path.exists(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), None)
    
    
try:
    _DEV_NULL = subprocess.DEVNULL
except AttributeError:
    _DEV_NULL = open(os.devnull, 'wb')
    
    
def test_when_cant_configure_automatically(shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=False)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
     edit-sources - edit the source information file
'''
apt_operations = ['list', 'search', 'show', 'update', 'install', 'remove',
                  'upgrade', 'full-upgrade', 'edit-sources']
    
    
@pytest.fixture
def brew_no_available_formula():
    return '''Error: No available formula for elsticsearch '''
    
    Data structures that power Requests.
'''
    
                self._thread_local.num_401_calls += 1
            pat = re.compile(r'digest ', flags=re.IGNORECASE)
            self._thread_local.chal = parse_dict_header(pat.sub('', s_auth, count=1))
    
    from requests.help import info
    
    _proxy_combos = []
for prefix, schemes in _schemes_by_var_prefix:
    for scheme in schemes:
        _proxy_combos.append(('{}_proxy'.format(prefix), scheme))
    
    # The depth of the table of contents in toc.ncx.
#epub_tocdepth = 3
    
        def put(self, url, data=None, **kwargs):
        r'''Sends a PUT request. Returns :class:`Response` object.
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
        if settings is None:
        settings = get_project_settings()
        # set EDITOR from environment if available
        try:
            editor = os.environ['EDITOR']
        except KeyError: pass
        else:
            settings['EDITOR'] = editor
    check_deprecated_settings(settings)
    
            if opts.logfile:
            self.settings.set('LOG_ENABLED', True, priority='cmdline')
            self.settings.set('LOG_FILE', opts.logfile, priority='cmdline')
    
    from six.moves.urllib.parse import urlencode
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
        def print_items(self, lvl=None, colour=True):
        if lvl is None:
            items = [item for lst in self.items.values() for item in lst]
        else:
            items = self.items.get(lvl, [])
    
            # set Host header based on url
        self.headers.setdefault('Host', self.netloc)
    
        def test_shall_toggle_from_fm_to_am(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)

    
    
class ConcreteHandler2(Handler):
    '''... With helper methods.'''
    
    ### OUTPUT ###
# Got `plain-text`
# Skip conversion
# [SAVE]
# `plain-text` was processed
# ------------------------------
# Got `pdf`
# [CONVERT]
# `pdf as text` was processed
# ------------------------------
# Got `csv`
# Skip conversion
# [SAVE]
# `csv` was processed

    
    from __future__ import print_function
    
            for i in range(3):
            num_obj.increment()
            print(num_obj)
        num_obj.value += 'x'  # will fail
        print(num_obj)
    except Exception as e:
        a_transaction.rollback()
        print('-- rolled back')
    print(num_obj)
    
        @classmethod
    def get_registry(cls):
        return dict(cls.REGISTRY)
    
    
class OrSpecification(CompositeSpecification):
    _one = Specification()
    _other = Specification()