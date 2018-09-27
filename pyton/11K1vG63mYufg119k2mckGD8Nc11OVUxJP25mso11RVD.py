
        
        bp = Blueprint('auth', __name__, url_prefix='/auth')
    
        def before_app_first_request(self, f):
        '''Like :meth:`Flask.before_first_request`.  Such a function is
        executed before the first request to the application.
        '''
        self.record_once(lambda s: s.app.before_first_request_funcs.append(f))
        return f
    
    
# context locals
_request_ctx_stack = LocalStack()
_app_ctx_stack = LocalStack()
current_app = LocalProxy(_find_app)
request = LocalProxy(partial(_lookup_req_object, 'request'))
session = LocalProxy(partial(_lookup_req_object, 'session'))
g = LocalProxy(partial(_lookup_app_object, 'g'))

    
    
def _dump_arg_defaults(kwargs):
    '''Inject default arguments for dump functions.'''
    if current_app:
        bp = current_app.blueprints.get(request.blueprint) if request else None
        kwargs.setdefault(
            'cls',
            bp.json_encoder if bp and bp.json_encoder
                else current_app.json_encoder
        )
    
        def check(self, value):
        return isinstance(value, datetime)
    
    
def has_level_handler(logger):
    '''Check if there is a handler in the logging chain that will handle the
    given logger's :meth:`effective level <~logging.Logger.getEffectiveLevel>`.
    '''
    level = logger.getEffectiveLevel()
    current = logger
    
        #: Some implementations can detect whether a session is newly
    #: created, but that is not guaranteed. Use with caution. The mixin
    # default is hard-coded ``False``.
    new = False
    
    
class FlaskClient(Client):
    '''Works like a regular Werkzeug test client but has some knowledge about
    how Flask works to defer the cleanup of the request context stack to the
    end of a ``with`` body when used in a ``with`` statement.  For general
    information about how to use this class refer to
    :class:`werkzeug.test.Client`.
    
    
@pytest.fixture(autouse=True)
def os_environ(monkeypatch):
    env = {'PATH': os.environ['PATH']}
    monkeypatch.setattr('os.environ', env)
    return env

    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_get_new_command(brew_no_available_formula):
    assert get_new_command(Command('brew install elsticsearch',
                                   brew_no_available_formula))\
        == 'brew install elasticsearch'
    
        if n == 1:
        return '1 B'
    
    UNICODE = FILE_CONTENT

    
        def test_download_no_Content_Length(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(url=httpbin_both.url + '/'))
        time.sleep(1.1)
        downloader.chunk_downloaded(b'12345')
        downloader.finish()
        assert not downloader.interrupted
    
    from sklearn.datasets import fetch_20newsgroups_vectorized
from sklearn.metrics import accuracy_score
from sklearn.utils.validation import check_array
    
        max_it = len(samples_range) * len(features_range)
    for n_samples in samples_range:
        for n_features in features_range:
            it += 1
            print('====================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('====================')
            X = make_low_rank_matrix(n_samples, n_features,
                                  effective_rank=rank,
                                  tail_strength=0.2)
    
        print('Transformer performance:')
    print('===========================')
    print('Results are averaged over %s repetition(s).' % opts.n_times)
    print('')
    print('%s | %s | %s' % ('Transformer'.ljust(30),
                            'fit'.center(12),
                            'transform'.center(12)))
    print(31 * '-' + ('|' + '-' * 14) * 2)
    
       ###########################################################################
    # Set custom automatic method selection
    sampling_algorithm['custom-auto'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='auto',
                                       random_state=random_state)
    
        # Plot results
    i = 0
    m = len(list_n_features)
    plt.figure('scikit-learn SGD regression benchmark results',
               figsize=(5 * 2, 4 * m))
    for j in range(m):
        plt.subplot(m, 2, i + 1)
        plt.plot(list_n_samples, np.sqrt(elnet_results[:, j, 0]),
                 label='ElasticNet')
        plt.plot(list_n_samples, np.sqrt(sgd_results[:, j, 0]),
                 label='SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(asgd_results[:, j, 0]),
                 label='A-SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(ridge_results[:, j, 0]),
                 label='Ridge')
        plt.legend(prop={'size': 10})
        plt.xlabel('n_train')
        plt.ylabel('RMSE')
        plt.title('Test error - %d features' % list_n_features[j])
        i += 1
    
        dim = start_dim
    for i in range(0, n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        dim += step
        X = np.random.randn(100, dim)
        Y = np.random.randint(0, n_classes, (100,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(100)
        bench_scikit_tree_regressor(X, Y)
    
        def test_raise(self):
        def f(p):
            raise Exception()
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident),
                              ])
    
    def relpath(path, start=None):
    '''Return a relative version of a path'''
    path = os.fspath(path)
    if isinstance(path, bytes):
        sep = b'\\'
        curdir = b'.'
        pardir = b'..'
    else:
        sep = '\\'
        curdir = '.'
        pardir = '..'
    
            # Verify that sys.flags contains hash_randomization
        code = 'import sys; print('random is', sys.flags.hash_randomization)'
        rc, out, err = assert_python_ok('-c', code, PYTHONHASHSEED='')
        self.assertIn(b'random is 1', out)
    
        def test_forced_io_encoding(self):
        # Checks forced configuration of embedded interpreter IO streams
        env = dict(os.environ, PYTHONIOENCODING='utf-8:surrogateescape')
        out, err = self.run_embedded_interpreter('forced_io_encoding', env=env)
        if support.verbose > 1:
            print()
            print(out)
            print(err)
        expected_stream_encoding = 'utf-8'
        expected_errors = 'surrogateescape'
        expected_output = '\n'.join([
        '--- Use defaults ---',
        'Expected encoding: default',
        'Expected errors: default',
        'stdin: {in_encoding}:{errors}',
        'stdout: {out_encoding}:{errors}',
        'stderr: {out_encoding}:backslashreplace',
        '--- Set errors only ---',
        'Expected encoding: default',
        'Expected errors: ignore',
        'stdin: {in_encoding}:ignore',
        'stdout: {out_encoding}:ignore',
        'stderr: {out_encoding}:backslashreplace',
        '--- Set encoding only ---',
        'Expected encoding: iso8859-1',
        'Expected errors: default',
        'stdin: iso8859-1:{errors}',
        'stdout: iso8859-1:{errors}',
        'stderr: iso8859-1:backslashreplace',
        '--- Set encoding and errors ---',
        'Expected encoding: iso8859-1',
        'Expected errors: replace',
        'stdin: iso8859-1:replace',
        'stdout: iso8859-1:replace',
        'stderr: iso8859-1:backslashreplace'])
        expected_output = expected_output.format(
                                in_encoding=expected_stream_encoding,
                                out_encoding=expected_stream_encoding,
                                errors=expected_errors)
        # This is useful if we ever trip over odd platform behaviour
        self.maxDiff = None
        self.assertEqual(out.strip(), expected_output)
    
        def check_slots(self, obj, base, extra):
        expected = sys.getsizeof(base) + struct.calcsize(extra)
        if gc.is_tracked(obj) and not gc.is_tracked(base):
            expected += self.gc_headsize
        self.assertEqual(sys.getsizeof(obj), expected)
    
        def test_not_here(self):
        missing_module = 'test.i_am_not_here'
        result = str(run_pydoc(missing_module), 'ascii')
        expected = missing_pattern % missing_module
        self.assertEqual(expected, result,
            'documentation for missing module found')
    
            #
        # Test error handling
        #
    
        match = SYNTAX_GROUP_REGEX.search( line )
    if match:
      if looking_for_group:
        looking_for_group = False
      else:
        group_name_to_group[ current_group.name ] = current_group
    
    
def StopServer( ycm ):
  try:
    ycm.OnVimLeave()
    WaitUntilProcessIsTerminated( ycm._server_popen )
    CloseStandardStreams( ycm._server_popen )
  except Exception:
    pass
    
      return request
    
      _assert_rejects( f, { 'text' : 'This is an unimportant taco',
                        'kind' : 'WARNING' } )
  _assert_rejects( f, { 'text' : 'This taco will NOT be shown',
                        'kind' : 'ERROR' } )
  _assert_accepts( f, { 'text' : 'This burrito WILL be shown',
                        'kind' : 'ERROR' } )
    
      for path in python_paths:
    yield EndsWithPython_Good, path
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
        @callback
    def call_action():
        '''Call action with right context.'''
        hass.async_run_job(action, {
            'trigger': {
                CONF_PLATFORM: 'litejet',
                CONF_NUMBER: number,
                CONF_HELD_MORE_THAN: held_more_than,
                CONF_HELD_LESS_THAN: held_less_than
            },
        })
    
    TRIGGER_SCHEMA = vol.All(vol.Schema({
    vol.Required(CONF_PLATFORM): 'time',
    CONF_AT: cv.time,
    CONF_HOURS: vol.Any(vol.Coerce(int), vol.Coerce(str)),
    CONF_MINUTES: vol.Any(vol.Coerce(int), vol.Coerce(str)),
    CONF_SECONDS: vol.Any(vol.Coerce(int), vol.Coerce(str)),
}), cv.has_at_least_one_key(CONF_HOURS, CONF_MINUTES, CONF_SECONDS, CONF_AT))
    
        # Initialize flic client responsible for
    # connecting to buttons and retrieving events
    host = config.get(CONF_HOST)
    port = config.get(CONF_PORT)
    discovery = config.get(CONF_DISCOVERY)
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
        return True
    
    
@asyncio.coroutine
def hassbian_status(hass, test_mode=False):
    '''Query for the Hassbian status.'''
    # Fetch real output when not in test mode
    if test_mode:
        return json.loads(_TEST_OUTPUT)
    
    
@asyncio.coroutine
def async_setup(hass, config):
    '''Set up the triggers to control lights based on device presence.'''
    logger = logging.getLogger(__name__)
    device_tracker = hass.components.device_tracker
    group = hass.components.group
    light = hass.components.light
    conf = config[DOMAIN]
    disable_turn_off = conf.get(CONF_DISABLE_TURN_OFF)
    light_group = conf.get(CONF_LIGHT_GROUP, light.ENTITY_ID_ALL_LIGHTS)
    light_profile = conf.get(CONF_LIGHT_PROFILE)
    device_group = conf.get(
        CONF_DEVICE_GROUP, device_tracker.ENTITY_ID_ALL_DEVICES)
    device_entity_ids = group.get_entity_ids(
        device_group, device_tracker.DOMAIN)