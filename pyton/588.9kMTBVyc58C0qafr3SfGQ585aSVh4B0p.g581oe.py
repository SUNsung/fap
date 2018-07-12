
        
        # This view is called from FlatpageFallbackMiddleware.process_response
# when a 404 is raised, which often means CsrfViewMiddleware.process_view
# has not been called even if CsrfViewMiddleware is installed. So we need
# to use @csrf_protect, in case the template needs {% csrf_token %}.
# However, we can't just wrap this view; if no matching flatpage exists,
# or a redirect is required for authentication, the 404 needs to be returned
# without any CSRF checks. Therefore, we only
# CSRF protect the internal implementation.
    
        def set_crawler(self, crawler):
        assert not hasattr(self, '_crawler'), 'crawler already set'
        self._crawler = crawler
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
        def _get_handler(self, scheme):
        '''Lazy-load the downloadhandler for a scheme
        only on the first request for that scheme.
        '''
        if scheme in self._handlers:
            return self._handlers[scheme]
        if scheme in self._notconfigured:
            return None
        if scheme not in self._schemes:
            self._notconfigured[scheme] = 'no handler available for that scheme'
            return None
    
    
class CookiesMiddleware(object):
    '''This middleware enables working with sites that need cookies'''
    
        def process_request(self, request, spider):
        if self.user_agent:
            request.headers.setdefault(b'User-Agent', self.user_agent)

    
            if self.close_on.get('errorcount'):
            crawler.signals.connect(self.error_count, signal=signals.spider_error)
        if self.close_on.get('pagecount'):
            crawler.signals.connect(self.page_count, signal=signals.response_received)
        if self.close_on.get('timeout'):
            crawler.signals.connect(self.spider_opened, signal=signals.spider_opened)
        if self.close_on.get('itemcount'):
            crawler.signals.connect(self.item_scraped, signal=signals.item_scraped)
        crawler.signals.connect(self.spider_closed, signal=signals.spider_closed)