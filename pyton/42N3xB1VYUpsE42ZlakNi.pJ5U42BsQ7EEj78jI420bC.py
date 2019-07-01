
        
        
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'git help')
    
    containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
    
init_zshrc = u'''echo '
export SHELL=/usr/bin/zsh
export HISTFILE=~/.zsh_history
echo > $HISTFILE
export SAVEHIST=100
export HISTSIZE=100
eval $(thefuck --alias {})
setopt INC_APPEND_HISTORY
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.zshrc'''
    
    
@pytest.mark.parametrize('command, packages, which', [
    (Command('a_bad_cmd', 'a_bad_cmd: command not found'),
     [], None),
    (Command('vim', ''), [], None),
    (Command('', ''), [], None),
    (Command('vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim'),
    (Command('sudo vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim')])
def test_not_match(mocker, command, packages, which):
    mocker.patch('thefuck.rules.apt_get.which', return_value=which)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
@pytest.mark.parametrize('script, output, help_text, result', [
    ('apt-get isntall vim', invalid_operation('isntall'),
     apt_get_help, 'apt-get install vim'),
    ('apt saerch vim', invalid_operation('saerch'),
     apt_help, 'apt search vim'),
])
def test_get_new_command(set_help, output, script, help_text, result):
    set_help(help_text)
    assert get_new_command(Command(script, output))[0] == result

    
    
def test_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
        # Returns
        A normalized copy of the array.
    '''
    l2 = np.atleast_1d(np.linalg.norm(x, order, axis))
    l2[l2 == 0] = 1
    return x / np.expand_dims(l2, axis)

    
        @property
    def recurrent_dropout(self):
        return self.cell.recurrent_dropout
    
    x_test_inp = layers.Input(shape=x_test.shape[1:])
test_out = cnn_layers(x_test_inp)
test_model = keras.models.Model(inputs=x_test_inp, outputs=test_out)
    
    Given a training dataset of corrupted data as input and
true signal as output, a denoising autoencoder can recover the
hidden structure to generate clean data.
    
    arxiv:1504.00941v2 [cs.NE] 7 Apr 2015
http://arxiv.org/pdf/1504.00941v2.pdf
    
    
def test_invalid_data_format():
    with pytest.raises(ValueError):
        K.normalize_data_format('channels_middle')
    
            if 'latency' in request.args:
            latency = float(request.args['latency'][0])
            reactor.callLater(latency, self._finish, request)
            return NOT_DONE_YET
    
        name = 'qps'
    benchurl = 'http://localhost:8880/'
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
    
class ScrapyHTTPClientFactory(HTTPClientFactory):
    '''Scrapy implementation of the HTTPClientFactory overwriting the
    serUrl method to make use of our Url object that cache the parse
    result.
    '''
    
    
def _test():
    ''''''
    file_path = r'./data.txt'
    
        如果需要 reuse 推荐使用类实现的 `Dense`
    
    

    
    
def multi_highway_conv2d(x, kernel_size, n_layer,
                         act_fn=relu,
                         strides=1,
                         padding='SAME',
                         carry_bias=-1.0,
                         name=None):
    '''多层 highway_conv2d'''
    if isinstance(kernel_size, int):
        kernel_size = [kernel_size] * n_layer
    
    # 因为 'a', 'aa', 'aaa' 中都只含有 '<a' ，所以它们直积上都只是 '<a'
print(model.wv['a'])
print(model.wv['aa'])
print(model.wv['aaa'])
print(model.wv['<a'])
'''
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
'''
print()