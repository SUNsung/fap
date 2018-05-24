
        
        
#: Log messages to :func:`~flask.logging.wsgi_errors_stream` with the format
#: ``[%(asctime)s] %(levelname)s in %(module)s: %(message)s``.
default_handler = logging.StreamHandler(wsgi_errors_stream)
default_handler.setFormatter(logging.Formatter(
    '[%(asctime)s] %(levelname)s in %(module)s: %(message)s'
))
    
        :param source: the source code of the template to be
                   rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(ctx.app.jinja_env.from_string(source),
                   context, ctx.app)

    
        if release_date.date() != date.today():
        fail(
            'Release date is not today (%s != %s)',
            release_date.date(), date.today()
        )
    
            # Force Python to track this dictionary at all times.
        # This is necessary since Python only starts tracking
        # dicts if they contain mutable objects.  It's a horrible,
        # horrible hack but makes this kinda testable.
        loc.__storage__['FOOO'] = [1, 2, 3]
    
      # Lookahead LSTM reads right-to-left to represent the rightmost context of the
  # words. It gets word embeddings from the char model.
  lookahead = spec_builder.ComponentSpecBuilder('lookahead')
  lookahead.set_network_unit(
      name='wrapped_units.LayerNormBasicLSTMNetwork',
      hidden_layer_sizes='256')
  lookahead.set_transition_system(name='shift-only', left_to_right='false')
  lookahead.add_link(source=char2word, fml='input.last-char-focus',
                     embedding_dim=64)
    
    cc_test(
    name = 'mst_solver_test',
    size = 'small',
    srcs = ['mst_solver_test.cc'],
    deps = [
        ':mst_solver',
        '//dragnn/core/test:generic',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
        '@org_tensorflow//tensorflow/core:test',
    ],
)
    
        NOTE(danielandor) For now this method cannot be called during training.
    That is to say, unroll_using_oracle for this component must be set to true.
    This will be fixed by separating train_with_oracle and train_with_inference.
    
      # Finding the maximum incoming score is difficult, because the batch padding
  # may contain arbitrary values.  We restrict the maximization to valid arcs
  # using tf.unsorted_segment_max() with a specially-constructed set of IDs.
  _, valid_tokens_bxm = digraph_ops.ValidArcAndTokenMasks(
      num_nodes, max_nodes, dtype=tf.int32)
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth == USERNAME
            assert username == USERNAME
            assert password is None
            return basic_auth()
    
    
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
    
        def __init__(self, msg, with_headers=True, with_body=True,
                 on_body_chunk_downloaded=None):
        '''
        :param msg: a :class:`models.HTTPMessage` subclass
        :param with_headers: if `True`, headers will be included
        :param with_body: if `True`, body will be included
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
        '=' Data fields to be serialized into a JSON object (with --json, -j)
        or form data (with --form, -f):
    
        ERROR_TIMEOUT = 2
    ERROR_TOO_MANY_REDIRECTS = 6
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    from ..common import *
    
        video_url = match1(html, r'filepath=(.+)&sec')
    video_url = video_url.replace('&mid', '?mid')
    
        def path_ok(self):
        'Simple validity check for menu file path'
        path = self.path.get().strip()
        if not path: #no path specified
            self.showerror('no help file path specified.', self.path_error)
            return None
        elif not path.startswith(('www.', 'http')):
            if path[:5] == 'file:':
                path = path[5:]
            if not os.path.exists(path):
                self.showerror('help file path does not exist.',
                               self.path_error)
                return None
            if platform == 'darwin':  # for Mac Safari
                path =  'file://' + path
        return path
    
        def isatty(self):
        if self.closed:
            raise ValueError('I/O operation on closed file')
        return False
    
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
    
        X_RGB_TXT -- X Consortium rgb.txt format files.  Three columns of numbers
                 from 0 .. 255 separated by whitespace.  Arbitrary trailing
                 columns used as the color name.
    
    This module can be used to create simple XML-RPC servers
by creating a server and either installing functions, a
class instance, or by extending the SimpleXMLRPCServer
class.
    
    requires_docstrings = unittest.skipUnless(HAVE_DOCSTRINGS,
                                          'test requires docstrings')
    
        def test_parents(self):
        # Anchored
        P = self.cls
        p = P('z:a/b/')
        par = p.parents
        self.assertEqual(len(par), 2)
        self.assertEqual(par[0], P('z:a'))
        self.assertEqual(par[1], P('z:'))
        self.assertEqual(list(par), [P('z:a'), P('z:')])
        with self.assertRaises(IndexError):
            par[2]
        p = P('z:/a/b/')
        par = p.parents
        self.assertEqual(len(par), 2)
        self.assertEqual(par[0], P('z:/a'))
        self.assertEqual(par[1], P('z:/'))
        self.assertEqual(list(par), [P('z:/a'), P('z:/')])
        with self.assertRaises(IndexError):
            par[2]
        p = P('//a/b/c/d')
        par = p.parents
        self.assertEqual(len(par), 2)
        self.assertEqual(par[0], P('//a/b/c'))
        self.assertEqual(par[1], P('//a/b'))
        self.assertEqual(list(par), [P('//a/b/c'), P('//a/b')])
        with self.assertRaises(IndexError):
            par[2]
    
                os.environ['Path'] = '{};{}'.format(
                os.path.dirname(sys.executable), os.environ['Path'])
            os.environ['PYTHONPATH'] = os.path.dirname(sys.executable)
    
        def config_colors(self):
        for tag, cnf in self.tagdefs.items():
            if cnf:
                self.tag_configure(tag, **cnf)
        self.tag_raise('sel')
    
    from babel.messages.pofile import read_po
    
            (Initialized proxies ALWAYS return a value, either a set value
        or an empty string)
    
        @csrf_exempt
    @json_validate(
        VRatelimit(rate_ip=True, prefix='rate_register_'),
        signature=VSigned(),
        name=VUname(['user']),
        email=ValidEmail('email'),
        password=VPasswordChange(['passwd', 'passwd2']),
    )
    def POST_register(self, responder, name, email, password, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            name=name,
            email=email,
            password=password,
        ))
        return handle_register(**kwargs)
    
    
redditbroke =  \
'''<html>
  <head>
    <title>reddit broke!</title>
  </head>
  <body>
    <div style='margin: auto; text-align: center'>
      <p>
        <a href='/'>
          <img border='0' src='%s' alt='you broke reddit' />
        </a>
      </p>
      <p>
        %s
      </p>
  </body>
</html>
'''
    
        def GET_cachehealth(self):
        results = {}
        behaviors = {
            # Passed on to poll(2) in milliseconds
            'connect_timeout': 1000,
            # Passed on to setsockopt(2) in microseconds
            'receive_timeout': int(1e6),
            'send_timeout': int(1e6),
        }
        for server in cache._CACHE_SERVERS:
            try:
                if server.startswith('udp:'):
                    # libmemcached doesn't support UDP get/fetch operations
                    continue
                mc = pylibmc.Client([server], behaviors=behaviors)
                # it's ok that not all caches are mcrouter, we'll just ignore
                # the miss either way
                mc.get('__mcrouter__.version')
                results[server] = 'OK'
            except pylibmc.Error as e:
                g.log.warning('Health check for %s FAILED: %s', server, e)
                results[server] = 'FAILED %s' % e
        return json.dumps(results)
