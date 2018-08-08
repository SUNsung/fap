
        
        
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
        _ALL_CLASSES = [
        klass
        for name, klass in globals().items()
        if name.endswith('IE') and name != 'GenericIE'
    ]
    _ALL_CLASSES.append(GenericIE)
    
            return info_dict

    
        def _real_extract(self, url):
        webpage = self._download_webpage(url, url_basename(url))
        cnn_url = self._html_search_regex(r'video:\s*'([^']+)'', webpage, 'cnn url')
        return {
            '_type': 'url',
            'url': 'http://cnn.com/video/?/video/' + cnn_url,
            'ie_key': CNNIE.ie_key(),
        }

    
      def testGetBulkPredictions(self):
    with self.test_session():
      master = MockMaster()
      component = MockComponent(master, master.spec.component[0])
      component.network = mst_units.MstSolverNetwork(component)
    
    import os.path
import tempfile
    
      # Graph building.
  tf.logging.info('Building the graph')
  g = tf.Graph()
  with g.as_default(), tf.device('/device:CPU:0'):
    hyperparam_config = spec_pb2.GridPoint()
    hyperparam_config.use_moving_average = True
    builder = graph_builder.MasterBuilder(master_spec, hyperparam_config)
    annotator = builder.add_annotation()
    builder.add_saver()
    
        '''
    is_windows = is_windows
    config_dir = DEFAULT_CONFIG_DIR
    stdin = sys.stdin
    stdin_isatty = stdin.isatty()
    stdin_encoding = None
    stdout = sys.stdout
    stdout_isatty = stdout.isatty()
    stdout_encoding = None
    stderr = sys.stderr
    stderr_isatty = stderr.isatty()
    colors = 256
    if not is_windows:
        if curses:
            try:
                curses.setupterm()
                colors = curses.tigetnum('colors')
            except curses.error:
                pass
    else:
        # noinspection PyUnresolvedReferences
        import colorama.initialise
        stdout = colorama.initialise.wrap_stream(
            stdout, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        stderr = colorama.initialise.wrap_stream(
            stderr, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        del colorama
    
    UNICODE = FILE_CONTENT

    
        def test_verify_custom_ca_bundle_invalid_path(self, httpbin_secure):
        # since 2.14.0 requests raises IOError
        with pytest.raises((SSLError, IOError)):
            http(httpbin_secure.url + '/get', '--verify', '/__not_found__')
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
            self.concurrent -= 1
        return ''
    
        def __init__(self, settings):
        if not settings.getbool('AJAXCRAWL_ENABLED'):
            raise NotConfigured
    
        def test_expandvars(self):
        with support.EnvironmentVarGuard() as env:
            env.clear()
            env['foo'] = 'bar'
            env['{foo'] = 'baz1'
            env['{foo}'] = 'baz2'
            tester('ntpath.expandvars('foo')', 'foo')
            tester('ntpath.expandvars('$foo bar')', 'bar bar')
            tester('ntpath.expandvars('${foo}bar')', 'barbar')
            tester('ntpath.expandvars('$[foo]bar')', '$[foo]bar')
            tester('ntpath.expandvars('$bar bar')', '$bar bar')
            tester('ntpath.expandvars('$?bar')', '$?bar')
            tester('ntpath.expandvars('$foo}bar')', 'bar}bar')
            tester('ntpath.expandvars('${foo')', '${foo')
            tester('ntpath.expandvars('${{foo}}')', 'baz1}')
            tester('ntpath.expandvars('$foo$foo')', 'barbar')
            tester('ntpath.expandvars('$bar$bar')', '$bar$bar')
            tester('ntpath.expandvars('%foo% bar')', 'bar bar')
            tester('ntpath.expandvars('%foo%bar')', 'barbar')
            tester('ntpath.expandvars('%foo%%foo%')', 'barbar')
            tester('ntpath.expandvars('%%foo%%foo%foo%')', '%foo%foobar')
            tester('ntpath.expandvars('%?bar%')', '%?bar%')
            tester('ntpath.expandvars('%foo%%bar')', 'bar%bar')
            tester('ntpath.expandvars('\'%foo%\'%bar')', '\'%foo%\'%bar')
            tester('ntpath.expandvars('bar\'%foo%')', 'bar\'%foo%')
    
    # output pattern for missing module
missing_pattern = '''\
No Python documentation found for %r.
Use help() to get the interactive help utility.
Use help(str) for help on the str class.'''.replace('\n', os.linesep)
    
        async def sock_accept(self, sock):
        return await self._proactor.accept(sock)
    
        def test_force_close_idempotent(self):
        tr = self.socket_transport()
        tr._closing = True
        tr._force_close(None)
        test_utils.run_briefly(self.loop)
        self.assertFalse(self.protocol.connection_lost.called)
    
        PATTERN = '''
    power< head=any+
         trailer< '.' method=('keys'|'items'|'values'|
                              'iterkeys'|'iteritems'|'itervalues'|
                              'viewkeys'|'viewitems'|'viewvalues') >
         parens=trailer< '(' ')' >
         tail=any*
    >
    '''
    
        PATTERN = '''
        atom< ('[' | '(')
            (listmaker< any
                comp_for<
                    'for' NAME 'in'
                    target=testlist_safe< any (',' any)+ [',']
                     >
                    [any]
                >
            >
            |
            testlist_gexp< any
                comp_for<
                    'for' NAME 'in'
                    target=testlist_safe< any (',' any)+ [',']
                     >
                    [any]
                >
            >)
        (']' | ')') >
    '''
    
        def check_no_unicode(self, algorithm_name):
        # Unicode objects are not allowed as input.
        constructors = self.constructors_to_test[algorithm_name]
        for hash_object_constructor in constructors:
            self.assertRaises(TypeError, hash_object_constructor, 'spam')
    
            for filename in files:
            if os.path.islink(filename): continue
            mode = defaultMode
            if filename.endswith(self.shlib_suffix): mode = sharedLibMode
            log.info('changing mode of %s to %o', filename, mode)
            if not self.dry_run: os.chmod(filename, mode)
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    