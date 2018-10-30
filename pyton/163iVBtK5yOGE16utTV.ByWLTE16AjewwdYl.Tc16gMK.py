
        
          @property
  def output_size(self):
    return self._num_units
    
    FLAGS = tf.flags.FLAGS
    
    
def imdb_iterator(raw_data, batch_size, num_steps, epoch_size_override=None):
  '''Iterate on the raw IMDB data.
    
      Returns:
    loss_matrix: Loss matrix of shape [batch_size, sequence_length].
  '''
  eps = tf.constant(1e-7, tf.float32)
  gan_loss_matrix = -tf.log(dis_predictions + eps)
  return gan_loss_matrix
    
        ## Load the Discriminator weights from the MaskGAN checkpoint if
    # the weights are compatible.
    if FLAGS.discriminator_model == 'seq2seq_vd':
      print('Restoring Discriminator from %s.' % FLAGS.maskgan_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % FLAGS.maskgan_ckpt)
      dis_init_saver = init_savers['dis_init_saver']
      dis_init_saver.restore(sess, FLAGS.maskgan_ckpt)
    
      # *Total* number of n-grams produced by the generator.
  total_ngrams_produced = 0
    
    from test.helper import gettestcases
from youtube_dl.utils import compat_urllib_parse_urlparse
from youtube_dl.utils import compat_urllib_request
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    with io.open(README_FILE, encoding='utf-8') as f:
    oldreadme = f.read()
    
    
if __name__ == '__main__':
    main()

    
        template = template.replace('{{fileopts}}', '|'.join(fileopts))
    template = template.replace('{{diropts}}', '|'.join(diropts))
    template = template.replace('{{flags}}', ' '.join(flags))
    
        def test_yahoo_https(self):
        # https://github.com/rg3/youtube-dl/issues/2701
        self.assertMatch(
            'https://screen.yahoo.com/smartwatches-latest-wearable-gadgets-163745379-cbs.html',
            ['Yahoo'])
    
    
@pytest.fixture
def auth(client):
    return AuthActions(client)

    
    
def test_author_required(app, client, auth):
    # change the post author to another user
    with app.app_context():
        db = get_db()
        db.execute('UPDATE post SET author_id = 2 WHERE id = 1')
        db.commit()
    
    PY2 = sys.version_info[0] == 2
_identity = lambda x: x
    
    
@implements_to_string
class DebugFilesKeyError(KeyError, AssertionError):
    '''Raised from request.files during debugging.  The idea is that it can
    provide a better error message than just a generic KeyError/BadRequest.
    '''
    
        .. versionchanged:: 0.3
       `category` parameter added.
    
    
def loads(s, **kwargs):
    '''Unserialize a JSON object from a string ``s`` by using the application's
    configured decoder (:attr:`~flask.Flask.json_decoder`) if there is an
    application on the stack.
    '''
    _load_arg_defaults(kwargs)
    if isinstance(s, bytes):
        encoding = kwargs.pop('encoding', None)
        if encoding is None:
            encoding = detect_encoding(s)
        s = s.decode(encoding)
    return _json.loads(s, **kwargs)
    
        #: Tag classes to bind when creating the serializer. Other tags can be
    #: added later using :meth:`~register`.
    default_tags = [
        TagDict, PassDict, TagTuple, PassList, TagBytes, TagMarkup, TagUUID,
        TagDateTime,
    ]
    
    
class ContentDecodingError(RequestException, BaseHTTPError):
    '''Failed to decode response content'''
    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
    try:
    from urllib3.contrib import pyopenssl
except ImportError:
    pyopenssl = None
    OpenSSL = None
    cryptography = None
else:
    import OpenSSL
    import cryptography
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
        def add_options(self, parser):
        '''
        Populate option parse with options available for this command
        '''
        group = OptionGroup(parser, 'Global Options')
        group.add_option('--logfile', metavar='FILE',
            help='log file. if omitted stderr will be used')
        group.add_option('-L', '--loglevel', metavar='LEVEL', default=None,
            help='log level (default: %s)' % self.settings['LOG_LEVEL'])
        group.add_option('--nolog', action='store_true',
            help='disable logging completely')
        group.add_option('--profile', metavar='FILE', default=None,
            help='write python cProfile stats to FILE')
        group.add_option('--pidfile', metavar='FILE',
            help='write process ID to FILE')
        group.add_option('-s', '--set', action='append', default=[], metavar='NAME=VALUE',
            help='set/override setting (may be repeated)')
        group.add_option('--pdb', action='store_true', help='enable pdb on failure')
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.linkextractors import LinkExtractor
    
            spider_loader = self.crawler_process.spider_loader
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
            help='List available templates')
        parser.add_option('-e', '--edit', dest='edit', action='store_true',
            help='Edit spider after creating it')
        parser.add_option('-d', '--dump', dest='dump', metavar='TEMPLATE',
            help='Dump template to standard output')
        parser.add_option('-t', '--template', dest='template', default='basic',
            help='Uses a custom template.')
        parser.add_option('--force', dest='force', action='store_true',
            help='If the spider already exists, overwrite it with the template')
    
        def start_parsing(self, url, opts):
        self.crawler_process.crawl(self.spidercls, **opts.spargs)
        self.pcrawler = list(self.crawler_process.crawlers)[0]
        self.crawler_process.start()
    
        def test_raise(self):
        def f(p):
            raise Exception()
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident),
                              ])
    
    # There's no reliable cross-platform way of checking locale alias
# lists, so the only way of knowing which of these locales will work
# is to try them with locale.setlocale(). We do that in a subprocess
# in setUpModule() below to avoid altering the locale of the test runner.
#
# If the relevant locale module attributes exist, and we're not on a platform
# where we expect it to always succeed, we also check that
# `locale.nl_langinfo(locale.CODESET)` works, as if it fails, the interpreter
# will skip locale coercion for that particular target locale
_check_nl_langinfo_CODESET = bool(
    sys.platform not in ('darwin', 'linux') and
    hasattr(locale, 'nl_langinfo') and
    hasattr(locale, 'CODESET')
)
    
        def test_init_global_config(self):
        config = {
            'program_name': './globalvar',
            'site_import': 0,
            'bytes_warning': 1,
            'inspect': 1,
            'interactive': 1,
            'optimization_level': 2,
            'write_bytecode': 0,
            'verbose': 1,
            'quiet': 1,
            'buffered_stdio': 0,
    }
    
    # Now add the related image to the html part.
with open('roasted-asparagus.jpg', 'rb') as img:
    msg.get_payload()[1].add_related(img.read(), 'image', 'jpeg',
                                     cid=asparagus_cid)
    
    #
# Functions referenced by tasks
#
    
            _LOGGER.info('Request successful')
        return True

    
    
class MySensorsDeviceScanner(mysensors.device.MySensorsDevice):
    '''Represent a MySensors scanner.'''
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.nmap_tracker/
'''
from datetime import timedelta
import logging
import re
import subprocess
from collections import namedtuple
    
        url = '/description.xml'
    name = 'description:xml'
    requires_auth = False
    
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
    
        try:
      eq_( expected_vim_data, vim_data )
    except Exception:
      print( 'Expected:\n'{0}'\nwhen parsing:\n'{1}'\nBut found:\n'{2}''.format(
          expected_vim_data,
          completion_data,
          vim_data ) )
      raise
    
      # We don't want the requests to actually be sent to the server, just have it
  # return success.
  with patch( 'ycm.client.completer_available_request.'
              'CompleterAvailableRequest.PostDataToHandler',
              return_value = True ):
    with patch( 'ycm.client.completion_request.CompletionRequest.'
                'PostDataToHandlerAsync',
                return_value = MagicMock( return_value=True ) ):
    
      # This test simulates asynchronous diagnostic updates associated with a single
  # file (e.g. Translation Unit), but where the actual errors refer to other
  # open files and other non-open files. This is not strictly invalid, nor is it
  # completely normal, but it is supported and does work.
    
    DIR_OF_THIS_SCRIPT = p.dirname( p.abspath( __file__ ) )
DIR_OF_THIRD_PARTY = p.join( DIR_OF_THIS_SCRIPT, 'third_party' )
DIR_OF_YCMD_THIRD_PARTY = p.join( DIR_OF_THIRD_PARTY, 'ycmd', 'third_party' )