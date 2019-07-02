
        
            def __delitem__(self, key):
        del self._store[key.lower()]
    
    # Syntax sugar.
_ver = sys.version_info
    
    usage:
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
            help='List available templates')
        parser.add_option('-e', '--edit', dest='edit', action='store_true',
            help='Edit spider after creating it')
        parser.add_option('-d', '--dump', dest='dump', metavar='TEMPLATE',
            help='Dump template to standard output')
        parser.add_option('-t', '--template', dest='template', default='basic',
            help='Uses a custom template.')
        parser.add_option('--force', dest='force', action='store_true',
            help='If the spider already exists, overwrite it with the template')
    
    
    @implementer(IPolicyForHTTPS)
    class BrowserLikeContextFactory(ScrapyClientContextFactory):
        '''
        Twisted-recommended context factory for web clients.
    
        def __init__(self, headers):
        self._headers = headers
    
        long_description = README,
    
        if '_text' in dictified['flashvars'][0]:
        video_dict['flashvars'] = dictified['flashvars'][0]['_text'].strip()
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
    >>> class Subclass(custom4.Custom): pass
...
>>> s = Subclass()
>>> s.cycle = [s]
>>> s.cycle.append(s.cycle)
>>> x = object()
>>> s.x = x
>>> del s
>>> sys.getrefcount(x)
3
>>> ignore = gc.collect()
>>> sys.getrefcount(x)
2