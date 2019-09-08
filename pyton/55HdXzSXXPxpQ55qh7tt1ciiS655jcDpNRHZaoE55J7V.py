
        
            requires_project = True
    default_settings = {'LOG_ENABLED': False}
    
    
class Command(ScrapyCommand):
    
    
class AjaxCrawlMiddleware(object):
    '''
    Handle 'AJAX crawlable' pages marked as crawlable via meta tag.
    For more info see https://developers.google.com/webmasters/ajax-crawling/docs/getting-started.
    '''
    
        def process_response(self, request, response, spider):
        self.stats.inc_value('downloader/response_count', spider=spider)
        self.stats.inc_value('downloader/response_status_count/%s' % response.status, spider=spider)
        reslen = len(response_httprepr(response))
        self.stats.inc_value('downloader/response_bytes', reslen, spider=spider)
        return response
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
        >>> try:
    ...    num_obj.do_stuff()
    ... except Exception:
    ...    print('-> doing stuff failed!')
    ...    import sys
    ...    import traceback
    ...    traceback.print_exc(file=sys.stdout)
    -> doing stuff failed!
    Traceback (most recent call last):
    ...
    TypeError: ...str...int...
    
        # Detach HexViewer from data1 and data2
    >>> data1.detach(view2)
    >>> data2.detach(view2)
    
        def scan(self):
        '''Scan the dial to the next station'''
        self.pos += 1
        if self.pos == len(self.stations):
            self.pos = 0
        print(u'Scanning... Station is %s %s' % (self.stations[self.pos], self.name))
    
        if to_save:
        saver()
    
        def visit_B(self, node, *args, **kwargs):
        print('visit_B ' + node.__class__.__name__)
    
    *TL;DR
Delays the eval of an expr until its value is needed and avoids repeated evals.
'''
    
    
def main():
    try:
        import queue
    except ImportError:  # python 2.x compatibility
        import Queue as queue
    
    *TL;DR
Creates new object instances by cloning prototype.
'''
    
    *TL;DR
Decouples an abstraction from its implementation.
'''
    
                def _cov(x, y):
                return libwindow.ewmcov(
                    x,
                    y,
                    self.com,
                    int(self.adjust),
                    int(self.ignore_na),
                    int(self.min_periods),
                    1,
                )
    
        >>> df = pd.DataFrame(np.random.randn(10, 3), columns=['A', 'B', 'C'])
    >>> df
              A         B         C
    0 -2.385977 -0.102758  0.438822
    1 -1.004295  0.905829 -0.954544
    2  0.735167 -0.165272 -1.619346
    3 -0.702657 -1.340923 -0.706334
    4 -0.246845  0.211596 -0.901819
    5  2.463718  3.157577 -1.380906
    6 -1.142255  2.340594 -0.039875
    7  1.396598 -1.647453  1.677227
    8 -0.543425  1.761277 -0.220481
    9 -0.640505  0.289374 -1.550670
    
    DEFAULT_IDF = _get_module_path('idf.txt')
    
    seg_list = jieba.cut('他来到了网易杭研大厦')
print(', '.join(seg_list))
    
    print(','.join(tags))

    
    if opt.topK is None:
    topK = 10
else:
    topK = int(opt.topK)
    
    
'''