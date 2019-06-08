
        
            :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
        def __getitem__(self, key):
        return self._store[key.lower()][1]
    
                if self.wait_to_close_event:
                self.wait_to_close_event.wait(self.WAIT_EVENT_TIMEOUT)
        finally:
            self.ready_event.set() # just in case of exception
            self._close_server_sock_ignore_errors()
            self.stop_event.set()
    
            return conn
    
        def test_basic_waiting_server(self):
        '''the server waits for the block_server event to be set before closing'''
        block_server = threading.Event()
    
        def test_post_with_custom_mapping(self, httpbin):
        class CustomMapping(MutableMapping):
            def __init__(self, *args, **kwargs):
                self.data = dict(*args, **kwargs)
    
            setting_name, refid = get_setting_name_and_refid(node)
    
    
class Command(ScrapyCommand):
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--spider', dest='spider',
            help='use this spider')
        parser.add_option('--headers', dest='headers', action='store_true', \
            help='print response HTTP headers instead of body')
        parser.add_option('--no-redirect', dest='no_redirect', action='store_true', \
            default=False, help='do not handle HTTP 3xx status codes and print response as-is')
    
                # trustRoot set to platformTrust() will use the platform's root CAs.
            #
            # This means that a website like https://www.cacert.org will be rejected
            # by default, since CAcert.org CA certificate is seldom shipped.
            return optionsForClientTLS(hostname.decode('ascii'),
                                       trustRoot=platformTrust(),
                                       extraCertificateOptions={
                                            'method': self._ssl_method,
                                       })
    
        try:
        # XXX: this try-except is not needed in Twisted 17.0.0+ because
        # it requires pyOpenSSL 0.16+.
        from OpenSSL.SSL import SSL_CB_HANDSHAKE_DONE, SSL_CB_HANDSHAKE_START
    except ImportError:
        SSL_CB_HANDSHAKE_START = 0x10
        SSL_CB_HANDSHAKE_DONE = 0x20
    
            ajax_crawl_request.meta['ajax_crawlable'] = True
        return ajax_crawl_request
    
    
class GroupTagKeyNotFound(Exception):
    pass
    
    from django.db import models
from django.utils import timezone
    
    for i, backend in enumerate(backends):
    for prefix, path in prefix_map.items():
        if backend.startswith(prefix):
            models = __import__(path, globals(), locals(), ['models'], level=0).models
            if i == 0:
                # If this is the first iteration of the loop, we need to
                # emulate ``from x import *`` by copying the module contents
                # into the local (module) scope. This follows the same rules as
                # the import statement itself, as defined in the refrence docs:
                # https://docs.python.org/2.7/reference/simple_stmts.html#import
                if getattr(models, '__all__', None) is not None:
                    predicate = lambda name: name in models.__all__
                else:
                    predicate = lambda name: not name.startswith('_')
                locals().update({k: v for k, v in vars(models).items() if predicate(k)})
            break
    else:
        raise ImproperlyConfigured('Found unknown tagstore backend '%s'' % backend)

    
        complete_apps = ['tagstore']

    
            # Changing field 'GroupTagValue.project_id'
        db.alter_column(u'tagstore_grouptagvalue', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')())
    
    
@instrumented_task(name='sentry.tasks.options.sync_options', queue='options')
def sync_options(cutoff=ONE_HOUR):
    '''
    Ensures all options that have been updated (within the database) since
    ``cutoff`` have their correct values stored in the cache.
    
        def find_all_path(self, start, end, path=None):
        path = path or []
        path.append(start)
        if start == end:
            return [path]
        paths = []
        for node in self.graph.get(start, []):
            if node not in path:
                newpaths = self.find_all_path(node, end, path[:])
                paths.extend(newpaths)
        return paths
    
        def test_c_observers_shall_be_detachable(cls):
        cls.s.detach(cls.dec_obs)
        # hex viewer shall be remaining if dec viewer is detached first
        cls.assertEqual(isinstance(cls.s._observers[0], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.detach(cls.hex_obs)
        cls.assertEqual(len(cls.s._observers), 0)
    
        def test_provider_shall_update_affected_subscribers_with_published_subscription(cls):
        pro = Provider()
        pub = Publisher(pro)
        sub1 = Subscriber('sub 1 name', pro)
        sub1.subscribe('sub 1 msg 1')
        sub1.subscribe('sub 1 msg 2')
        sub2 = Subscriber('sub 2 name', pro)
        sub2.subscribe('sub 2 msg 1')
        sub2.subscribe('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            cls.assertEqual(mock_subscriber1_run.call_count, 0)
            cls.assertEqual(mock_subscriber2_run.call_count, 0)
        pub.publish('sub 1 msg 1')
        pub.publish('sub 1 msg 2')
        pub.publish('sub 2 msg 1')
        pub.publish('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            expected_sub1_calls = [call('sub 1 msg 1'), call('sub 1 msg 2')]
            mock_subscriber1_run.assert_has_calls(expected_sub1_calls)
            expected_sub2_calls = [call('sub 2 msg 1'), call('sub 2 msg 2')]
            mock_subscriber2_run.assert_has_calls(expected_sub2_calls)

    
        def test_extended_properties(self):
        print(u'John's relatives: {0}'.format(self.John.relatives))
        self.assertDictEqual(
            {'name': 'John', 'occupation': 'Coder', 'relatives': 'Many relatives.', 'call_count2': 0},
            self.John.__dict__,
        )
    
        def test_cloning_propperty_innate_values(self):
        sample_object_1 = self.prototype.clone()
        sample_object_2 = self.prototype.clone()
        self.assertEqual(sample_object_1.value, sample_object_2.value)
    
        def test_human_adapter_shall_make_noise(self):
        human = Human()
        human_adapter = Adapter(human, make_noise=human.speak)
        noise = human_adapter.make_noise()
        expected_noise = ''hello''
        self.assertEqual(noise, expected_noise)
    
    
class Provider:
    def __init__(self):
        self.msg_queue = []
        self.subscribers = {}
    
    This pattern aims to decouple the senders of a request from its
receivers by allowing request to move through chained
receivers until it is handled.
    
            Returns:
        -------
        Tuple of mean and standard deviations for the L*, a*, and b*
        channels, respectively
        '''
        # compute the mean and standard deviation of each channel
        (light, col_a, col_b) = cv2.split(image)  # pylint: disable=no-member
        (l_mean, l_std) = (light.mean(), light.std())
        (a_mean, a_std) = (col_a.mean(), col_a.std())
        (b_mean, b_std) = (col_b.mean(), col_b.std())
    
        @staticmethod
    def get_kernel_size(new_face, radius_percent):
        ''' Return the kernel size and central point for the given radius
            relative to frame width '''
        radius = max(1, round(new_face.shape[1] * radius_percent / 100))
        kernel_size = int((radius * 2) + 1)
        kernel_size = (kernel_size, kernel_size)
        logger.trace(kernel_size)
        return kernel_size, radius
    
        def mux_audio(self):
        ''' Mux audio
            ImageIO is a useful lib for frames > video as it also packages the ffmpeg binary
            however muxing audio is non-trivial, so this is done afterwards with ffmpy.
            A future fix could be implemented to mux audio with the frames '''
        logger.info('Muxing Audio...')
        exe = im_ffm.get_ffmpeg_exe()
        inputs = OrderedDict([(self.video_tmp_file, None), (self.source_video, None)])
        outputs = {self.video_file: '-map 0:0 -map 1:1 -c: copy'}
        ffm = FFmpeg(executable=exe,
                     global_options='-hide_banner -nostats -v 0 -y',
                     inputs=inputs,
                     outputs=outputs)
        logger.debug('Executing: %s', ffm.cmd)
        ffm.run()
        logger.debug('Removing temp file')
        os.remove(self.video_tmp_file)

    
        def check_transparency_format(self):
        ''' Make sure that the output format is correct if draw_transparent is selected '''
        transparent = self.config['draw_transparent']
        if not transparent or (transparent and self.config['format'] in ('png', 'tif')):
            return
        logger.warning('Draw Transparent selected, but the requested format does not support '
                       'transparency. Changing output format to 'png'')
        self.config['format'] = 'png'
    
        def draw_grey_out_faces(self, live_face):
        ''' Grey out all faces except target '''
        if not self.roi:
            return
        alpha = 0.6
        overlay = self.image.copy()
        for idx, roi in enumerate(self.roi):
            if idx != int(live_face):
                logger.trace('Greying out face: (idx: %s, roi: %s)', idx, roi)
                cv2.fillPoly(overlay, roi, (0, 0, 0))  # pylint: disable=no-member
        cv2.addWeighted(overlay,  # pylint: disable=no-member
                        alpha,
                        self.image,
                        1 - alpha,
                        0,
                        self.image)

    
        def show(self):
        ''' Show the tooltip '''
        def tip_pos_calculator(widget, label,
                               *,
                               tip_delta=(10, 5), pad=(5, 3, 5, 3)):
            ''' Calculate the tooltip position '''
    
    
# Update initializers into Keras custom objects
for name, obj in inspect.getmembers(sys.modules[__name__]):
    if inspect.isclass(obj) and obj.__module__ == __name__:
        get_custom_objects().update({name: obj})

    
            if self.config.get('mask_type', None):
            var_y = input_
            var_y = self.blocks.upscale(var_y, 512)
            var_y = self.blocks.upscale(var_y, 256)
            var_y = self.blocks.upscale(var_y, self.input_shape[0])
            var_y = Conv2D(1, kernel_size=5, padding='same', activation='sigmoid')(var_y)
            outputs.append(var_y)
        return KerasModel(input_, outputs=outputs)

    
            print('Empty input')
        assert_equal(func([]), [])
    
            print('Test: Enqueue after a dequeue')
        queue.enqueue(5)
        assert_equal(queue.dequeue(), 5)
    
            print('Test: Two or more element stack (general case)')
        num_items = 10
        numbers = [randint(0, 10) for x in range(num_items)]
        sorted_stack = self.get_sorted_stack(stack, numbers)
        sorted_numbers = []
        for _ in range(num_items):
            sorted_numbers.append(sorted_stack.pop())
        assert_equal(sorted_numbers, sorted(numbers, reverse=True))
    
    
if __name__ == '__main__':
    main()
    
    	def test_delete (self):
		myTree = BinaryTree()
		myTree.insert(5)