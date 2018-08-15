
        
                if self.settings.get('BOT_NAME') == module:
            print('Cannot create a spider with the same name as your project')
            return
    
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
    
        def scrape_response(self, scrape_func, response, request, spider):
        fname = lambda f:'%s.%s' % (
                six.get_method_self(f).__class__.__name__,
                six.get_method_function(f).__name__)
    
        def __init__(self, debug=False):
        self.jars = defaultdict(CookieJar)
        self.debug = debug
    
            namelist = zip_file.namelist()
        body = zip_file.read(namelist[0])
        respcls = responsetypes.from_args(filename=namelist[0], body=body)
        return response.replace(body=body, cls=respcls)
    
        def spider_opened(self, spider):
        self.user_agent = getattr(spider, 'user_agent', self.user_agent)
    
    
class RFPDupeFilter(BaseDupeFilter):
    '''Request Fingerprint duplicates filter'''
    
    # Internal