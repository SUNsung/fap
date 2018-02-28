
        
        
def side_effect(old_cmd, command):
    with tarfile.TarFile(_tar_file(old_cmd.script_parts)[0]) as archive:
        for file in archive.getnames():
            try:
                os.remove(file)
            except OSError:
                # does not try to remove directories as we cannot know if they
                # already existed before
                pass

    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#html_use_opensearch = ''
    
    
@app.before_request
def before_request():
    g.user = None
    if 'user_id' in session:
        g.user = query_db('select * from user where user_id = ?',
                          [session['user_id']], one=True)
    
        styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
    This module provides the capabilities for the Requests hooks system.
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
        @pytest.mark.parametrize(
        'mode, warnings_num', (
            ('r', 1),
            ('rb', 0),
        ))
    def test_file(self, tmpdir, mode, warnings_num, recwarn):
        file_obj = tmpdir.join('test.txt')
        file_obj.write('Test')
        with file_obj.open(mode) as fd:
            assert super_len(fd) == 4
        assert len(recwarn) == warnings_num
    
        Or as a context manager::
    
        mask_inputs = (np.zeros(input_shapes[0][:-1]), np.ones(input_shapes[1][:-1]))
    expected_mask_output = np.concatenate(mask_inputs, axis=-1)
    mask_input_placeholders = [K.placeholder(shape=input_shape[:-1]) for input_shape in input_shapes]
    mask_output = model.layers[-1]._output_mask(mask_input_placeholders)
    assert np.all(K.function(mask_input_placeholders, [mask_output])(mask_inputs)[0] == expected_mask_output)
    
    
@keras_test
def test_vector_regression():
    '''
    Perform float data prediction (regression) using 2 layer MLP
    with tanh and sigmoid activations.
    '''
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         output_shape=(num_classes,),
                                                         classification=False)
    
    from flask import Flask, redirect
from flask_appbuilder import AppBuilder, IndexView, SQLA
from flask_appbuilder.baseviews import expose
from flask_migrate import Migrate
from flask_wtf.csrf import CSRFProtect
from werkzeug.contrib.fixers import ProxyFix
    
        export_fields = (
        'datasource_id', 'column_name', 'is_active', 'type', 'groupby',
        'count_distinct', 'sum', 'avg', 'max', 'min', 'filterable',
        'description', 'dimension_spec_json', 'verbose_name',
    )
    export_parent = 'datasource'
    
    
class SqlMetricInlineView(CompactCRUDMixin, SupersetModelView):  # noqa
    datamodel = SQLAInterface(models.SqlMetric)
    
                    if delegate is not None:
                    return delegate
    
    from tornado.http1connection import HTTP1Connection
from tornado.httputil import HTTPMessageDelegate
from tornado.iostream import IOStream
from tornado.locks import Event
from tornado.netutil import add_accept_handler
from tornado.testing import AsyncTestCase, bind_unused_port, gen_test
    
        .. versionchanged:: 5.0
       The ``io_loop`` argument (deprecated since version 4.1) has been removed.
    '''
    def initialize(self):
        self.io_loop = IOLoop.current()
        self.channel = pycares.Channel(sock_state_cb=self._sock_state_cb)
        self.fds = {}
    
            # Make sure the tornado module under test is available to the test
        # application
        pythonpath = os.getcwd()
        if 'PYTHONPATH' in os.environ:
            pythonpath += os.pathsep + os.environ['PYTHONPATH']
    
    
class ExceptionBenchmark(Benchmark):
    def make_context(self):
        return stack_context.ExceptionStackContext(self.__handle_exception)
    
    
class MainHandler(BaseHandler, tornado.auth.FacebookGraphMixin):
    @tornado.web.authenticated
    @tornado.web.asynchronous
    def get(self):
        self.facebook_request('/me/home', self._on_stream,
                              access_token=self.current_user['access_token'])
    
    
def updatefig(*args):
    global update
    if update:
        time.sleep(1)
        pull_screenshot()
        im.set_array(update_data())
        update = False
    return im,
    
    
def on_click(event):
    global update
    global ix, iy
    global click_count
    global cor
    
    
def open_accordant_config():
    '''
    调用配置文件
    '''
    screen_size = _get_screen_size()
    config_file = '{path}/config/{screen_size}/config.json'.format(
        path=sys.path[0],
        screen_size=screen_size
    )
    
    # Magic Number，不设置可能无法正常执行，请根据具体截图从上到下按需设置，设置保存在 config 文件夹中
under_game_score_y = config['under_game_score_y']
press_coefficient = config['press_coefficient']  # 长按的时间系数，请自己根据实际情况调节
piece_base_height_1_2 = config['piece_base_height_1_2']  # 二分之一的棋子底座高度，可能要调节
piece_body_width = config['piece_body_width']  # 棋子的宽度，比截图中量到的稍微大一点比较安全，可能要调节
    
        pixels_Widh=[]
    end_w=0
    for i in range(1,w):
        if col_pix[0,i-1]<=0 and col_pix[0,i]>=1:
            pixels_Widh.append(i-1)
        if col_pix[0,i]>=1:
            end_w=i
    pixels_Widh.append(end_w+1)
    return start_h,end_h,pixels_Widh
    
    
def set_button_position(im):
    '''
    将 swipe 设置为 `再来一局` 按钮的位置
    '''
    global swipe_x1, swipe_y1, swipe_x2, swipe_y2
    w, h = im.size
    left = int(w / 2)
    top = int(1584 * (h / 1920.0))
    left = int(random.uniform(left - 200, left + 200))
    top = int(random.uniform(top - 200, top + 200))  # 随机防 ban
    after_top = int(random.uniform(top - 200, top + 200))
    after_left = int(random.uniform(left - 200, left + 200))
    swipe_x1, swipe_y1, swipe_x2, swipe_y2 = left, top, after_left, after_top