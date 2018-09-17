
        
                # Insert the include statement to MANIFEST.in if not present
        with open(manifest_path, 'a+') as manifest:
            manifest.seek(0)
            manifest_content = manifest.read()
            if not 'include fastentrypoints.py' in manifest_content:
                manifest.write(('\n' if manifest_content else '')
                               + 'include fastentrypoints.py')
    
    
def history_not_changed(proc, TIMEOUT):
    '''Ensures that history not changed.'''
    proc.send('\033[A')
    assert proc.expect([TIMEOUT, u'fuck'])
    
    
@pytest.mark.parametrize('command', [
    Command('apt list --upgradable', no_match_output),
    Command('sudo apt list --upgradable', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_match(brew_no_available_formula, brew_already_installed,
               brew_install_no_argument):
    assert match(Command('brew install elsticsearch',
                         brew_no_available_formula))
    assert not match(Command('brew install git',
                             brew_already_installed))
    assert not match(Command('brew install', brew_install_no_argument))
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
        # Returns
        x (tensor): tensor as input to the next layer
    '''
    conv = Conv2D(num_filters,
                  kernel_size=kernel_size,
                  strides=strides,
                  padding='same',
                  kernel_initializer='he_normal',
                  kernel_regularizer=l2(1e-4))
    
            self.kernel_constraint = constraints.get(kernel_constraint)
        self.recurrent_constraint = constraints.get(recurrent_constraint)
        self.bias_constraint = constraints.get(bias_constraint)
    
    
# Aliases.
    
        model.compile(loss='hinge', optimizer='adagrad')
    history = model.fit(x_train, y_train, epochs=20, batch_size=16,
                        validation_data=(x_test, y_test), verbose=0)
    assert (history.history['val_loss'][-1] < 0.9)
    
    
def test_serialization():
    all_activations = ['softmax', 'relu', 'elu', 'tanh',
                       'sigmoid', 'hard_sigmoid', 'linear',
                       'softplus', 'softsign', 'selu']
    for name in all_activations:
        fn = activations.get(name)
        ref_fn = getattr(activations, name)
        assert fn == ref_fn
        config = activations.serialize(fn)
        fn = activations.deserialize(config)
        assert fn == ref_fn
    
        np.random.seed(args.seed)
    
        n_features = 10
    list_n_samples = np.linspace(100, 1000000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, list_n_samples,
                                            [n_features], precompute=True)
    
    import time
    
        class_name = info['fullname'].split('.')[0]
    if type(class_name) != str:
        # Python 2 only
        class_name = class_name.encode('utf-8')
    module = __import__(info['module'], fromlist=[class_name])
    obj = attrgetter(info['fullname'])(module)
    
        def __init__(self, resource_type, *args, **kwargs):
        self.resource_type = resource_type
        super(Resource, self).__init__(
            'resource', default=resource_type, *args, **kwargs)
    
    REWRITE_HTTPS_ARGS_WITH_END = [
    '^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[END,NE,R=permanent]']
'''Apache version >= 2.3.9 rewrite rule arguments used for redirections to
    https vhost'''
    
            :param addrs: Iterable Addresses
        :type addrs: Iterable :class:~obj.Addr
    
            self.assertFalse(self.addr_defined.conflicts(self.addr1))
        self.assertFalse(self.addr_defined.conflicts(self.addr2))
        self.assertFalse(self.addr_defined.conflicts(self.addr))
        self.assertFalse(self.addr_defined.conflicts(self.addr_default))
    
            # Create all of the challenge certs
        for achall in self.achalls:
            responses.append(self._setup_challenge_cert(achall))