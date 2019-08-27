
        
        
def make_setting_element(setting_data, app, fromdocname):
    refnode = make_refnode(app.builder, fromdocname,
                           todocname=setting_data['docname'],
                           targetid=setting_data['refid'],
                           child=nodes.Text(setting_data['setting_name']))
    p = nodes.paragraph()
    p += refnode
    
        def parse(self, response):
        pass

    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        def short_desc(self):
        return 'Fetch a URL using the Scrapy downloader'
    
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

    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
        class _v20_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, http_request, *args, **kwargs):
            http_request.authorize(connection=self)
            return http_request.headers
    
    from scrapy import signals
    
        def __init__(self):
        ca_certs = os.path.join(current_path, 'cacert.pem')
        openssl_context = SSLContext(
            logger, ca_certs=ca_certs,
            cipher_suites=['ALL', '!RC4-SHA', '!ECDHE-RSA-RC4-SHA', '!ECDHE-RSA-AES128-GCM-SHA256',
                           '!AES128-GCM-SHA256', '!ECDHE-RSA-AES128-SHA', '!AES128-SHA']
        )
        host_manager = HostManagerBase()
        connect_creator = ConnectCreator(logger, config, openssl_context, host_manager,
                                         debug=True)
        self.check_ip = CheckIp(logger, config, connect_creator)
    
    
    def getDescription(self):
        return 'n/a'
    
     	# The index of the character relative to the beginning of the
        # line 0..n-1
        self.charPositionInLine = 0
    
        def test_local_visibility(self):
        v = 'Local variable'
        expected = {0: 'Local variable', 1: 'Local variable',
                    2: 'Local variable', 3: 'Local variable',
                    4: 'Local variable', 5: 'Local variable',
                    6: 'Local variable', 7: 'Local variable',
                    8: 'Local variable', 9: 'Local variable'}
        actual = {k: v for k in range(10)}
        self.assertEqual(actual, expected)
        self.assertEqual(v, 'Local variable')
    
    def run_bandwidth_client(**kwargs):
    cmd_line = [sys.executable, '-E', os.path.abspath(__file__)]
    cmd_line.extend(['--bwclient', repr(kwargs)])
    return subprocess.Popen(cmd_line) #, stdin=subprocess.PIPE,
                            #stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    
    class BytesSubclass(bytes):
    pass
    
    class ExtensionTests(unittest.TestCase):
    def CheckScriptStringSql(self):
        con = sqlite.connect(':memory:')
        cur = con.cursor()
        cur.executescript('''
            -- bla bla
            /* a stupid comment */
            create table a(i);
            insert into a(i) values (5);
            ''')
        cur.execute('select i from a')
        res = cur.fetchone()[0]
        self.assertEqual(res, 5)
    
    __author__ = 'Brian Quinlan (brian@sweetapp.com)'
    
        The pattern may contain simple shell-style wildcards a la
    fnmatch. However, unlike fnmatch, filenames starting with a
    dot are special cases that are not matched by '*' and '?'
    patterns.
    
    This module provides generic, low- and high-level interfaces for
creating temporary files and directories.  All of the interfaces
provided by this module can be used without fear of race conditions
except for 'mktemp'.  'mktemp' is subject to race conditions and
should not be used; it is provided for backward compatibility only.
    
        good_nonce = jose.encode_b64jose(b'foo')
    wrong_nonce = u'F'
    # Following just makes sure wrong_nonce is wrong
    try:
        jose.b64decode(wrong_nonce)
    except (ValueError, TypeError):
        assert True
    else:
        assert False  # pragma: no cover
    
        def test_without_eab_arguments(self):
        with mock.patch('certbot.client.acme_client.BackwardsCompatibleClientV2') as mock_client:
            mock_client().external_account_required.side_effect = self._false_mock
            with mock.patch('certbot.eff.handle_subscription'):
                target = 'certbot.client.messages.ExternalAccountBinding.from_data'
                with mock.patch(target) as mock_eab_from_data:
                    self.config.eab_kid = None
                    self.config.eab_hmac_key = None
                    self._call()
    
    .. caution::
   You should protect this TSIG key material as it can be used to potentially
   add, update, or delete any record in the target DNS server. Users who can
   read this file can use these credentials to issue arbitrary API calls on
   your behalf. Users who can cause Certbot to run using these credentials can
   complete a ``dns-01`` challenge to acquire new certificates or revoke
   existing certificates for associated domains, even if those domains aren't
   being managed by this server.
    
                # Authoritative Answer bit should be set
            if (rcode == dns.rcode.NOERROR and response.get_rrset(response.answer,
                domain, dns.rdataclass.IN, dns.rdatatype.SOA) and response.flags & dns.flags.AA):
                logger.debug('Received authoritative SOA response for %s', domain_name)
                return True