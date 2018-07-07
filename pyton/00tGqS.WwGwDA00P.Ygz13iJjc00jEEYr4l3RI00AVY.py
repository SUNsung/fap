
        
            def _close_server_sock_ignore_errors(self):
        try:
            self.server_sock.close()
        except IOError:
            pass
    
            assert response.raw.closed
    
        See https://github.com/requests/requests/issues/1979.
    '''
    text_401 = (b'HTTP/1.1 401 UNAUTHORIZED\r\n'
                b'Content-Length: 0\r\n'
                b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                b', opaque='372825293d1c26955496c80ed6426e9e', '
                b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
    # Syntax sugar.
_ver = sys.version_info
    
            # Don't do any URL preparation for non-HTTP schemes like `mailto`,
        # `data` etc to work around exceptions from `url_parse`, which
        # handles RFC 3986 only.
        if ':' in url and not url.lower().startswith('http'):
            self.url = url
            return
    
    response = get_json_from_api('%s/domains/%s/applications' %
                             (broker_url, response[0]['id']), username, password)
    
        to remove replace in this file ismount( -> os.path.ismount( and remove this
    function'''
    
    
def sort_groups(groups):
    return sorted(groups, key=lambda g: (g.depth, g.priority, g.name))
    
    try:
    from __main__ import display
except ImportError:
    from ansible.utils.display import Display
    display = Display()
    
            if 'latency' in request.args:
            latency = float(request.args['latency'][0])
            reactor.callLater(latency, self._finish, request)
            return NOT_DONE_YET
    
                # create and prepare request
            args.remove('self')
            if set(args).issubset(set(kwargs)):
                request = Request(**kwargs)
    
        def download_delay(self):
        if self.randomize_delay:
            return random.uniform(0.5 * self.delay, 1.5 * self.delay)
        return self.delay
    
    
def _parse(url):
    ''' Return tuple of (scheme, netloc, host, port, path),
    all in bytes except for port which is int.
    Assume url is from Request.url, which was passed via safe_url_string
    and is ascii-only.
    '''
    url = url.strip()
    parsed = urlparse(url)
    return _parsed_url_args(parsed)
    
    
# XXX: move it to w3lib?
_ajax_crawlable_re = re.compile(six.u(r'<meta\s+name=['\']fragment['\']\s+content=['\']!['\']/?>'))
def _has_ajaxcrawlable_meta(text):
    '''
    >>> _has_ajaxcrawlable_meta('<html><head><meta name='fragment'  content='!'/></head><body></body></html>')
    True
    >>> _has_ajaxcrawlable_meta('<html><head><meta name='fragment' content='!'></head></html>')
    True
    >>> _has_ajaxcrawlable_meta('<html><head><!--<meta name='fragment'  content='!'/>--></head><body></body></html>')
    False
    >>> _has_ajaxcrawlable_meta('<html></html>')
    False
    '''
    
    See documentation in docs/topics/downloader-middleware.rst
'''
    
    import socket
import ctypes
import os
    
    
    def specialStateTransition(self, s, input):
        return -1
    
                    else:
                    self.c = self.input.LA(1)
    
    A Parser needs a TokenStream as input (which in turn is usually fed by a
Lexer):
    
            self.expecting = expecting
    
    def download_pdf(link, location, name):
    try:
        response = requests.get(link)
        with open(os.path.join(location, name), 'wb') as f:
        	f.write(response.content)
        	f.close()
    except HTTPError:
        print('>>> Error 404: cannot be downloaded!\n') 
        raise   
    except socket.timeout:
        print(' '.join(('can't download', link, 'due to connection timeout!')) )
        raise