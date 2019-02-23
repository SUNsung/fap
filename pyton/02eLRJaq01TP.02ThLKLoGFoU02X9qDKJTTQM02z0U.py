
        
            # Set the random seed
    if hparams.random_seed > 0:
      tf.set_random_seed(hparams.random_seed)
    
        Args:
      train_name: The key into the datasets, to set the tf.case statement for
        the proper readin / readout matrices.
      data_bxtxd: The data tensor
      ext_input_bxtxi (optional): The external input tensor
      keep_prob: The drop out keep probability.
    
    # The combined recurrent and input weights of the encoder and
# controller cells are by default set to scale at ws/sqrt(#inputs),
# with ws=1.0.  You can change this scaling with this parameter.
flags.DEFINE_float('cell_weight_scale', CELL_WEIGHT_SCALE,
                     'Input scaling for input weights in generator.')
    
    # unroll RNN for T timesteps
outputs_t = []
states_t = []
    
    from synthetic_data_utils import generate_data, generate_rnn
from synthetic_data_utils import get_train_n_valid_inds
from synthetic_data_utils import nparray_and_transpose
from synthetic_data_utils import spikify_data, split_list_by_inds
import tensorflow as tf
from utils import write_datasets
    
      return (w, b)
    
        batch_size, num_timesteps = self.shape
    softmax = softmax.reshape((num_timesteps, batch_size, -1))
    softmax = np.transpose(softmax, [1, 0, 2])
    probs = np.array([[softmax[row, col, target_ids[row, col]]
                       for col in range(num_timesteps)]
                      for row in range(batch_size)])
    print(probs)
    return probs
    
    np.set_printoptions(precision=3)
np.set_printoptions(suppress=True)
    
      Args:
    attention_states: hidden states to attend over.
    attention_option: how to compute attention, either 'luong' or 'bahdanau'.
    num_units: hidden state dimension.
    reuse: whether to reuse variable scope.
    
    
class RedirectFallbackMiddleware(MiddlewareMixin):
    # Defined as class-level attributes to be subclassing-friendly.
    response_gone_class = HttpResponseGone
    response_redirect_class = HttpResponsePermanentRedirect
    
            if data is None:
            s = self._get_session_from_db()
            if s:
                data = self.decode(s.session_data)
                self._cache.set(self.cache_key, data, self.get_expiry_age(expiry=s.expire_date))
            else:
                data = {}
        return data
    
            # Broken links can't be fixed and
        # I am not sure what do with the local ones.
        if errortype.lower() in ['broken', 'local']:
            print('Not Fixed: ' + line)
        else:
            # If this is a new file
            if newfilename != _filename:
    
    from scrapy.spiders import Spider
from scrapy.http import Request
    
            if opts.pidfile:
            with open(opts.pidfile, 'w') as f:
                f.write(str(os.getpid()) + os.linesep)
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.utils.versions import scrapy_components_versions
    
    
    @implementer(IPolicyForHTTPS)
    class BrowserLikeContextFactory(ScrapyClientContextFactory):
        '''
        Twisted-recommended context factory for web clients.
    
        class _v20_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, http_request, *args, **kwargs):
            http_request.authorize(connection=self)
            return http_request.headers
    
        def _build_response(self, body, request):
        request.meta['download_latency'] = self.headers_time-self.start_time
        status = int(self.status)
        headers = Headers(self.response_headers)
        respcls = responsetypes.from_args(headers=headers, url=self._url)
        return respcls(url=self._url, status=status, headers=headers, body=body)
    
            nd = ndarray(list(range(12)), shape=[3, 4],
                     flags=ND_WRITABLE|ND_FORTRAN)
        for order in ['F', 'A']:
            m = get_contiguous(nd, PyBUF_WRITE, order)
            self.assertEqual(ndarray(m).tolist(), nd.tolist())
    
        '''
    inner = outer = 1
    for i in reversed(range(n.bit_length())):
        inner *= partial_product((n >> i + 1) + 1 | 1, (n >> i) + 1 | 1)
        outer *= inner
    return outer << (n - count_set_bits(n))
    
        def _Tuple(self, t):
        self.write('(')
        if len(t.elts) == 1:
            elt = t.elts[0]
            self.dispatch(elt)
            self.write(',')
        else:
            interleave(lambda: self.write(', '), self.dispatch, t.elts)
        self.write(')')
    
    # Non-mutual mappings.
    
        def test_cookie_second_line_commented_first_line(self):
        lines = (
            b'#print('\xc2\xa3')\n',
            b'# vim: set fileencoding=iso8859-15 :\n',
            b'print('\xe2\x82\xac')\n'
        )
        encoding, consumed_lines = detect_encoding(self.get_readline(lines))
        self.assertEqual(encoding, 'iso8859-15')
        expected = [b'#print('\xc2\xa3')\n', b'# vim: set fileencoding=iso8859-15 :\n']
        self.assertEqual(consumed_lines, expected)
    
            with self.subTest('GE when equal'):
            a = ComparatorNotImplemented(8)
            b = ComparatorNotImplemented(8)
            self.assertEqual(a, b)
            with self.assertRaises(TypeError):
                a >= b
    
        def __contains__(cls, member):
        if not isinstance(member, Enum):
            raise TypeError(
                'unsupported operand type(s) for 'in': '%s' and '%s'' % (
                    type(member).__qualname__, cls.__class__.__qualname__))
        return isinstance(member, cls) and member._name_ in cls._member_map_
    
        def test_programatic_function_string_with_start(self):
        Perm = Flag('Perm', 'R W X', start=8)
        lst = list(Perm)
        self.assertEqual(len(lst), len(Perm))
        self.assertEqual(len(Perm), 3, Perm)
        self.assertEqual(lst, [Perm.R, Perm.W, Perm.X])
        for i, n in enumerate('R W X'.split()):
            v = 8<<i
            e = Perm(v)
            self.assertEqual(e.value, v)
            self.assertEqual(type(e.value), int)
            self.assertEqual(e.name, n)
            self.assertIn(e, Perm)
            self.assertIs(type(e), Perm)
    
    
def _get_resource_reader(
        package: ModuleType) -> Optional[resources_abc.ResourceReader]:
    # Return the package's loader if it's a ResourceReader.  We can't use
    # a issubclass() check here because apparently abc.'s __subclasscheck__()
    # hook wants to create a weak reference to the object, but
    # zipimport.zipimporter does not support weak references, resulting in a
    # TypeError.  That seems terrible.
    spec = package.__spec__
    if hasattr(spec.loader, 'get_resource_reader'):
        return cast(resources_abc.ResourceReader,
                    spec.loader.get_resource_reader(spec.name))
    return None
    
    
class YourBorg(Borg):
    pass
    
        def build_size(self):
        self.size = 'Big'
    
    
class lazy_property(object):
    def __init__(self, function):
        self.function = function
        functools.update_wrapper(self, function)
    
        products = {
        'milk': {'price': 1.50, 'quantity': 10},
        'eggs': {'price': 0.20, 'quantity': 100},
        'cheese': {'price': 2.00, 'quantity': 10},
    }
    
    *References:
https://sourcemaking.com/design_patterns/facade
https://fkromer.github.io/python-pattern-references/design/#facade
http://python-3-patterns-idioms-test.readthedocs.io/en/latest/ChangeInterface.html#facade
    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)