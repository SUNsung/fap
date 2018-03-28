
        
            port = None
    for matching in ['bracketed_hostport', 'hostport']:
        m = patterns[matching].match(address)
        if m:
            (address, port) = m.groups()
            port = int(port)
            continue
    
        @g_connect
    def add_secret(self, source, github_user, github_repo, secret):
        url = '%s/notification_secrets/' % self.baseurl
        args = urlencode({
            'source': source,
            'github_user': github_user,
            'github_repo': github_repo,
            'secret': secret
        })
        data = self.__call_galaxy(url, args=args)
        return data
    
    
def get_group_vars(groups):
    
        model_1.fit(input_a_df,
                output_a_df)
    model_2.fit([input_a_df, input_b_df],
                [output_a_df, output_b_df])
    model_1.fit([input_a_df],
                [output_a_df])
    model_1.fit({'input_a': input_a_df},
                output_a_df)
    model_2.fit({'input_a': input_a_df, 'input_b': input_b_df},
                [output_a_df, output_b_df])
    
    # Embedding
max_features = 20000
maxlen = 100
embedding_size = 128
    
    print('Building model...')
model = Sequential()
model.add(Dense(512, input_shape=(max_words,)))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_orthogonal(tensor_shape):
    _runner(initializers.orthogonal(), tensor_shape,
            target_mean=0.)
    
            assert_allclose(out1, out2, atol=1e-5)
    
    path = get_file('nietzsche.txt', origin='https://s3.amazonaws.com/text-datasets/nietzsche.txt')
with io.open(path, encoding='utf-8') as f:
    text = f.read().lower()
print('corpus length:', len(text))
    
    # Set backend based on KERAS_BACKEND flag, if applicable.
if 'KERAS_BACKEND' in os.environ:
    _backend = os.environ['KERAS_BACKEND']
    assert _backend in {'theano', 'tensorflow', 'cntk'}
    _BACKEND = _backend
    
            # make sure these are errors
        self.assertRaises(ValueError, format, 3, '1.3')  # precision disallowed
        self.assertRaises(ValueError, format, 3, '_c')   # underscore,
        self.assertRaises(ValueError, format, 3, ',c')   # comma, and
        self.assertRaises(ValueError, format, 3, '+c')   # sign not allowed
                                                         # with 'c'
    
        def test_defaults(self):
        morsel = cookies.Morsel()
        self.assertIsNone(morsel.key)
        self.assertIsNone(morsel.value)
        self.assertIsNone(morsel.coded_value)
        self.assertEqual(morsel.keys(), cookies.Morsel._reserved.keys())
        for key, val in morsel.items():
            self.assertEqual(val, '', key)
    
    if C is not None:
    c = C.getcontext()
    c.prec = C.MAX_PREC
    c.Emax = C.MAX_EMAX
    c.Emin = C.MIN_EMIN
    
    def py_make_scanner(context):
    parse_object = context.parse_object
    parse_array = context.parse_array
    parse_string = context.parse_string
    match_number = NUMBER_RE.match
    strict = context.strict
    parse_float = context.parse_float
    parse_int = context.parse_int
    parse_constant = context.parse_constant
    object_hook = context.object_hook
    object_pairs_hook = context.object_pairs_hook
    memo = context.memo
    
        def discard(self, key):
        '''If the keyed message exists, remove it.'''
        # This overrides an inapplicable implementation in the superclass.
        try:
            self.remove(key)
        except (KeyError, FileNotFoundError):
            pass
    
        def date(self):
        '''Process the DATE command.
        Returns:
        - resp: server response if successful
        - date: datetime object
        '''
        resp = self._shortcmd('DATE')
        if not resp.startswith('111'):
            raise NNTPReplyError(resp)
        elem = resp.split()
        if len(elem) != 2:
            raise NNTPDataError(resp)
        date = elem[1]
        if len(date) != 14:
            raise NNTPDataError(resp)
        return resp, _parse_datetime(date, None)
    
        def test_oldargs0_1(self):
        msg = r'keys\(\) takes no arguments \(1 given\)'
        self.assertRaisesRegex(TypeError, msg, {}.keys, 0)
    
            # User-defined class with a failing __index__ method
        class IX:
            def __index__(self):
                raise RuntimeError
        self.assertRaises(RuntimeError, range, IX())
    
            x = X(func)
        self.assertEqual(x.restype, c_int)
        self.assertEqual(x.argtypes, (c_int, c_int))
        self.assertEqual(sizeof(x), sizeof(c_voidp))
        self.assertEqual(sizeof(X), sizeof(c_voidp))
    
    
def SetUpSystemPaths():
  sys.path.insert( 0, os.path.join( DIR_OF_YCMD ) )
    
        # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
    def main():
    for name, fn in [('sequential', sequential),
                     ('processes', with_process_pool_executor),
                     ('threads', with_thread_pool_executor)]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        if fn() != [True] * len(PRIMES):
            sys.stdout.write('failed\n')
        else:
            sys.stdout.write('%.2f seconds\n' % (time.time() - start))
    
        def tearDown(self):
        self.executor.shutdown(wait=True)
        dt = time.time() - self.t1
        if test_support.verbose:
            print('%.2fs' % dt)
        self.assertLess(dt, 60, 'synchronization issue: test lasted too long')
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def FormatDebugInfoResponse( response ):
  if not response:
    return 'Server errored, no debug info from server\n'
  message = _FormatYcmdDebugInfo( response )
  completer = response[ 'completer' ]
  if completer:
    message += _FormatCompleterDebugInfo( completer )
  return message
    
    PY_MAJOR, PY_MINOR = sys.version_info[ 0 : 2 ]
if not ( ( PY_MAJOR == 2 and PY_MINOR >= 6 ) or
         ( PY_MAJOR == 3 and PY_MINOR >= 3 ) or
         PY_MAJOR > 3 ):
  sys.exit( 'YouCompleteMe requires Python >= 2.6 or >= 3.3; '
            'your version of Python is ' + sys.version )
    
    
GENERIC_RESPONSE = {
  'clang': {
    'has_support': True,
    'version': 'Clang version'
  },
  'completer': {
    'items': [
      {
        'key': 'key',
        'value': 'value'
      }
    ],
    'name': 'Completer name',
    'servers': [
      {
        'address': '127.0.0.1',
        'executable': '/path/to/executable',
        'extras': [
          {
            'key': 'key',
            'value': 'value'
          }
        ],
        'is_running': True,
        'logfiles': [
          '/path/to/stdout/logfile',
          '/path/to/stderr/logfile'
        ],
        'name': 'Server name',
        'pid': 12345,
        'port': 1234
      }
    ]
  },
  'extra_conf': {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  },
  'python': {
    'executable': '/path/to/python/interpreter',
    'version': 'Python version'
  }
}