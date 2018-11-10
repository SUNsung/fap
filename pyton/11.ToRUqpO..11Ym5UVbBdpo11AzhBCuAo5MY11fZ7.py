
        
                # Insert the import statement to setup.py if not present
        with open(setup_path, 'a+') as setup:
            setup.seek(0)
            setup_content = setup.read()
            if not 'import fastentrypoints' in setup_content:
                setup.seek(0)
                setup.truncate()
                setup.write('import fastentrypoints\n' + setup_content)
    
    
def test_when_already_configured(usage_tracker_io, shell_pid,
                                 shell, shell_config, logs):
    shell.get_history.return_value = ['fuck']
    shell_pid.return_value = 12
    _change_tracker(usage_tracker_io, 12)
    shell_config.read.return_value = 'eval $(thefuck --alias)'
    main()
    logs.already_configured.assert_called_once()
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
            Did you mean `build`?
'''
    
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
    
    
class PyTest(TestCommand):
    # `$ python setup.py test' simply installs minimal requirements
    # and runs the tests with no fancy stuff like parallel execution.
    def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = [
            '--doctest-modules', '--verbose',
            './httpie', './tests'
        ]
        self.test_suite = True
    
    
FILE_PATH_ARG = patharg(FILE_PATH)
BIN_FILE_PATH_ARG = patharg(BIN_FILE_PATH)
JSON_FILE_PATH_ARG = patharg(JSON_FILE_PATH)
    
    
def test_credentials_in_url_auth_flag_has_priority(httpbin_both):
    '''When credentials are passed in URL and via -a at the same time,
     then the ones from -a are used.'''
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:wrong')
    r = http('--auth=user:password', 'GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
        parser = argparse.ArgumentParser()
    parser.add_argument('-e', '--estimators', nargs='+', required=True,
                        choices=ESTIMATORS)
    args = vars(parser.parse_args())
    
        time_ridge = np.empty(n_iter)
    time_ols = np.empty(n_iter)
    time_lasso = np.empty(n_iter)
    
        label = 'scikit-learn singular value decomposition benchmark results'
    fig = plt.figure(label)
    ax = fig.gca(projection='3d')
    for c, (label, timings) in zip('rbg', sorted(six.iteritems(results))):
        X, Y = np.meshgrid(samples_range, features_range)
        Z = np.asarray(timings).reshape(samples_range.shape[0],
                                        features_range.shape[0])
        # plot the actual surface
        ax.plot_surface(X, Y, Z, rstride=8, cstride=8, alpha=0.3,
                        color=c)
        # dummy point plot to stick the legend to since surface plot do not
        # support legends (yet?)
        ax.plot([1], [1], [1], color=c, label=label)
    
        ###########################################################################
    # Set Python core input
    sampling_algorithm['python-core-sample'] = \
        lambda n_population, n_sample: \
            random.sample(xrange(n_population), n_sample)
    
        xx = range(0, n * step, step)
    plt.figure('scikit-learn tree benchmark results')
    plt.subplot(211)
    plt.title('Learning with varying number of samples')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    
    
proxy_server = None
# launcher/module_init will check this value for start/stop finished
ready = False
    
    current_path = os.path.dirname(os.path.abspath(__file__))
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
                if isinstance(self.input, TokenStream):
                self.token = self.input.LT(1)
                self.line = self.token.line
                self.charPositionInLine = self.token.charPositionInLine
    
            ## What character index in the stream did the current token start at?
        # Needed, for example, to get the text for current token.  Set at
        # the start of nextToken.
        self.tokenStartCharIndex = -1
    
            # You may have multiple, named streams of rewrite operations.
        # I'm calling these things 'programs.'
        #  Maps String (name) -> rewrite (List)
        self.programs = {}
        self.programs[self.DEFAULT_PROGRAM_NAME] = []
        
 	# Map String (program name) -> Integer index
        self.lastRewriteTokenIndexes = {}
        
    
            Lines are numbered 1..n
        
        Using setter/getter methods is deprecated. Use o.line instead.'''
    
    def _check_arg_types(funcname, *args):
    hasstr = hasbytes = False
    for s in args:
        if isinstance(s, str):
            hasstr = True
        elif isinstance(s, bytes):
            hasbytes = True
        else:
            raise TypeError('%s() argument must be str or bytes, not %r' %
                            (funcname, s.__class__.__name__)) from None
    if hasstr and hasbytes:
        raise TypeError('Can't mix strings and bytes in path components') from None

    
        def test_different_flavours_unordered(self):
        p = pathlib.PurePosixPath('a')
        q = pathlib.PureWindowsPath('a')
        with self.assertRaises(TypeError):
            p < q
        with self.assertRaises(TypeError):
            p <= q
        with self.assertRaises(TypeError):
            p > q
        with self.assertRaises(TypeError):
            p >= q
    
    def test_main():
    test.support.run_unittest(
        LocaleConfigurationTests,
        LocaleCoercionTests
    )
    test.support.reap_children()
    
        def test_io(self):
        code = textwrap.dedent('''
            import sys
            filename = sys.argv[1]
            with open(filename) as fp:
                print(f'{fp.encoding}/{fp.errors}')
        ''')
        filename = __file__
    
        # Initialize and populate our database.
    conn = sqlite3.connect(':memory:')
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE memos(key INTEGER PRIMARY KEY, task TEXT)')
    tasks = (
        'give food to fish',
        'prepare group meeting',
        'fight with a zebra',
        )
    for task in tasks:
        cursor.execute('INSERT INTO memos VALUES(NULL, ?)', (task,))
    
    def handleSlides(slides):
    for slide in slides:
        handleSlide(slide)
    
            results = [pool.apply_async(calculate, t) for t in TASKS]
        imap_it = pool.imap(calculatestar, TASKS)
        imap_unordered_it = pool.imap_unordered(calculatestar, TASKS)
    
    def mul(a, b):
    time.sleep(0.5*random.random())
    return a * b