
        
          train_path = os.path.join(data_path, 'ptb.train.txt')
  valid_path = os.path.join(data_path, 'ptb.valid.txt')
  test_path = os.path.join(data_path, 'ptb.test.txt')
    
    
def _set_bytes_feature(ex, name, value):
  '''Sets the value of a bytes feature in a tensorflow.train.Example proto.'''
  assert name not in ex.features.feature, 'Duplicate feature: %s' % name
  ex.features.feature[name].bytes_list.value.extend([
      str(v).encode('latin-1') for v in value])
    
          # If a GPU is used for the test, the shape is returned (already in NCHW
      # form). When GPU is not used, the shape is converted to NHWC.
      if with_gpu:
        return shape
      return shape[0], shape[2], shape[3], shape[1]
    
      # We use a weight decay of 0.0002, which performs better
  # than the 0.0001 that was originally suggested.
  weight_decay = 2e-4
    
      def test_train(self):
    train(defun=False)
    
      Args:
    image_buffer: scalar string Tensor representing the raw JPEG image buffer.
    bbox: 3-D float Tensor of bounding boxes arranged [1, num_boxes, coords]
      where each coordinate is [0, 1) and the coordinates are arranged as
      [ymin, xmin, ymax, xmax].
    output_height: The height of the image after preprocessing.
    output_width: The width of the image after preprocessing.
    num_channels: Integer depth of the image buffer for decoding.
    is_training: `True` if we're preprocessing the image for training and
      `False` otherwise.
    
    
collect_ignore = [
    # deprecated or moved modules
    'scrapy/conf.py',
    'scrapy/stats.py',
    'scrapy/project.py',
    'scrapy/utils/decorator.py',
    'scrapy/statscol.py',
    'scrapy/squeue.py',
    'scrapy/log.py',
    'scrapy/dupefilter.py',
    'scrapy/command.py',
    'scrapy/linkextractor.py',
    'scrapy/spider.py',
    
            parser.add_option_group(group)
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
        name = 'url'
    
        try:
        # hide console in MS windows
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startupinfo.wShowWindow = subprocess.SW_HIDE
    
        if address_family == socket.AF_INET:
        if len(packed_ip) != ctypes.sizeof(addr.ipv4_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv4_addr, packed_ip, 4)
    elif address_family == socket.AF_INET6:
        if len(packed_ip) != ctypes.sizeof(addr.ipv6_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv6_addr, packed_ip, 16)
    else:
        raise socket.error('unknown address family')
    
    A Parser needs a TokenStream as input (which in turn is usually fed by a
Lexer):
    
    
class MismatchedNotSetException(MismatchedSetException):
    '''@brief Used for remote debugger deserialization'''
    
    def __str__(self):
        return 'MismatchedNotSetException(%r!=%r)' % (
            self.getUnexpectedType(), self.expecting
            )
    __repr__ = __str__
    
            An index from 0..n-1 of the token object in the input stream.
        This must be valid in order to use the ANTLRWorks debugger.
        
        Using setter/getter methods is deprecated. Use o.index instead.'''
    
    EOF = -1
    
        # Replace quoted strings and digit separators.  Both single quotes
    # and double quotes are processed in the same loop, otherwise
    # nested quotes wouldn't work.
    collapsed = ''
    while True:
      # Find the first quote character
      match = Match(r'^([^\'']*)([\''])(.*)$', elided)
      if not match:
        collapsed += elided
        break
      head, quote, tail = match.groups()
    
        @classmethod
    def configurable_default(cls):
        # type: () -> type
        '''Returns the implementation class to be used if none is configured.'''
        raise NotImplementedError()
    
    
def wrap_web_tests_adapter():
    result = {}
    for cls in web_test.wsgi_safe_tests:
        class WSGIAdapterWrappedTest(cls):  # type: ignore
            def get_app(self):
                self.app = Application(self.get_handlers(),
                                       **self.get_app_kwargs())
                return WSGIContainer(validator(WSGIAdapter(self.app)))
        result['WSGIAdapter_' + cls.__name__] = WSGIAdapterWrappedTest
    return result
    
        def _log(self):
        pass
    
    import logging
from tornado.curl_httpclient import CurlAsyncHTTPClient
from tornado.simple_httpclient import SimpleAsyncHTTPClient
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
        def call_wrapped_inner(self, queue, count):
        if count < 0:
            return
        with self.make_context():
            queue.append(stack_context.wrap(
                functools.partial(self.call_wrapped_inner, queue, count - 1)))
    
    
class Application(tornado.web.Application):
    def __init__(self):
        handlers = [
            (r'/', MainHandler),
            (r'/auth/login', AuthLoginHandler),
            (r'/auth/logout', AuthLogoutHandler),
        ]
        settings = dict(
            cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
            login_url='/auth/login',
            template_path=os.path.join(os.path.dirname(__file__), 'templates'),
            static_path=os.path.join(os.path.dirname(__file__), 'static'),
            xsrf_cookies=True,
            facebook_api_key=options.facebook_api_key,
            facebook_secret=options.facebook_secret,
            ui_modules={'Post': PostModule},
            debug=True,
            autoescape=None,
        )
        tornado.web.Application.__init__(self, handlers, **settings)