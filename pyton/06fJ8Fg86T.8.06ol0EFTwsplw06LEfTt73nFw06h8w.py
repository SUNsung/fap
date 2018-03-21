
        
                    plt.text((i + 0.02) / len(algorithms), 0.98, alg,
                     transform=ax.transAxes,
                     ha='left',
                     va='top',
                     bbox=dict(facecolor='w', edgecolor='w', alpha=0.5))
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
    from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.linear_model import Perceptron
from sklearn.pipeline import Pipeline
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    import socket
import ctypes
import os
    
    
    def unpack(cls, string):
        '''@brief Unpack the runlength encoded table data.
    
            return '[@%d,%d:%d=%r,<%d>%s,%d:%d]' % (
            self.index,
            self.start, self.stop,
            txt,
            self.type, channelStr,
            self.line, self.charPositionInLine
            )
    
    
    
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
    
        For use on platforms that don't have os.pipe() (or where pipes cannot
    be passed to select()), but do have sockets.  This includes Windows
    and Jython.
    '''
    def __init__(self):
        from .auto import set_close_exec
        # Based on Zope select_trigger.py:
        # https://github.com/zopefoundation/Zope/blob/master/src/ZServer/medusa/thread/select_trigger.py
    
    
class AutoreloadTest(unittest.TestCase):
    def test_reload_module(self):
        # Create temporary test application
        path = mkdtemp()
        os.mkdir(os.path.join(path, 'testapp'))
        open(os.path.join(path, 'testapp/__init__.py'), 'w').close()
        with open(os.path.join(path, 'testapp/__main__.py'), 'w') as f:
            f.write(MAIN)
    
        def get_app(self):
        return Application([
            ('/digest', DigestAuthHandler),
            ('/custom_reason', CustomReasonHandler),
            ('/custom_fail_reason', CustomFailReasonHandler),
        ])
    
        @gen_test
    def test_wait_timeout_preempted(self):
        c = locks.Condition()
    
                server = TCPServer()
            server.listen(0, address='127.0.0.1')
            IOLoop.current().run_sync(lambda: None)
            print('012', end='')
        ''')
        out = self.run_subproc(code)
        self.assertEqual(''.join(sorted(out)), '012')