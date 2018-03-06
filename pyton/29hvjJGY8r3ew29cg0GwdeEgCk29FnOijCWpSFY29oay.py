
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or dict()
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
    Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
            def generate():
            # Special case for urllib3.
            if hasattr(self.raw, 'stream'):
                try:
                    for chunk in self.raw.stream(chunk_size, decode_content=True):
                        yield chunk
                except ProtocolError as e:
                    raise ChunkedEncodingError(e)
                except DecodeError as e:
                    raise ContentDecodingError(e)
                except ReadTimeoutError as e:
                    raise ConnectionError(e)
            else:
                # Standard file-like object.
                while True:
                    chunk = self.raw.read(chunk_size)
                    if not chunk:
                        break
                    yield chunk
    
    def _init():
    for code, titles in _codes.items():
        for title in titles:
            setattr(codes, title, code)
            if not title.startswith(('\\', '/')):
                setattr(codes, title.upper(), code)
    
    
def _re_unescape_replacement(match):
    # type: (Match[str]) -> str
    group = match.group(1)
    if group[0] in _alphanum:
        raise ValueError('cannot unescape '\\\\%s'' % group[0])
    return group
    
        @gen_test
    def test_http10_no_content_length(self):
        # Regression test for a bug in which can_keep_alive would crash
        # for an HTTP/1.0 (not 1.1) response with no content-length.
        conn = HTTP1Connection(self.client_stream, True)
        self.server_stream.write(b'HTTP/1.0 200 Not Modified\r\n\r\nhello')
        self.server_stream.close()
    
    
class QueuePutTest(AsyncTestCase):
    @gen_test
    def test_blocking_put(self):
        q = queues.Queue()
        q.put(0)
        self.assertEqual(0, q.get_nowait())
    
        c-ares fails to resolve some names when ``family`` is ``AF_UNSPEC``,
    so it is only recommended for use in ``AF_INET`` (i.e. IPv4).  This is
    the default for ``tornado.simple_httpclient``, but other libraries
    may default to ``AF_UNSPEC``.
    
    
class Waker(interface.Waker):
    '''Create an OS independent asynchronous pipe.
    
    from tornado.escape import utf8
from tornado.httpclient import HTTPRequest
from tornado.locks import Event
from tornado.stack_context import ExceptionStackContext
from tornado.testing import AsyncHTTPTestCase, gen_test
from tornado.test import httpclient_test
from tornado.test.util import unittest
from tornado.web import Application, RequestHandler
    
            # This fires before the wait times out.
        self.io_loop.call_later(0.01, c.notify)
        wait = c.wait(timedelta(seconds=0.02))
        yield gen.sleep(0.03)
        yield wait  # No TimeoutError.
    
        @gen_test
    def test_stop_in_callback(self):
        # Issue #2069: calling server.stop() in a loop callback should not
        # raise EBADF when the loop handles other server connection
        # requests in the same loop iteration