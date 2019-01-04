
        
        
@classmethod
def get_args(cls, dist, header=None):
    '''
    Yield write_script() argument tuples for a distribution's
    console_scripts and gui_scripts entry points.
    '''
    if header is None:
        header = cls.get_header()
    spec = str(dist.as_requirement())
    for type_ in 'console', 'gui':
        group = type_ + '_scripts'
        for name, ep in dist.get_entry_map(group).items():
            # ensure_safe_name
            if re.search(r'[\\/]', name):
                raise ValueError('Path separators not allowed in script names')
            script_text = TEMPLATE.format(
                          ep.module_name, ep.attrs[0], '.'.join(ep.attrs),
                          spec, group, name)
            args = cls._get_script_args(type_, name, header, script_text)
            for res in args:
                yield res
    
    
@pytest.fixture(autouse=True)
def usage_tracker(mocker):
    return mocker.patch(
        'thefuck.entrypoints.not_configured._get_not_configured_usage_tracker_path',
        new_callable=MagicMock)
    
    
def history_changed(proc, TIMEOUT, to):
    '''Ensures that history changed.'''
    proc.send('\033[A')
    assert proc.expect([TIMEOUT, to])
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
        assert match(command)
    
        new_command = get_new_command(Command('sudo apt list --upgradable', match_output))
    assert new_command == 'sudo apt upgrade'

    
    
misspelled_subcommand_with_multiple_options = '''\
usage: aws [options] <command> <subcommand> [<subcommand> ...] [parameters]
To see help text, you can run:
    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
        # Returns
        x (tensor): tensor as input to the next layer
    '''
    conv = Conv2D(num_filters,
                  kernel_size=kernel_size,
                  strides=strides,
                  padding='same',
                  kernel_initializer='he_normal',
                  kernel_regularizer=l2(1e-4))
    
    if not exists(log_dir):
    makedirs(log_dir)
    
        return (x_train, y_train), (x_test, y_test)

    
        # Arguments
        model: target model for the conversion.
    '''
    # Note: SeparableConvolution not included
    # since only supported by TF.
    conv_classes = {
        'Conv1D',
        'Conv2D',
        'Conv3D',
        'Conv2DTranspose',
    }
    to_assign = []
    for layer in model.layers:
        if layer.__class__.__name__ in conv_classes:
            original_kernel = K.get_value(layer.kernel)
            converted_kernel = convert_kernel(original_kernel)
            to_assign.append((layer.kernel, converted_kernel))
    K.batch_set_value(to_assign)
    
    
def test_sparse_categorical_crossentropy():
    y_pred = K.variable(np.array([[0.3, 0.6, 0.1],
                                  [0.1, 0.2, 0.7]]))
    y_true = K.variable(np.array([1, 2]))
    expected_loss = - (np.log(0.6) + np.log(0.7)) / 2
    loss = K.eval(losses.sparse_categorical_crossentropy(y_true, y_pred))
    assert np.isclose(expected_loss, np.mean(loss))
    
        y = np.array(y, dtype='int')
    input_shape = y.shape
    if input_shape and input_shape[-1] == 1 and len(input_shape) > 1:
        input_shape = tuple(input_shape[:-1])
    y = y.ravel()
    if not num_classes:
        num_classes = np.max(y) + 1
    n = y.shape[0]
    categorical = np.zeros((n, num_classes), dtype=dtype)
    categorical[np.arange(n), y] = 1
    output_shape = input_shape + (num_classes,)
    categorical = np.reshape(categorical, output_shape)
    return categorical
    
        # Output shape
        - if `return_sequences`
             - if data_format='channels_first'
                5D tensor with shape:
                `(samples, time, filters, output_row, output_col)`
             - if data_format='channels_last'
                5D tensor with shape:
                `(samples, time, output_row, output_col, filters)`
        - else
            - if data_format='channels_first'
                4D tensor with shape:
                `(samples, filters, output_row, output_col)`
            - if data_format='channels_last'
                4D tensor with shape:
                `(samples, output_row, output_col, filters)`
            where o_row and o_col depend on the shape of the filter and
            the padding
    
    
def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % name) or os.path.exists('%s_privkey.txt' % name):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \n'
              'Use a different name or delete these files and re-run this program.' %
              (name, name))
        sys.exit()
    
        def __hash_function_2(self, value, data):
    
    word_bysig = collections.defaultdict(list)
for word in word_list:
    word_bysig[signature(word)].append(word)
    
        return res
    
    
def b_expo_mod(a, b, c):
    res = 0
    while b > 0:
        if b&1:
            res = ((res%c) + (a%c)) % c