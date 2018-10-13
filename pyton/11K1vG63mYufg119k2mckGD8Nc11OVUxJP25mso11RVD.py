
        
        
class Vehicle(metaclass=ABCMeta):
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
    
class TooManyRedirects(RequestException):
    '''Too many redirects.'''
    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
    _proxy_combos += [(var.upper(), scheme) for var, scheme in _proxy_combos]
    
    
def options(url, **kwargs):
    r'''Sends an OPTIONS request.
    
    
def replace_settingslist_nodes(app, doctree, fromdocname):
    env = app.builder.env
    
    if __name__ == '__main__':
    try:
        execute()
    finally:
        # Twisted prints errors in DebugInfo.__del__, but PyPy does not run gc.collect()
        # on exit: http://doc.pypy.org/en/latest/cpython_differences.html?highlight=gc.collect#differences-related-to-garbage-collection-strategies
        garbage_collect()

    
        def syntax(self):
        '''
        Command syntax (preferably one-line). Do not include command name.
        '''
        return ''
    
        def long_desc(self):
        return 'Fetch a URL using the Scrapy downloader and print its content ' \
            'to stdout. You may want to use --nolog to disable logging'
    
        def _start_crawler_thread(self):
        t = Thread(target=self.crawler_process.start,
                   kwargs={'stop_after_crawl': False})
        t.daemon = True
        t.start()

    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
    
class ScrapesContract(Contract):
    ''' Contract to check presence of fields in scraped items
        @scrapes page_name page_body
    '''