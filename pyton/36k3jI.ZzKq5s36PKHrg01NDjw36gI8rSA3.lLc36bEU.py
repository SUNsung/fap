
        
            # Then we call the sorting method
    sort_blocks()
    
        item = nodes.list_item()
    item += p
    return item
    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
        def __init__(self, request, timeout=180):
        self._url = urldefrag(request.url)[0]
        # converting to bytes to comply to Twisted interface
        self.url = to_bytes(self._url, encoding='ascii')
        self.method = to_bytes(request.method, encoding='ascii')
        self.body = request.body or None
        self.headers = Headers(request.headers)
        self.response_headers = None
        self.timeout = request.meta.get('download_timeout') or timeout
        self.start_time = time()
        self.deferred = defer.Deferred().addCallback(self._build_response, request)
    
        def report_not_exist(self, appid, ip):
        self.logger.debug('report_not_exist:%s %s', appid, ip)
        th = threading.Thread(target=self.process_appid_not_exist, args=(appid, ip))
        th.start()
    
    A Parser needs a TokenStream as input (which in turn is usually fed by a
Lexer):
    
        unexpectedType = property(getUnexpectedType)
    
    
            raise NotImplementedError
    
    
    def getLine(self):
        '''@brief Get the line number on which this token was matched
    
            # Changing field 'Environment.organization_id'
        db.alter_column(
            'sentry_environment', 'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
        )
    
                orm.Environment.objects.filter(id__in=from_env_ids).delete()
    
            # Deleting field 'ApiToken.scope_list'
        db.delete_column('sentry_apitoken', 'scope_list')
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding field 'UserOption.organization'
        db.add_column(
            'sentry_useroption',
            'organization',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.Organization'], null=True
            ),
            keep_default=False
        )