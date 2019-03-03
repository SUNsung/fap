
        
        Data structures that power Requests.
'''
    
        @possible_keys
    def test_getitem(self, key):
        assert self.case_insensitive_dict[key] == 'application/json'
    
            # XXX should the partial digests be encoded too?
        base = 'username='%s', realm='%s', nonce='%s', uri='%s', ' \
               'response='%s'' % (self.username, realm, nonce, path, respdig)
        if opaque:
            base += ', opaque='%s'' % opaque
        if algorithm:
            base += ', algorithm='%s'' % algorithm
        if entdig:
            base += ', digest='%s'' % entdig
        if qop:
            base += ', qop='auth', nc=%s, cnonce='%s'' % (ncvalue, cnonce)
    
    #: Python 2.x?
is_py2 = (_ver[0] == 2)
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
        def __getstate__(self):
        state = {attr: getattr(self, attr, None) for attr in self.__attrs__}
        return state
    
            for f in NETRC_FILES:
            try:
                loc = os.path.expanduser('~/{}'.format(f))
            except KeyError:
                # os.path.expanduser can fail when $HOME is undefined and
                # getpwuid fails. See https://bugs.python.org/issue20164 &
                # https://github.com/requests/requests/issues/1846
                return
    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
            if self.crawler_process.bootstrap_failed:
            self.exitcode = 1

    
    
    
            Default OpenSSL method is TLS_METHOD (also called SSLv23_METHOD)
        which allows TLS protocol negotiation.
        '''
        def creatorForNetloc(self, hostname, port):
    
        @staticmethod
    def file_is_same(file1, file2):
        BLOCKSIZE = 65536
    
    	# A list of CharStreamState objects that tracks the stream state
        # values line, charPositionInLine, and p that can change as you
        # move through the input stream.  Indexed from 0..markDepth-1.
        self._markers = [ ]
        self.lastMarker = None
        self.markDepth = 0
    
        def test_post(self):
        body = 'foo=bar'
        # Without an explicit Content-Length redbot will try to send the
        # request chunked.
        self.check_url(
            '/post', method='POST', body=body,
            headers=[('Content-Length', str(len(body))),
                     ('Content-Type', 'application/x-www-form-urlencoded')],
            expected_status=303)
    
    define('ioloop', type=str, default=None)
    
    from timeit import Timer
    
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
    
    
def _check_file(modify_times: Dict[str, float], path: str) -> None:
    try:
        modified = os.stat(path).st_mtime
    except Exception:
        return
    if path not in modify_times:
        modify_times[path] = modified
        return
    if modify_times[path] != modified:
        gen_log.info('%s modified; restarting server', path)
        _reload()
    
    import os
    
        @gen.coroutine
    def resolve(
        self, host: str, port: int, family: int = 0
    ) -> 'Generator[Any, Any, List[Tuple[int, Any]]]':
        if is_valid_ip(host):
            addresses = [host]
        else:
            # gethostbyname doesn't take callback as a kwarg
            fut = Future()  # type: Future[Tuple[Any, Any]]
            self.channel.gethostbyname(
                host, family, lambda result, error: fut.set_result((result, error))
            )
            result, error = yield fut
            if error:
                raise IOError(
                    'C-Ares returned error %s: %s while resolving %s'
                    % (error, pycares.errno.strerror(error), host)
                )
            addresses = result.addresses
        addrinfo = []
        for address in addresses:
            if '.' in address:
                address_family = socket.AF_INET
            elif ':' in address:
                address_family = socket.AF_INET6
            else:
                address_family = socket.AF_UNSPEC
            if family != socket.AF_UNSPEC and family != address_family:
                raise IOError(
                    'Requested socket family %d but got %d' % (family, address_family)
                )
            addrinfo.append((typing.cast(int, address_family), (address, port)))
        return addrinfo

    
        @gen.convert_yielded.register(Deferred)  # type: ignore
    def _(d: Deferred) -> Future:
        f = Future()  # type: Future[Any]
    
            :arg Matcher matcher: a `Matcher` instance used for determining
            whether the rule should be considered a match for a specific
            request.
        :arg target: a Rule's target (typically a ``RequestHandler`` or
            `~.httputil.HTTPServerConnectionDelegate` subclass or even a nested `Router`,
            depending on routing implementation).
        :arg dict target_kwargs: a dict of parameters that can be useful
            at the moment of target instantiation (for example, ``status_code``
            for a ``RequestHandler`` subclass). They end up in
            ``target_params['target_kwargs']`` of `RuleRouter.get_target_delegate`
            method.
        :arg str name: the name of the rule that can be used to find it
            in `ReversibleRouter.reverse_url` implementation.
        '''
        if isinstance(target, str):
            # import the Module and instantiate the class
            # Must be a fully qualified name (module.ClassName)
            target = import_object(target)
    
    # Model Table:
# total sequences: 100%
# first 512 sequences: 96.9392%
# first 1024 sequences:3.0618%
# rest  sequences:     0.2992%
# negative sequences:  0.0020%
BulgarianLangModel = (
0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,2,2,3,2,2,1,2,2,
3,1,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,3,0,3,0,1,
0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,3,3,3,3,0,3,1,0,
0,1,0,0,0,0,0,0,0,0,1,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
3,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,3,3,3,3,3,3,3,3,0,3,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,2,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,3,3,3,3,3,3,3,3,0,3,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,1,3,3,3,3,2,2,2,1,1,2,0,1,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,3,3,2,3,2,2,3,3,1,1,2,3,3,2,3,3,3,3,2,1,2,0,2,0,3,0,0,
0,0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,3,3,1,3,3,3,3,3,2,3,2,3,3,3,3,3,2,3,3,1,3,0,3,0,2,0,0,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,3,3,3,1,3,3,2,3,3,3,1,3,3,2,3,2,2,2,0,0,2,0,2,0,2,0,0,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,3,3,3,3,0,3,3,3,2,2,3,3,3,1,2,2,3,2,1,1,2,0,2,0,0,0,0,
1,0,0,0,0,0,0,0,0,0,2,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,3,3,2,3,3,1,2,3,2,2,2,3,3,3,3,3,2,2,3,1,2,0,2,1,2,0,0,
0,0,0,0,0,0,0,0,0,0,3,0,0,1,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,1,3,3,3,3,3,2,3,3,3,2,3,3,2,3,2,2,2,3,1,2,0,1,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,3,3,3,3,3,3,1,1,1,2,2,1,3,1,3,2,2,3,0,0,1,0,1,0,1,0,0,
0,0,0,1,0,0,0,0,1,0,2,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,2,2,3,2,2,3,1,2,1,1,1,2,3,1,3,1,2,2,0,1,1,1,1,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,1,3,2,2,3,3,1,2,3,1,1,3,3,3,3,1,2,2,1,1,1,0,2,0,2,0,1,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,2,3,3,3,2,2,1,1,2,0,2,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
3,0,1,2,1,3,3,2,3,3,3,3,3,2,3,2,1,0,3,1,2,1,2,1,2,3,2,1,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,1,1,2,3,3,3,3,3,3,3,3,3,3,3,3,0,0,3,1,3,3,2,3,3,2,2,2,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
2,3,3,3,3,0,3,3,3,3,3,2,1,1,2,1,3,3,0,3,1,1,1,1,3,2,0,1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
3,3,2,2,2,3,3,3,3,3,3,3,3,3,3,3,1,1,3,1,3,3,2,3,2,2,2,3,0,2,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,3,3,3,3,2,3,3,2,2,3,2,1,1,1,1,1,3,1,3,1,1,0,0,0,1,0,0,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
3,3,3,3,3,2,3,2,0,3,2,0,3,0,2,0,0,2,1,3,1,0,0,1,0,0,0,1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,2,1,1,1,1,2,1,1,2,1,1,1,2,2,1,2,1,1,1,0,1,1,0,1,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,2,1,3,1,1,2,1,3,2,1,1,0,1,2,3,2,1,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
2,3,3,3,3,2,2,1,0,1,0,0,1,0,0,0,2,1,0,3,0,0,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,2,3,2,3,3,1,3,2,1,1,1,2,1,1,2,1,3,0,1,0,0,0,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,1,1,2,2,3,3,2,3,2,2,2,3,1,2,2,1,1,2,1,1,2,2,0,1,1,0,1,0,2,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,3,3,3,2,1,3,1,0,2,2,1,3,2,1,0,0,2,0,2,0,1,0,0,0,0,0,0,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
3,3,3,3,3,3,1,2,0,2,3,1,2,3,2,0,1,3,1,2,1,1,1,0,0,1,0,0,2,2,2,3,
2,2,2,2,1,2,1,1,2,2,1,1,2,0,1,1,1,0,0,1,1,0,0,1,1,0,0,0,1,1,0,1,
3,3,3,3,3,2,1,2,2,1,2,0,2,0,1,0,1,2,1,2,1,1,0,0,0,1,0,1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,1,
3,3,2,3,3,1,1,3,1,0,3,2,1,0,0,0,1,2,0,2,0,1,0,0,0,1,0,1,2,1,2,2,
1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,0,1,2,1,1,1,0,0,0,0,0,1,1,0,0,
3,1,0,1,0,2,3,2,2,2,3,2,2,2,2,2,1,0,2,1,2,1,1,1,0,1,2,1,2,2,2,1,
1,1,2,2,2,2,1,2,1,1,0,1,2,1,2,2,2,1,1,1,0,1,1,1,1,2,0,1,0,0,0,0,
2,3,2,3,3,0,0,2,1,0,2,1,0,0,0,0,2,3,0,2,0,0,0,0,0,1,0,0,2,0,1,2,
2,1,2,1,2,2,1,1,1,2,1,1,1,0,1,2,2,1,1,1,1,1,0,1,1,1,0,0,1,2,0,0,
3,3,2,2,3,0,2,3,1,1,2,0,0,0,1,0,0,2,0,2,0,0,0,1,0,1,0,1,2,0,2,2,
1,1,1,1,2,1,0,1,2,2,2,1,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,1,1,0,0,
2,3,2,3,3,0,0,3,0,1,1,0,1,0,0,0,2,2,1,2,0,0,0,0,0,0,0,0,2,0,1,2,
2,2,1,1,1,1,1,2,2,2,1,0,2,0,1,0,1,0,0,1,0,1,0,0,1,0,0,0,0,1,0,0,
3,3,3,3,2,2,2,2,2,0,2,1,1,1,1,2,1,2,1,1,0,2,0,1,0,1,0,0,2,0,1,2,
1,1,1,1,1,1,1,2,2,1,1,0,2,0,1,0,2,0,0,1,1,1,0,0,2,0,0,0,1,1,0,0,
2,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,2,0,0,1,1,0,0,0,0,0,0,1,2,0,1,2,
2,2,2,1,1,2,1,1,2,2,2,1,2,0,1,1,1,1,1,1,0,1,1,1,1,0,0,1,1,1,0,0,
2,3,3,3,3,0,2,2,0,2,1,0,0,0,1,1,1,2,0,2,0,0,0,3,0,0,0,0,2,0,2,2,
1,1,1,2,1,2,1,1,2,2,2,1,2,0,1,1,1,0,1,1,1,1,0,2,1,0,0,0,1,1,0,0,
2,3,3,3,3,0,2,1,0,0,2,0,0,0,0,0,1,2,0,2,0,0,0,0,0,0,0,0,2,0,1,2,
1,1,1,2,1,1,1,1,2,2,2,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,0,0,0,1,0,0,
3,3,2,2,3,0,1,0,1,0,0,0,0,0,0,0,1,1,0,3,0,0,0,0,0,0,0,0,1,0,2,2,
1,1,1,1,1,2,1,1,2,2,1,2,2,1,0,1,1,1,1,1,0,1,0,0,1,0,0,0,1,1,0,0,
3,1,0,1,0,2,2,2,2,3,2,1,1,1,2,3,0,0,1,0,2,1,1,0,1,1,1,1,2,1,1,1,
1,2,2,1,2,1,2,2,1,1,0,1,2,1,2,2,1,1,1,0,0,1,1,1,2,1,0,1,0,0,0,0,
2,1,0,1,0,3,1,2,2,2,2,1,2,2,1,1,1,0,2,1,2,2,1,1,2,1,1,0,2,1,1,1,
1,2,2,2,2,2,2,2,1,2,0,1,1,0,2,1,1,1,1,1,0,0,1,1,1,1,0,1,0,0,0,0,
2,1,1,1,1,2,2,2,2,1,2,2,2,1,2,2,1,1,2,1,2,3,2,2,1,1,1,1,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
2,2,2,3,2,0,1,2,0,1,2,1,1,0,1,0,1,2,1,2,0,0,0,1,1,0,0,0,1,0,0,2,
1,1,0,0,1,1,0,1,1,1,1,0,2,0,1,1,1,0,0,1,1,0,0,0,0,1,0,0,0,1,0,0,
2,0,0,0,0,1,2,2,2,2,2,2,2,1,2,1,1,1,1,1,1,1,0,1,1,1,1,1,2,1,1,1,
1,2,2,2,2,1,1,2,1,2,1,1,1,0,2,1,2,1,1,1,0,2,1,1,1,1,0,1,0,0,0,0,
3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,
1,1,0,1,0,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
2,2,2,3,2,0,0,0,0,1,0,0,0,0,0,0,1,1,0,2,0,0,0,0,0,0,0,0,1,0,1,2,
1,1,1,1,1,1,0,0,2,2,2,2,2,0,1,1,0,1,1,1,1,1,0,0,1,0,0,0,1,1,0,1,
2,3,1,2,1,0,1,1,0,2,2,2,0,0,1,0,0,1,1,1,1,0,0,0,0,0,0,0,1,0,1,2,
1,1,1,1,2,1,1,1,1,1,1,1,1,0,1,1,0,1,0,1,0,1,0,0,1,0,0,0,0,1,0,0,
2,2,2,2,2,0,0,2,0,0,2,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,2,0,2,2,
1,1,1,1,1,0,0,1,2,1,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
1,2,2,2,2,0,0,2,0,1,1,0,0,0,1,0,0,2,0,2,0,0,0,0,0,0,0,0,0,0,1,1,
0,0,0,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
1,2,2,3,2,0,0,1,0,0,1,0,0,0,0,0,0,1,0,2,0,0,0,1,0,0,0,0,0,0,0,2,
1,1,0,0,1,0,0,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
2,1,2,2,2,1,2,1,2,2,1,1,2,1,1,1,0,1,1,1,1,2,0,1,0,1,1,1,1,0,1,1,
1,1,2,1,1,1,1,1,1,0,0,1,2,1,1,1,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,
1,0,0,1,3,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
2,2,2,2,1,0,0,1,0,2,0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,2,0,0,1,
0,2,0,1,0,0,1,1,2,0,1,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
1,2,2,2,2,0,1,1,0,2,1,0,1,1,1,0,0,1,0,2,0,1,0,0,0,0,0,0,0,0,0,1,
0,1,0,0,1,0,0,0,1,1,0,0,1,0,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
2,2,2,2,2,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,
0,1,0,1,1,1,0,0,1,1,1,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
2,0,1,0,0,1,2,1,1,1,1,1,1,2,2,1,0,0,1,0,1,0,0,0,0,1,1,1,1,0,0,0,
1,1,2,1,1,1,1,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
2,2,1,2,1,0,0,1,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,
0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
0,1,1,0,1,1,1,0,0,1,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,
1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,2,0,0,2,0,1,0,0,1,0,0,1,
1,1,0,0,1,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,
1,1,1,1,1,1,1,2,0,0,0,0,0,0,2,1,0,1,1,0,0,1,1,1,0,1,0,0,0,0,0,0,
2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,1,1,1,1,1,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
)
    
            return self.state
    
    CP949_CLS  = (
    1,1,1,1,1,1,1,1, 1,1,1,1,1,1,0,0,  # 00 - 0f
    1,1,1,1,1,1,1,1, 1,1,1,0,1,1,1,1,  # 10 - 1f
    1,1,1,1,1,1,1,1, 1,1,1,1,1,1,1,1,  # 20 - 2f
    1,1,1,1,1,1,1,1, 1,1,1,1,1,1,1,1,  # 30 - 3f
    1,4,4,4,4,4,4,4, 4,4,4,4,4,4,4,4,  # 40 - 4f
    4,4,5,5,5,5,5,5, 5,5,5,1,1,1,1,1,  # 50 - 5f
    1,5,5,5,5,5,5,5, 5,5,5,5,5,5,5,5,  # 60 - 6f
    5,5,5,5,5,5,5,5, 5,5,5,1,1,1,1,1,  # 70 - 7f
    0,6,6,6,6,6,6,6, 6,6,6,6,6,6,6,6,  # 80 - 8f
    6,6,6,6,6,6,6,6, 6,6,6,6,6,6,6,6,  # 90 - 9f
    6,7,7,7,7,7,7,7, 7,7,7,7,7,8,8,8,  # a0 - af
    7,7,7,7,7,7,7,7, 7,7,7,7,7,7,7,7,  # b0 - bf
    7,7,7,7,7,7,9,2, 2,3,2,2,2,2,2,2,  # c0 - cf
    2,2,2,2,2,2,2,2, 2,2,2,2,2,2,2,2,  # d0 - df
    2,2,2,2,2,2,2,2, 2,2,2,2,2,2,2,2,  # e0 - ef
    2,2,2,2,2,2,2,2, 2,2,2,2,2,2,2,0,  # f0 - ff
)
    
        def feed(self, byte_str):
        if not self._model['keep_english_letter']:
            byte_str = self.filter_international_words(byte_str)
        if not byte_str:
            return self.state
        char_to_order_map = self._model['char_to_order_map']
        for i, c in enumerate(byte_str):
            # XXX: Order is in range 1-64, so one would think we want 0-63 here,
            #      but that leads to 27 more test failures than before.
            order = char_to_order_map[c]
            # XXX: This was SYMBOL_CAT_ORDER before, with a value of 250, but
            #      CharacterCategory.SYMBOL is actually 253, so we use CONTROL
            #      to make it closer to the original intent. The only difference
            #      is whether or not we count digits and control characters for
            #      _total_char purposes.
            if order < CharacterCategory.CONTROL:
                self._total_char += 1
            if order < self.SAMPLE_SIZE:
                self._freq_char += 1
                if self._last_order < self.SAMPLE_SIZE:
                    self._total_seqs += 1
                    if not self._reversed:
                        i = (self._last_order * self.SAMPLE_SIZE) + order
                        model = self._model['precedence_matrix'][i]
                    else:  # reverse the order of the letters in the lookup
                        i = (order * self.SAMPLE_SIZE) + self._last_order
                        model = self._model['precedence_matrix'][i]
                    self._seq_counters[model] += 1
            self._last_order = order
    
        @property
    def language(self):
        return 'Japanese'
    
        def reset(self):
        super(UTF8Prober, self).reset()
        self.coding_sm.reset()
        self._num_mb_chars = 0
    
        def __init__(self, command_class, options):
        self.command_class = command_class
        self.options = options
    
        def format(self, record):
        if isinstance(record.msg, six.binary_type):
            record.msg = record.msg.decode('utf-8')
        message = super(ConsoleWarningFormatter, self).format(record)
        return '{0}{1}'.format(self.get_level_message(record), message)

    
    
class BinaryDownloader(requests.Session):
    base_bintray_url = 'https://dl.bintray.com/{}'.format(BINTRAY_ORG)
    base_appveyor_url = 'https://ci.appveyor.com/api/projects/{}/artifacts/'.format(NAME)
    
    
class NetworkTest(DockerClientTestCase):
    def test_network_default_labels(self):
        net = Network(self.client, 'composetest', 'foonet')
        net.ensure()
        net_data = net.inspect()
        labels = net_data['Labels']
        assert labels[LABEL_NETWORK] == net.name
        assert labels[LABEL_PROJECT] == net.project
    
            self.project.up()
        container = self.db.containers()[0]
        assert container.get_mount('/var/db')['Source'] == self.host_path
    
        def test_tls_flags_override_environment(self):
        environment = Environment({
            'DOCKER_CERT_PATH': '/completely/wrong/path',
            'DOCKER_TLS_VERIFY': 'false'
        })
        options = {
            '--tlscacert': ''{0}''.format(self.ca_cert),
            '--tlscert': ''{0}''.format(self.client_cert),
            '--tlskey': ''{0}''.format(self.key),
            '--tlsverify': True
        }