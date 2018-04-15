
        
            cmd = cmd.split()
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    
collect_ignore = [
    # deprecated or moved modules
    'scrapy/conf.py',
    'scrapy/stats.py',
    'scrapy/project.py',
    'scrapy/utils/decorator.py',
    'scrapy/statscol.py',
    'scrapy/squeue.py',
    'scrapy/log.py',
    'scrapy/dupefilter.py',
    'scrapy/command.py',
    'scrapy/linkextractor.py',
    'scrapy/spider.py',
    
        def render(self, request):
        now = time()
        delta = now - self.lasttime
    
        def set_crawler(self, crawler):
        assert not hasattr(self, '_crawler'), 'crawler already set'
        self._crawler = crawler
    
        def run(self, args, opts):
        with _BenchServer():
            self.crawler_process.crawl(_BenchSpider, total=100000)
            self.crawler_process.start()
    
            # start checks
        if opts.list:
            for spider, methods in sorted(contract_reqs.items()):
                if not methods and not opts.verbose:
                    continue
                print(spider)
                for method in sorted(methods):
                    print('  * %s' % method)
        else:
            start = time.time()
            self.crawler_process.start()
            stop = time.time()
    
        The name for each file chosen consists os the section id in the markdown document, a counter for the snippet inside the section.
    
        for filename in filenames:
        fd = codecs.open(filename, mode='r', encoding='utf-8')
        for line in fd.readlines():
            refs = re.findall(r'(?<=<a href=')[^']*', markdown.markdown(line))
            for ref in refs:
                if ref not in urls:
                    urls.append(ref)