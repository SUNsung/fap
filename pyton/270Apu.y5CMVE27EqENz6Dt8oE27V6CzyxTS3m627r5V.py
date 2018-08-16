
        
        
class Cache(object):
    
        def can_fit_in_spot(self, spot):
        return True
    
        def extract_year_month(self, timestamp):
        '''Return the year and month portions of the timestamp.'''
        ...
    
        def remove_link_to_crawl(self, url):
        '''Remove the given link from `links_to_crawl`.'''
        pass
    
        def __repr__(self):
        cls_name = self.__class__.__name__
        return '%s(concurrency=%r, delay=%0.2f, randomize_delay=%r)' % (
            cls_name, self.concurrency, self.delay, self.randomize_delay)
    
            self.factory.noPage(\
                defer.TimeoutError('Getting %s took longer than %s seconds.' % \
                (self.factory.url, self.factory.timeout)))
    
            # XXX: Google parses at least first 100k bytes; scrapy's redirect
        # middleware parses first 4k. 4k turns out to be insufficient
        # for this middleware, and parsing 100k could be slow.
        # We use something in between (32K) by default.
        self.lookup_bytes = settings.getint('AJAXCRAWL_MAXSIZE', 32768)
    
            respcls = responsetypes.from_args(body=body)
        return response.replace(body=body, cls=respcls)