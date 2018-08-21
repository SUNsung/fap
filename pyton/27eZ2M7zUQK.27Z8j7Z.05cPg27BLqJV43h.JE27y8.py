
        
            infile, outfile = args
    
        def test_keywords(self):
        self.assertMatch(':ytsubs', ['youtube:subscriptions'])
        self.assertMatch(':ytsubscriptions', ['youtube:subscriptions'])
        self.assertMatch(':ythistory', ['youtube:history'])
    
    
class TestMultipleSocks(unittest.TestCase):
    @staticmethod
    def _check_params(attrs):
        params = get_params()
        for attr in attrs:
            if attr not in params:
                print('Missing %s. Skipping.' % attr)
                return
        return params
    
            swf_class = swfi.extract_class(test_id)
        func = swfi.extract_function(swf_class, 'main')
        res = func(input_args)
        self.assertEqual(res, output)
    
        _TEST = {
        'url': 'http://www.anitube.se/video/36621',
        'md5': '59d0eeae28ea0bc8c05e7af429998d43',
        'info_dict': {
            'id': '36621',
            'ext': 'mp4',
            'title': 'Recorder to Randoseru 01',
            'duration': 180.19,
        },
        'skip': 'Blocked in the US',
    }
    
            return '\r\n'.join(headers)
    
        name = 'Digest HTTP auth'
    auth_type = 'digest'
    
        def _migrate_implicit_content_type(self):
        '''Migrate the removed implicit_content_type config option'''
        try:
            implicit_content_type = self.pop('implicit_content_type')
        except KeyError:
            self.save()
        else:
            if implicit_content_type == 'form':
                self['default_options'].insert(0, '--form')
            self.save()
            self.load()

    
        def get_auth_plugin_mapping(self):
        return {plugin.auth_type: plugin for plugin in self.get_auth_plugins()}
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        if args.plot is not None:
        max_val = getattr(args, args.plot)
        if args.plot in ('classes', 'samples'):
            min_val = 2
        else:
            min_val = 0
        steps = np.linspace(min_val, max_val, num=args.n_steps + 1)[1:]
        if args.plot in ('classes', 'samples'):
            steps = np.unique(np.round(steps).astype(int))
        setattr(args, args.plot, steps)
    
        plt.figure(figsize=(8, 11))
    
        scikit_regressor_results.append(
        delta.seconds + delta.microseconds / mu_second)
    
    import os
import tarfile
from contextlib import closing
try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
        print('Generating skeleton for %s' % f)
    
    plt.figure(2)  # 'banana' shape
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X2[:, 0], X2[:, 1], color='black')
plt.xlim((xx2.min(), xx2.max()))
plt.ylim((yy2.min(), yy2.max()))
plt.legend((legend2_values_list[0].collections[0],
            legend2_values_list[1].collections[0],
            legend2_values_list[2].collections[0]),
           (legend2_keys_list[0], legend2_keys_list[1], legend2_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('% lower status of the population')
plt.xlabel('average number of rooms per dwelling')
    
    
def main(argv):
    op = get_parser()
    opts, args = op.parse_args(argv[1:])
    root = Tk.Tk()
    model = Model()
    controller = Controller(model)
    root.wm_title('Scikit-learn Libsvm GUI')
    view = View(root, controller)
    model.add_observer(view)
    Tk.mainloop()
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
    Non-adjusted measures such as the V-Measure show a dependency between
the number of clusters and the number of samples: the mean V-Measure
of random labeling increases significantly as the number of clusters is
closer to the total number of samples used to compute the measure.
    
    from sklearn.covariance import LedoitWolf, OAS
    
    def as_completed(fs, timeout=None):
    '''An iterator over the given futures that yields each as it completes.
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = '2.1.3'
# The full version, including alpha/beta/rc tags.
release = '2.1.3'
    
      def __init__( self, user_options ):
    self._user_options = user_options
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def KeywordsFromSyntaxListOutput_PythonSyntax_test():
  expected_keywords = (
    'bytearray', 'IndexError', 'all', 'help', 'vars', 'SyntaxError', 'global',
    'elif', 'unicode', 'sorted', 'memoryview', 'isinstance', 'except',
    'nonlocal', 'NameError', 'finally', 'BytesWarning', 'dict', 'IOError',
    'pass', 'oct', 'bin', 'SystemExit', 'return', 'StandardError', 'format',
    'TabError', 'break', 'next', 'not', 'UnicodeDecodeError', 'False',
    'RuntimeWarning', 'list', 'iter', 'try', 'reload', 'Warning', 'round',
    'dir', 'cmp', 'set', 'bytes', 'UnicodeTranslateError', 'intern',
    'issubclass', 'yield', 'Ellipsis', 'hash', 'locals', 'BufferError',
    'slice', 'for', 'FloatingPointError', 'sum', 'VMSError', 'getattr', 'abs',
    'print', 'import', 'True', 'FutureWarning', 'ImportWarning', 'None',
    'EOFError', 'len', 'frozenset', 'ord', 'super', 'raise', 'TypeError',
    'KeyboardInterrupt', 'UserWarning', 'filter', 'range', 'staticmethod',
    'SystemError', 'or', 'BaseException', 'pow', 'RuntimeError', 'float',
    'MemoryError', 'StopIteration', 'globals', 'divmod', 'enumerate', 'apply',
    'LookupError', 'open', 'basestring', 'from', 'UnicodeError', 'zip', 'hex',
    'long', 'IndentationError', 'int', 'chr', '__import__', 'type',
    'Exception', 'continue', 'tuple', 'reduce', 'reversed', 'else', 'assert',
    'UnicodeEncodeError', 'input', 'with', 'hasattr', 'delattr', 'setattr',
    'raw_input', 'PendingDeprecationWarning', 'compile', 'ArithmeticError',
    'while', 'del', 'str', 'property', 'def', 'and', 'GeneratorExit',
    'ImportError', 'xrange', 'is', 'EnvironmentError', 'KeyError', 'coerce',
    'SyntaxWarning', 'file', 'in', 'unichr', 'ascii', 'any', 'as', 'if',
    'OSError', 'DeprecationWarning', 'min', 'UnicodeWarning', 'execfile', 'id',
    'complex', 'bool', 'ValueError', 'NotImplemented', 'map', 'exec', 'buffer',
    'max', 'class', 'object', 'repr', 'callable', 'ZeroDivisionError', 'eval',
    '__debug__', 'ReferenceError', 'AssertionError', 'classmethod',
    'UnboundLocalError', 'NotImplementedError', 'lambda', 'AttributeError',
    'OverflowError', 'WindowsError' )
    
    
def _ConvertVimDatasToCompletionDatas( response_data ):
  return [ ConvertVimDataToCompletionData( x )
           for x in response_data ]

    
    
def EndsWithPython_Python2Paths_test():
  python_paths = [
    'python',
    'python2',
    '/usr/bin/python2.7',
    '/home/user/.pyenv/shims/python2.7',
    r'C:\Python27\python.exe',
    '/Contents/MacOS/Python'
  ]
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        def setUp(self):
        self.tc1 = TC1()
        self.tc2 = TC2()
        self.tc3 = TC3()
        self.average_result_tc1 = '###### In Test 1 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc2 = '###### In Test 2 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc3 = '###### In Test 3 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.runner = TestRunner()
        self.out = StringIO()
        self.saved_stdout = sys.stdout
        sys.stdout = self.out
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
        def test_display_current_time_at_midnight(self):
        '''
        Will almost always fail (despite of right at/after midnight).
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
    from __future__ import print_function
import os
from os.path import lexists
    
        def setTC(self, tc):
        self._tc = tc
    
    
if __name__ == '__main__':
    main()
    
        def not_specification(self):
        return NotSpecification(self)
    
    define('port', default=8888, help='run on the given port', type=int)
    
        def on_close(self):
        ChatSocketHandler.waiters.remove(self)
    
        def new_future_import(self, old):
        new = FromImport('__future__',
                         [Name('absolute_import', prefix=' '), Comma(),
                          Name('division', prefix=' '), Comma(),
                          Name('print_function', prefix=' ')])
        if old is not None:
            new.prefix = old.prefix
        return new
    
        def test_weak_etag_match(self):
        computed_etag = ''xyzzy1''
        etags = 'W/'xyzzy1''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=304)
    
    
def main():
    parse_command_line()
    
    
def main():
    parse_command_line()
    app = tornado.web.Application(
        [
            (r'/', MainHandler),
            (r'/a/message/new', MessageNewHandler),
            (r'/a/message/updates', MessageUpdatesHandler),
        ],
        cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
        template_path=os.path.join(os.path.dirname(__file__), 'templates'),
        static_path=os.path.join(os.path.dirname(__file__), 'static'),
        xsrf_cookies=True,
        debug=options.debug,
    )
    app.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
    
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
    
        def _log(self):
        pass
    
        def callback(response):
        response.rethrow()
        assert len(response.body) == (options.num_chunks * options.chunk_size)
        logging.warning('fetch completed in %s seconds', response.request_time)
        IOLoop.current().stop()
    
    
# Using HTTP PUT, upload one raw file. This is preferred for large files since
# the server can stream the data instead of buffering it entirely in memory.
@gen.coroutine
def post(filenames):
    client = httpclient.AsyncHTTPClient()
    boundary = uuid4().hex
    headers = {'Content-Type': 'multipart/form-data; boundary=%s' % boundary}
    producer = partial(multipart_producer, boundary, filenames)
    response = yield client.fetch('http://localhost:8888/post',
                                  method='POST',
                                  headers=headers,
                                  body_producer=producer)
    
    
def find_circular_references(garbage=None):
    def inner(level):
        for item in level:
            item_id = id(item)
            if item_id not in garbage_ids:
                continue
            if item_id in visited_ids:
                continue
            if item_id in stack_ids:
                candidate = stack[stack.index(item):]
                candidate.append(item)
                found.append(candidate)
                continue