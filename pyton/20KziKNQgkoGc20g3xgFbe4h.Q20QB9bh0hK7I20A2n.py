
        
            def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
            return requests
    
    
class DownloadHandlers(object):
    
            cookiejarkey = request.meta.get('cookiejar')
        jar = self.jars[cookiejarkey]
        cookies = self._get_request_cookies(jar, request)
        for cookie in cookies:
            jar.set_cookie_if_ok(cookie, request)
    
        def _is_bzip2(self, response):
        try:
            body = bz2.decompress(response.body)
        except IOError:
            return
    
        def __init__(self, headers):
        self._headers = headers
    
        def __init__(self, timeout=180):
        self._timeout = timeout
    
        def process_request(self, request, spider):
        auth = getattr(self, 'auth', None)
        if auth and b'Authorization' not in request.headers:
            request.headers[b'Authorization'] = auth
