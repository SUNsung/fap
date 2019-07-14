
        
        
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
        def short_desc(self):
        return 'Fetch a URL using the Scrapy downloader'
    
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

    
        text = html.remove_tags_with_content(text, ('script', 'noscript'))
    text = html.replace_entities(text)
    text = html.remove_comments(text)
    return _ajax_crawlable_re.search(text) is not None

    
        def test_repr(self):
        self.assertEqual('PollError(exhausted=%s, updated={sentinel.AR: '
                         'sentinel.AR2})' % repr(set()), repr(self.invalid))
    
    
class Signature(jose.Signature):
    '''ACME-specific Signature. Uses ACME-specific Header for customer fields.'''
    __slots__ = jose.Signature._orig_slots  # pylint: disable=no-member
    
            self.vhosts.append(
            obj.VirtualHost(
                'path', 'aug_path', set([obj.Addr.fromstring('*:80')]),
                False, False,
                'wildcard.com', set(['*.wildcard.com'])))
    
    ========================================  =====================================
``--dns-cloudflare-credentials``          Cloudflare credentials_ INI file.
                                          (Required)
``--dns-cloudflare-propagation-seconds``  The number of seconds to wait for DNS
                                          to propagate before asking the ACME
                                          server to verify the DNS record.
                                          (Default: 10)
========================================  =====================================
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = u'0'
# The full version, including alpha/beta/rc tags.
release = u'0'
    
    .. code-block:: bash
   :caption: To acquire a certificate for ``example.com``
    
    # The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
#
    
       certbot certonly \\
     --dns-digitalocean \\
     --dns-digitalocean-credentials ~/.secrets/certbot/digitalocean.ini \\
     -d example.com
    
        def test_publisher_shall_append_subscription_message_to_queue(cls):
        ''' msg_queue ~ Provider.notify(msg) ~ Publisher.publish(msg) '''
        expected_msg = 'expected msg'
        pro = Provider()
        pub = Publisher(pro)
        Subscriber('sub name', pro)
        cls.assertEqual(len(pro.msg_queue), 0)
        pub.publish(expected_msg)
        cls.assertEqual(len(pro.msg_queue), 1)
        cls.assertEqual(pro.msg_queue[0], expected_msg)
    
        def test_2nd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1380'
        self.assertEqual(station, expected_station)
    
        >>> class ClassRegistree(BaseRegisteredClass):
    ...    def __init__(self, *args, **kwargs):
    ...        pass