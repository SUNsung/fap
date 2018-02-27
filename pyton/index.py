
        
        
def get_json_from_api(url, username, password):
    headers = {'Accept': 'application/json; version=1.5'}
    response = open_url(url, headers=headers, url_username=username, url_password=password)
    return json.loads(response.read())['data']
    
        try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
    # Backwards compat only
try:
    from hashlib import md5 as _md5
except ImportError:
    try:
        from md5 import md5 as _md5
    except ImportError:
        # Assume we're running in FIPS mode here
        _md5 = None
    
        def on_open_shell(self):
        try:
            self._exec_cli_command('screen-length 0 temporary')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
        model.train_on_batch(x_train[:32], y_train[:32],
                         sample_weight=sample_weight[:32])
    model.test_on_batch(x_train[:32], y_train[:32],
                        sample_weight=sample_weight[:32])
    score = model.evaluate(x_test[test_ids, :], y_test[test_ids, :], verbose=0)
    assert(score < standard_score_sequential)
    
        # by setting the `trainable` argument, in Model
    x = Input(shape=(1,))
    layer = Dense(2)
    y = layer(x)
    model = Model(x, y)
    assert model.trainable_weights == layer.trainable_weights
    layer.trainable = False
    assert model.trainable_weights == []
    
    
def create_ngram_set(input_list, ngram_value=2):
    '''
    Extract a set of n-grams from a list of integers.
    
        layer_test(local.LocallyConnected1D,
               kwargs={'filters': filters,
                       'kernel_size': filter_length,
                       'padding': padding,
                       'kernel_regularizer': 'l2',
                       'bias_regularizer': 'l2',
                       'activity_regularizer': 'l2',
                       'strides': strides},
               input_shape=(num_samples, num_steps, input_dim))
    
    
def handle_module(mod):
    for name, mem in inspect.getmembers(mod):
        if inspect.isclass(mem):
            handle_class(name, mem)
        elif inspect.isfunction(mem):
            handle_function(name, mem)
        elif 'keras' in name and inspect.ismodule(mem):
            # Only test keras' modules
            handle_module(mem)
    
    
@pytest.mark.parametrize('tensor_shape', [(100, 100), (1, 2, 3, 4)], ids=['FC', 'CONV'])
def test_identity(tensor_shape):
    if len(tensor_shape) > 2:
        with pytest.raises(ValueError):
            _runner(initializers.identity(), tensor_shape,
                    target_mean=1. / tensor_shape[0], target_max=1.)
    else:
        _runner(initializers.identity(), tensor_shape,
                target_mean=1. / tensor_shape[0], target_max=1.)
    
    
def test_time_distributed_softmax():
    x = K.placeholder(shape=(1, 1, 5))
    f = K.function([x], [activations.softmax(x)])
    test_values = get_standard_values()
    test_values = np.reshape(test_values, (1, 1, np.size(test_values)))
    f([test_values])[0]
    
                # if the state is not reset, output should be different
            assert(out1.max() != out2.max())
    
        intermediate = Sequential()
    intermediate.add(Merge([left, right], mode='sum'))
    intermediate.add(Dense(num_hidden))
    intermediate.add(Activation('relu'))
    
        def is_face_card(self):
        '''Jack = 11, Queen = 12, King = 13'''
        return True if 10 < self._value <= 13 else False
    
        def get(self, query)
        '''Get the stored query result from the cache.
        
        Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
        defaults = {
        'compare_lag': '10',
        'compare_suffix': 'o10Y',
        'limit': '25',
        'granularity': 'year',
        'groupby': [],
        'metric': 'sum__SP_POP_TOTL',
        'metrics': ['sum__SP_POP_TOTL'],
        'row_limit': config.get('ROW_LIMIT'),
        'since': '2014-01-01',
        'until': '2014-01-02',
        'where': '',
        'markup_type': 'markdown',
        'country_fieldtype': 'cca3',
        'secondary_metric': 'sum__SP_POP_TOTL',
        'entity': 'country_code',
        'show_bubbles': True,
    }
    
        # placeholder for a relationship to a derivative of BaseColumn
    columns = []
    # placeholder for a relationship to a derivative of BaseMetric
    metrics = []
    
        @classmethod
    def get_all_datasources(cls, session):
        datasources = []
        for source_type in ConnectorRegistry.sources:
            datasources.extend(
                session.query(ConnectorRegistry.sources[source_type]).all())
        return datasources
    
        def get_aggregations(self, all_metrics):
        aggregations = OrderedDict()
        for m in self.metrics:
            if m.metric_name in all_metrics:
                aggregations[m.metric_name] = m.json_obj
        return aggregations
    
    from ..common import *
from hashlib import md5
from urllib.parse import urlparse
import re
    
    
def huaban_download(url, output_dir='.', **kwargs):
    if re.match(r'http://huaban\.com/boards/\d+/', url):
        huaban_download_board(url, output_dir, **kwargs)
    else:
        print('Only board (画板) pages are supported currently')
        print('ex: http://huaban.com/boards/12345678/')
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
        type_, ext, size = url_info(stream_url)
    print_info(site_info, title, type_, size)
    if not info_only:
        download_url_ffmpeg(url=stream_url, title=title, ext= 'mp4', output_dir=output_dir)
    
            # Exercise all the code paths not involving Gb-sized ints.
        # ... divisions involving zero
        self.check_truediv(123, 0)
        self.check_truediv(-456, 0)
        self.check_truediv(0, 3)
        self.check_truediv(0, -3)
        self.check_truediv(0, 0)
        # ... overflow or underflow by large margin
        self.check_truediv(671 * 12345 * 2**DBL_MAX_EXP, 12345)
        self.check_truediv(12345, 345678 * 2**(DBL_MANT_DIG - DBL_MIN_EXP))
        # ... a much larger or smaller than b
        self.check_truediv(12345*2**100, 98765)
        self.check_truediv(12345*2**30, 98765*7**81)
        # ... a / b near a boundary: one of 1, 2**DBL_MANT_DIG, 2**DBL_MIN_EXP,
        #                 2**DBL_MAX_EXP, 2**(DBL_MIN_EXP-DBL_MANT_DIG)
        bases = (0, DBL_MANT_DIG, DBL_MIN_EXP,
                 DBL_MAX_EXP, DBL_MIN_EXP - DBL_MANT_DIG)
        for base in bases:
            for exp in range(base - 15, base + 15):
                self.check_truediv(75312*2**max(exp, 0), 69187*2**max(-exp, 0))
                self.check_truediv(69187*2**max(exp, 0), 75312*2**max(-exp, 0))
    
    Coverage: 99%. The only thing not covered is inconsequential --
testing skipping of suite when self.needwrapbutton is false.
'''
import unittest
from test.support import requires
from tkinter import Tk, Frame  ##, BooleanVar, StringVar
from idlelib import searchengine as se
from idlelib import searchbase as sdb
from idlelib.idle_test.mock_idle import Func
## from idlelib.idle_test.mock_tk import Var
    
        def test_quoted_meta(self):
        # Try cookie with quoted meta-data
        C = cookies.SimpleCookie()
        C.load('Customer='WILE_E_COYOTE'; Version='1'; Path='/acme'')
        self.assertEqual(C['Customer'].value, 'WILE_E_COYOTE')
        self.assertEqual(C['Customer']['version'], '1')
        self.assertEqual(C['Customer']['path'], '/acme')
    
        def skip(self):
        '''Skip the rest of the chunk.
        If you are not interested in the contents of the chunk,
        this method should be called so that the file points to
        the start of the next chunk.
        '''
    
        def _explain_to(self, message):
        '''Copy Babyl-specific state to message insofar as possible.'''
        if isinstance(message, MaildirMessage):
            labels = set(self.get_labels())
            if 'unseen' in labels:
                message.set_subdir('cur')
            else:
                message.set_subdir('cur')
                message.add_flag('S')
            if 'forwarded' in labels or 'resent' in labels:
                message.add_flag('P')
            if 'answered' in labels:
                message.add_flag('R')
            if 'deleted' in labels:
                message.add_flag('T')
        elif isinstance(message, _mboxMMDFMessage):
            labels = set(self.get_labels())
            if 'unseen' not in labels:
                message.add_flag('RO')
            else:
                message.add_flag('O')
            if 'deleted' in labels:
                message.add_flag('D')
            if 'answered' in labels:
                message.add_flag('A')
        elif isinstance(message, MHMessage):
            labels = set(self.get_labels())
            if 'unseen' in labels:
                message.add_sequence('unseen')
            if 'answered' in labels:
                message.add_sequence('replied')
        elif isinstance(message, BabylMessage):
            message.set_visible(self.get_visible())
            for label in self.get_labels():
                message.add_label(label)
        elif isinstance(message, Message):
            pass
        else:
            raise TypeError('Cannot convert to specified type: %s' %
                            type(message))
    
        Handles all HTTP GET requests and interprets them as requests
    for documentation.
    '''
    
        def proxyval(self, visited):
        # Guard against infinite loops:
        if self.as_address() in visited:
            return ProxyAlreadyVisited('(...)')
        visited.add(self.as_address())
        arg_proxy = self.pyop_field('args').proxyval(visited)
        return ProxyException(self.safe_tp_name(),
                              arg_proxy)
    
        def test_hash(self):
        for x in range(-30, 30):
            self.assertEqual(hash(x), hash(complex(x, 0)))
            x /= 3.0    # now check against floating point
            self.assertEqual(hash(x), hash(complex(x, 0.)))
    
            wndclass = WNDCLASS()
        wndclass.lpfnWndProc = WNDPROC(wndproc)
    
    reload(sys)  
sys.setdefaultencoding('utf8')
    
        # Create and fill-in the class template
    numfields = len(field_names)
    argtxt = repr(field_names).replace(''', '')[1:-1]   # tuple repr without parens or quotes
    reprtxt = ', '.join('%s=%%r' % name for name in field_names)
    dicttxt = ', '.join('%r: t[%d]' % (name, pos) for pos, name in enumerate(field_names))
    template = '''class %(typename)s(tuple):
        '%(typename)s(%(argtxt)s)' \n
        __slots__ = () \n
        _fields = %(field_names)r \n
        def __new__(_cls, %(argtxt)s):
            return _tuple.__new__(_cls, (%(argtxt)s)) \n
        @classmethod
        def _make(cls, iterable, new=tuple.__new__, len=len):
            'Make a new %(typename)s object from a sequence or iterable'
            result = new(cls, iterable)
            if len(result) != %(numfields)d:
                raise TypeError('Expected %(numfields)d arguments, got %%d' %% len(result))
            return result \n
        def __repr__(self):
            return '%(typename)s(%(reprtxt)s)' %% self \n
        def _asdict(t):
            'Return a new dict which maps field names to their values'
            return {%(dicttxt)s} \n
        def _replace(_self, **kwds):
            'Return a new %(typename)s object replacing specified fields with new values'
            result = _self._make(map(kwds.pop, %(field_names)r, _self))
            if kwds:
                raise ValueError('Got unexpected field names: %%r' %% kwds.keys())
            return result \n
        def __getnewargs__(self):
            return tuple(self) \n\n''' % locals()
    for i, name in enumerate(field_names):
        template += '        %s = _property(_itemgetter(%d))\n' % (name, i)
    
    PRIMES = [
    112272535095293,
    112582705942171,
    112272535095293,
    115280095190773,
    115797848077099,
    117450548693743,
    993960000099397]
    
        def test_map_exception(self):
        i = self.executor.map(divmod, [1, 1, 1, 1], [2, 3, 0, 5])
        self.assertEqual(next(i), (0, 1))
        self.assertEqual(next(i), (0, 1))
        self.assertRaises(ZeroDivisionError, next, i)
    
      return {
    'filepath': current_filepath,
    'line_num': line + 1,
    'column_num': column + 1,
    'working_dir': working_dir,
    'file_data': vimsupport.GetUnsavedAndSpecifiedBufferData( current_buffer,
                                                              current_filepath )
  }
    
    if __name__ == '__main__':
  Main()

    
    
  def Response( self ):
    return self._response
    
      opts = _JavaFilter( { 'regex' : '.*taco.*',
                        'level' : 'warning' } )
  f = _CreateFilterForTypes( opts, [ 'java' ] )
    
      Do NOT attach it to test generators but directly to the yielded tests.
    
    
def extract_line_info(reportline, filepath, tool):
    if tool == 'pep257' and reportline.startswith('Note: checks'):
        return None
    file_info, sep, violation = reportline.partition(': ')
    if not sep:
        return None
    file_info = file_info.split(':')
    if len(file_info) < 2:
        logging.warn('I don't understand this report line: %r', reportline)
        line_num = ''
    else:
        line_num = file_info[1]
    report_entry = {
        'file': filepath,
        'test_class': make_test_class(tool, filepath),
        'line': line_num,
        'violation': violation,
        'errtype': extract_errtype(violation, tool),
        'tool': tool,
    }
    return report_entry
    
    import r2.lib.helpers
from r2.config.paths import (
    get_r2_path,
    get_built_statics_path,
    get_raw_statics_path,
)
from r2.config.routing import make_map
from r2.lib.app_globals import Globals
from r2.lib.configparse import ConfigValue
    
    def get_api_subtype():
    if is_api() and c.render_style.startswith('api-'):
        return c.render_style[4:]
    
        has_bad_characters = re.compile('[\r\n]')
    sanitizer = re.compile('[\r\n]+[ \t]*')
    
    api('organiclisting',       OrganicListingJsonTemplate)
api('subreddittraffic', TrafficJsonTemplate)
api('takedownpane', TakedownJsonTemplate)
api('policyview', PolicyViewJsonTemplate)
    
        @csrf_exempt
    @json_validate(
        signature=VSigned(),
        user=VThrottledLogin(['user', 'passwd']),
    )
    def POST_login(self, responder, user, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            user=user,
        ))
        return handle_login(**kwargs)
    
        @require_oauth2_scope('account')
    @validate(
        VUser(),
        validated_prefs=PREFS_JSON_VALIDATOR,
    )
    @api_doc(api_section.account, json_model=PREFS_JSON_VALIDATOR,
             uri='/api/v1/me/prefs')
    def PATCH_prefs(self, validated_prefs):
        user_prefs = c.user.preferences()
        for short_name, new_value in validated_prefs.iteritems():
            pref_name = 'pref_' + short_name
            user_prefs[pref_name] = new_value
        vprefs.filter_prefs(user_prefs, c.user)
        vprefs.set_prefs(c.user, user_prefs)
        c.user._commit()
        return self.api_wrapper(PrefsJsonTemplate().data(c.user))
    
            The user's response to the CAPTCHA should be sent as `captcha`
        along with your request.
    
        POST_document = GET_document
    PUT_document = GET_document
    PATCH_document = GET_document
    DELETE_document = GET_document
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()
    
        # 优先获取执行文件目录的配置文件
    here = sys.path[0]
    for file in os.listdir(here):
        if re.match(r'(.+)\.json', file):
            file_name = os.path.join(here, file)
            with open(file_name, 'r') as f:
                print('Load config file from {}'.format(file_name))
                return json.load(f)
    
        # 从上顶点往下 +274 的位置开始向上找颜色与上顶点一样的点，为下顶点
    # 该方法对所有纯色平面和部分非纯色平面有效，对高尔夫草坪面、木纹桌面、
    # 药瓶和非菱形的碟机（好像是）会判断错误
    for k in range(i+274, i, -1):  # 274 取开局时最大的方块的上下顶点距离
        pixel = im_pixel[board_x, k]
        if abs(pixel[0] - last_pixel[0]) \
                + abs(pixel[1] - last_pixel[1]) \
                + abs(pixel[2] - last_pixel[2]) < 10:
            break
    board_y = int((i+k) / 2)