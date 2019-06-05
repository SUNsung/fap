
        
        
class InvalidProxyURL(InvalidURL):
    '''The proxy URL provided is invalid.'''
    
    ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
            This attribute checks if the status code of the response is between
        400 and 600 to see if there was a client error or a server error. If
        the status code is between 200 and 400, this will return True. This
        is **not** a check to see if the response code is ``200 OK``.
        '''
        try:
            self.raise_for_status()
        except HTTPError:
            return False
        return True
    
        :rtype: OrderedDict
    '''
    if value is None:
        return None
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--spider', dest='spider',
            help='use this spider')
        parser.add_option('--headers', dest='headers', action='store_true', \
            help='print response HTTP headers instead of body')
        parser.add_option('--no-redirect', dest='no_redirect', action='store_true', \
            default=False, help='do not handle HTTP 3xx status codes and print response as-is')
    
        spider = None
    items = {}
    requests = {}
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
        class ScrapyClientContextFactory(ClientContextFactory):
        'A SSL context factory which is more permissive against SSL bugs.'
        # see https://github.com/scrapy/scrapy/issues/82
        # and https://github.com/scrapy/scrapy/issues/26
        # and https://github.com/scrapy/scrapy/issues/981
    
        def test_str(self):
        self.assertEqual('Invalid nonce ('xxx'): error', str(self.error))
    
            self.assertRaises(
            jose.DeserializationError, nonce_field.decode, self.wrong_nonce)
        self.assertEqual(b'foo', nonce_field.decode(self.good_nonce))
    
    from certbot import errors
    
            self.assertFalse(self.vhost1.same_server(no_name1))
        self.assertFalse(no_name1.same_server(no_name3))
        self.assertFalse(no_name1.same_server(no_name4))
    
    # This is the file name suffix for HTML files (e.g. '.xhtml').
#html_file_suffix = None
    
    .. code-block:: ini
   :name: credentials.ini
   :caption: Example credentials file:
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
    
def im_detect_keypoints(model, im_scale, boxes):
    '''Infer instance keypoint poses. This function must be called after
    im_detect_bbox as it assumes that the Caffe2 workspace is already populated
    with the necessary blobs.
    
    logger = logging.getLogger(__name__)
    
        return blob, im_scales

    
        roi_data_loader.register_sigint_handler()
    roi_data_loader.start(prefill=True)
    total_time = 0
    for i in range(opts.num_batches):
        start_t = time.time()
        for _ in range(opts.x_factor):
            workspace.RunNetOnce(net)
        total_time += (time.time() - start_t) / opts.x_factor
        logger.info(
            '{:d}/{:d}: Averge dequeue time: {:.3f}s  [{:d}/{:d}]'.format(
                i + 1, opts.num_batches, total_time / (i + 1),
                roi_data_loader._minibatch_queue.qsize(),
                cfg.DATA_LOADER.MINIBATCH_QUEUE_SIZE
            )
        )
        # Sleep to simulate the time taken by running a little network
        time.sleep(opts.sleep_time)
        # To inspect:
        # blobs = workspace.FetchBlobs(all_blobs)
        # from IPython import embed; embed()
    logger.info('Shutting down data loader...')
    roi_data_loader.shutdown()
    
        def test_forward_and_gradient(self):
        A = np.random.randn(2, 3, 5, 7).astype(np.float32)
        I = np.array([0, 1], dtype=np.int32)
        self._run_op_test(A, I, check_grad=True)
    
    import logging
from tornado.curl_httpclient import CurlAsyncHTTPClient
from tornado.simple_httpclient import SimpleAsyncHTTPClient
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
        Note that for open file and socket handles it is generally
    preferable to set the ``FD_CLOEXEC`` flag (using `fcntl` or
    ``tornado.platform.auto.set_close_exec``) instead
    of using a reload hook to close them.
    '''
    _reload_hooks.append(fn)
    
        The default `asyncio` event loop policy only automatically creates
    event loops in the main threads. Other threads must create event
    loops explicitly or `asyncio.get_event_loop` (and therefore
    `.IOLoop.current`) will fail. Installing this policy allows event
    loops to be created automatically on any thread, matching the
    behavior of Tornado versions prior to 5.0 (or 5.0 on Python 2).
    
    from tornado.concurrent import Future
from tornado import gen
from tornado.ioloop import IOLoop
from tornado.netutil import Resolver, is_valid_ip
    
        def test_asyncio_accessor(self):
        self.run_policy_test(asyncio.get_event_loop, asyncio.AbstractEventLoop)