
        
                asset_types = []
        subtitles = {}
        formats = []
        last_e = None
        for item in items_data.findall('.//item'):
            asset_type = xpath_text(item, 'assetType')
            if not asset_type or asset_type in asset_types or 'HLS_FPS' in asset_type or 'DASH_CENC' in asset_type:
                continue
            asset_types.append(asset_type)
            query = {
                'mbr': 'true',
                'assetTypes': asset_type,
            }
            if asset_type.startswith('HLS') or asset_type in ('OnceURL', 'StreamPack'):
                query['formats'] = 'MPEG4,M3U'
            elif asset_type in ('RTMP', 'WIFI', '3G'):
                query['formats'] = 'MPEG4,FLV'
            try:
                tp_formats, tp_subtitles = self._extract_theplatform_smil(
                    update_url_query(tp_release_url, query), content_id,
                    'Downloading %s SMIL data' % asset_type)
            except ExtractorError as e:
                last_e = e
                continue
            formats.extend(tp_formats)
            subtitles = self._merge_subtitles(subtitles, tp_subtitles)
        if last_e and not formats:
            raise last_e
        self._sort_formats(formats)
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
        def set_crawler(self, crawler):
        assert not hasattr(self, '_crawler'), 'crawler already set'
        self._crawler = crawler
    
            spidercls = DefaultSpider
        spider_loader = self.crawler_process.spider_loader
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        else:
            spidercls = spidercls_for_request(spider_loader, request, spidercls)
        self.crawler_process.crawl(spidercls, start_requests=lambda: [request])
        self.crawler_process.start()

    
        def _has_ajax_crawlable_variant(self, response):
        '''
        Return True if a page without hash fragment could be 'AJAX crawlable'
        according to https://developers.google.com/webmasters/ajax-crawling/docs/getting-started.
        '''
        body = response.text[:self.lookup_bytes]
        return _has_ajaxcrawlable_meta(body)
    
    See documentation in docs/topics/downloader-middleware.rst
'''
    
    
class Scientist(AbstractExpert):
    @property
    def is_eager_to_contribute(self):
        return random.randint(0, 1)
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
    '''
http://code.activestate.com/recipes/413838-memento-closure/
    
    *TL;DR
Implements state as a derived class of the state pattern interface.
Implements state transitions by invoking methods from the pattern's superclass.
'''
    
        def price_after_discount(self):
        if self.discount_strategy:
            discount = self.discount_strategy(self)
        else:
            discount = 0
        return self.price - discount
    
    *Where is the pattern used practically?
Sharing state is useful in applications like managing database connections:
https://github.com/onetwopunch/pythonDbTemplate/blob/master/database.py