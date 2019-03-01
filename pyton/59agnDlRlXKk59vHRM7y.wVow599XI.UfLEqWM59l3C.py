
        
        # The controller will be more powerful if it can see the encoding of the entire
# trial.  However, this allows the controller to create inferred inputs that are
# acausal with respect to the actual data generation process.  E.g. the data
# generator could have an input at time t, but the controller, after seeing the
# entirety of the trial could infer that the input is coming a little before
# time t, because there are no restrictions on the data the controller sees.
# One can force the controller to be causal (with respect to perturbations in
# the data generator) so that it only sees forward encodings of the data at time
# t that originate at times before or at time t.  One can also control the data
# the controller sees by using an input lag (forward encoding at time [t-tlag]
# for controller input at time t.  The same can be done in the reverse direction
# (controller input at time t from reverse encoding at time [t+tlag], in the
# case of an acausal controller).  Setting this lag > 0 (even lag=1) can be a
# powerful way of avoiding very spiky decodes. Finally, one can manually control
# whether the factors at time t-1 are fed to the controller at time t.
#
# If you don't care about any of this, and just want to smooth your data, set
#    do_causal_controller = False
#    do_feed_factors_to_controller = True
#    causal_input_lag = 0
flags.DEFINE_boolean('do_causal_controller',
                     DO_CAUSAL_CONTROLLER,
                     'Restrict the controller create only causal inferred \
                     inputs?')
# Strictly speaking, feeding either the factors or the rates to the controller
# violates causality, since the g0 gets to see all the data. This may or may not
# be only a theoretical concern.
flags.DEFINE_boolean('do_feed_factors_to_controller',
                     DO_FEED_FACTORS_TO_CONTROLLER,
                     'Should factors[t-1] be input to controller at time t?')
flags.DEFINE_string('feedback_factors_or_rates', FEEDBACK_FACTORS_OR_RATES,
                    'Feedback the factors or the rates to the controller? \
                     Acceptable values: 'factors' or 'rates'.')
flags.DEFINE_integer('controller_input_lag', CONTROLLER_INPUT_LAG,
                     'Time lag on the encoding to controller t-lag for \
                     forward, t+lag for reverse.')
    
    model = IntegrationToBoundModel(N)
inputs_ph_t = [tf.placeholder(tf.float32,
                              shape=[None, 1]) for _ in range(ntimesteps)]
state = tf.zeros([batch_size, N])
saver = tf.train.Saver()
    
      # In the data workup in the paper, Chethan did intra condition
  # averaging, so let's do that here.
  avg_data_all = {}
  for name, conditions in conditions_all.items():
    dataset = datasets[name]
    avg_data_all[name] = {}
    for cname in conditions:
      td_idxs = np.argwhere(np.array(dataset['condition_labels_train'])==cname)
      data = np.squeeze(dataset['train_data'][td_idxs,:,:], axis=1)
      avg_data = np.mean(data, axis=0)
      avg_data_all[name][cname] = avg_data
    
      @property
  def vocab(self):
    return self._vocab

    
            self._id_to_word.append(word_name)
        self._word_to_id[word_name] = idx
        idx += 1
    
        # rnn_vd derived from the same code base as rnn_zaremba.
    elif (FLAGS.discriminator_model == 'rnn_zaremba' or
          FLAGS.discriminator_model == 'rnn_vd'):
      dis_variable_maps = variable_mapping.rnn_zaremba(hparams, model='dis')
      dis_init_saver = tf.train.Saver(var_list=dis_variable_maps)
      init_savers['dis_init_saver'] = dis_init_saver
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
    try:
    import simplejson as json
except ImportError:
    import json
    
        if implementation == 'CPython':
        implementation_version = platform.python_version()
    elif implementation == 'PyPy':
        implementation_version = '%s.%s.%s' % (sys.pypy_version_info.major,
                                               sys.pypy_version_info.minor,
                                               sys.pypy_version_info.micro)
        if sys.pypy_version_info.releaselevel != 'final':
            implementation_version = ''.join([
                implementation_version, sys.pypy_version_info.releaselevel
            ])
    elif implementation == 'Jython':
        implementation_version = platform.python_version()  # Complete Guess
    elif implementation == 'IronPython':
        implementation_version = platform.python_version()  # Complete Guess
    else:
        implementation_version = 'Unknown'
    
    
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

    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    
@pytest.mark.parametrize(
    'value, expected', (
        (
            'application/xml',
            ('application/xml', {})
        ),
        (
            'application/json ; charset=utf-8',
            ('application/json', {'charset': 'utf-8'})
        ),
        (
            'application/json ; Charset=utf-8',
            ('application/json', {'charset': 'utf-8'})
        ),
        (
            'text/plain',
            ('text/plain', {})
        ),
        (
            'multipart/form-data; boundary = something ; boundary2=\'something_else\' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
                'multipart/form-data; boundary = something ; boundary2='something_else' ; no_equals ',
                ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'multipart/form-data; boundary = something ; \'boundary2=something_else\' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'multipart/form-data; boundary = something ; 'boundary2=something_else' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'application/json ; ; ',
            ('application/json', {})
        )
    ))
def test__parse_content_type_header(value, expected):
    assert _parse_content_type_header(value) == expected