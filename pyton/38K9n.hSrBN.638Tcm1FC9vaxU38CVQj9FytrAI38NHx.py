
        
                    std = X_train.std(axis=0)
            mean = X_train.mean(axis=0)
            X_train = (X_train - mean) / std
            X_test = (X_test - mean) / std
    
        if f == os.path.basename(__file__):
        continue
    
    # Authors: Gael Varoquaux
# License: BSD 3 clause (C) INRIA 2014
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
        def long_desc(self):
        return 'Fetch a URL using the Scrapy downloader and print its content ' \
            'to stdout. You may want to use --nolog to disable logging'
    
            if not aws_access_key_id:
            aws_access_key_id = settings['AWS_ACCESS_KEY_ID']
        if not aws_secret_access_key:
            aws_secret_access_key = settings['AWS_SECRET_ACCESS_KEY']