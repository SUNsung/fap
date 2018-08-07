
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
    from __future__ import division
    
    This example, inspired from Chen's publication [1], shows a comparison
of the estimated MSE of the LW and OAS methods, using Gaussian
distributed data.
    
    This dataset is made up of 1797 8x8 images. Each image,
like the one shown below, is of a hand-written digit.
In order to utilize an 8x8 figure like this, we'd have to
first transform it into a feature vector with length 64.
    
    from six.moves.urllib.parse import urlencode
    
        def syntax(self):
        return '[options] <spider>'
    
        def adjust_request_args(self, args):
        args['url'] = self.args[0]
        return args
    
        def _slot_gc(self, age=60):
        mintime = time() - age
        for key, slot in list(self.slots.items()):
            if not slot.active and slot.lastseen + slot.delay < mintime:
                self.slots.pop(key).close()

    
        def download_request(self, request, spider):
        scheme = urlparse_cached(request).scheme
        handler = self._get_handler(scheme)
        if not handler:
            raise NotSupported('Unsupported URL scheme '%s': %s' %
                               (scheme, self._notconfigured[scheme]))
        return handler.download_request(request, spider)
    
    See documentation in docs/topics/downloader-middleware.rst
'''
    
        @classmethod
    def from_crawler(cls, crawler):
        o = cls(crawler.settings.getfloat('DOWNLOAD_TIMEOUT'))
        crawler.signals.connect(o.spider_opened, signal=signals.spider_opened)
        return o
    
    from scrapy import signals
    
    class DontCloseSpider(Exception):
    '''Request the spider not to be closed yet'''
    pass
    
    from tornado.options import define, options
    
        def put(self, filename):
        filename = unquote(filename)
        mtype = self.request.headers.get('Content-Type')
        logging.info('PUT '%s' '%s' %d bytes', filename, mtype, self.bytes_read)
        self.write('OK')
    
    
if __name__ == '__main__':
    main()

    
        def _log(self):
        pass
    
    import logging
from tornado.curl_httpclient import CurlAsyncHTTPClient
from tornado.simple_httpclient import SimpleAsyncHTTPClient
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
    from timeit import Timer
    
    
# Using HTTP PUT, upload one raw file. This is preferred for large files since
# the server can stream the data instead of buffering it entirely in memory.
@gen.coroutine
def post(filenames):
    client = httpclient.AsyncHTTPClient()
    boundary = uuid4().hex
    headers = {'Content-Type': 'multipart/form-data; boundary=%s' % boundary}
    producer = partial(multipart_producer, boundary, filenames)
    response = yield client.fetch('http://localhost:8888/post',
                                  method='POST',
                                  headers=headers,
                                  body_producer=producer)