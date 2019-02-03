
        
            Args:
      dataset_name: The name of the dataset to grab the factors -> rates
      alignment matrices from.
      output_fname: The name of the file in which to save the generated
        samples.
    '''
    hps = self.hps
    batch_size = hps.batch_size
    
      T, N = vals_txn.shape
  if n_to_plot > N:
    n_to_plot = N
    
      # Build and run the model, for varying purposes.
  config = tf.ConfigProto(allow_soft_placement=True,
                          log_device_placement=False)
  if FLAGS.allow_gpu_growth:
    config.gpu_options.allow_growth = True
  sess = tf.Session(config=config)
  with sess.as_default():
    with tf.device(hps.device):
      if kind == 'train':
        train(hps, datasets)
      elif kind == 'posterior_sample_and_average':
        write_model_runs(hps, datasets, hps.output_filename_stem,
                         push_mean=False)
      elif kind == 'posterior_push_mean':
        write_model_runs(hps, datasets, hps.output_filename_stem,
                         push_mean=True)
      elif kind == 'prior_sample':
        write_model_samples(hps, datasets, hps.output_filename_stem)
      elif kind == 'write_model_params':
        write_model_parameters(hps, hps.output_filename_stem, datasets)
      else:
        assert False, ('Kind %s is not implemented. ' % kind)
    
      # generate data for trials
  data_e = []
  u_e = []
  outs_e = []
  for c in range(C):
    u_1xt, outs_1xt = get_data_batch(batch_size, ntimesteps, u_rng, FLAGS.u_std)
    
      if mat_init_value is None:
    stddev = alpha/np.sqrt(float(in_size))
    mat_init = tf.random_normal_initializer(0.0, stddev)
    
        # Loop through the 2D matrix of word_patches and score each.
    for i, row in enumerate(word_patches):
      print('Reset RNN states.')
      self.reset()  # reset states before processing each row.
      row_probs = np.zeros([batch_size, 0])
      for j, word_patch in enumerate(row):
        print('Processing patch '
              '({}, {}) / ({}, {})'.format(i+1, j+1, nrow, ncol))
        patch_probs = (self._score(word_patch) if word_patch else
                       np.zeros([batch_size, num_timesteps]))
        row_probs = np.concatenate([row_probs, patch_probs], 1)
      probs = np.concatenate([probs, row_probs], 0)
    return probs
    
          for n in xrange(FLAGS.number_epochs):
        print('Epoch number: %d' % n)
        # print('Percent done: %.2f' % float(n) / float(FLAGS.number_epochs))
        iterator = get_iterator(data)
        for x, y, _ in iterator:
          if FLAGS.eval_language_model:
            is_present_rate = 0.
          else:
            is_present_rate = FLAGS.is_present_rate
          tf.logging.info(
              'Evaluating on is_present_rate=%.3f.' % is_present_rate)
    
      # Unstack Tensors into lists.
  rewards_list = tf.unstack(rewards, axis=1)
  log_probs_list = tf.unstack(log_probs, axis=1)
  missing = 1. - tf.cast(present, tf.float32)
  missing_list = tf.unstack(missing, axis=1)
    
    
def dis_bwd_bidirectional(hparams):
  '''Returns the *backward* PTB Variable name to MaskGAN Variable dictionary
  mapping.  This is a highly restrictive function just for testing. This is for
  the bidirectional_zaremba discriminator.
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        state=dict(required=True, choices=['present', 'absent']),
        name=dict(required=True),
        description=dict(required=False),
        subnets=dict(required=False, type='list'),
    )
    )
    module = AnsibleModule(argument_spec=argument_spec)
    
    EXAMPLES = '''
- name: creating a new vertica role
  vertica_role: name=role_name db=db_name state=present
    
    import traceback
    
    Linkfix - a companion to sphinx's linkcheck builder.
    
    # Declare top-level shortcuts
from scrapy.spiders import Spider
from scrapy.http import Request, FormRequest
from scrapy.selector import Selector
from scrapy.item import Item, Field
    
            parser.add_option_group(group)
    
        def __init__(self, crawler, spider_closed_callback):
        self.crawler = crawler
        self.settings = crawler.settings
        self.signals = crawler.signals
        self.logformatter = crawler.logformatter
        self.slot = None
        self.spider = None
        self.running = False
        self.paused = False
        self.scheduler_cls = load_object(self.settings['SCHEDULER'])
        downloader_cls = load_object(self.settings['DOWNLOADER'])
        self.downloader = downloader_cls(crawler)
        self.scraper = Scraper(crawler)
        self._spider_closed_callback = spider_closed_callback
    
    # Theme options are theme-specific and customize the look and feel of a theme
# further.  For a list of options available for each theme, see the
# documentation.
#
html_theme_options = {
    'logo': 'logo.png',
    'logo_name': PROJECT_NAME,
    'description': PROJECT_LONG_DESCRIPTION,
    'github_user': PROJECT_GITHUB_USERNAME,
    'github_repo': PROJECT_GITHUB_REPOSITORY,
    'github_type': 'star',
    'github_banner': True,
    'travis_button': True,
    'touch_icon': 'logo-apple.png',
    # 'fixed_sidebar': True, # Re-enable when we have more content
}
    
        return True

    
            self.hosts = config[CONF_HOSTS]
        self.exclude = config[CONF_EXCLUDE]
        minutes = config[CONF_HOME_INTERVAL]
        self._options = config[CONF_OPTIONS]
        self.home_interval = timedelta(minutes=minutes)
    
    from aiohttp.hdrs import CONTENT_TYPE
import requests
import voluptuous as vol
    
        def send_data(url, apikey, node, payload):
        '''Send payload data to Emoncms.'''
        try:
            fullurl = '{}/input/post.json'.format(url)
            data = {'apikey': apikey, 'data': payload}
            parameters = {'node': node}
            req = requests.post(
                fullurl, params=parameters, data=data, allow_redirects=True,
                timeout=5)
    
    
class DescriptionXmlView(HomeAssistantView):
    '''Handles requests for the description.xml file.'''
    
        def __init__(self, path, patterns, hass):
        '''Initialise the watchdog observer.'''
        from watchdog.observers import Observer
        self._observer = Observer()
        self._observer.schedule(
            create_event_handler(patterns, hass),
            path,
            recursive=True)
        hass.bus.listen_once(EVENT_HOMEASSISTANT_START, self.startup)
        hass.bus.listen_once(EVENT_HOMEASSISTANT_STOP, self.shutdown)
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/lirc/
'''
# pylint: disable=no-member
import threading
import time
import logging
    
    CONF_EXCLUDE_NAMES = 'exclude_names'
CONF_INCLUDE_SWITCHES = 'include_switches'
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/mycroft
'''
    
        def __init__(self, token, default_room):
        '''Initialize the service.'''
        from ciscosparkapi import CiscoSparkAPI
        self._default_room = default_room
        self._token = token
        self._spark = CiscoSparkAPI(access_token=self._token)