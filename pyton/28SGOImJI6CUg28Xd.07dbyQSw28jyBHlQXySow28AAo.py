
        
        
def is_valid_mime(mime):
    return mime and MIME_RE.match(mime)
    
    
def write_stream(stream, outfile, flush):
    '''Write the output stream.'''
    try:
        # Writing bytes so we use the buffer interface (Python 3).
        buf = outfile.buffer
    except AttributeError:
        buf = outfile
    
    from httpie import ExitStatus
from utils import http, HTTP_OK
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return requests.auth.HTTPDigestAuth(username, password)

    
    
class PluginManager(object):
    
    A tree.TreeAdaptor is used by the parser to create tree.Tree objects for the
input Token objects.
    
                            #print 'no viable alt'
                        self.noViableAlt(s, input)
                        return 0
    
    from .theplatform import theplatform_download_by_pid
    
        def __init__(self, pin_json):
        img_file = pin_json['file']
        self.id = str(pin_json['pin_id'])
        self.url = urlparse.urljoin(self.host, img_file['key'])
        self.ext = img_file['type'].split('/')[-1]
    
        def find_handler(self, request, **kwargs):
        # type: (httputil.HTTPServerRequest, typing.Any)->httputil.HTTPMessageDelegate
        '''Must be implemented to return an appropriate instance of `~.httputil.HTTPMessageDelegate`
        that can serve the request.
        Routing implementations may pass additional kwargs to extend the routing logic.
    
            # Write a message that is allowed.
        msg = 'a' * 1024
        ws.write_message(msg)
        resp = yield ws.read_message()
        self.assertEqual(resp, msg)
    
        ``reuse_port`` option sets ``SO_REUSEPORT`` option for every socket
    in the list. If your platform doesn't support this option ValueError will
    be raised.
    '''
    if reuse_port and not hasattr(socket, 'SO_REUSEPORT'):
        raise ValueError('the platform doesn't support SO_REUSEPORT')
    
        class MainHandler(tornado.web.RequestHandler):
        def get(self):
            self.write('Hello, world')
    
        @gen_test
    def test_get_timeout_preempted(self):
        q = queues.Queue()
        get = q.get(timeout=timedelta(seconds=0.01))
        q.put(0)
        yield gen.sleep(0.02)
        self.assertEqual(0, (yield get))