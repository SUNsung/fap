
        
        from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
    
        class _v19_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, method, bucket, key, headers, *args, **kwargs):
            return headers
    
        def _downloaded(self, response, slot, request, spider):
        slot.remove_request(request)
        return self.download(response, spider) \
                if isinstance(response, Request) else response
    
            for fmt, func in six.iteritems(self._formats):
            new_response = func(response)
            if new_response:
                logger.debug('Decompressed response with format: %(responsefmt)s',
                             {'responsefmt': fmt}, extra={'spider': spider})
                return new_response
        return response

    
        @classmethod
    def from_crawler(cls, crawler):
        headers = without_none_values(crawler.settings['DEFAULT_REQUEST_HEADERS'])
        return cls(headers.items())
    
        @classmethod
    def from_crawler(cls, crawler):
        o = cls(crawler.settings.getfloat('DOWNLOAD_TIMEOUT'))
        crawler.signals.connect(o.spider_opened, signal=signals.spider_opened)
        return o
    
            self.stats.inc_value('httpcache/invalidate', spider=spider)
        self._cache_response(spider, response, request, cachedresponse)
        return response
    
        def test_create_sns_message_body_raw_message_delivery(self):
        self.subscriber['RawMessageDelivery'] = 'true'
        action = {
            'Message': ['msg']
        }
        result = sns_listener.create_sns_message_body(self.subscriber, action)
        self.assertEqual(result, 'msg')
    
            # Place the raw event message document into the Kinesis message format
        kinesis_record = {
            'PartitionKey': 'key123',
            'Data': json.dumps(ddb_new_image)
        }
    
        def test_bucket_policy(self):
        # create test bucket
        self.s3_client.create_bucket(Bucket=TEST_BUCKET_NAME_WITH_POLICY)
    
    # Repeat the entire benchmark this many times (on different ports)
# This gives JITs time to warm up, etc.  Pypy needs 3-5 runs at
# --n=15000 for its JIT to reach full effectiveness
define('num_runs', type=int, default=1)
    
    tmpl = Template('''\
<!doctype html>
<html>
  <head>
    <title>{{ page_title }}</title>
  </head>
  <body>
    <div class='header'>
      <h1>{{ page_title }}</h1>
    </div>
    <ul class='navigation'>
    {% for href, caption in [ \
        ('index.html', 'Index'), \
        ('downloads.html', 'Downloads'), \
        ('products.html', 'Products') \
      ] %}
      <li><a href='{{ href }}'>{{ caption }}</a></li>
    {% end %}
    </ul>
    <div class='table'>
      <table>
      {% for row in table %}
        <tr>
        {% for cell in row %}
          <td>{{ cell }}</td>
        {% end %}
        </tr>
      {% end %}
      </table>
    </div>
  </body>
</html>\
''')
    
        Intended to be used at the end of scripts like unit test runners,
    to run the tests again after any source file changes (but see also
    the command-line interface in `main`)
    '''
    io_loop = ioloop.IOLoop()
    io_loop.add_callback(start)
    io_loop.start()
    
    For each function or class described in `tornado.platform.interface`,
the appropriate platform-specific implementation exists in this module.
Most code that needs access to this functionality should do e.g.::
    
        def tearDown(self):
        asyncio.set_event_loop_policy(self.orig_policy)
        self.executor.shutdown()
    
        def test_google_login(self):
        response = self.fetch('/client/login')
        self.assertDictEqual(
            {
                u'name': u'Foo',
                u'email': u'foo@example.com',
                u'access_token': u'fake-access-token',
            },
            json_decode(response.body),
        )

    
            o = Object()
        answer = yield o.f()
        self.assertEqual(answer, 42)