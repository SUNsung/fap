
        
        from utils import write_datasets
from synthetic_data_utils import add_alignment_projections, generate_data
from synthetic_data_utils import generate_rnn, get_train_n_valid_inds
from synthetic_data_utils import nparray_and_transpose
from synthetic_data_utils import spikify_data, gaussify_data, split_list_by_inds
import matplotlib
import matplotlib.pyplot as plt
import scipy.signal
    
    
def read_data(data_fname):
  ''' Read saved data in HDF5 format.
    
        probs_cache = os.path.join(self.log_dir, '{}.probs'.format(test_data_name))
    if os.path.exists(probs_cache):
      print('Reading cached result from {}'.format(probs_cache))
      with tf.gfile.Open(probs_cache, 'r') as f:
        probs = pkl.load(f)
    else:
      tf.reset_default_graph()
      self.sess = tf.Session()
      # Build the graph.
      saver = tf.train.import_meta_graph(
          os.path.join(self.log_dir, 'ckpt-best.meta'))
      saver.restore(self.sess, os.path.join(self.log_dir, 'ckpt-best'))
      print('Restored from {}'.format(self.log_dir))
      graph = tf.get_default_graph()
      self.tensors = dict(
          inputs_in=graph.get_tensor_by_name('test_inputs_in:0'),
          char_inputs_in=graph.get_tensor_by_name('test_char_inputs_in:0'),
          softmax_out=graph.get_tensor_by_name('SotaRNN_1/softmax_out:0'),
          states_init=graph.get_operation_by_name('SotaRNN_1/states_init'))
      self.shape = self.tensors['inputs_in'].shape.as_list()
    
      # Extract properties of the indices.
  num_batches = len(indices)
  shape = list(indices.shape)
  shape.append(vocab_size)
    
    
def create_dis_pretrain_op(hparams, dis_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.dis_pretrain_learning_rate)
    dis_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('dis')
    ]
    if FLAGS.dis_update_share_embedding and FLAGS.dis_share_embedding:
      shared_embedding = [
          v for v in tf.trainable_variables()
          if v.op.name == 'gen/decoder/rnn/embedding'
      ][0]
      dis_vars.append(shared_embedding)
    dis_grads = tf.gradients(dis_loss, dis_vars)
    dis_grads_clipped, _ = tf.clip_by_global_norm(dis_grads,
                                                  FLAGS.grad_clipping)
    dis_pretrain_op = optimizer.apply_gradients(
        zip(dis_grads_clipped, dis_vars), global_step=global_step)
    return dis_pretrain_op
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
            if self.crawler_process.bootstrap_failed:
            self.exitcode = 1

    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
    
    @implementer(IPolicyForHTTPS)
    class ScrapyClientContextFactory(BrowserLikePolicyForHTTPS):
        '''
        Non-peer-certificate verifying HTTPS context factory
    
        def _get_handler(self, scheme):
        '''Lazy-load the downloadhandler for a scheme
        only on the first request for that scheme.
        '''
        if scheme in self._handlers:
            return self._handlers[scheme]
        if scheme in self._notconfigured:
            return None
        if scheme not in self._schemes:
            self._notconfigured[scheme] = 'no handler available for that scheme'
            return None
    
        assert line_length(args.sourcefile) == line_length(args.targetfile)
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
    
def start_scanning(config, add_entities, client):
    '''Start a new flic client for scanning and connecting to new buttons.'''
    import pyflic
    
                    _LOGGER.debug(
                    'Sent metric %s: %s (tags: %s)', attribute, value, tags)
    
    
Device = namedtuple('Device', ['mac', 'ip', 'last_update'])
    
    
def _get_token(host, username, password):
    '''Get authentication token for the given host+username+password.'''
    url = 'http://{}/cgi-bin/luci/api/xqsystem/login'.format(host)
    data = {'username': username, 'password': password}
    try:
        res = requests.post(url, data=data, timeout=5)
    except requests.exceptions.Timeout:
        _LOGGER.exception('Connection to the router timed out')
        return
    if res.status_code == 200:
        try:
            result = res.json()
        except ValueError:
            # If JSON decoder could not parse the response
            _LOGGER.exception('Failed to parse response from mi router')
            return
        try:
            return result['token']
        except KeyError:
            error_message = 'Xiaomi token cannot be refreshed, response from '\
                            + 'url: [%s] \nwith parameter: [%s] \nwas: [%s]'
            _LOGGER.exception(error_message, url, data, result)
            return
    else:
        _LOGGER.error('Invalid response: [%s] at url: [%s] with data [%s]',
                      res, url, data)

    
    REQUIREMENTS = ['pizzapi==0.0.3']
    
    
def setup(hass, config):
    '''Set up the Dweet.io component.'''
    conf = config[DOMAIN]
    name = conf.get(CONF_NAME)
    whitelist = conf.get(CONF_WHITELIST)
    json_body = {}
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_API_KEY): cv.string,
        vol.Required(CONF_URL): cv.string,
        vol.Required(CONF_INPUTNODE): cv.positive_int,
        vol.Required(CONF_WHITELIST): cv.entity_ids,
        vol.Optional(CONF_SCAN_INTERVAL, default=30): cv.positive_int,
    }),
}, extra=vol.ALLOW_EXTRA)
    
        @core.callback
    def get(self, request):
        '''Handle a GET request.'''
        xml_template = '''<?xml version='1.0' encoding='UTF-8' ?>
<root xmlns='urn:schemas-upnp-org:device-1-0'>
<specVersion>
<major>1</major>
<minor>0</minor>
</specVersion>
<URLBase>http://{0}:{1}/</URLBase>
<device>
<deviceType>urn:schemas-upnp-org:device:Basic:1</deviceType>
<friendlyName>HASS Bridge ({0})</friendlyName>
<manufacturer>Royal Philips Electronics</manufacturer>
<manufacturerURL>http://www.philips.com</manufacturerURL>
<modelDescription>Philips hue Personal Wireless Lighting</modelDescription>
<modelName>Philips hue bridge 2015</modelName>
<modelNumber>BSB002</modelNumber>
<modelURL>http://www.meethue.com</modelURL>
<serialNumber>1234</serialNumber>
<UDN>uuid:2f402f80-da50-11e1-9b23-001788255acc</UDN>
</device>
</root>
'''
    
            def process(self, event):
            '''On Watcher event, fire HA event.'''
            _LOGGER.debug('process(%s)', event)
            if not event.is_directory:
                folder, file_name = os.path.split(event.src_path)
                self.hass.bus.fire(
                    DOMAIN, {
                        'event_type': event.event_type,
                        'path': event.src_path,
                        'file': file_name,
                        'folder': folder,
                        })
    
        await component.async_add_entities(graphs)