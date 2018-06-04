
        
        from jinja2 import Markup
from werkzeug.http import http_date, parse_date
    
    
def test_tag_interface():
    t = JSONTag(None)
    pytest.raises(NotImplementedError, t.check, None)
    pytest.raises(NotImplementedError, t.to_json, None)
    pytest.raises(NotImplementedError, t.to_python, None)
    
        def implements_to_string(cls):
        cls.__unicode__ = cls.__str__
        cls.__str__ = lambda x: x.__unicode__().encode('utf-8')
        return cls
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
    
def test_uninstalled_module_paths(modules_tmpdir, purge_module):
    app = modules_tmpdir.join('config_module_app.py').write(
        'import os\n'
        'import flask\n'
        'here = os.path.abspath(os.path.dirname(__file__))\n'
        'app = flask.Flask(__name__)\n'
    )
    purge_module('config_module_app')
    
    
if __name__ == '__main__':
    HitCounts.run()

    
        def remove_from_tail(self):
        pass
    
            add_accept_handler(listener, accept_callback)
        self.client_stream = IOStream(socket.socket())
        self.addCleanup(self.client_stream.close)
        yield [self.client_stream.connect(('127.0.0.1', port)),
               event.wait()]
        self.io_loop.remove_handler(listener)
        listener.close()
    
            yield q.put(2)
        put = q.put(3)
        self.assertFalse(put.done())
        self.assertEqual(1, (yield q.get()))
        yield put
        self.assertTrue(q.full())
    
            valid_ipv4_list = {'X-Forwarded-For': '127.0.0.1, 4.4.4.4'}
        self.assertEqual(
            self.fetch_json('/', headers=valid_ipv4_list)['remote_ip'],
            '4.4.4.4')
    
        @gen_test
    def test_run_with_stack_context(self):
        @gen.coroutine
        def f1():
            self.assertEqual(self.active_contexts, ['c1'])
            yield run_with_stack_context(
                StackContext(functools.partial(self.context, 'c2')),
                f2)
            self.assertEqual(self.active_contexts, ['c1'])
    
            namespace = exec_test(globals(), locals(), '''
        class TestServer(TCPServer):
            async def handle_stream(self, stream, address):
                stream.write(b'data')
                stream.close()
        ''')