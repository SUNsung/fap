
        
        rates_train = nparray_and_transpose(rates_train)
rates_valid = nparray_and_transpose(rates_valid)
spikes_train = nparray_and_transpose(spikes_train)
spikes_valid = nparray_and_transpose(spikes_valid)
    
      def id_to_word(self, cur_id):
    if cur_id < self.size:
      return self._id_to_word[cur_id]
    return 'ERROR'
    
        # Add 'lstm/lstm_0/control_dependency' if you want to dump previous layer
    # LSTM.
    lstm_emb = sess.run(t['lstm/lstm_1/control_dependency'],
                        feed_dict={t['char_inputs_in']: char_ids_inputs,
                                   t['inputs_in']: inputs,
                                   t['targets_in']: targets,
                                   t['target_weights_in']: weights})
    
          if len(example) > num_steps:
        final_x = example[:num_steps]
        final_y = example[1:(num_steps + 1)]
        w[i] = 1
    
    
def write_unmasked_log(log, id_to_word, sequence_eval):
  '''Helper function for logging evaluated sequences without mask.'''
  indices_arr = np.asarray(sequence_eval)
  samples = helper.convert_to_human_readable(id_to_word, indices_arr,
                                             FLAGS.batch_size)
  for sample in samples:
    log.write(sample + '\n')
  log.flush()
  return samples
    
    
def convert_to_indices(sequences):
  '''Convert a list of size [batch_size, sequence_length, vocab_size] to
  a list of size [batch_size, sequence_length] where the vocab element is
  denoted by the index.
  '''
  batch_of_indices = []
    
          avg_baseline = tf.reduce_sum(
          baseline_missing_list[t] * baseline_list[t], keep_dims=True) / (
              num_missing + eps)
      baseline = tf.tile(avg_baseline, multiples=[FLAGS.batch_size / 2])
      baselines.append(baseline)
    
    
def create_critic_train_op(hparams, critic_loss, global_step):
  '''Create Discriminator train op.'''
  with tf.name_scope('train_critic'):
    critic_optimizer = tf.train.AdamOptimizer(hparams.critic_learning_rate)
    output_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('critic')
    ]
    
      else:
    raise NotImplementedError
    
      if FLAGS.dis_share_embedding:
    assert hparams.dis_rnn_size == hparams.gen_rnn_size, (
        'If you wish to share Discriminator/Generator embeddings, they must be'
        ' same dimension.')
    with tf.variable_scope('gen/rnn', reuse=True):
      embedding = tf.get_variable('embedding',
                                  [FLAGS.vocab_size, hparams.gen_rnn_size])
    
    from ..common import *
    
        ep = 'http://vdn.apps.cntv.cn/api/getHttpVideoInfo.do?pid={}'
    
    def rebuilt_url(url):
    path = urllib.parse.urlparse(url).path
    aid = path.split('/')[-1].split('_')[0]
    return 'http://www.dailymotion.com/embed/video/{}?autoplay=1'.format(aid)
    
    '''
refer to http://open.youku.com/tools
'''
youku_embed_patterns = [ 'youku\.com/v_show/id_([a-zA-Z0-9=]+)',
                         'player\.youku\.com/player\.php/sid/([a-zA-Z0-9=]+)/v\.swf',
                         'loader\.swf\?VideoIDS=([a-zA-Z0-9=]+)',
                         'player\.youku\.com/embed/([a-zA-Z0-9=]+)',
                         'YKU.Player\(\'[a-zA-Z0-9]+\',{ client_id: \'[a-zA-Z0-9]+\', vid: \'([a-zA-Z0-9]+)\''
                       ]
    }
    
    def giphy_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    
            request.install_opener(request.build_opener(request.HTTPCookieProcessor()))
    
            # Restart scan wizard
        start_scanning(config, add_entities, client)
    
            try:
            data = [
                ('user', self._username),
                (self._type, self._password),
            ]
            res = requests.post(self._loginurl, data=data, timeout=10)
        except requests.exceptions.Timeout:
            _LOGGER.error(
                'Connection to the router timed out at URL %s', self._url)
            return False
        if res.status_code != 200:
            _LOGGER.error(
                'Connection failed with http code %s', res.status_code)
            return False
        try:
            self._userid = res.cookies['userid']
            return True
        except KeyError:
            _LOGGER.error('Failed to log in to router')
            return False
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return a THOMSON scanner.'''
    scanner = ThomsonDeviceScanner(config[DOMAIN])
    
        def __init__(self, token, default_room):
        '''Initialize the service.'''
        from ciscosparkapi import CiscoSparkAPI
        self._default_room = default_room
        self._token = token
        self._spark = CiscoSparkAPI(access_token=self._token)
    
            resp = requests.get(BASE_API_URL, params=data, timeout=5)
        if (resp.status_code != 200) or (resp.status_code != 201):
            _LOGGER.error('Error %s : %s', resp.status_code, resp.text)

    
    For more details about this platform, please refer to the documentation
https://home-assistant.io/components/demo/
'''
from homeassistant.components.notify import BaseNotificationService
    
            if data is not None:
            body_message.update(data)
            # Only one of text or attachment can be specified
            if 'attachment' in body_message:
                body_message.pop('text')
    
            _LOGGER.debug('Attempting to call Flock at %s', self._url)
    
    from homeassistant.components.notify import (
    PLATFORM_SCHEMA, BaseNotificationService)
from homeassistant.const import CONF_ACCESS_TOKEN, CONF_USERNAME
import homeassistant.helpers.config_validation as cv
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_ROOM): vol.Coerce(int),
    vol.Required(CONF_TOKEN): cv.string,
    vol.Optional(CONF_COLOR, default=DEFAULT_COLOR): vol.In(VALID_COLORS),
    vol.Optional(CONF_FORMAT, default=DEFAULT_FORMAT): vol.In(VALID_FORMATS),
    vol.Optional(CONF_HOST, default=DEFAULT_HOST): cv.string,
    vol.Optional(CONF_NOTIFY, default=DEFAULT_NOTIFY): cv.boolean,
})
    
    from homeassistant.components.notify import (
    BaseNotificationService, PLATFORM_SCHEMA)
from homeassistant.const import CONF_API_KEY, CONF_DEVICE
from homeassistant.helpers import config_validation as cv
    
    
if __name__ == '__main__':
    sys.exit(main())

    
    ax = fig.add_axes((0.63 + 0.18, 0.1, 0.16, 0.8))
y = np.row_stack((fnx(), fnx(), fnx()))
x = np.arange(10)
y1, y2, y3 = fnx(), fnx(), fnx()
ax.stackplot(x, y1, y2, y3)
ax.set_xticks([])
ax.set_yticks([])
    
        def __call__(self, declarations_str, inherited=None):
        ''' the given declarations to atomic properties