
        
            def load(self):
        '''
        Load the data from the key itself instead of fetching from some
        external data store. Opposite of _get_session_key(), raise BadSignature
        if signature fails.
        '''
        try:
            return signing.loads(
                self.session_key,
                serializer=self.serializer,
                # This doesn't handle non-default expiry dates, see #19201
                max_age=settings.SESSION_COOKIE_AGE,
                salt='django.contrib.sessions.backends.signed_cookies',
            )
        except Exception:
            # BadSignature, ValueError, or unpickling exceptions. If any of
            # these happen, reset the session.
            self.create()
        return {}
    
    
default_app_config = 'django.contrib.sitemaps.apps.SiteMapsConfig'

    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
            for spidername in args or spider_loader.list():
            spidercls = spider_loader.load(spidername)
            spidercls.start_requests = lambda s: conman.from_spider(s, result)
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        name = 'scrapes'
    
    from scrapy import twisted_version
    
        def _build_response(self, result, request, protocol):
        self.result = result
        respcls = responsetypes.from_args(url=request.url)
        protocol.close()
        body = protocol.filename or protocol.body.read()
        headers = {'local filename': protocol.filename or '', 'size': protocol.size}
        return respcls(url=request.url, status=200, body=to_bytes(body), headers=headers)
    
        strings = []
    with open(filepath, 'r') as f:
    
        def test_decode_good(self):
        self.assertEqual('x', self.field.decode('x'))
    
    
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
            self.jobj_to = {
            'contact': contact,
            'agreement': agreement,
            'key': key,
        }
        self.jobj_from = self.jobj_to.copy()
        self.jobj_from['key'] = key.to_json()
    
        def test_basic_ifdefine(self):
        self.assertEqual(len(self.parser.find_dir('VAR_DIRECTIVE')), 2)
        self.assertEqual(len(self.parser.find_dir('INVALID_VAR_DIRECTIVE')), 0)
    
    
class SelectVhostMultiTest(unittest.TestCase):
    '''Tests for certbot_apache.display_ops.select_vhost_multiple.'''
    
    import mock
    
        def test_repr(self):
        self.assertEqual(repr(self.addr2), 'certbot_apache.obj.Addr(('127.0.0.1', '443'))')
    
            self.assertEqual(mock_setup_cert.call_count, 2)
    
    [1] http://www.yummly.com/recipe/Roasted-Asparagus-Epicurious-203718
    
        for filename in os.listdir(directory):
        path = os.path.join(directory, filename)
        if not os.path.isfile(path):
            continue
        # Guess the content type based on the file's extension.  Encoding
        # will be ignored, although we should check for simple things like
        # gzip'd or compressed files.
        ctype, encoding = mimetypes.guess_type(path)
        if ctype is None or encoding is not None:
            # No guess could be made, or the file is encoded (compressed), so
            # use a generic bag-of-bits type.
            ctype = 'application/octet-stream'
        maintype, subtype = ctype.split('/', 1)
        with open(path, 'rb') as fp:
            msg.add_attachment(fp.read(),
                               maintype=maintype,
                               subtype=subtype,
                               filename=filename)
    # Now send or store the message
    if args.output:
        with open(args.output, 'wb') as fp:
            fp.write(msg.as_bytes(policy=SMTP))
    else:
        with smtplib.SMTP('localhost') as s:
            s.send_message(msg)
    
        print('-' * 20)
    
            print('Ordered results using pool.map() --- will block till complete:')
        for x in pool.map(calculatestar, TASKS):
            print('\t', x)
        print()
    
    con = sqlite3.connect(':memory:')
con.isolation_level = None
cur = con.cursor()
    
    if os.path.exists(DB_FILE):
    os.remove(DB_FILE)