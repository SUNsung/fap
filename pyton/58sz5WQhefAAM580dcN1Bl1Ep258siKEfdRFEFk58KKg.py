
        
        
root = Root()
factory = Site(root)
reactor.listenTCP(8880, factory)
reactor.run()

    
    if hasattr(ctypes, 'windll'):
    WSAStringToAddressA = ctypes.windll.ws2_32.WSAStringToAddressA
    WSAAddressToStringA = ctypes.windll.ws2_32.WSAAddressToStringA
else:
    def not_windows():
        raise SystemError(
            'Invalid platform. ctypes.windll must be available.'
        )
    WSAStringToAddressA = not_windows
    WSAAddressToStringA = not_windows
    
    A tree.RewriteCardinalityException is raised, when the parsers hits a
cardinality mismatch during AST construction. Although this is basically a
bug in your grammar, it can only be detected at runtime.
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
            i = self.p
        n = 1
        # find k good tokens looking backwards
        while n <= k:
            # skip off-channel tokens
            i = self.skipOffTokenChannelsReverse(i-1) # leave p on valid token
            n += 1
    
    Local worker thread:
- reads work ids from the 'Work Ids' queue and looks up the corresponding
  WorkItem from the 'Work Items' dict: if the work item has been cancelled then
  it is simply removed from the dict, otherwise it is repackaged as a
  _CallItem and put in the 'Call Q'. New _CallItems are put in the 'Call Q'
  until 'Call Q' is full. NOTE: the size of the 'Call Q' is kept small because
  calls placed in the 'Call Q' can no longer be cancelled with Future.cancel().
- reads _ResultItems from 'Result Q', updates the future stored in the
  'Work Items' dict and deletes the dict entry
    
        def shutdown(self, wait=True):
        with self._shutdown_lock:
            self._shutdown = True
            self._work_queue.put(None)
        if wait:
            for t in self._threads:
                t.join()
    shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def EndsWithPython_BadPaths_test():
  not_python_paths = [
    None,
    '',
    '/opt/local/bin/vim',
    r'C:\Program Files\Vim\vim74\gvim.exe',
    '/usr/bin/python2.5',
    '/home/user/.pyenv/shims/python3.2',
  ]
    
        @gen_test
    def asyncSetUp(self):
        listener, port = bind_unused_port()
        event = Event()
    
    
def wrap_web_tests_application():
    result = {}
    for cls in web_test.wsgi_safe_tests:
        def class_factory():
            class WSGIApplicationWrappedTest(cls):  # type: ignore
                def setUp(self):
                    self.warning_catcher = ignore_deprecation()
                    self.warning_catcher.__enter__()
                    super(WSGIApplicationWrappedTest, self).setUp()
    
        def test_204_invalid_content_length(self):
        # 204 status with non-zero content length is malformed
        with ExpectLog(gen_log, '.*Response with code 204 should not have body'):
            with ignore_deprecation():
                response = self.fetch('/?error=1')
            if not self.http1:
                self.skipTest('requires HTTP/1.x')
            if self.http_client.configured_class != SimpleAsyncHTTPClient:
                self.skipTest('curl client accepts invalid headers')
            self.assertEqual(response.code, 599)
    
    API_TYPES = ('api', 'json')
RSS_TYPES = ('rss', 'xml')
    
        def is_employee(self, user):
        if not user:
            return False
        return user.employee
    
    
class APIv1GoldController(OAuth2OnlyController):
    def _gift_using_creddits(self, recipient, months=1, thing_fullname=None,
            proxying_for=None):
        with creddits_lock(c.user):
            if not c.user.employee and c.user.gold_creddits < months:
                err = RedditError('INSUFFICIENT_CREDDITS')
                self.on_validation_error(err)
    
        @csrf_exempt
    @json_validate(
        VRatelimit(rate_ip=True, prefix='rate_register_'),
        signature=VSigned(),
        name=VUname(['user']),
        email=ValidEmail('email'),
        password=VPasswordChange(['passwd', 'passwd2']),
    )
    def POST_register(self, responder, name, email, password, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            name=name,
            email=email,
            password=password,
        ))
        return handle_register(**kwargs)
    
    class ButtonsController(RedditController):
    def get_wrapped_link(self, url, link = None, wrapper = None):
        try:
            links = []
            if link:
                links = [link]
            else:
                sr = None if isinstance(c.site, FakeSubreddit) else c.site
                try:
                    links = Link._by_url(url, sr)
                except NotFound:
                    pass
    
    from BeautifulSoup import BeautifulSoup, Tag