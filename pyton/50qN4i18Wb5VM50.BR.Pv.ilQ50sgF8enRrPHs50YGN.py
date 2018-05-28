
def get_new_command(command):
    dir = shell.quote(_tar_file(command.script_parts)[1])
    return shell.and_('mkdir -p {dir}', '{cmd} -C {dir}') \
        .format(dir=dir, cmd=command.script)
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
        return content
    
    '''
requests._internal_utils
~~~~~~~~~~~~~~
    
    # Attempt to enable urllib3's SNI support, if possible
try:
    from urllib3.contrib import pyopenssl
    pyopenssl.inject_into_urllib3()
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
    This module contains the transport adapters that Requests uses to define
and maintain connections.
'''
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.viewcode',
]
    
    
def patch(url, data=None, **kwargs):
    r'''Sends a PATCH request.
    
        :rtype: bool
    '''
    # Prioritize lowercase environment variables over uppercase
    # to keep a consistent behaviour with other http projects (curl, wget).
    get_proxy = lambda k: os.environ.get(k) or os.environ.get(k.upper())
    
        print()
    print('Classification performance:')
    print('===========================')
    print()
    print('%s %s %s %s' % ('Classifier  ', 'train-time', 'test-time',
                           'Accuracy'))
    print('-' * 44)
    for name in sorted(accuracy, key=accuracy.get):
        print('%s %s %s %s' % (name.ljust(16),
                               ('%.4fs' % train_time[name]).center(10),
                               ('%.4fs' % test_time[name]).center(10),
                               ('%.4f' % accuracy[name]).center(10)))
    
                c_bar = plt.bar(xvals, build_time[alg] - bottom,
                            width, bottom, color='r')
            q_bar = plt.bar(xvals, query_time[alg],
                            width, build_time[alg], color='b')
    
    from sklearn.utils import check_random_state
from sklearn.metrics.pairwise import pairwise_distances
from sklearn.metrics.pairwise import pairwise_kernels
    
        ###########################################################################
    # Set GaussianRandomProjection input
    gaussian_matrix_params = {
        'n_components': opts.n_components,
        'random_state': opts.random_seed
    }
    transformers['GaussianRandomProjection'] = \
        GaussianRandomProjection(**gaussian_matrix_params)
    
        # import matplotlib.pyplot as plt
    # plt.matshow(cm)
    # plt.show()

    
        in_exercise_region = False
    
            # update decision surface if already fitted.
        self.refit()
    
    from __future__ import division
    
    The usual covariance maximum likelihood estimate can be regularized
using shrinkage. Ledoit and Wolf proposed a close formula to compute
the asymptotically optimal shrinkage parameter (minimizing a MSE
criterion), yielding the Ledoit-Wolf covariance estimate.
    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
    
def wrap_web_tests_adapter():
    result = {}
    for cls in web_test.wsgi_safe_tests:
        class WSGIAdapterWrappedTest(cls):  # type: ignore
            def get_app(self):
                self.app = Application(self.get_handlers(),
                                       **self.get_app_kwargs())
                with ignore_deprecation():
                    return WSGIContainer(validator(WSGIAdapter(self.app)))
        result['WSGIAdapter_' + cls.__name__] = WSGIAdapterWrappedTest
    return result
    
            class MainHandler(tornado.web.RequestHandler):
            def get(self):
                self.write('Hello, world')
    
            .. deprecated:: 5.1
    
        This interface is provided to make it easier to share code between
    synchronous and asynchronous applications. Applications that are
    running an `.IOLoop` must use `AsyncHTTPClient` instead.
    
            from tornado.queues import LifoQueue
    
        # Process chain
    ctx = head
    while ctx is not None:
        parent = ctx.old_contexts[1]
    
    
class OAuth1ClientLoginCoroutineHandler(OAuth1ClientLoginHandler):
    '''Replaces OAuth1ClientLoginCoroutineHandler's get() with a coroutine.'''
    @gen.coroutine
    def get(self):
        if self.get_argument('oauth_token', None):
            # Ensure that any exceptions are set on the returned Future,
            # not simply thrown into the surrounding StackContext.
            try:
                yield self.get_authenticated_user()
            except Exception as e:
                self.set_status(503)
                self.write('got exception: %s' % e)
        else:
            yield self.authorize_redirect()
    
        def test_human_shall_speak(self):
        noise = self.human.speak()
        expected_noise = ''hello''
        self.assertEqual(noise, expected_noise)
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
        def test_c_observers_shall_be_detachable(cls):
        cls.s.detach(cls.dec_obs)
        # hex viewer shall be remaining if dec viewer is detached first
        cls.assertEqual(isinstance(cls.s._observers[0], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.detach(cls.hex_obs)
        cls.assertEqual(len(cls.s._observers), 0)
    
        def test_sales_manager_shall_talk_through_proxy_with_delay(cls):
        cls.p.busy = 'No'
        start_time = time()
        cls.p.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
Sales Manager ready to talk\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
        def test_tc2_output(self):
        self.tc2.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc2)
    
    from dft.constructor_injection import TimeDisplay, MidnightTimeProvider, ProductionCodeTimeProvider, datetime
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
    
class ConcreteHandler2(Handler):
    
    print('Counting to two...')
for number in count_to_two():
    print(number, end=' ')
    
    
# Example usage...
def main():
    data1 = Data('Data 1')
    data2 = Data('Data 2')
    view1 = DecimalViewer()
    view2 = HexViewer()
    data1.attach(view1)
    data1.attach(view2)
    data2.attach(view2)
    data2.attach(view1)