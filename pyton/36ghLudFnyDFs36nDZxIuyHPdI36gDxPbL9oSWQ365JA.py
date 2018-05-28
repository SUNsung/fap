
        
            branch_pool = AveragePooling2D((3, 3), strides=(1, 1), padding='same')(x)
    branch_pool = conv2d_bn(branch_pool, 32, 1, 1)
    x = layers.concatenate(
        [branch1x1, branch5x5, branch3x3dbl, branch_pool],
        axis=channel_axis,
        name='mixed0')
    
        if steps is not None:
        # Step-based predictions.
        # Since we do not know how many samples
        # we will see, we cannot pre-allocate
        # the returned Numpy arrays.
        # Instead, we store one array per batch seen
        # and concatenate them upon returning.
        unconcatenated_outs = []
        for step in range(steps):
            batch_outs = f(ins)
            if not isinstance(batch_outs, list):
                batch_outs = [batch_outs]
            if step == 0:
                for batch_out in batch_outs:
                    unconcatenated_outs.append([])
            for i, batch_out in enumerate(batch_outs):
                unconcatenated_outs[i].append(batch_out)
            if verbose == 1:
                progbar.update(step + 1)
        if len(unconcatenated_outs) == 1:
            return np.concatenate(unconcatenated_outs[0], axis=0)
        return [np.concatenate(unconcatenated_outs[i], axis=0)
                for i in range(len(unconcatenated_outs))]
    else:
        # Sample-based predictions.
        outs = []
        batches = make_batches(num_samples, batch_size)
        index_array = np.arange(num_samples)
        for batch_index, (batch_start, batch_end) in enumerate(batches):
            batch_ids = index_array[batch_start:batch_end]
            if ins and isinstance(ins[-1], float):
                # Do not slice the training phase flag.
                ins_batch = slice_arrays(ins[:-1], batch_ids) + [ins[-1]]
            else:
                ins_batch = slice_arrays(ins, batch_ids)
            for i in indices_for_conversion_to_dense:
                ins_batch[i] = ins_batch[i].toarray()
    
    
# reparameterization trick
# instead of sampling from Q(z|X), sample eps = N(0,I)
# z = z_mean + sqrt(var)*eps
def sampling(args):
    '''Reparameterization trick by sampling fr an isotropic unit Gaussian.
    
        for strides in [(1, 1), (2, 2)]:
        layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': 3,
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_last'},
                   input_shape=(num_samples, num_row, num_col, stack_size))
    
    ] + _py_files('scrapy/contrib') + _py_files('scrapy/contrib_exp')
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def __init__(self, method, *args):
        self.testcase_pre = _create_testcase(method, '@%s pre-hook' % self.name)
        self.testcase_post = _create_testcase(method, '@%s post-hook' % self.name)
        self.args = args
    
        with open('README.md') as readme:
        readme_html = mistune.markdown(readme.read())
        readme_soup = BeautifulSoup.BeautifulSoup(readme_html, 'html.parser')
    
            path_args, path_kwargs = [], {}
    
            add_accept_handler(listener, accept_callback)
        self.client_stream = IOStream(socket.socket())
        self.addCleanup(self.client_stream.close)
        yield [self.client_stream.connect(('127.0.0.1', port)),
               event.wait()]
        self.io_loop.remove_handler(listener)
        listener.close()
    
        def finish(self):
        if (self._expected_content_remaining is not None and
                self._expected_content_remaining != 0):
            self._error = httputil.HTTPOutputError(
                'Tried to write %d bytes less than Content-Length' %
                self._expected_content_remaining)
            raise self._error
        self._finished = True
    
        def start(self):
        old_current = IOLoop.current(instance=False)
        try:
            self._setup_logging()
            self.make_current()
            self.reactor.run()
        finally:
            if old_current is None:
                IOLoop.clear_current()
            else:
                old_current.make_current()
    
    
class TestPortAllocation(unittest.TestCase):
    def test_same_port_allocation(self):
        if 'TRAVIS' in os.environ:
            self.skipTest('dual-stack servers often have port conflicts on travis')
        sockets = bind_sockets(None, 'localhost')
        try:
            port = sockets[0].getsockname()[1]
            self.assertTrue(all(s.getsockname()[1] == port
                                for s in sockets[1:]))
        finally:
            for sock in sockets:
                sock.close()
    
    
def try_close(f):
    # Avoid issue #875 (race condition when using the file in another
    # thread).
    for i in range(10):
        try:
            f.close()
        except IOError:
            # Yield to another thread
            time.sleep(1e-3)
        else:
            break
    # Try a last time and let raise
    f.close()