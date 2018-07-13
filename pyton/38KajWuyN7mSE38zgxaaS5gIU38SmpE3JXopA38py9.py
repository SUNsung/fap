
        
                # Create Response to avoid https://github.com/kevin1024/pytest-httpbin/issues/33
        resp = requests.Response()
        resp.raw = io.BytesIO(b'the content')
        resp.request = prep
        setattr(resp.raw, 'release_conn', lambda *args: args)
    
        def redirect_resp_handler(sock):
        consume_socket_content(sock, timeout=0.5)
        location = u'//{0}:{1}/{2}'.format(host, port, path)
        sock.send(
            b'HTTP/1.1 301 Moved Permanently\r\n'
            b'Content-Length: 0\r\n'
            b'Location: ' + location.encode('utf8') + b'\r\n'
            b'\r\n'
        )
        redirect_request.append(consume_socket_content(sock, timeout=0.5))
        sock.send(b'HTTP/1.1 200 OK\r\n\r\n')
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary (will be form-encoded), bytes, or file-like object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    configparser = None
    
        def test_max_delay(self):
        strategy = _exponential_backoff(retries=7, delay=1, backoff=2, max_delay=60)
        result = list(strategy())
        self.assertEquals(result, [1, 2, 4, 8, 16, 32, 60])
    
            mp3 = match1(content, r'name='filename'\s*value='([^']+\.mp3)'')
        if mp3: mp3 = 'http://res.infoq.com/downloads/mp3downloads/%s' % mp3
    
    from ..common import *
import urllib.error
from json import loads
from time import time, sleep
    
    # A script that splits a Markdown file into plain text (for spell checking) and c++ files.