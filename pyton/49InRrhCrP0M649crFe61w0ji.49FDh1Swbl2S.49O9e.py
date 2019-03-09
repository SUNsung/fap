
        
            if test_config is None:
        # load the instance config, if it exists, when not testing
        app.config.from_pyfile('config.py', silent=True)
    else:
        # load the test config if passed in
        app.config.update(test_config)
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
        auth.login()
    response = client.get('/')
    assert b'test title' in response.data
    assert b'by test on 2018-01-01' in response.data
    assert b'test\nbody' in response.data
    assert b'href='/1/update'' in response.data
    
    
def test_init_db_command(runner, monkeypatch):
    class Recorder(object):
        called = False
    
        def to_python(self, value):
        return UUID(value)
    
            # We attach the view class to the view function for two reasons:
        # first of all it allows us to easily figure out what class-based
        # view this thing came from, secondly it's also used for instantiating
        # the view class so you can actually replace it with something else
        # for testing purposes and debugging.
        view.view_class = cls
        view.__name__ = name
        view.__doc__ = cls.__doc__
        view.__module__ = cls.__module__
        view.methods = cls.methods
        view.provide_automatic_options = cls.provide_automatic_options
        return view
    
            # In debug mode we're replacing the files multidict with an ad-hoc
        # subclass that raises a different error for key errors.
        if (
            current_app
            and current_app.debug
            and self.mimetype != 'multipart/form-data'
            and not self.files
        ):
            from .debughelpers import attach_enctype_error_multidict
            attach_enctype_error_multidict(self)
    
        if version in tags:
        fail('Version '%s' is already tagged', version)
    
    from time import time
    
    First, we fix a training set, increase the number of
samples to classify and plot number of classified samples as a
function of time.
    
        class_name = info['fullname'].split('.')[0]
    if type(class_name) != str:
        # Python 2 only
        class_name = class_name.encode('utf-8')
    module = __import__(info['module'], fromlist=[class_name])
    obj = attrgetter(info['fullname'])(module)
    
    plt.figure(2)  # 'banana' shape
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X2[:, 0], X2[:, 1], color='black')
plt.xlim((xx2.min(), xx2.max()))
plt.ylim((yy2.min(), yy2.max()))
plt.legend((legend2_values_list[0].collections[0],
            legend2_values_list[1].collections[0],
            legend2_values_list[2].collections[0]),
           (legend2_keys_list[0], legend2_keys_list[1], legend2_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('% lower status of the population')
plt.xlabel('average number of rooms per dwelling')
    
    data, rows, columns = make_biclusters(
    shape=(300, 300), n_clusters=5, noise=5,
    shuffle=False, random_state=0)
    
    labels = ('Waveform 1', 'Waveform 2', 'Waveform 3')
    
    # Anisotropicly distributed data
transformation = [[0.60834549, -0.63667341], [-0.40887718, 0.85253229]]
X_aniso = np.dot(X, transformation)
y_pred = KMeans(n_clusters=3, random_state=random_state).fit_predict(X_aniso)
    
    - single linkage is fast, and can perform well on
  non-globular data, but it performs poorly in the
  presence of noise.
- average and complete linkage perform well on
  cleanly separated globular clusters, but have mixed
  results otherwise.
- Ward is the most effective method for noisy data.
    
            # return its order if it is hiragana
        if len(byte_str) > 1:
            second_char = byte_str[1]
            if (first_char == 202) and (0x9F <= second_char <= 0xF1):
                return second_char - 0x9F, char_len
    
    EUCKR_ST = (
    MachineState.ERROR,MachineState.START,     3,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,#00-07
    MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ERROR,MachineState.ERROR,MachineState.START,MachineState.START #08-0f
)
    
        def feed(self, byte_str):
        if not self._model['keep_english_letter']:
            byte_str = self.filter_international_words(byte_str)
        if not byte_str:
            return self.state
        char_to_order_map = self._model['char_to_order_map']
        for i, c in enumerate(byte_str):
            # XXX: Order is in range 1-64, so one would think we want 0-63 here,
            #      but that leads to 27 more test failures than before.
            order = char_to_order_map[c]
            # XXX: This was SYMBOL_CAT_ORDER before, with a value of 250, but
            #      CharacterCategory.SYMBOL is actually 253, so we use CONTROL
            #      to make it closer to the original intent. The only difference
            #      is whether or not we count digits and control characters for
            #      _total_char purposes.
            if order < CharacterCategory.CONTROL:
                self._total_char += 1
            if order < self.SAMPLE_SIZE:
                self._freq_char += 1
                if self._last_order < self.SAMPLE_SIZE:
                    self._total_seqs += 1
                    if not self._reversed:
                        i = (self._last_order * self.SAMPLE_SIZE) + order
                        model = self._model['precedence_matrix'][i]
                    else:  # reverse the order of the letters in the lookup
                        i = (order * self.SAMPLE_SIZE) + self._last_order
                        model = self._model['precedence_matrix'][i]
                    self._seq_counters[model] += 1
            self._last_order = order
    
        def reset(self):
        super(SingleByteCharSetProber, self).reset()
        # char order of last character
        self._last_order = 255
        self._seq_counters = [0] * SequenceLikelihood.get_num_categories()
        self._total_seqs = 0
        self._total_char = 0
        # characters that fall in our sampling range
        self._freq_char = 0
    
        def feed(self, byte_str):
        for i in range(len(byte_str)):
            coding_state = self.coding_sm.next_state(byte_str[i])
            if coding_state == MachineState.ERROR:
                self.logger.debug('%s %s prober hit error at byte %s',
                                  self.charset_name, self.language, i)
                self._state = ProbingState.NOT_ME
                break
            elif coding_state == MachineState.ITS_ME:
                self._state = ProbingState.FOUND_IT
                break
            elif coding_state == MachineState.START:
                char_len = self.coding_sm.get_current_charlen()
                if i == 0:
                    self._last_char[1] = byte_str[0]
                    self.context_analyzer.feed(self._last_char[2 - char_len:],
                                               char_len)
                    self.distribution_analyzer.feed(self._last_char, char_len)
                else:
                    self.context_analyzer.feed(byte_str[i + 1 - char_len:i + 3
                                                        - char_len], char_len)
                    self.distribution_analyzer.feed(byte_str[i - 1:i + 1],
                                                    char_len)
    
            :returns:  The ``result`` attribute, a ``dict`` with the keys
                   `encoding`, `confidence`, and `language`.
        '''
        # Don't bother with checks if we're already done
        if self.done:
            return self.result
        self.done = True
    
        def __init__(self):
        super(UTF8Prober, self).__init__()
        self.coding_sm = CodingStateMachine(UTF8_SM_MODEL)
        self._num_mb_chars = None
        self.reset()