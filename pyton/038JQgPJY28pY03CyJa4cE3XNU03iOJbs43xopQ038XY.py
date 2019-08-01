
        
            def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
            Emit key value pairs of the form:
    
    from mrjob.job import MRJob
    
    
class PersonServer(object):
    
            t1 = asyncio.Task(c1(result), loop=self.loop)
        t2 = asyncio.Task(c2(result), loop=self.loop)
        t3 = asyncio.Task(c3(result), loop=self.loop)
    
        def test_isspace(self):
        self.checkequal(False, '', 'isspace')
        self.checkequal(False, 'a', 'isspace')
        self.checkequal(True, ' ', 'isspace')
        self.checkequal(True, '\t', 'isspace')
        self.checkequal(True, '\r', 'isspace')
        self.checkequal(True, '\n', 'isspace')
        self.checkequal(True, ' \t\r\n', 'isspace')
        self.checkequal(False, ' \t\r\na', 'isspace')
        self.checkraises(TypeError, 'abc', 'isspace', 42)
    
    
class Test_TestCase(unittest.TestCase, TestEquality, TestHashing):
    
    # Same, but for 3.x to 2.x
REVERSE_IMPORT_MAPPING = dict((v, k) for (k, v) in IMPORT_MAPPING.items())
assert len(REVERSE_IMPORT_MAPPING) == len(IMPORT_MAPPING)
REVERSE_NAME_MAPPING = dict((v, k) for (k, v) in NAME_MAPPING.items())
assert len(REVERSE_NAME_MAPPING) == len(NAME_MAPPING)
    
    import asyncio
from asyncio.proactor_events import BaseProactorEventLoop
from asyncio.proactor_events import _ProactorSocketTransport
from asyncio.proactor_events import _ProactorWritePipeTransport
from asyncio.proactor_events import _ProactorDuplexPipeTransport
from asyncio.proactor_events import _ProactorDatagramTransport
from test import support
from test.test_asyncio import utils as test_utils
    
            for i, (r, w) in enumerate(clients):
            response = await r.readline()
            self.assertEqual(response, 'LOWER-{}\n'.format(i).encode())
            w.close()
            await r.close()
    
    Larry
--JfISa01'''
        env = {
            'REQUEST_METHOD': 'POST',
            'CONTENT_TYPE': 'multipart/form-data; boundary={}'.format(BOUNDARY),
            'CONTENT_LENGTH': str(len(POSTDATA))}
        fp = BytesIO(POSTDATA.encode('latin-1'))
        fs = cgi.FieldStorage(fp, environ=env, encoding='latin-1')
        self.assertEqual(len(fs.list), 1)
        self.assertEqual(fs.list[0].name, 'submit-name')
        self.assertEqual(fs.list[0].value, 'Larry')
    
        def test_xmlcharrefvalues(self):
        # enhance coverage of:
        # Python/codecs.c::PyCodec_XMLCharRefReplaceErrors()
        # and inline implementations
        v = (1, 5, 10, 50, 100, 500, 1000, 5000, 10000, 50000, 100000,
             500000, 1000000)
        s = ''.join([chr(x) for x in v])
        codecs.register_error('test.xmlcharrefreplace', codecs.xmlcharrefreplace_errors)
        for enc in ('ascii', 'iso-8859-15'):
            for err in ('xmlcharrefreplace', 'test.xmlcharrefreplace'):
                s.encode(enc, err)
    
        with tf.variable_scope(name, reuse=reuse):
        alpha = get_w(alpha_shape, w_initializer=alpha_init, name='alpha')
        # o = relu(x) + 0.5 * tf.multiply(alpha, x - tf.abs(x))  # TFLearn
        o = leaky_relu(x, alpha)  # TensorLayer / <Deep Learning>
    
    
def get_wb(shape,
           w_initializer=truncated_normal,
           b_initializer=zeros,
           w_regularizer=l2_regularizer,
           b_regularizer=None,  # 一般不对偏置做权重惩罚，可能会导致欠拟合
           name=None):
    ''''''
    name = '' if name is None else name + '_'
    W = tf.get_variable(name + 'W', shape=shape,
                        dtype=tf_float, initializer=w_initializer, regularizer=w_regularizer)
    b = tf.get_variable(name + 'b', shape=shape[-1:],
                        dtype=tf_float, initializer=b_initializer, regularizer=b_regularizer)
    return W, b
    
    
def permute(x, perm):
    '''
    Examples:
        x.shape == [128, 32, 1]
        x = permute(x, [0, 2, 1])
        x.shape == [128, 1, 32]
    
    
    
    
class GzipHTTPTest(AsyncHTTPTestCase, TestMixin):
    def get_app(self):
        return Application(self.get_handlers(), gzip=True, **self.get_app_kwargs())
    
    # These benchmarks are delicate.  They hit various fast-paths in the gen
# machinery in order to stay synchronous so we don't need an IOLoop.
# This removes noise from the results, but it's easy to change things
# in a way that completely invalidates the results.
    
        def initialize(self) -> None:
        self.io_loop = IOLoop.current()
        self.channel = pycares.Channel(sock_state_cb=self._sock_state_cb)
        self.fds = {}  # type: Dict[int, int]
    
    
class GoogleOAuth2AuthorizeHandler(RequestHandler):
    def get(self):
        # issue a fake auth code and redirect to redirect_uri
        code = 'fake-authorization-code'
        self.redirect(url_concat(self.get_argument('redirect_uri'), dict(code=code)))
    
            Keyword Arguments:
        :param str spinner_name: A spinner type e.g. 'dots' or 'bouncingBar' (default: {'bouncingBar'})
        :param str start_text: Text to start off the spinner with (default: {None})
        :param dict handler_map: Handler map for signals to be handled gracefully (default: {None})
        :param bool nospin: If true, use the dummy spinner (default: {False})
        :param bool write_to_stdout: Writes to stdout if true, otherwise writes to stderr (default: True)
        '''
    
            self._last_char[0] = byte_str[-1]
    
    GB2312_ST = (
    MachineState.ERROR,MachineState.START,MachineState.START,MachineState.START,MachineState.START,MachineState.START,     3,MachineState.ERROR,#00-07
    MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ITS_ME,MachineState.ITS_ME,#08-0f
    MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ERROR,MachineState.ERROR,MachineState.START,#10-17
         4,MachineState.ERROR,MachineState.START,MachineState.START,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,#18-1f
    MachineState.ERROR,MachineState.ERROR,     5,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ITS_ME,MachineState.ERROR,#20-27
    MachineState.ERROR,MachineState.ERROR,MachineState.START,MachineState.START,MachineState.START,MachineState.START,MachineState.START,MachineState.START #28-2f
)
    
    from .charsetprober import CharSetProber
from .enums import CharacterCategory, ProbingState, SequenceLikelihood