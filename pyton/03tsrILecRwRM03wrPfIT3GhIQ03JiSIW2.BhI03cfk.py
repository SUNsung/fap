
        
            def remaining_cards(self):
        return len(self.cards) - self.deal_index
    
        def extract_year_month(self, timestamp):
        '''Return the year and month portions of the timestamp.'''
        ...
    
    
class UserGraphService(object):
    
        def _hash_function(self, key):
        return key % self.size
    
      # Print header
  header = empty_cell + ' '
  header += ''.join([' %{0}s '.format(columnwidth) % label
                     for label in short_labels])
    
      # Convert from figure to an numpy array width x height x 3 (last for RGB)
  f.canvas.draw()
  data = np.fromstring(f.canvas.tostring_rgb(), dtype=np.uint8, sep='')
  data_wxhx3 = data.reshape(f.canvas.get_width_height()[::-1] + (3,))
  plt.close()
    
      Args:
    flags: From tf.app.flags
    
      def encode_chars(self, sentence):
    chars_ids = [self.word_to_char_ids(cur_word)
                 for cur_word in sentence.split()]
    return np.vstack([self.bos_chars] + chars_ids + [self.eos_chars])
    
    
_SPECIAL_CHAR_MAP = {
    '\xe2\x80\x98': '\'',
    '\xe2\x80\x99': '\'',
    '\xe2\x80\x9c': ''',
    '\xe2\x80\x9d': ''',
    '\xe2\x80\x93': '-',
    '\xe2\x80\x94': '-',
    '\xe2\x88\x92': '-',
    '\xce\x84': '\'',
    '\xc2\xb4': '\'',
    '`': '\''
}
    
      if model == 'dis':
    assert FLAGS.discriminator_model == 'rnn_nas'
    assert hparams.dis_num_layers == 2
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
        '''
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
    
@mock.patch('httpie.core.get_response')
def test_timeout(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
        if args.auth_plugin:
        session.auth = {
            'type': args.auth_plugin.auth_type,
            'raw_auth': args.auth_plugin.raw_auth,
        }
    elif session.auth:
        kwargs['auth'] = session.auth
    
        if not opts and not args:
        # Display help.
        print(_help)
        # Enter GUI mode.
        #from .gui import gui_main
        #gui_main()
    else:
        conf = {}
        for opt, arg in opts:
            if opt in ('-h', '--help'):
                # Display help.
                print(_help)
    
    from ..common import *
    
    site_info = 'Dailymotion.com'
download = dailymotion_download
download_playlist = playlist_not_supported('dailymotion')

    
    site_info = 'FC2Video'
download = fc2video_download
download_playlist = playlist_not_supported('fc2video')

    
    
    {
    {pattern_inline_title = r'<title>([^<]*)</title>'
pattern_inline_api_key = r'api\.site_key\s*=\s*'([^']+)''
pattern_inline_img_url = r''url':'([^']+)','key':'[^']+'}}'
pattern_inline_NSID = r''nsid'\s*:\s*'([^']+)''
pattern_inline_video_mark = r'('mediaType':'video')'
    
            # cookie handler
        ssl_context = request.HTTPSHandler(
            context=ssl.SSLContext(ssl.PROTOCOL_TLSv1))
        cookie_handler = request.HTTPCookieProcessor()
        opener = request.build_opener(ssl_context, cookie_handler)
        opener.addheaders = [
            ('Referer', self.url),
            ('Cookie',
             'CloudFront-Policy=%s;CloudFront-Signature=%s;CloudFront-Key-Pair-Id=%s' % (scp, scs, sck))
        ]
        request.install_opener(opener)
    
    from ..utils import get_w, get_shape
from ..initializers import constant
    
        Args:
        x:
        c_embed_size:
        share_cnn_weights:
        name:
        reuse: