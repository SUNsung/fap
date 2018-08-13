
        
            def __init__(self, cards):
        self.cards = cards
        self.deal_index = 0
    
        def __init__(self, license_plate):
        super(Car, self).__init__(VehicleSize.COMPACT, license_plate, spot_size=1)
    
        class Plugin(AuthPlugin):
        auth_type = 'test-parse-false'
        auth_parse = False
    
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
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
    
def write_stream(stream, outfile, flush):
    '''Write the output stream.'''
    try:
        # Writing bytes so we use the buffer interface (Python 3).
        buf = outfile.buffer
    except AttributeError:
        buf = outfile
    
        def test_binary_file_path(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=B', 'POST', httpbin.url + '/post',
                 '@' + BIN_FILE_PATH_ARG, env=env, )
        assert r == BIN_FILE_CONTENT
    
        def test_verbose_form(self, httpbin):
        # https://github.com/jakubroztocil/httpie/issues/53
        r = http('--verbose', '--form', 'POST', httpbin.url + '/post',
                 'A=B', 'C=D')
        assert HTTP_OK in r
        assert 'A=B&C=D' in r
    
        parser = argparse.ArgumentParser(description='Start a new Shippable run.')
    
    
def get_group_vars(groups):
    
    from ansible.template.vars import AnsibleJ2Vars
    
        def on_switchover(self):
        self._hsm.on_switchover()  # message ignored
        self._hsm.next_state('standby')
    
        @classmethod
    def setUpClass(cls):
        ''' Class scope setup. '''
        cls.p = Proxy()
    
        def test_initial_state(self):
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def __init__(self, src, dest):
        self.src = src
        self.dest = dest