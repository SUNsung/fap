
        
                # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
    # Aliases for types that are spelled differently in different Python
# versions. bytes_type is deprecated and no longer used in Tornado
# itself but is left in case anyone outside Tornado is using it.
bytes_type = bytes
if PY3:
    unicode_type = str
    basestring_type = str
else:
    # The names unicode and basestring don't exist in py3 so silence flake8.
    unicode_type = unicode  # noqa
    basestring_type = basestring  # noqa
    
    
class WSGIContainerTest(AsyncHTTPTestCase):
    def wsgi_app(self, environ, start_response):
        status = '200 OK'
        response_headers = [('Content-Type', 'text/plain')]
        start_response(status, response_headers)
        return [b'Hello world!']
    
        def _sock_state_cb(self, fd, readable, writable):
        state = ((IOLoop.READ if readable else 0) |
                 (IOLoop.WRITE if writable else 0))
        if not state:
            self.io_loop.remove_handler(fd)
            del self.fds[fd]
        elif fd in self.fds:
            self.io_loop.update_handler(fd, state)
            self.fds[fd] = state
        else:
            self.io_loop.add_handler(fd, self._handle_events, state)
            self.fds[fd] = state
    
    
class EntryHandler(BaseHandler):
    def get(self, slug):
        entry = db.Query(Entry).filter('slug =', slug).get()
        if not entry:
            raise tornado.web.HTTPError(404)
        self.render('entry.html', entry=entry)
    
    
@gen.coroutine
def c2():
    pass
    
    
# Using HTTP POST, upload one or more files in a single multipart-form-encoded
# request.
@gen.coroutine
def multipart_producer(boundary, filenames, write):
    boundary_bytes = boundary.encode()
    
    Useful to test features that will eventually run on S3, or if you want to
run something locally that was once running on S3.
    
        # Do a little work. Alternately, could leave this script running and
    # poke at it with a browser.
    client = httpclient.AsyncHTTPClient()
    yield client.fetch('http://127.0.0.1:8888/dummy/')
    yield client.fetch('http://127.0.0.1:8888/dummyasync/', raise_error=False)