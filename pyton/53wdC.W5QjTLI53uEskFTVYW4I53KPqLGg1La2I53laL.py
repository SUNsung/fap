
        
          Returns:
    The word embeddings matrix
  '''
  embedding_file = os.path.join(word_embeddings_dir, word_embeddings_file)
  vocab_file = os.path.join(
      word_embeddings_dir, os.path.dirname(word_embeddings_file), 'vocab.txt')
    
          # If the batch is too small, add a few other examples
      if len(batch_indices) < self.hparams.batch_size:
        batch_indices += [0] * (self.hparams.batch_size-len(batch_indices))
    
    
class DiagonalGaussianFromInput(Gaussian):
  '''Diagonal Gaussian whose mean and variance are conditioned on other
  variables.
    
        Args:
      shard_name: file path.
    
    '''IMDB data loader and helpers.'''
    
      Args:
    gen_logits:  Generator logits.
    gen_labels:  Labels for the correct token.
    dis_values:  Discriminator values Tensor of shape [batch_size,
      sequence_length].
    is_real_input:  Tensor indicating whether the label is present.
    
            if not username:
            error = 'Username is required.'
        elif not password:
            error = 'Password is required.'
        elif db.execute(
            'SELECT id FROM user WHERE username = ?', (username,)
        ).fetchone() is not None:
            error = 'User {0} is already registered.'.format(username)
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
        monkeypatch.setattr('flaskr.db.init_db', fake_init_db)
    result = runner.invoke(args=['init-db'])
    assert 'Initialized' in result.output
    assert Recorder.called

    
    
def _dump_loader_info(loader):
    yield 'class: %s.%s' % (type(loader).__module__, type(loader).__name__)
    for key, value in sorted(loader.__dict__.items()):
        if key.startswith('_'):
            continue
        if isinstance(value, (tuple, list)):
            if not all(isinstance(x, (str, text_type)) for x in value):
                continue
            yield '%s:' % key
            for item in value:
                yield '  - %s' % item
            continue
        elif not isinstance(value, (str, text_type, int, float, bool)):
            continue
        yield '%s: %r' % (key, value)
    
    
# context locals
_request_ctx_stack = LocalStack()
_app_ctx_stack = LocalStack()
current_app = LocalProxy(_find_app)
request = LocalProxy(partial(_lookup_req_object, 'request'))
session = LocalProxy(partial(_lookup_req_object, 'session'))
g = LocalProxy(partial(_lookup_app_object, 'g'))

    
        rv.cache_control.public = True
    if cache_timeout is None:
        cache_timeout = current_app.get_send_file_max_age(filename)
    if cache_timeout is not None:
        rv.cache_control.max_age = cache_timeout
        rv.expires = int(time() + cache_timeout)
    
        def _get_source_fast(self, environment, template):
        for srcobj, loader in self._iter_loaders(template):
            try:
                return loader.get_source(environment, template)
            except TemplateNotFound:
                continue
        raise TemplateNotFound(template)
    
        '''
    is_windows = is_windows
    config_dir = DEFAULT_CONFIG_DIR
    stdin = sys.stdin
    stdin_isatty = stdin.isatty()
    stdin_encoding = None
    stdout = sys.stdout
    stdout_isatty = stdout.isatty()
    stdout_encoding = None
    stderr = sys.stderr
    stderr_isatty = stderr.isatty()
    colors = 256
    if not is_windows:
        if curses:
            try:
                curses.setupterm()
                colors = curses.tigetnum('colors')
            except curses.error:
                pass
    else:
        # noinspection PyUnresolvedReferences
        import colorama.initialise
        stdout = colorama.initialise.wrap_stream(
            stdout, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        stderr = colorama.initialise.wrap_stream(
            stderr, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        del colorama
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        package_name = '(builtin)'
    
        def load_installed_plugins(self):
        for entry_point_name in ENTRY_POINT_NAMES:
            for entry_point in iter_entry_points(entry_point_name):
                plugin = entry_point.load()
                plugin.package_name = entry_point.dist.key
                self.register(entry_point.load())
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
            # syntax error
        pytest.raises(ContentRangeError, parse, 'beers 100-199/*', 100)
    
            :param request: The :class:`PreparedRequest <PreparedRequest>` being sent.
        :param stream: (optional) Whether to stream the request content.
        :param timeout: (optional) How long to wait for the server to send
            data before giving up, as a float, or a :ref:`(connect timeout,
            read timeout) <timeouts>` tuple.
        :type timeout: float or tuple or urllib3 Timeout object
        :param verify: (optional) Either a boolean, in which case it controls whether
            we verify the server's TLS certificate, or a string, in which case it
            must be a path to a CA bundle to use
        :param cert: (optional) Any user-provided SSL certificate to be trusted.
        :param proxies: (optional) The proxies dictionary to apply to the request.
        :rtype: requests.Response
        '''
    
            if algorithm is None:
            _algorithm = 'MD5'
        else:
            _algorithm = algorithm.upper()
        # lambdas assume digest modules are imported at the top level
        if _algorithm == 'MD5' or _algorithm == 'MD5-SESS':
            def md5_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.md5(x).hexdigest()
            hash_utf8 = md5_utf8
        elif _algorithm == 'SHA':
            def sha_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha1(x).hexdigest()
            hash_utf8 = sha_utf8
        elif _algorithm == 'SHA-256':
            def sha256_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha256(x).hexdigest()
            hash_utf8 = sha256_utf8
        elif _algorithm == 'SHA-512':
            def sha512_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha512(x).hexdigest()
            hash_utf8 = sha512_utf8
    
    #: Python 2.x?
is_py2 = (_ver[0] == 2)
    
    
def create_cookie(name, value, **kwargs):
    '''Make a cookie from underspecified parameters.
    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
    del sys

    
        cmd = cmds[cmdname]
    parser.usage = 'scrapy %s %s' % (cmdname, cmd.syntax())
    parser.description = cmd.long_desc()
    settings.setdict(cmd.default_settings, priority='command')
    cmd.settings = settings
    cmd.add_options(parser)
    opts, args = parser.parse_args(args=argv[1:])
    _run_print_help(parser, cmd.process_options, args, opts)
    
            self.crawler_process.crawl(spname, **opts.spargs)
        self.crawler_process.start()
    
        def syntax(self):
        return '[options]'
    
        def short_desc(self):
        return 'Print Scrapy version'
    
            general form:
        @returns request(s)/item(s) [min=1 [max]]
    
    import re
from io import BytesIO
from six.moves.urllib.parse import unquote
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
        @callback
    def get(self, request, briefing_id):
        '''Handle Alexa Flash Briefing request.'''
        _LOGGER.debug('Received Alexa flash briefing request for: %s',
                      briefing_id)
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Optional(CONF_HOST, default=DEFAULT_IP): cv.string
})
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.tado/
'''
import logging
from datetime import timedelta
from collections import namedtuple
    
    from homeassistant.util import slugify
from homeassistant.helpers.dispatcher import (
    dispatcher_connect, dispatcher_send)
from homeassistant.components.volvooncall import DATA_KEY, SIGNAL_VEHICLE_SEEN
    
        def _update(self, device=None):
        '''Update device status.'''
        if device:
            from pycec.const import STATUS_PLAY, STATUS_STOP, STATUS_STILL, \
                POWER_OFF, POWER_ON
            if device.power_status == POWER_OFF:
                self._state = STATE_OFF
            elif device.status == STATUS_PLAY:
                self._state = STATE_PLAYING
            elif device.status == STATUS_STOP:
                self._state = STATE_IDLE
            elif device.status == STATUS_STILL:
                self._state = STATE_PAUSED
            elif device.power_status == POWER_ON:
                self._state = STATE_ON
            else:
                _LOGGER.warning('Unknown state: %d', device.power_status)
        self.schedule_update_ha_state()
    
        def __init__(self, name, cfg):
        '''Initialize the graph.'''
        self._name = name
        self._hours = cfg[CONF_HOURS_TO_SHOW]
        self._refresh = cfg[CONF_REFRESH]
        self._entities = cfg[CONF_ENTITIES]