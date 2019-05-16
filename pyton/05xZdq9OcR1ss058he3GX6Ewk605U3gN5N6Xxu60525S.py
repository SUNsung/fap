
        
        
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

    
            def __init__(self, method=SSL.SSLv23_METHOD, *args, **kwargs):
            super(ScrapyClientContextFactory, self).__init__(*args, **kwargs)
            self._ssl_method = method
    
        def download_request(self, request, spider):
        p = urlparse_cached(request)
        scheme = 'https' if request.meta.get('is_secure') else 'http'
        bucket = p.hostname
        path = p.path + '?' + p.query if p.query else p.path
        url = '%s://%s.s3.amazonaws.com%s' % (scheme, bucket, path)
        if self.anon:
            request = request.replace(url=url)
        elif self._signer is not None:
            import botocore.awsrequest
            awsrequest = botocore.awsrequest.AWSRequest(
                method=request.method,
                url='%s://s3.amazonaws.com/%s%s' % (scheme, bucket, path),
                headers=request.headers.to_unicode_dict(),
                data=request.body)
            self._signer.add_auth(awsrequest)
            request = request.replace(
                url=url, headers=awsrequest.headers.items())
        else:
            signed_headers = self.conn.make_request(
                    method=request.method,
                    bucket=bucket,
                    key=unquote(p.path),
                    query_args=unquote(p.query),
                    headers=request.headers,
                    data=request.body)
            request = request.replace(url=url, headers=signed_headers)
        return self._download_http(request, spider)

    
        def __init__(self, settings):
        if not settings.getbool('AJAXCRAWL_ENABLED'):
            raise NotConfigured
    
        def request(self, uri, method='GET', body=None, headers={}):
        self.connection = http.client.HTTPConnection(self.HOST, self.PORT)
        self.connection.request(method, uri, body, headers)
        return self.connection.getresponse()
    
            loader = unittest.TestLoader()
        try:
            loader.loadTestsFromTestCase(NotATestCase)
        except TypeError:
            pass
        else:
            self.fail('Should raise TypeError')
    
        def test_multiplicative(self):
        # Multiplicative
        self.check_tokenize('x = 1//1*1/5*12%0x12@42', '''\
    NAME       'x'           (1, 0) (1, 1)
    OP         '='           (1, 2) (1, 3)
    NUMBER     '1'           (1, 4) (1, 5)
    OP         '//'          (1, 5) (1, 7)
    NUMBER     '1'           (1, 7) (1, 8)
    OP         '*'           (1, 8) (1, 9)
    NUMBER     '1'           (1, 9) (1, 10)
    OP         '/'           (1, 10) (1, 11)
    NUMBER     '5'           (1, 11) (1, 12)
    OP         '*'           (1, 12) (1, 13)
    NUMBER     '12'          (1, 13) (1, 15)
    OP         '%'           (1, 15) (1, 16)
    NUMBER     '0x12'        (1, 16) (1, 20)
    OP         '@'           (1, 20) (1, 21)
    NUMBER     '42'          (1, 21) (1, 23)
    ''')
    
    def handleSlideshowTitle(title):
    print('<title>%s</title>' % getText(title.childNodes))
    
            print('One element')
        assert_equal(insertion_sort.sort([5]), [5])
    
        def extract_min(self):
        if not self.array:
            return None
        minimum = sys.maxsize
        for index, node in enumerate(self.array):
            if node.key < minimum:
                minimum = node.key
                minimum_index = index
        return self.array.pop(minimum_index)
    
                    explanation = []
                # store lines again until --- or another H3 is encountered
                while not (next_line.startswith('---') or
                           next_line.startswith('### ')):
                    explanation.append(next_line)
                    next_line = lines.next()
    
                  'Environment :: Console',
              'Environment :: MacOS X',
              'Environment :: Win32 (MS Windows)',
    
        return ret

    
            class TestSerializer(serializers.Serializer):
            allow_null = NestedSerializer(many=True, allow_null=True)
            not_allow_null = NestedSerializer(many=True)
            allow_empty = NestedSerializer(many=True, allow_empty=True)
            not_allow_empty = NestedSerializer(many=True, allow_empty=False)
    
        for field_name, field in fields.items():
        ret += '\n' + indent_str + field_name + ' = '
        if hasattr(field, 'fields'):
            ret += serializer_repr(field, indent + 1)
        elif hasattr(field, 'child'):
            ret += list_repr(field, indent + 1)
        elif hasattr(field, 'child_relation'):
            ret += field_repr(field.child_relation, force_many=field.child_relation)
        else:
            ret += field_repr(field)
    
    from django.conf import settings
from django.db import models
from django.utils.translation import gettext_lazy as _