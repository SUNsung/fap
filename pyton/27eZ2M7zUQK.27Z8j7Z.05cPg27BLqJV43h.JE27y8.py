
        
        
def check_alphabetical(lines):
    '''
    checks if all entries per section are in alphabetical order based in entry title
    '''
    sections = {}
    section_line_num = {}
    for line_num, line in enumerate(lines):
        if line.startswith(anchor):
            category = line.split(anchor)[1].strip()
            sections[category] = []
            section_line_num[category] = line_num
            continue
        if not line.startswith('|') or line.startswith('|---'):
            continue
        title = [x.strip() for x in line.split('|')[1:-1]][0].upper()
        sections[category].append(title)
    
        base = 'src/sentry/locale'
    for locale in os.listdir(base):
        fn = os.path.join(base, locale, 'LC_MESSAGES', 'django.po')
        if not os.path.isfile(fn):
            continue
    
    from tornado.options import define, options
    
        .. versionchanged:: 5.0:
       Unified ``tornado.gen.TimeoutError`` and
       ``tornado.ioloop.TimeoutError`` as ``tornado.util.TimeoutError``.
       Both former names remain as aliases.
    '''
    
    
def wrap_web_tests_application():
    result = {}
    for cls in web_test.wsgi_safe_tests:
        def class_factory():
            class WSGIApplicationWrappedTest(cls):  # type: ignore
                def setUp(self):
                    self.warning_catcher = ignore_deprecation()
                    self.warning_catcher.__enter__()
                    super(WSGIApplicationWrappedTest, self).setUp()
    
    import twisted.internet.abstract  # type: ignore
from twisted.internet.defer import Deferred  # type: ignore
from twisted.internet.posixbase import PosixReactorBase  # type: ignore
from twisted.internet.interfaces import IReactorFDSet, IDelayedCall, IReactorTime, IReadDescriptor, IWriteDescriptor  # type: ignore # noqa: E501
from twisted.python import failure, log  # type: ignore
from twisted.internet import error  # type: ignore
import twisted.names.cache  # type: ignore
import twisted.names.client  # type: ignore
import twisted.names.hosts  # type: ignore
import twisted.names.resolve  # type: ignore
    
        def _release(self):
        if self.release_callback is not None:
            release_callback = self.release_callback
            self.release_callback = None
            release_callback()
    
        return exc
    
        def test_remove_without_add(self):
        # remove_handler should not throw an exception if called on an fd
        # was never added.
        sock, port = bind_unused_port()
        try:
            self.io_loop.remove_handler(sock.fileno())
        finally:
            sock.close()
    
    
class AsyncTestCaseTest(AsyncTestCase):
    def test_exception_in_callback(self):
        with ignore_deprecation():
            self.io_loop.add_callback(lambda: 1 / 0)
            try:
                self.wait()
                self.fail('did not get expected exception')
            except ZeroDivisionError:
                pass