
        
        
def get_info(package_name):
    api_url = 'https://pypi.python.org/pypi/{}/json'.format(package_name)
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(
            '{}: download not found: {}'.format(package_name, resp))
    
        background_color = BASE03
    styles = {
        pygments.token.Keyword: GREEN,
        pygments.token.Keyword.Constant: ORANGE,
        pygments.token.Keyword.Declaration: BLUE,
        pygments.token.Keyword.Namespace: ORANGE,
        pygments.token.Keyword.Reserved: BLUE,
        pygments.token.Keyword.Type: RED,
        pygments.token.Name.Attribute: BASE1,
        pygments.token.Name.Builtin: BLUE,
        pygments.token.Name.Builtin.Pseudo: BLUE,
        pygments.token.Name.Class: BLUE,
        pygments.token.Name.Constant: ORANGE,
        pygments.token.Name.Decorator: BLUE,
        pygments.token.Name.Entity: ORANGE,
        pygments.token.Name.Exception: YELLOW,
        pygments.token.Name.Function: BLUE,
        pygments.token.Name.Tag: BLUE,
        pygments.token.Name.Variable: BLUE,
        pygments.token.String: CYAN,
        pygments.token.String.Backtick: BASE01,
        pygments.token.String.Char: CYAN,
        pygments.token.String.Doc: CYAN,
        pygments.token.String.Escape: RED,
        pygments.token.String.Heredoc: CYAN,
        pygments.token.String.Regex: RED,
        pygments.token.Number: CYAN,
        pygments.token.Operator: BASE1,
        pygments.token.Operator.Word: GREEN,
        pygments.token.Comment: BASE01,
        pygments.token.Comment.Preproc: GREEN,
        pygments.token.Comment.Special: GREEN,
        pygments.token.Generic.Deleted: CYAN,
        pygments.token.Generic.Emph: 'italic',
        pygments.token.Generic.Error: RED,
        pygments.token.Generic.Heading: ORANGE,
        pygments.token.Generic.Inserted: GREEN,
        pygments.token.Generic.Strong: 'bold',
        pygments.token.Generic.Subheading: ORANGE,
        pygments.token.Token: BASE1,
        pygments.token.Token.Other: ORANGE,
    }

    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
        Models: `flatpages.flatpages`
    Templates: Uses the template defined by the ``template_name`` field,
        or :template:`flatpages/default.html` if template_name is not defined.
    Context:
        flatpage
            `flatpages.flatpages` object
    '''
    if not url.startswith('/'):
        url = '/' + url
    site_id = get_current_site(request).id
    try:
        f = get_object_or_404(FlatPage, url=url, sites=site_id)
    except Http404:
        if not url.endswith('/') and settings.APPEND_SLASH:
            url += '/'
            f = get_object_or_404(FlatPage, url=url, sites=site_id)
            return HttpResponsePermanentRedirect('%s/' % request.path)
        else:
            raise
    return render_flatpage(request, f)
    
            Literal:                   '#000000',        # class: 'l'
        Literal.Date:              '#000000',        # class: 'ld'
    
            # ensure server thread doesn't get stuck waiting for connections
        self._close_server_sock_ignore_errors()
        self.join()
        return False # allow exceptions to propagate

    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
            assert server.handler_results[0] == b''
    
    
@pytest.mark.skipif(sys.version_info[:2] != (2,6), reason='Only run on Python 2.6')
def test_system_ssl_py26():
    '''OPENSSL_VERSION_NUMBER isn't provided in Python 2.6, verify we don't
    blow up in this case.
    '''
    assert info()['system_ssl'] == {'version': ''}
    
    
def check_compatibility(urllib3_version, chardet_version):
    urllib3_version = urllib3_version.split('.')
    assert urllib3_version != ['dev']  # Verify urllib3 isn't installed from git.
    
    from .structures import CaseInsensitiveDict
from .adapters import HTTPAdapter
    
    Revision ID: b318dfe5fb6c
Revises: d6db5a5cdb5d
Create Date: 2017-03-08 11:48:10.835741
    
    from alembic import op
from superset import db
from superset.utils import generic_find_constraint_name
import logging
    
    
def downgrade():
    pass

    
    Revision ID: 1d2ddd543133
Revises: d2424a248d63
Create Date: 2016-03-25 14:35:44.642576
    
    from alembic import op
import sqlalchemy as sa
    
        def test_defaults(self):
        morsel = cookies.Morsel()
        self.assertIsNone(morsel.key)
        self.assertIsNone(morsel.value)
        self.assertIsNone(morsel.coded_value)
        self.assertEqual(morsel.keys(), cookies.Morsel._reserved.keys())
        for key, val in morsel.items():
            self.assertEqual(val, '', key)
    
    
    {
def JSONObject(s_and_end, strict, scan_once, object_hook, object_pairs_hook,
               memo=None, _w=WHITESPACE.match, _ws=WHITESPACE_STR):
    s, end = s_and_end
    pairs = []
    pairs_append = pairs.append
    # Backwards compatibility
    if memo is None:
        memo = {}
    memo_get = memo.setdefault
    # Use a slice to prevent IndexError from being raised, the following
    # check will raise a more specific ValueError if the string is empty
    nextchar = s[end:end + 1]
    # Normally we expect nextchar == '''
    if nextchar != ''':
        if nextchar in _ws:
            end = _w(s, end).end()
            nextchar = s[end:end + 1]
        # Trivial empty object
        if nextchar == '}':
            if object_pairs_hook is not None:
                result = object_pairs_hook(pairs)
                return result, end + 1
            pairs = {}
            if object_hook is not None:
                pairs = object_hook(pairs)
            return pairs, end + 1
        elif nextchar != ''':
            raise JSONDecodeError(
                'Expecting property name enclosed in double quotes', s, end)
    end += 1
    while True:
        key, end = scanstring(s, end, strict)
        key = memo_get(key, key)
        # To skip some function call overhead we optimize the fast paths where
        # the JSON key separator is ': ' or just ':'.
        if s[end:end + 1] != ':':
            end = _w(s, end).end()
            if s[end:end + 1] != ':':
                raise JSONDecodeError('Expecting ':' delimiter', s, end)
        end += 1
    
    def evalString(s):
    assert s.startswith(''') or s.startswith('''), repr(s[:1])
    q = s[0]
    if s[:3] == q*3:
        q = q*3
    assert s.endswith(q), repr(s[-len(q):])
    assert len(s) >= 2*len(q)
    s = s[len(q):-len(q)]
    return re.sub(r'\\(\'|\'|\\|[abfnrtv]|x.{0,2}|[0-7]{1,3})', escape, s)
    
        def _generate_toc(self):
        '''Generate key-to-(start, stop) table of contents.'''
        starts, stops = [], []
        self._file.seek(0)
        next_pos = 0
        while True:
            line_pos = next_pos
            line = self._file.readline()
            next_pos = self._file.tell()
            if line.startswith(b'\001\001\001\001' + linesep):
                starts.append(next_pos)
                while True:
                    line_pos = next_pos
                    line = self._file.readline()
                    next_pos = self._file.tell()
                    if line == b'\001\001\001\001' + linesep:
                        stops.append(line_pos - len(linesep))
                        break
                    elif not line:
                        stops.append(line_pos)
                        break
            elif not line:
                break
        self._toc = dict(enumerate(zip(starts, stops)))
        self._next_key = len(self._toc)
        self._file.seek(0, 2)
        self._file_length = self._file.tell()
    
    DEFAULT_DB = None
SPACE = ' '
COMMASPACE = ', '
    
            if isnan(x) or isnan(y):
            if isnan(x) and isnan(y):
                return
        elif x == y:
            if x != 0.0:
                return
            # both zero; check that signs match
            elif copysign(1.0, x) == copysign(1.0, y):
                return
            else:
                msg += ': zeros have different signs'
        self.fail(msg.format(x, y))
    
            self.assertEqual(x[:], a.tolist()[1:])
        with self.assertRaises(ValueError):
            c_int.from_buffer_copy(a, -1)
        with self.assertRaises(ValueError):
            (c_int * 16).from_buffer_copy(a, sizeof(c_int))
        with self.assertRaises(ValueError):
            (c_int * 1).from_buffer_copy(a, 16 * sizeof(c_int))
    
      return YouCompleteMe( user_options_store.GetAll() )

    
    
  # This returns a future! Use JsonFromFuture to get the value.
  # |method| is either 'POST' or 'GET'.
  # |timeout| is num seconds to tolerate no response from server before giving
  # up; see Requests docs for details (we just pass the param along).
  @staticmethod
  def _TalkToHandlerAsync( data,
                           handler,
                           method,
                           timeout = _READ_TIMEOUT_SEC ):
    request_uri = _BuildUri( handler )
    if method == 'POST':
      sent_data = _ToUtf8Json( data )
      return BaseRequest.Session().post(
          request_uri,
          data = sent_data,
          headers = BaseRequest._ExtraHeaders( method,
                                               request_uri,
                                               sent_data ),
          timeout = ( _CONNECT_TIMEOUT_SEC, timeout ) )
    return BaseRequest.Session().get(
        request_uri,
        headers = BaseRequest._ExtraHeaders( method, request_uri ),
        timeout = ( _CONNECT_TIMEOUT_SEC, timeout ) )
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()

    
    DIR_OF_THIS_SCRIPT = p.dirname( p.abspath( __file__ ) )
DIR_OF_OLD_LIBS = p.join( DIR_OF_THIS_SCRIPT, 'python' )
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    with HandleServerException():
      self._response = self.PostDataToHandler( request_data,
                                               'semantic_completion_available' )
    
            pieces = []
        for fragment in pattern.split('('):
            if ')' in fragment:
                paren_loc = fragment.index(')')
                if paren_loc >= 0:
                    pieces.append('%s' + fragment[paren_loc + 1:])
            else:
                try:
                    unescaped_fragment = re_unescape(fragment)
                except ValueError:
                    # If we can't unescape part of it, we can't
                    # reverse this url.
                    return (None, None)
                pieces.append(unescaped_fragment)
    
        def test_static_with_range(self):
        response = self.get_and_head('/static/robots.txt', headers={
            'Range': 'bytes=0-9'})
        self.assertEqual(response.code, 206)
        self.assertEqual(response.body, b'User-agent')
        self.assertEqual(utf8(response.headers.get('Etag')),
                         b''' + self.robots_txt_hash + b''')
        self.assertEqual(response.headers.get('Content-Length'), '10')
        self.assertEqual(response.headers.get('Content-Range'),
                         'bytes 0-9/26')
    
        @property
    def unconsumed_tail(self):
        # type: () -> bytes
        '''Returns the unconsumed portion left over
        '''
        return self.decompressobj.unconsumed_tail
    
        @gen_test
    def test_put_clears_timed_out_putters(self):
        q = queues.Queue(1)
        # First putter succeeds, remainder block.
        putters = [q.put(i, timedelta(seconds=0.01)) for i in range(10)]
        put = q.put(10)
        self.assertEqual(10, len(q._putters))
        yield gen.sleep(0.02)
        self.assertEqual(10, len(q._putters))
        self.assertFalse(put.done())  # Final waiter is still active.
        q.put(11)  # put() clears the waiters.
        self.assertEqual(2, len(q._putters))
        for putter in putters[1:]:
            self.assertRaises(TimeoutError, putter.result)
    
        .. versionchanged:: 5.0
       The ``io_loop`` argument (deprecated since version 4.1) has been removed.
    '''
    def initialize(self):
        self.io_loop = IOLoop.current()
        self.channel = pycares.Channel(sock_state_cb=self._sock_state_cb)
        self.fds = {}
    
            count = 0
        while 1:
            count += 1
            # Bind to a local port; for efficiency, let the OS pick
            # a free port for us.
            # Unfortunately, stress tests showed that we may not
            # be able to connect to that port ('Address already in
            # use') despite that the OS picked it.  This appears
            # to be a race bug in the Windows socket implementation.
            # So we loop until a connect() succeeds (almost always
            # on the first try).  See the long thread at
            # http://mail.zope.org/pipermail/zope/2005-July/160433.html
            # for hideous details.
            a = socket.socket()
            set_close_exec(a.fileno())
            a.bind(('127.0.0.1', 0))
            a.listen(1)
            connect_address = a.getsockname()  # assigned (host, port) pair
            try:
                self.writer.connect(connect_address)
                break    # success
            except socket.error as detail:
                if (not hasattr(errno, 'WSAEADDRINUSE') or
                        errno_from_exception(detail) != errno.WSAEADDRINUSE):
                    # 'Address already in use' is the only error
                    # I've seen on two WinXP Pro SP2 boxes, under
                    # Pythons 2.3.5 and 2.4.1.
                    raise
                # (10048, 'Address already in use')
                # assert count <= 2 # never triggered in Tim's tests
                if count >= 10:  # I've never seen it go above 2
                    a.close()
                    self.writer.close()
                    raise socket.error('Cannot bind trigger!')
                # Close `a` and try again.  Note:  I originally put a short
                # sleep() here, but it didn't appear to help or hurt.
                a.close()
    
    
@unittest.skipIf(pycurl is None, 'pycurl module not present')
class CurlHTTPClientCommonTestCase(httpclient_test.HTTPClientCommonTestCase):
    def get_http_client(self):
        client = CurlAsyncHTTPClient(defaults=dict(allow_ipv6=False))
        # make sure AsyncHTTPClient magic doesn't give us the wrong class
        self.assertTrue(isinstance(client, CurlAsyncHTTPClient))
        return client
    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()