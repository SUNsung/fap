
        
            class Meta:
        abstract = True
        verbose_name = _('session')
        verbose_name_plural = _('sessions')
    
    from scrapy.spiders import Spider
from scrapy.http import Request
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        def _print_headers(self, headers, prefix):
        for key, values in headers.items():
            for value in values:
                self._print_bytes(prefix + b' ' + key + b': ' + value)
    
        spider = None
    items = {}
    requests = {}
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
        def post_process(self, output):
        for x in output:
            if isinstance(x, (BaseItem, dict)):
                for arg in self.args:
                    if not arg in x:
                        raise ContractFail(''%s' field is missing' % arg)

    
        class _v20_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, http_request, *args, **kwargs):
            http_request.authorize(connection=self)
            return http_request.headers
    
        LOG_EMERG     = 0       #  system is unusable
    LOG_ALERT     = 1       #  action must be taken immediately
    LOG_CRIT      = 2       #  critical conditions
    LOG_ERR       = 3       #  error conditions
    LOG_WARNING   = 4       #  warning conditions
    LOG_NOTICE    = 5       #  normal but significant condition
    LOG_INFO      = 6       #  informational
    LOG_DEBUG     = 7       #  debug-level messages
    
        def compare_files(self, file1, file2):
        with open(file1) as fp:
            lines1 = fp.readlines()
        with open(file2) as fp:
            lines2 = fp.readlines()
        self.assertEqual(lines1, lines2)
    
        return p, p[:0]
    
        def testMultiStreamOrdering(self):
        # Test the ordering of streams when reading a multi-stream archive.
        data1 = b'foo' * 1000
        data2 = b'bar' * 1000
        with BZ2File(self.filename, 'w') as bz2f:
            bz2f.write(data1)
        with BZ2File(self.filename, 'a') as bz2f:
            bz2f.write(data2)
        with BZ2File(self.filename) as bz2f:
            self.assertEqual(bz2f.read(), data1 + data2)
    
            #
        # Testing timeouts
        #
    
    
def _test():
    ''''''
    file_path = r'./data.txt'
    
    没有任何优化，只是展示一下什么是“倒排索引”
'''
    
    
def crelu(x, axis=-1):
    '''Concatenated ReLU
    '''
    return tf.nn.crelu(x, axis=axis)
    
        return o
    
    l2_regularizer = L1L2Regularizer(l2=0.01)
    
        complete_apps = ['sentry']
    symmetrical = True

    
        def backwards(self, orm):
        # Removing unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.delete_unique('sentry_commitauthor', ['organization_id', 'external_id'])