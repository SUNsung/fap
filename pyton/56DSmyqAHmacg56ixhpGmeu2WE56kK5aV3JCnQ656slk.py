
        
        
class Downloader(object):
    
        def download(self, download_func, request, spider):
        @defer.inlineCallbacks
        def process_request(request):
            for method in self.methods['process_request']:
                response = yield method(request=request, spider=spider)
                assert response is None or isinstance(response, (Response, Request)), \
                        'Middleware %s.process_request must return None, Response or Request, got %s' % \
                        (six.get_method_self(method).__class__.__name__, response.__class__.__name__)
                if response:
                    defer.returnValue(response)
            defer.returnValue((yield download_func(request=request,spider=spider)))
    
            if 'ajax_crawlable' in request.meta:  # prevent loops
            return response
    
    try:
    from cStringIO import StringIO as BytesIO
except ImportError:
    from io import BytesIO
    
    class NotConfigured(Exception):
    '''Indicates a missing configuration situation'''
    pass