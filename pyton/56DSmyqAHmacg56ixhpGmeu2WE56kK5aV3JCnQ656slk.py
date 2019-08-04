
        
        
def memoize(fn):
    '''Caches previous calls to the function.'''
    memo = {}
    
    
def match(command):
    return (command.script_parts
            and (command.script_parts[0] in ('pacman', 'yay', 'yaourt')
                 or command.script_parts[0:2] == ['sudo', 'pacman'])
            and 'error: target not found:' in command.output)
    
    install_requires = ['psutil', 'colorama', 'six', 'decorator', 'pyte']
extras_require = {':python_version<'3.4'': ['pathlib2'],
                  ':python_version<'3.3'': ['backports.shutil_get_terminal_size'],
                  ':sys_platform=='win32'': ['win_unicode_console']}
    
        def test_app_alias_variables_correctly_set(self, shell):
        alias = shell.app_alias('fuck')
        assert 'fuck () {' in alias
        assert 'TF_SHELL=bash' in alias
        assert 'TF_ALIAS=fuck' in alias
        assert 'PYTHONIOENCODING=utf-8' in alias
        assert 'TF_SHELL_ALIASES=$(alias)' in alias
    }
    
        def how_to_configure(self):
        return self._create_shell_configuration(
            content=u'thefuck --alias | source',
            path='~/.config/fish/config.fish',
            reload='fish')
    
        @memoize
    def get_aliases(self):
        proc = Popen(['tcsh', '-ic', 'alias'], stdout=PIPE, stderr=DEVNULL)
        return dict(
            self._parse_alias(alias)
            for alias in proc.stdout.read().decode('utf-8').split('\n')
            if alias and '\t' in alias)
    
        def _parse_alias(self, alias):
        name, value = alias.split('=', 1)
        if value[0] == value[-1] == ''' or value[0] == value[-1] == ''':
            value = value[1:-1]
        return name, value
    
    
def get_pyenv_commands():
    proc = Popen(['pyenv', 'commands'], stdout=PIPE)
    return [line.decode('utf-8').strip() for line in proc.stdout.readlines()]
    
    This script loads the ```s2s.h5``` model saved by [lstm_seq2seq.py
](/examples/lstm_seq2seq/) and generates sequences from it. It assumes
that no changes have been made (for example: ```latent_dim``` is unchanged,
and the input data and model architecture are unchanged).
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = imdb.load_data(num_words=max_features)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
print('Average train sequence length: {}'.format(
    np.mean(list(map(len, x_train)), dtype=int)))
print('Average test sequence length: {}'.format(
    np.mean(list(map(len, x_test)), dtype=int)))
    
    
def test_boston_load_does_not_affect_global_rng(fake_downloaded_boston_path):
    np.random.seed(1337)
    before = np.random.randint(0, 100, size=10)
    
        data_format = 'channels_last'
    return_sequences = False
    inputs = np.random.rand(num_samples, sequence_len,
                            input_num_row, input_num_col,
                            input_channel)
    # Tests for statefulness
    model = Sequential()
    kwargs = {'data_format': data_format,
              'return_sequences': return_sequences,
              'filters': filters,
              'kernel_size': (num_row, num_col),
              'stateful': True,
              'batch_input_shape': inputs.shape,
              'padding': 'same'}
    layer = convolutional_recurrent.ConvLSTM2D(**kwargs)
    
        # - Produce data on 4 worker threads, consume on main thread:
    #   - All worker threads share the SAME generator
    #   - Make sure `RuntimeError` exception bubbles up
    with pytest.raises(RuntimeError):
        model.fit_generator(custom_generator(),
                            steps_per_epoch=samples,
                            validation_steps=None,
                            max_queue_size=10,
                            workers=WORKERS,
                            use_multiprocessing=False)
    
                else:
                if isinstance(self.input, CharStream):
                    self.c = self.input.LT(1)
                    self.line = self.input.line
                    self.charPositionInLine = self.input.charPositionInLine
    
            # TODO do single token deletion like above for Token mismatch
        raise e
    
    
class ANTLRStringStream(CharStream):
    '''
    @brief CharStream that pull data from a unicode string.
    
    A pretty quick CharStream that pulls all data from an array
    directly.  Every method call counts in the lexer.
    
    
def _handle_nonblocking_subprocess(c, spinner=None):
    # type: (subprocess.Popen, VistirSpinner) -> subprocess.Popen
    try:
        c.wait()
    finally:
        if c.stdout:
            c.stdout.close()
        if c.stderr:
            c.stderr.close()
    if spinner:
        if c.returncode > 0:
            spinner.fail(to_native_string('Failed...cleaning up...'))
        if not os.name == 'nt':
            spinner.ok(to_native_string('✔ Complete'))
        else:
            spinner.ok(to_native_string('Complete'))
    return c
    
        Full documentation is available at http://python-cerberus.org/
    
    
def assert_fail(
    document,
    schema=None,
    validator=None,
    update=False,
    error=None,
    errors=None,
    child_errors=None,
):
    ''' Tests whether a validation fails. '''
    if validator is None:
        validator = Validator(sample_schema)
    result = validator(document, schema, update)
    assert isinstance(result, bool)
    assert not result
    
        v = MyValidator(schema={'amount': {rule: 'oddity'}})
    assert_success(document={'amount': 1}, validator=v)
    assert_fail(
        document={'amount': 2},
        validator=v,
        error=('amount', (), cerberus.errors.CUSTOM, None, ('Must be an odd number',)),
    )
    
        def __normalize_sequence_per_schema(self, field, mapping, schema):
        schema = dict(
            ((k, schema[field]['schema']) for k in range(len(mapping[field])))
        )
        document = dict((k, v) for k, v in enumerate(mapping[field]))
        validator = self._get_child_validator(
            document_crumb=field, schema_crumb=(field, 'schema'), schema=schema
        )
        value_type = type(mapping[field])
        result = validator.normalized(document, always_return_document=True)
        mapping[field] = value_type(result.values())
        if validator._errors:
            self._drop_nodes_from_errorpaths(validator._errors, [], [2])
            self._error(validator._errors)
    
            body = b'\r\n'.join(parts)
        ct = b'multipart/form-data; boundary=' + boundary
        headers = {
            'Content-type': ct,
            'Content-length': str(len(body))
        }
        return Request(self.url, body, headers)
    
        while not valid:
        p = min(1, p)
        res = np.random.choice(['F', 'H'], (size, size), p=[p, 1-p])
        res[0][0] = 'S'
        res[-1][-1] = 'G'
        valid = is_valid(res)
    return [''.join(x) for x in res]
    
        (*) dictionary dict of dicts of lists, where
      P[s][a] == [(probability, nextstate, reward, done), ...]
    (**) list or array of length nS
    
        # GoalEnv methods
    # ----------------------------
    
        def _generate_terrain(self, hardcore):
        GRASS, STUMP, STAIRS, PIT, _STATES_ = range(5)
        state    = GRASS
        velocity = 0.0
        y        = TERRAIN_HEIGHT
        counter  = TERRAIN_STARTPAD
        oneshot  = False
        self.terrain   = []
        self.terrain_x = []
        self.terrain_y = []
        for i in range(TERRAIN_LENGTH):
            x = i*TERRAIN_STEP
            self.terrain_x.append(x)
    
            self.action_space = spaces.Box(low=np.array([-self.bounds]), high=np.array([self.bounds]),
                                       dtype=np.float32)
        self.observation_space = spaces.Discrete(4)
    
        def reset(self):
        self.cube_x = self.np_random.randint(low=3, high=FIELD_W-3)
        self.cube_y = self.np_random.randint(low=3, high=FIELD_H//6)
        self.hole_x = self.np_random.randint(low=HOLE_WIDTH, high=FIELD_W-HOLE_WIDTH)
        self.bg_color = self.random_color() if self.use_random_colors else color_black
        self.potential  = None
        self.step_n = 0
        while 1:
            self.wall_color = self.random_color() if self.use_random_colors else color_white
            self.cube_color = self.random_color() if self.use_random_colors else color_green
            if np.linalg.norm(self.wall_color - self.bg_color) < 50 or np.linalg.norm(self.cube_color - self.bg_color) < 50: continue
            break
        return self.step(0)[0]