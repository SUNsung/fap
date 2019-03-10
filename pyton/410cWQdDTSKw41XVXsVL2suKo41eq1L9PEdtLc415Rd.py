
        
            # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        # Raises
        ValueError: in case of invalid `label_mode`.
    '''
    if label_mode not in ['fine', 'coarse']:
        raise ValueError('`label_mode` must be one of `'fine'`, `'coarse'`.')
    
    import gzip
import os
    
        def __call__(self, x):
        regularization = 0.
        if self.l1:
            regularization += K.sum(self.l1 * K.abs(x))
        if self.l2:
            regularization += K.sum(self.l2 * K.square(x))
        return regularization
    
    
def test_objective_shapes_3d():
    y_a = K.variable(np.random.random((5, 6, 7)))
    y_b = K.variable(np.random.random((5, 6, 7)))
    for obj in allobj:
        objective_output = obj(y_a, y_b)
        assert K.eval(objective_output).shape == (5, 6)
    
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
    
    def _print_commands(settings, inproject):
    _print_header(settings, inproject)
    print('Usage:')
    print('  scrapy <command> [options] [args]\n')
    print('Available commands:')
    cmds = _get_commands_dict(settings, inproject)
    for cmdname, cmdclass in sorted(cmds.items()):
        print('  %-13s %s' % (cmdname, cmdclass.short_desc()))
    if not inproject:
        print()
        print('  [ more ]      More commands available when run from project directory')
    print()
    print('Use 'scrapy <command> -h' to see more info about a command')
    
        def process_options(self, args, opts):
        try:
            self.settings.setdict(arglist_to_dict(opts.set),
                                  priority='cmdline')
        except ValueError:
            raise UsageError('Invalid -s value, use -s NAME=VALUE', print_help=False)
    
            general form:
        @returns request(s)/item(s) [min=1 [max]]
    
            for i in link_list:
            self.stream_types.append({'id': str(i[0])})
            self.streams[i[0]] = {'url': i[1]}
    
    from .theplatform import theplatform_download_by_pid
    
        elif 'subject' in url:
        titles = re.findall(r'data-title='([^']*)'>', html)
        song_id = re.findall(r'<li class='song-item' id='([^']*)'', html)
        song_ssid = re.findall(r'data-ssid='([^']*)'', html)
        get_song_url = 'http://music.douban.com/j/songlist/get_song_url'
    
        title = match1(html, r'&title=([^&]+)')
    
        def get_sign(self, media_url):
        media_host = parse.urlparse(media_url).netloc
        ran = random.randint(0, 9999999)
        ssl_callback = get_content('http://{}/ssl/ssl.shtml?r={}'.format(media_host, ran)).split(',')
        ssl_ts = int(datetime.datetime.strptime(ssl_callback[1], '%b %d %H:%M:%S %Y').timestamp() + int(ssl_callback[0]))
        sign_this = self.__class__.ENCRYPT_SALT + parse.urlparse(media_url).path + str(ssl_ts)
        arg_h = base64.b64encode(hashlib.md5(bytes(sign_this, 'utf-8')).digest(), altchars=b'-_')
        return ssl_ts, arg_h.decode('utf-8').strip('=')