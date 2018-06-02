
        
            def check_division(self, x, y):
        eq = self.assertEqual
        with self.subTest(x=x, y=y):
            q, r = divmod(x, y)
            q2, r2 = x//y, x%y
            pab, pba = x*y, y*x
            eq(pab, pba, 'multiplication does not commute')
            eq(q, q2, 'divmod returns different quotient than /')
            eq(r, r2, 'divmod returns different mod than %')
            eq(x, q*y + r, 'x != q*y + r after divmod')
            if y > 0:
                self.assertTrue(0 <= r < y, 'bad mod from divmod')
            else:
                self.assertTrue(y < r <= 0, 'bad mod from divmod')
    
            Otherwise leave dialog open for user to correct entry or cancel.
        '''
        entry = self.entry_ok()
        if entry is not None:
            self.result = entry
            self.destroy()
        else:
            # [Ok] moves focus.  (<Return> does not.)  Move it back.
            self.entry.focus_set()
    
        Use this function to calculate the variance from the entire population.
    To estimate the variance from a sample, the ``variance`` function is
    usually a better choice.
    
        def lock(self):
        '''Lock the mailbox.'''
        if not self._locked:
            self._file = open(os.path.join(self._path, '.mh_sequences'), 'rb+')
            _lock_file(self._file)
            self._locked = True
    
        def test_oldargs0_0_ext(self):
        {}.keys(*())
    
    3. Install an instance with custom dispatch method:
    
        *************************************************************************
    
        def test_cwd(self):
        p = self.cls.cwd()
        self._test_cwd(p)
    
    T_CV2 = typing.ClassVar[int]
T_CV3 = typing.ClassVar
    
    @dataclasses.dataclass
class IV:
    T_IV4 = dataclasses.InitVar
    iv0: dataclasses.InitVar[int]
    iv1: dataclasses.InitVar
    iv2: T_IV2
    iv3: T_IV3
    not_iv4: T_IV4  # When using string annotations, this field is not recognized as an InitVar.

    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
            Returns the underlying `.IOStream` object and stops all further
        HTTP processing.  May only be called during
        `.HTTPMessageDelegate.headers_received`.  Intended for implementing
        protocols like websockets that tunnel over an HTTP handshake.
        '''
        self._clear_callbacks()
        stream = self.stream
        self.stream = None
        if not self._finish_future.done():
            future_set_result_unless_cancelled(self._finish_future, None)
        return stream
    
    from tornado.auth import (
    AuthError, OpenIdMixin, OAuthMixin, OAuth2Mixin,
    GoogleOAuth2Mixin, FacebookGraphMixin, TwitterMixin,
)
from tornado.concurrent import Future
from tornado.escape import json_decode
from tornado import gen
from tornado.httputil import url_concat
from tornado.log import gen_log
from tornado.testing import AsyncHTTPTestCase, ExpectLog
from tornado.test.util import ignore_deprecation
from tornado.web import RequestHandler, Application, asynchronous, HTTPError
    
        def start_tree(self, tree, filename):
        self.found_future_import = False