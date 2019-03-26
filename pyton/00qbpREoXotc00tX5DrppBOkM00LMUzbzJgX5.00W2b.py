
        
                # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
        @property
    def encoding(self):
        return self._orig.encoding or 'utf8'
    
        try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)

    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def test_unicode_raw_json_item_verbose(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
    from . import utils
from . import packages
from .models import Request, Response, PreparedRequest
from .api import request, get, head, post, patch, put, delete, options
from .sessions import session, Session
from .status_codes import codes
from .exceptions import (
    RequestException, Timeout, URLRequired,
    TooManyRedirects, HTTPError, ConnectionError,
    FileModeWarning, ConnectTimeout, ReadTimeout
)
    
                raise ConnectionError(e, request=request)
    
    
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
    def test_fragment_not_sent_with_request():
    '''Verify that the fragment portion of a URI isn't sent to the server.'''
    def response_handler(sock):
        req = consume_socket_content(sock, timeout=0.5)
        sock.send(
            b'HTTP/1.1 200 OK\r\n'
            b'Content-Length: '+bytes(len(req))+b'\r\n'
            b'\r\n'+req
        )
    
        def prepare_request(self, request):
        '''Constructs a :class:`PreparedRequest <PreparedRequest>` for
        transmission and returns it. The :class:`PreparedRequest` has settings
        merged from the :class:`Request <Request>` instance and those of the
        :class:`Session`.
    
        :rtype: bool
    '''
    # Prioritize lowercase environment variables over uppercase
    # to keep a consistent behaviour with other http projects (curl, wget).
    get_proxy = lambda k: os.environ.get(k) or os.environ.get(k.upper())
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
            def getCertificateOptions(self):
            # setting verify=True will require you to provide CAs
            # to verify against; in other words: it's not that simple
    
        def __init__(self, settings, aws_access_key_id=None, aws_secret_access_key=None, \
            httpdownloadhandler=HTTPDownloadHandler, **kw):
    
        def close(self):
        '''Close the execution engine gracefully.
    
        def _has_ajax_crawlable_variant(self, response):
        '''
        Return True if a page without hash fragment could be 'AJAX crawlable'
        according to https://developers.google.com/webmasters/ajax-crawling/docs/getting-started.
        '''
        body = response.text[:self.lookup_bytes]
        return _has_ajaxcrawlable_meta(body)
    
        return 'teredor test result is %s.%s' % (usable, server)
    
        fetchmethod = getattr(urlfetch, method, None)
    if not fetchmethod:
        start_response('405 Method Not Allowed', [('Content-Type', 'text/html')])
        yield message_html('405 Method Not Allowed', 'Method Not Allowed: %r' % method, detail='Method Not Allowed URL=%r' % url)
        raise StopIteration
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
            return msg
    
    
    def getLine(self):
        '''ANTLR tracks the line information automatically'''
    
        publicKey, privateKey = generateKey(keySize)
    print('\nWriting public key to file %s_pubkey.txt...' % name)
    with open('%s_pubkey.txt' % name, 'w') as fo:
        fo.write('%d,%d,%d,%d' % (publicKey[0], publicKey[1], publicKey[2], publicKey[3]))
    
        for trials in range(5):
        a = random.randrange(2, num - 1)
        v = pow(a, s, num)
        if v != 1:
            i = 0
            while v != (num - 1):
                if i == t - 1:
                    return False
                else:
                    i = i + 1
                    v = (v ** 2) % num
    return True
    
                if (arr[i-1] <= j):
                dp[i][j] = dp[i][j] or dp[i-1][j-arr[i-1]]
    
    	s = [7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22, \
		5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20, \
		4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23, \
		6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21 ]
    
    def revise_centroids(data, k, cluster_assignment):
    new_centroids = []
    for i in range(k):
        # Select all data points that belong to cluster i. Fill in the blank (RHS only)
        member_data_points = data[cluster_assignment==i]
        # Compute the mean of the data points. Fill in the blank (RHS only)
        centroid = member_data_points.mean(axis=0)
        new_centroids.append(centroid)
    new_centroids = np.array(new_centroids)
    
    return new_centroids
    
    min_length = 8
max_length = 16
password = ''.join(random.choice(chars) for x in range(random.randint(min_length, max_length)))
print('Password: ' + password)
print('[ If you are thinking of using this passsword, You better save it. ]')
    
      # Since function calls often occur inside if/for/while/switch
  # expressions - which have their own, more liberal conventions - we
  # first see if we should be looking inside such an expression for a
  # function call, to which we can apply more strict standards.
  fncall = line    # if there's no control flow construct, look at whole line
  for pattern in (r'\bif\s*\((.*)\)\s*{',
                  r'\bfor\s*\((.*)\)\s*{',
                  r'\bwhile\s*\((.*)\)\s*[{;]',
                  r'\bswitch\s*\((.*)\)\s*{'):
    match = Search(pattern, line)
    if match:
      fncall = match.group(1)    # look inside the parens for function calls
      break
    }
    }
    }
    }
    
    '''
*What is this pattern about?
The Borg pattern (also known as the Monostate pattern) is a way to
implement singleton behavior, but instead of having only one instance
of a class, there are multiple instances that share the same state. In
other words, the focus is on sharing state instead of sharing instance
identity.
    
    *TL;DR80
Delays the eval of an expr until its value is needed and avoids repeated evals.
'''
    
    '''
*TL;DR80
Separates presentation, application processing, and data management functions.
'''
    
    *What does this example do?
The example implements a graphic class，which can be either an ellipse
or a composition of several graphics. Every graphic can be printed.
    
        def test_data_change_shall_notify_all_observers_once(cls):
        with patch.object(cls.dec_obs, 'update') as mock_dec_obs_update, patch.object(
            cls.hex_obs, 'update'
        ) as mock_hex_obs_update:
            cls.sub.data = 10
            cls.assertEqual(mock_dec_obs_update.call_count, 1)
            cls.assertEqual(mock_hex_obs_update.call_count, 1)
    
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
    
        def test_cloning_propperty_assigned_values(self):
        sample_object_1 = self.prototype.clone()
        sample_object_2 = self.prototype.clone(value='re-assigned')
        self.assertNotEqual(sample_object_1.value, sample_object_2.value)