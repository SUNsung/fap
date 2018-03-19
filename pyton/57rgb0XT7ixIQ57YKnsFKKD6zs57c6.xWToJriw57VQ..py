
        
        
def init_db():
    '''Initializes the database.'''
    db = get_db()
    with current_app.open_resource('schema.sql', mode='r') as f:
        db.cursor().executescript(f.read())
    db.commit()
    
        return app
    
    
def _serf_client():
    env = EnvironmentConfig()
    return SerfClient(host=env.host, port=env.port, rpc_auth=env.auth_key)
    
    
def secure_hash_s(data, hash_func=sha1):
    ''' Return a secure hash hex digest of data. '''
    
        try:
        with open(path, 'r') as key_fd:
            return key_fd.read().strip()
    except IOError:
        return None
    
        indent = None
    if format:
        indent = 4
    
        terminal_stderr_re = [
        re.compile(br'\n\s*Invalid command:'),
        re.compile(br'\nCommit failed'),
        re.compile(br'\n\s+Set failed'),
    ]
    
        reference = Sequential()
    reference.add(wrappers.TimeDistributed(layers.Dense(2),
                                           batch_input_shape=(1, 3, 4)))
    reference.add(layers.Activation('relu'))
    reference.compile(optimizer='rmsprop', loss='mse')
    reference.layers[0].set_weights(weights)
    
    
@keras_test
def test_min_max_norm():
    array = get_example_array()
    for m in get_test_values():
        norm_instance = constraints.min_max_norm(min_value=m, max_value=m * 2)
        normed = norm_instance(K.variable(array))
        value = K.eval(normed)
        l2 = np.sqrt(np.sum(np.square(value), axis=0))
        assert not l2[l2 < m]
        assert not l2[l2 > m * 2 + 1e-5]
    
        history = model.fit(x, ys, validation_split=0.05, batch_size=10,
                        verbose=0, epochs=3)
    ground_truth = -np.log(0.5)
    assert(np.abs(history.history['loss'][-1] - ground_truth) < 0.06)
    
    # The name of an image file (relative to this directory) to place at the top
# of the sidebar.
#html_logo = None
    
        # Create and fill-in the class template
    numfields = len(field_names)
    argtxt = repr(field_names).replace(''', '')[1:-1]   # tuple repr without parens or quotes
    reprtxt = ', '.join('%s=%%r' % name for name in field_names)
    dicttxt = ', '.join('%r: t[%d]' % (name, pos) for pos, name in enumerate(field_names))
    template = '''class %(typename)s(tuple):
        '%(typename)s(%(argtxt)s)' \n
        __slots__ = () \n
        _fields = %(field_names)r \n
        def __new__(_cls, %(argtxt)s):
            return _tuple.__new__(_cls, (%(argtxt)s)) \n
        @classmethod
        def _make(cls, iterable, new=tuple.__new__, len=len):
            'Make a new %(typename)s object from a sequence or iterable'
            result = new(cls, iterable)
            if len(result) != %(numfields)d:
                raise TypeError('Expected %(numfields)d arguments, got %%d' %% len(result))
            return result \n
        def __repr__(self):
            return '%(typename)s(%(reprtxt)s)' %% self \n
        def _asdict(t):
            'Return a new dict which maps field names to their values'
            return {%(dicttxt)s} \n
        def _replace(_self, **kwds):
            'Return a new %(typename)s object replacing specified fields with new values'
            result = _self._make(map(kwds.pop, %(field_names)r, _self))
            if kwds:
                raise ValueError('Got unexpected field names: %%r' %% kwds.keys())
            return result \n
        def __getnewargs__(self):
            return tuple(self) \n\n''' % locals()
    for i, name in enumerate(field_names):
        template += '        %s = _property(_itemgetter(%d))\n' % (name, i)
    
        This function never blocks.
    
    class ThreadPoolExecutor(_base.Executor):
    def __init__(self, max_workers):
        '''Initializes a new ThreadPoolExecutor instance.
    
    def load_url(url, timeout):
    kwargs = {'timeout': timeout} if sys.version_info >= (2, 6) else {}
    return urlopen(url, **kwargs).read()
    
        def test_all_completed(self):
        future1 = self.executor.submit(divmod, 2, 0)
        future2 = self.executor.submit(mul, 2, 21)
    
      if buffer_number and current_buffer.number != buffer_number:
    # Cursor position is irrelevant when filepath is not the current buffer.
    buffer_object = vim.buffers[ buffer_number ]
    filepath = vimsupport.GetBufferFilepath( buffer_object )
    return {
      'filepath': filepath,
      'line_num': 1,
      'column_num': 1,
      'working_dir': working_dir,
      'file_data': vimsupport.GetUnsavedAndSpecifiedBufferData( buffer_object,
                                                                filepath )
    }
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
    
def KeywordsFromSyntaxListOutput_MultipleStatementGroups_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             links to Statement
bargroup xxx zoo goo
             links to Statement''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
    from ycm.client.base_request import BaseRequest
from ycm.youcompleteme import YouCompleteMe
from ycmd import user_options_store
from ycmd.utils import CloseStandardStreams, WaitUntilProcessIsTerminated
    
    
class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.write('Hello, world')
    
        @classmethod
    def configurable_base(cls):
        # type: () -> Any
        # TODO: This class needs https://github.com/python/typing/issues/107
        # to be fully typeable.
        '''Returns the base class of a configurable hierarchy.
    
            yield conn.read_response(Delegate())
        yield event.wait()
        self.assertEqual(self.code, 200)
        self.assertEqual(b''.join(body), b'hello')

    
    
class QueueBasicTest(AsyncTestCase):
    def test_repr_and_str(self):
        q = queues.Queue(maxsize=1)
        self.assertIn(hex(id(q)), repr(q))
        self.assertNotIn(hex(id(q)), str(q))
        q.get()
    
    
def wrap_web_tests_adapter():
    result = {}
    for cls in web_test.wsgi_safe_tests:
        class WSGIAdapterWrappedTest(cls):  # type: ignore
            def get_app(self):
                self.app = Application(self.get_handlers(),
                                       **self.get_app_kwargs())
                return WSGIContainer(validator(WSGIAdapter(self.app)))
        result['WSGIAdapter_' + cls.__name__] = WSGIAdapterWrappedTest
    return result
    
    from tornado.concurrent import Future
from tornado import gen
from tornado.options import define, options, parse_command_line
    
    
if __name__ == '__main__':
    main()

    
        def transform(self, node, results):
        self.found_future_import = True
        return self.new_future_import(node)