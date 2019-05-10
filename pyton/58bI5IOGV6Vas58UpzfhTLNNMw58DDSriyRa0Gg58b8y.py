
        
                '''
        raise NotImplementedError()
    
    
class BasicAuthPlugin(BuiltinAuthPlugin):
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
        def test_implicit_POST_form(self, httpbin):
        r = http('--form', httpbin.url + '/post', 'foo=bar')
        assert HTTP_OK in r
        assert r.json['form'] == {'foo': 'bar'}
    
    
@mock.patch('httpie.core.get_response')
def test_error(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
            :param output_file: The file to store response body in. If not
                            provided, it will be guessed from the response.
    
        x_train = np.empty((num_train_samples, 3, 32, 32), dtype='uint8')
    y_train = np.empty((num_train_samples,), dtype='uint8')
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        loss = MSE_MAE_loss(0.3)
        inputs = keras.layers.Input((2,))
        outputs = keras.layers.Dense(1, name='model_output')(inputs)
        model = keras.models.Model(inputs, outputs)
        model.compile(optimizer='sgd', loss={'model_output': loss})
        model.fit(np.random.rand(256, 2), np.random.rand(256, 1))
        model.save(model_filename)
    
    
def test_regularization_shared_layer():
    dense_layer = Dense(num_classes,
                        kernel_regularizer=regularizers.l1(),
                        activity_regularizer=regularizers.l1())
    
        @property
    def use_bias(self):
        return self.cell.use_bias
    
    Given a training dataset of corrupted data as input and
true signal as output, a denoising autoencoder can recover the
hidden structure to generate clean data.
    
        possible_keys = pytest.mark.parametrize('key', ('accept', 'ACCEPT', 'aCcEpT', 'Accept'))
    
            # because special names such as Name.Class, Name.Function, etc.
        # are not recognized as such later in the parsing, we choose them
        # to look the same as ordinary variables.
        Name:                      '#000000',        # class: 'n'
        Name.Attribute:            '#c4a000',        # class: 'na' - to be revised
        Name.Builtin:              '#004461',        # class: 'nb'
        Name.Builtin.Pseudo:       '#3465a4',        # class: 'bp'
        Name.Class:                '#000000',        # class: 'nc' - to be revised
        Name.Constant:             '#000000',        # class: 'no' - to be revised
        Name.Decorator:            '#888',           # class: 'nd' - to be revised
        Name.Entity:               '#ce5c00',        # class: 'ni'
        Name.Exception:            'bold #cc0000',   # class: 'ne'
        Name.Function:             '#000000',        # class: 'nf'
        Name.Property:             '#000000',        # class: 'py'
        Name.Label:                '#f57900',        # class: 'nl'
        Name.Namespace:            '#000000',        # class: 'nn' - to be revised
        Name.Other:                '#000000',        # class: 'nx'
        Name.Tag:                  'bold #004461',   # class: 'nt' - like a keyword
        Name.Variable:             '#000000',        # class: 'nv' - to be revised
        Name.Variable.Class:       '#000000',        # class: 'vc' - to be revised
        Name.Variable.Global:      '#000000',        # class: 'vg' - to be revised
        Name.Variable.Instance:    '#000000',        # class: 'vi' - to be revised
    
            if algorithm is None:
            _algorithm = 'MD5'
        else:
            _algorithm = algorithm.upper()
        # lambdas assume digest modules are imported at the top level
        if _algorithm == 'MD5' or _algorithm == 'MD5-SESS':
            def md5_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.md5(x).hexdigest()
            hash_utf8 = md5_utf8
        elif _algorithm == 'SHA':
            def sha_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha1(x).hexdigest()
            hash_utf8 = sha_utf8
        elif _algorithm == 'SHA-256':
            def sha256_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha256(x).hexdigest()
            hash_utf8 = sha256_utf8
        elif _algorithm == 'SHA-512':
            def sha512_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha512(x).hexdigest()
            hash_utf8 = sha512_utf8
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or {}
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
    import pytest
    
        @pytest.mark.parametrize(
        'value, expected', (
            ([('key', 'val')], [('key', 'val')]),
            ((('key', 'val'), ), [('key', 'val')]),
            ({'key': 'val'}, [('key', 'val')]),
            (None, None)
        ))
    def test_valid(self, value, expected):
        assert to_key_val_list(value) == expected
    
            return new_proxies
    
            print('benchmarking scikit-learn: ')
        scikit_results.append(bench(ScikitLasso, X, Y, X_test, Y_test, coef_))
        print('benchmarking glmnet: ')
        glmnet_results.append(bench(GlmnetLasso, X, Y, X_test, Y_test, coef_))
    
    First, we fix a training set and increase the number of
samples. Then we plot the computation time as function of
the number of samples.
    
        from sklearn.tree import DecisionTreeClassifier
    
        output_file.close()

    
    
def plot_influence(conf, mse_values, prediction_times, complexities):
    '''
    Plot influence of model complexity on both accuracy and latency.
    '''
    plt.figure(figsize=(12, 6))
    host = host_subplot(111, axes_class=Axes)
    plt.subplots_adjust(right=0.75)
    par1 = host.twinx()
    host.set_xlabel('Model Complexity (%s)' % conf['complexity_label'])
    y1_label = conf['prediction_performance_label']
    y2_label = 'Time (s)'
    host.set_ylabel(y1_label)
    par1.set_ylabel(y2_label)
    p1, = host.plot(complexities, mse_values, 'b-', label='prediction error')
    p2, = par1.plot(complexities, prediction_times, 'r-',
                    label='latency')
    host.legend(loc='upper right')
    host.axis['left'].label.set_color(p1.get_color())
    par1.axis['right'].label.set_color(p2.get_color())
    plt.title('Influence of Model Complexity - %s' % conf['estimator'].__name__)
    plt.show()
    
    # Define 'classifiers' to be used
classifiers = {
    'Empirical Covariance': EllipticEnvelope(support_fraction=1.,
                                             contamination=0.261),
    'Robust Covariance (Minimum Covariance Determinant)':
    EllipticEnvelope(contamination=0.261),
    'OCSVM': OneClassSVM(nu=0.261, gamma=0.05)}
colors = ['m', 'g', 'b']
legend1 = {}
legend2 = {}
    
    fit_data = data[np.argsort(model.row_labels_)]
fit_data = fit_data[:, np.argsort(model.column_labels_)]
    
    '''
print(__doc__)
    
    np.random.seed(5)
    
    plt.show()

    
    # #############################################################################
# Compute clustering with MeanShift
    
            if self.state == ProbingState.DETECTING:
            if (self.distribution_analyzer.got_enough_data() and
                    (self.get_confidence() > self.SHORTCUT_THRESHOLD)):
                self._state = ProbingState.FOUND_IT
    
            return self.state
    
    UCS2LE_CLS = (
    0,0,0,0,0,0,0,0,  # 00 - 07
    0,0,1,0,0,2,0,0,  # 08 - 0f
    0,0,0,0,0,0,0,0,  # 10 - 17
    0,0,0,3,0,0,0,0,  # 18 - 1f
    0,0,0,0,0,0,0,0,  # 20 - 27
    0,3,3,3,3,3,0,0,  # 28 - 2f
    0,0,0,0,0,0,0,0,  # 30 - 37
    0,0,0,0,0,0,0,0,  # 38 - 3f
    0,0,0,0,0,0,0,0,  # 40 - 47
    0,0,0,0,0,0,0,0,  # 48 - 4f
    0,0,0,0,0,0,0,0,  # 50 - 57
    0,0,0,0,0,0,0,0,  # 58 - 5f
    0,0,0,0,0,0,0,0,  # 60 - 67
    0,0,0,0,0,0,0,0,  # 68 - 6f
    0,0,0,0,0,0,0,0,  # 70 - 77
    0,0,0,0,0,0,0,0,  # 78 - 7f
    0,0,0,0,0,0,0,0,  # 80 - 87
    0,0,0,0,0,0,0,0,  # 88 - 8f
    0,0,0,0,0,0,0,0,  # 90 - 97
    0,0,0,0,0,0,0,0,  # 98 - 9f
    0,0,0,0,0,0,0,0,  # a0 - a7
    0,0,0,0,0,0,0,0,  # a8 - af
    0,0,0,0,0,0,0,0,  # b0 - b7
    0,0,0,0,0,0,0,0,  # b8 - bf
    0,0,0,0,0,0,0,0,  # c0 - c7
    0,0,0,0,0,0,0,0,  # c8 - cf
    0,0,0,0,0,0,0,0,  # d0 - d7
    0,0,0,0,0,0,0,0,  # d8 - df
    0,0,0,0,0,0,0,0,  # e0 - e7
    0,0,0,0,0,0,0,0,  # e8 - ef
    0,0,0,0,0,0,0,0,  # f0 - f7
    0,0,0,0,0,0,4,5   # f8 - ff
)
    
    UTF8_CLS = (
    1,1,1,1,1,1,1,1,  # 00 - 07  #allow 0x00 as a legal value
    1,1,1,1,1,1,0,0,  # 08 - 0f
    1,1,1,1,1,1,1,1,  # 10 - 17
    1,1,1,0,1,1,1,1,  # 18 - 1f
    1,1,1,1,1,1,1,1,  # 20 - 27
    1,1,1,1,1,1,1,1,  # 28 - 2f
    1,1,1,1,1,1,1,1,  # 30 - 37
    1,1,1,1,1,1,1,1,  # 38 - 3f
    1,1,1,1,1,1,1,1,  # 40 - 47
    1,1,1,1,1,1,1,1,  # 48 - 4f
    1,1,1,1,1,1,1,1,  # 50 - 57
    1,1,1,1,1,1,1,1,  # 58 - 5f
    1,1,1,1,1,1,1,1,  # 60 - 67
    1,1,1,1,1,1,1,1,  # 68 - 6f
    1,1,1,1,1,1,1,1,  # 70 - 77
    1,1,1,1,1,1,1,1,  # 78 - 7f
    2,2,2,2,3,3,3,3,  # 80 - 87
    4,4,4,4,4,4,4,4,  # 88 - 8f
    4,4,4,4,4,4,4,4,  # 90 - 97
    4,4,4,4,4,4,4,4,  # 98 - 9f
    5,5,5,5,5,5,5,5,  # a0 - a7
    5,5,5,5,5,5,5,5,  # a8 - af
    5,5,5,5,5,5,5,5,  # b0 - b7
    5,5,5,5,5,5,5,5,  # b8 - bf
    0,0,6,6,6,6,6,6,  # c0 - c7
    6,6,6,6,6,6,6,6,  # c8 - cf
    6,6,6,6,6,6,6,6,  # d0 - d7
    6,6,6,6,6,6,6,6,  # d8 - df
    7,8,8,8,8,8,8,8,  # e0 - e7
    8,8,8,8,8,9,8,8,  # e8 - ef
    10,11,11,11,11,11,11,11,  # f0 - f7
    12,13,13,13,14,15,0,0    # f8 - ff
)
    
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
    
            # If we've seen escape sequences, use the EscCharSetProber, which
        # uses a simple state machine to check for known escape sequences in
        # HZ and ISO-2022 encodings, since those are the only encodings that
        # use such sequences.
        if self._input_state == InputState.ESC_ASCII:
            if not self._esc_charset_prober:
                self._esc_charset_prober = EscCharSetProber(self.lang_filter)
            if self._esc_charset_prober.feed(byte_str) == ProbingState.FOUND_IT:
                self.result = {'encoding':
                               self._esc_charset_prober.charset_name,
                               'confidence':
                               self._esc_charset_prober.get_confidence(),
                               'language':
                               self._esc_charset_prober.language}
                self.done = True
        # If we've seen high bytes (i.e., those with values greater than 127),
        # we need to do more complicated checks using all our multi-byte and
        # single-byte probers that are left.  The single-byte probers
        # use character bigram distributions to determine the encoding, whereas
        # the multi-byte probers use a combination of character unigram and
        # bigram distributions.
        elif self._input_state == InputState.HIGH_BYTE:
            if not self._charset_probers:
                self._charset_probers = [MBCSGroupProber(self.lang_filter)]
                # If we're checking non-CJK encodings, use single-byte prober
                if self.lang_filter & LanguageFilter.NON_CJK:
                    self._charset_probers.append(SBCSGroupProber())
                self._charset_probers.append(Latin1Prober())
            for prober in self._charset_probers:
                if prober.feed(byte_str) == ProbingState.FOUND_IT:
                    self.result = {'encoding': prober.charset_name,
                                   'confidence': prober.get_confidence(),
                                   'language': prober.language}
                    self.done = True
                    break
            if self.WIN_BYTE_DETECTOR.search(byte_str):
                self._has_win_bytes = True