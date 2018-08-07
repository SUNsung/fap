
        
        
username = get_config('ANSIBLE_OPENSHIFT_USERNAME', 'default_rhlogin')
password = get_config('ANSIBLE_OPENSHIFT_PASSWORD', 'password')
broker_url = 'https://%s/broker/rest/' % get_config('ANSIBLE_OPENSHIFT_BROKER', 'libra_server')
    
                for item in items:
                contents = item['contents'].encode('utf-8')
                path = output_dir + '/' + re.sub('^/*', '', item['path'])
    
        def construct_yaml_unsafe(self, node):
        return self.construct_yaml_str(node, unsafe=True)
    
    from ansible.compat.tests import unittest
from ansible.compat.tests.mock import MagicMock
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
        op.add_option('--n-population',
                  dest='n_population', default=100000, type=int,
                  help='Size of the population to sample from.')
    
    import codecs
    
    
plt.show()

    
    COLORS = np.array(['!',
                   '#FF3333',  # red
                   '#0198E1',  # blue
                   '#BF5FFF',  # purple
                   '#FCD116',  # yellow
                   '#FF7216',  # orange
                   '#4DBD33',  # green
                   '#87421F'   # brown
                   ])
    
        def test_get_group_cfws_only(self):
        group = self._test_get_x(parser.get_group,
            'Monty Python: (hidden);',
            'Monty Python: (hidden);',
            'Monty Python: ;',
            [],
            '')
        self.assertEqual(group.token_type, 'group')
        self.assertEqual(group.display_name, 'Monty Python')
        self.assertEqual(len(group.mailboxes), 0)
        self.assertEqual(group.mailboxes,
                         group.all_mailboxes)
    
                self.assertTrue(ntpath.ismount('\\\\localhost\\c$'))
            self.assertTrue(ntpath.ismount('\\\\localhost\\c$\\'))
    
        def testFabs(self):
        self.assertRaises(TypeError, math.fabs)
        self.ftest('fabs(-1)', math.fabs(-1), 1)
        self.ftest('fabs(0)', math.fabs(0), 0)
        self.ftest('fabs(1)', math.fabs(1), 1)
    
    def does_tree_import(package, name, node):
    ''' Returns true if name is imported from package at the
        top level of the tree which node belongs to.
        To cover the case of an import like 'import foo', use
        None for the package and 'foo' for the name. '''
    binding = find_binding(name, find_root(node), package)
    return bool(binding)
    
        PATTERN = '''
    power< head=any+
         trailer< '.' method=('keys'|'items'|'values'|
                              'iterkeys'|'iteritems'|'itervalues'|
                              'viewkeys'|'viewitems'|'viewvalues') >
         parens=trailer< '(' ')' >
         tail=any*
    >
    '''
    
        def test_get_builtin_constructor(self):
        get_builtin_constructor = getattr(hashlib,
                                          '__get_builtin_constructor')
        builtin_constructor_cache = getattr(hashlib,
                                            '__builtin_constructor_cache')
        self.assertRaises(ValueError, get_builtin_constructor, 'test')
        try:
            import _md5
        except ImportError:
            self.skipTest('_md5 module not available')
        # This forces an ImportError for 'import _md5' statements
        sys.modules['_md5'] = None
        # clear the cache
        builtin_constructor_cache.clear()
        try:
            self.assertRaises(ValueError, get_builtin_constructor, 'md5')
        finally:
            if '_md5' in locals():
                sys.modules['_md5'] = _md5
            else:
                del sys.modules['_md5']
        self.assertRaises(TypeError, get_builtin_constructor, 3)
        constructor = get_builtin_constructor('md5')
        self.assertIs(constructor, _md5.md5)
        self.assertEqual(sorted(builtin_constructor_cache), ['MD5', 'md5'])
    
    
class Action(object):
    
        def __init__(self):
        self.msg_queue = []
        self.subscribers = {}
    
    
@gen.engine
def run_tests():
    url = options.url + '/getCaseCount'
    control_ws = yield websocket_connect(url, None)
    num_tests = int((yield control_ws.read_message()))
    logging.info('running %d cases', num_tests)
    msg = yield control_ws.read_message()
    assert msg is None
    
    # Repeat the entire benchmark this many times (on different ports)
# This gives JITs time to warm up, etc.  Pypy needs 3-5 runs at
# --n=15000 for its JIT to reach full effectiveness
define('num_runs', type=int, default=1)
    
    from tornado.options import options, define, parse_command_line
from tornado.template import Template
    
    latex_documents = [
    ('index', 'tornado.tex', 'Tornado Documentation', 'The Tornado Authors', 'manual', False),
]
    
        def run(self):
        try:
            build_ext.run(self)
        except Exception:
            e = sys.exc_info()[1]
            sys.stdout.write('%s\n' % str(e))
            warnings.warn(self.warning_message % ('Extension modules',
                                                  'There was an issue with '
                                                  'your platform configuration'
                                                  ' - see above.'))