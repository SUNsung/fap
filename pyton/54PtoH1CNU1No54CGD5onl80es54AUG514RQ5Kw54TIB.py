
        
        from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
    
    
        def handleEndHeaders(self):
        self.factory.gotHeaders(self.headers)
    
            ajax_crawl_request.meta['ajax_crawlable'] = True
        return ajax_crawl_request