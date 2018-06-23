
        
            # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
    def _python_exit():
    global _shutdown
    _shutdown = True
    items = list(_threads_queues.items())
    for t, q in items:
        q.put(None)
    for t, q in items:
        t.join()
    
    def download_urls_sequential(urls, timeout=60):
    url_to_content = {}
    for url in urls:
        try:
            url_to_content[url] = load_url(url, timeout=timeout)
        except:
            pass
    return url_to_content
    
    # -- General configuration -----------------------------------------------------
    
    
def ExtractKeywordsFromGroup_Basic_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
        def test_exception_logging_future(self):
        '''The IOLoop examines exceptions from Futures and logs them.'''
        with NullContext():
            @gen.coroutine
            def callback():
                self.io_loop.add_callback(self.stop)
                1 / 0
            self.io_loop.add_callback(callback)
            with ExpectLog(app_log, 'Exception in callback'):
                self.wait()