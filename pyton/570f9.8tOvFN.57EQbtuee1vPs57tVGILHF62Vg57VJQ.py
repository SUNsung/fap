
        
            def __init__(self, chat_id):
        self.chat_id = chat_id
        self.users = []
        self.messages = []
    
        def __init__(self, level, row, spot_number, spot_size, vehicle_size):
        self.level = level
        self.row = row
        self.spot_number = spot_number
        self.spot_size = spot_size
        self.vehicle_size = vehicle_size
        self.vehicle = None
    
            The shuffle/sort step of MapReduce will then do a
        distributed sort on the keys, resulting in:
    
        def crawled_similar(self, signature):
        '''Determine if we've already crawled a page matching the given signature'''
        pass
    
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
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    no_match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Get:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease [89.2 kB]
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Get:4 http://security.ubuntu.com/ubuntu zesty-security InRelease [89.2 kB]
Hit:5 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Hit:6 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:7 https://download.docker.com/linux/ubuntu zesty InRelease
Get:8 http://us.archive.ubuntu.com/ubuntu zesty-updates/main i386 Packages [232 kB]
Get:9 http://us.archive.ubuntu.com/ubuntu zesty-updates/main amd64 Packages [235 kB]
Get:10 http://us.archive.ubuntu.com/ubuntu zesty-updates/main amd64 DEP-11 Metadata [55.2 kB]
Get:11 http://us.archive.ubuntu.com/ubuntu zesty-updates/main DEP-11 64x64 Icons [32.3 kB]
Get:12 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe amd64 Packages [156 kB]
Get:13 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe i386 Packages [156 kB]
Get:14 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe amd64 DEP-11 Metadata [175 kB]
Get:15 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe DEP-11 64x64 Icons [253 kB]
Get:16 http://us.archive.ubuntu.com/ubuntu zesty-updates/multiverse amd64 DEP-11 Metadata [5,840 B]
Get:17 http://us.archive.ubuntu.com/ubuntu zesty-backports/universe amd64 DEP-11 Metadata [4,588 B]
Get:18 http://security.ubuntu.com/ubuntu zesty-security/main amd64 DEP-11 Metadata [12.7 kB]
Get:19 http://security.ubuntu.com/ubuntu zesty-security/main DEP-11 64x64 Icons [17.6 kB]
Get:20 http://security.ubuntu.com/ubuntu zesty-security/universe amd64 DEP-11 Metadata [21.6 kB]
Get:21 http://security.ubuntu.com/ubuntu zesty-security/universe DEP-11 64x64 Icons [47.7 kB]
Get:22 http://security.ubuntu.com/ubuntu zesty-security/multiverse amd64 DEP-11 Metadata [208 B]
Fetched 1,673 kB in 0s (1,716 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
All packages are up to date.
'''
    
    # (filename as typed by the user, unquoted filename, quoted filename as per shells.quote)
parametrize_filename = pytest.mark.parametrize('filename, unquoted, quoted', [
    ('foo{}', 'foo{}', 'foo{}'),
    (''foo bar{}'', 'foo bar{}', ''foo bar{}'')])
    
        def test___closure__(self):
        a = 12
        def f(): print(a)
        c = f.__closure__
        self.assertIsInstance(c, tuple)
        self.assertEqual(len(c), 1)
        # don't have a type object handy
        self.assertEqual(c[0].__class__.__name__, 'cell')
        self.cannot_set_attr(f, '__closure__', c, AttributeError)
    
        def send_typical_request(self, message):
        input = BytesIO(message)
        output = BytesIO()
        self.handler.rfile = input
        self.handler.wfile = output
        self.handler.handle_one_request()
        output.seek(0)
        return output.readlines()
    
    NAME_MAPPING.update({
    ('__builtin__', 'basestring'): ('builtins', 'str'),
    ('exceptions', 'StandardError'): ('builtins', 'Exception'),
    ('UserDict', 'UserDict'): ('collections', 'UserDict'),
    ('socket', '_socketobject'): ('socket', 'SocketType'),
})
    
        def _generate_symbols(self, grammar_file, target_symbol_py_file):
        proc = subprocess.Popen([sys.executable,
                                 GEN_SYMBOL_FILE,
                                 grammar_file,
                                 target_symbol_py_file], stderr=subprocess.PIPE)
        stderr = proc.communicate()[1]
        return proc.returncode, stderr
    
    
def open_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> TextIO:
    '''Return a file-like object opened for text reading of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return TextIOWrapper(reader.open_resource(resource), encoding, errors)
    _check_location(package)
    absolute_package_path = os.path.abspath(package.__spec__.origin)
    package_path = os.path.dirname(absolute_package_path)
    full_path = os.path.join(package_path, resource)
    try:
        return open(full_path, mode='r', encoding=encoding, errors=errors)
    except OSError:
        # Just assume the loader is a resource loader; all the relevant
        # importlib.machinery loaders are and an AttributeError for
        # get_data() will make it clear what is needed from the loader.
        loader = cast(ResourceLoader, package.__spec__.loader)
        data = None
        if hasattr(package.__spec__.loader, 'get_data'):
            with suppress(OSError):
                data = loader.get_data(full_path)
        if data is None:
            package_name = package.__spec__.name
            message = '{!r} resource not found in {!r}'.format(
                resource, package_name)
            raise FileNotFoundError(message)
        else:
            return TextIOWrapper(BytesIO(data), encoding, errors)
    
        def testIteratorMultiStream(self):
        self.createTempFile(streams=5)
        with BZ2File(self.filename) as bz2f:
            self.assertEqual(list(iter(bz2f)), self.TEXT_LINES * 5)
    
        Args:
        x(tf.Tensor):
        kernel_size(int or list of int):
        out_channels(int):
        act_fn(function):
        strides(int or list of int):
        padding(str):
        name(str):
        reuse(bool):
    
    
def multi_highway_conv2d(x, kernel_size, n_layer,
                         act_fn=relu,
                         strides=1,
                         padding='SAME',
                         carry_bias=-1.0,
                         name=None):
    '''多层 highway_conv2d'''
    if isinstance(kernel_size, int):
        kernel_size = [kernel_size] * n_layer
    
    # 可以通过相同的方式获取每个单词以及任一个 n-gram 的向量
print(model.wv['hello'])
print(model.wv['<h'])
'''
[-0.03481839  0.00606661  0.02581969  0.00188777  0.0325358 ]
[ 0.04481247 -0.1784363  -0.03192253  0.07162753  0.16744071]
'''
print()
    
        @staticmethod
    def yield_original_index_reverse(image_alignments, number_alignments):
        ''' Return the correct original index for
            alignment in reverse order '''
        for idx, _ in enumerate(reversed(image_alignments)):
            original_idx = number_alignments - 1 - idx
            logger.trace('Yielding: face index %s', original_idx)
            yield original_idx
    
                    # TIP:
                # A further mod might auto-magically augment the
                # wraplength when the tooltip is too high to be
                # kept inside the screen.
                y_1 = 0
    
        'checkpoints' can either be
        - a list consisting of tensors from the forward pass of the neural net
          that we should re-use when calculating the gradients in the backward pass
          all other tensors that do not appear in this list will be re-computed
        - a string specifying how this list should be determined. currently we support
            - 'speed':  checkpoint all outputs of convolutions and matmuls. these ops are usually
                        the most expensive, so checkpointing them maximizes the running speed
                        (this is a good option if nonlinearities, concats, batchnorms, etc are
                        taking up a lot of memory)
            - 'memory': try to minimize the memory usage
                        (currently using a very simple strategy that identifies a number of
                        bottleneck tensors in the graph to checkpoint)
            - 'collection': look for a tensorflow collection named 'checkpoints', which holds the
                            tensors to checkpoint
    '''
    
            pbar = ttk.Progressbar(progressframe,
                               length=200,
                               variable=self.pbar_position,
                               maximum=1000,
                               mode='determinate')
        pbar.pack(side=tk.LEFT, padx=2, fill=tk.X, expand=True)
        pbar.pack_forget()
        return pbar
    
        @staticmethod
    def box(new_face, kernel_center, amount):
        ''' Sharpen using box filter '''
        kernel_size, center = kernel_center
        kernel = np.zeros(kernel_size, dtype='float32')
        kernel[center, center] = 1.0
        box_filter = np.ones(kernel_size, dtype='float32') / kernel_size[0]**2
        kernel = kernel + (kernel - box_filter) * amount
        new_face = cv2.filter2D(new_face, -1, kernel)  # pylint: disable=no-member
        return new_face