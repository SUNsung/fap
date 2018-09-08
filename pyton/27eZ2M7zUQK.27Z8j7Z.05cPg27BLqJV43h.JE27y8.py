
        
            def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
            parser.add_option_group(group)
    
        def parse(self, response):
        for link in self.link_extractor.extract_links(response):
            yield scrapy.Request(link.url, callback=self.parse)

    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
        filename = args[0]
        if not os.path.exists(filename):
            raise UsageError('File not found: %s\n' % filename)
        try:
            module = _import_file(filename)
        except (ImportError, ValueError) as e:
            raise UsageError('Unable to load %r: %s\n' % (filename, e))
        spclasses = list(iter_spider_classes(module))
        if not spclasses:
            raise UsageError('No spider found in file: %s\n' % filename)
        spidercls = spclasses.pop()
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
    
    
    # Predefined token types
EOR_TOKEN_TYPE = 1
    
    class MismatchedTokenException(RecognitionException):
    '''@brief A mismatched char or Token or tree node.'''
    
    def __init__(self, expecting, input):
        RecognitionException.__init__(self, input)
        self.expecting = expecting
        
    
        # The antlr_version attribute has been introduced in 3.1. If it is not
    # overwritten in the generated recognizer, we assume a default of 3.0.1.
    antlr_version = (3, 0, 1, 0)
    antlr_version_str = '3.0.1'
    
            txt = self.text
        if txt is not None:
            txt = txt.replace('\n','\\\\n')
            txt = txt.replace('\r','\\\\r')
            txt = txt.replace('\t','\\\\t')
        else:
            txt = '<no text>'