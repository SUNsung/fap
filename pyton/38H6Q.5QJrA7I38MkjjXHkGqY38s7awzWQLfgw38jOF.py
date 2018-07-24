
        
        # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
                tested_methods = conman.tested_methods_from_spidercls(spidercls)
            if opts.list:
                for method in tested_methods:
                    contract_reqs[spidercls.name].append(method)
            elif tested_methods:
                self.crawler_process.crawl(spidercls)
    
                    # execute pre and post hooks in order
                for contract in reversed(contracts):
                    request = contract.add_pre_hook(request, results)
                for contract in contracts:
                    request = contract.add_post_hook(request, results)
    
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
    
        def __init__(self, timeout=180):
        self._timeout = timeout
    
        @classmethod
    def from_crawler(cls, crawler):
        o = cls(crawler.settings['USER_AGENT'])
        crawler.signals.connect(o.spider_opened, signal=signals.spider_opened)
        return o
    
        def log(self, request, spider):
        if self.debug:
            msg = 'Filtered duplicate request: %(request)s'
            self.logger.debug(msg, {'request': request}, extra={'spider': spider})
        elif self.logdupes:
            msg = ('Filtered duplicate request: %(request)s'
                   ' - no more duplicates will be shown'
                   ' (see DUPEFILTER_DEBUG to show all duplicates)')
            self.logger.debug(msg, {'request': request}, extra={'spider': spider})
            self.logdupes = False
    
    from scrapy import signals
from scrapy.exceptions import NotConfigured