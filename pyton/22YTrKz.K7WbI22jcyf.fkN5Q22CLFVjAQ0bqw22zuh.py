
        
            default_settings = {
        'LOG_LEVEL': 'INFO',
        'LOGSTATS_INTERVAL': 1,
        'CLOSESPIDER_TIMEOUT': 10,
    }
    
    
def run_cmds(cmds):
    log = Log()
    cmd_pl = cmds.split('\n')
    outs = []
    for cmd in cmd_pl:
        if not cmd:
            continue
    
    
class sockaddr(ctypes.Structure):
    _fields_ = [('sa_family', ctypes.c_short),
                ('__pad1', ctypes.c_ushort),
                ('ipv4_addr', ctypes.c_byte * 4),
                ('ipv6_addr', ctypes.c_byte * 16),
                ('__pad2', ctypes.c_ulong)]
    
    
def fall_into_honeypot():
    xlog.warn('fall_into_honeypot.')
    global connect_allow_time
    connect_allow_time = time.time() + block_delay
    
    
from xlog import getLogger
xlog = getLogger('gae_proxy')
from config import config
    
                if isinstance(self.input, TokenStream):
                self.token = self.input.LT(1)
                self.line = self.token.line
                self.charPositionInLine = self.token.charPositionInLine
    
    '''
    
    class User(Base):
    '''Declarative class to do query in upgrade'''
    __tablename__ = 'ab_user'
    id = Column(Integer, primary_key=True)
    
    '''
    
    # revision identifiers, used by Alembic.
revision = '3c3ffe173e4f'
down_revision = 'ad82a75afd82'
    
    Revision ID: 4e6a06bad7a8
Revises: None
Create Date: 2015-09-21 17:30:38.442998
    
    '''
    
    # revision identifiers, used by Alembic.
revision = '7e3ddad2a00b'
down_revision = 'b46fa1b0b39e'
    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
    import socket
    
        @gen_test
    def test_get_with_putters(self):
        q = queues.Queue(1)
        q.put_nowait(0)
        put = q.put(1)
        self.assertEqual(0, (yield q.get()))
        self.assertIsNone((yield put))
    
    
class CaresResolver(Resolver):
    '''Name resolver based on the c-ares library.
    
        def consume(self):
        try:
            while True:
                result = self.reader.recv(1024)
                if not result:
                    break
        except (IOError, socket.error):
            pass
    
    
class DummyHandler(web.RequestHandler):
    @gen.coroutine
    def get(self):
        self.write('ok\n')
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(10, 20)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 30)
    
        def test_frozen_pool(self):
        with ObjectPool(self.sample_queue) as pool:
            self.assertEqual(pool, 'first')
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
        def test_bunch_launch(self):
        self.runner.runAll()
        output = self.out.getvalue().strip()
        self.assertEqual(output, str(self.average_result_tc1 + '\n\n' +
                         self.average_result_tc2 + '\n\n' +
                         self.average_result_tc3))

    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
        _static_method_choices = {'param_value_1': _static_method_1,
                              'param_value_2': _static_method_2}
    
        @abc.abstractmethod
    def _handle(self, request):
        raise NotImplementedError('Must provide implementation in subclass.')
    
    import random
import time
    
        print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    print(u'Setting Data 1 = 3')
    data1.data = 3
    print(u'Setting Data 2 = 5')
    data2.data = 5
    print(u'Detach HexViewer from data1 and data2.')
    data1.detach(view2)
    data2.detach(view2)
    print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15