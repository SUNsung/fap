
        
          def __init__(self, batch_size, z_size, mean, logvar):
    '''Create a diagonal gaussian distribution.
    
      Args:
    hps: The dictionary of hyperparameters.
    datasets: A dictionary of data dictionaries.  The dataset dict is simply a
      name(string)-> data dictionary mapping (See top of lfads.py).
    output_fname (optional): output filename stem to write the model runs.
    push_mean: if False (default), generates batch_size samples for each trial
      and averages the results. if True, runs each trial once without noise,
      pushing the posterior mean initial conditions and control inputs through
      the trained model. False is used for posterior_sample_and_average, True
      is used for posterior_push_mean.
  '''
  model = build_model(hps, kind=hps.kind, datasets=datasets)
  model.write_model_runs(datasets, output_fname, push_mean)
    
    
def generate_rnn(rng, N, g, tau, dt, max_firing_rate):
  '''Create a (vanilla) RNN with a bunch of hyper parameters for generating
chaotic data.
  Args:
    rng: numpy random number generator
    N: number of hidden units
    g: scaling of recurrent weight matrix in g W, with W ~ N(0,1/N)
    tau: time scale of individual unit dynamics
    dt: time step for equation updates
    max_firing_rate: how to resecale the -1,1 firing rates
  Returns:
    the dictionary of these parameters, plus some others.
'''
  rnn = {}
  rnn['N'] = N
  rnn['W'] = rng.randn(N,N)/np.sqrt(N)
  rnn['Bin'] = rng.randn(N)/np.sqrt(1.0)
  rnn['Bin2'] = rng.randn(N)/np.sqrt(1.0)
  rnn['b'] = np.zeros(N)
  rnn['g'] = g
  rnn['tau'] = tau
  rnn['dt'] = dt
  rnn['max_firing_rate'] = max_firing_rate
  mfr = rnn['max_firing_rate']                   # spikes / sec
  nbins_per_sec = 1.0/rnn['dt']                  # bins / sec
  # Used for plotting in LFADS
  rnn['conversion_factor'] = mfr / nbins_per_sec # spikes / bin
  return rnn
    
      Args:
    data_path: The path to the save directory.
    data_fname_stem: The filename stem of the file in which to write the data.
    dataset_dict:  The dictionary of datasets. The keys are strings
      and the values data dictionaries (str -> numpy arrays) associations.
    compression (optional): The compression to use for h5py (disabled by
      default because the library borks on scalars, otherwise try 'gzip').
  '''
    
      if FLAGS.mode == 'eval':
    dataset = data_utils.LM1BDataset(FLAGS.input_data, vocab)
    _EvalModel(dataset)
  elif FLAGS.mode == 'sample':
    _SampleModel(FLAGS.prefix, vocab)
  elif FLAGS.mode == 'dump_emb':
    _DumpEmb(vocab)
  elif FLAGS.mode == 'dump_lstm_emb':
    _DumpSentenceEmbedding(FLAGS.sentence, vocab)
  else:
    raise Exception('Mode not supported.')
    
          # Generator statefulness over the epoch.
      [gen_initial_state_eval, fake_gen_initial_state_eval] = sess.run(
          [model.eval_initial_state, model.fake_gen_initial_state])
    
    
def create_masked_cross_entropy_loss(targets, present, logits):
  '''Calculate the cross entropy loss matrices for the masked tokens.'''
  cross_entropy_losses = losses.cross_entropy_loss_matrix(targets, logits)
    
          elif FLAGS.generator_model.startswith('seq2seq'):
        load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
        print('Restoring Generator from %s.' % load_ckpt)
        tf.logging.info('Restoring Generator from %s.' % load_ckpt)
        gen_encoder_init_saver = init_savers['gen_encoder_init_saver']
        gen_decoder_init_saver = init_savers['gen_decoder_init_saver']
        gen_encoder_init_saver.restore(sess, load_ckpt)
        gen_decoder_init_saver.restore(sess, load_ckpt)
    
        @property
    def headers(self):
        '''Return a `str` with the message's headers.'''
        raise NotImplementedError()
    
    
class Formatting(object):
    '''A delegate class that invokes the actual processors.'''
    
        def unregister(self, plugin):
        self._plugins.remove(plugin)
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            BASIC_AUTH_HEADER_VALUE,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
        def test_upload_ok(self, httpbin):
        r = http('--form', '--verbose', 'POST', httpbin.url + '/post',
                 'test-file@%s' % FILE_PATH_ARG, 'foo=bar')
        assert HTTP_OK in r
        assert 'Content-Disposition: form-data; name='foo'' in r
        assert 'Content-Disposition: form-data; name='test-file';' \
               ' filename='%s'' % os.path.basename(FILE_PATH) in r
        assert FILE_CONTENT in r
        assert ''foo': 'bar'' in r
        assert 'Content-Type: text/plain' in r
    
        inputs = Input(shape=input_shape)
    # v2 performs Conv2D with BN-ReLU on input before splitting into 2 paths
    x = resnet_layer(inputs=inputs,
                     num_filters=num_filters_in,
                     conv_first=True)
    
    
def create_model(kernel_regularizer=None, activity_regularizer=None):
    model = Sequential()
    model.add(Dense(num_classes,
                    kernel_regularizer=kernel_regularizer,
                    activity_regularizer=activity_regularizer,
                    input_shape=(data_dim,)))
    return model
    
            self.kernel = self.add_weight(shape=kernel_shape,
                                      initializer=self.kernel_initializer,
                                      name='kernel',
                                      regularizer=self.kernel_regularizer,
                                      constraint=self.kernel_constraint)
        self.recurrent_kernel = self.add_weight(
            shape=recurrent_kernel_shape,
            initializer=self.recurrent_initializer,
            name='recurrent_kernel',
            regularizer=self.recurrent_regularizer,
            constraint=self.recurrent_constraint)
        if self.use_bias:
            if self.unit_forget_bias:
                def bias_initializer(_, *args, **kwargs):
                    return K.concatenate([
                        self.bias_initializer((self.filters,), *args, **kwargs),
                        initializers.Ones()((self.filters,), *args, **kwargs),
                        self.bias_initializer((self.filters * 2,), *args, **kwargs),
                    ])
            else:
                bias_initializer = self.bias_initializer
            self.bias = self.add_weight(shape=(self.filters * 4,),
                                        name='bias',
                                        initializer=bias_initializer,
                                        regularizer=self.bias_regularizer,
                                        constraint=self.bias_constraint)
        else:
            self.bias = None
    
        # Whereas if you specify the input shape, the model gets built continuously
    # as you are adding layers:
    model = Sequential()
    model.add(Dense(32, input_shape=(500,)))
    model.add(Dense(32))
    model.weights  # returns list of length 4
    
        # Cut to a 40x40 window
    noisy_movies = noisy_movies[::, ::, 20:60, 20:60, ::]
    shifted_movies = shifted_movies[::, ::, 20:60, 20:60, ::]
    noisy_movies[noisy_movies >= 1] = 1
    shifted_movies[shifted_movies >= 1] = 1
    return noisy_movies, shifted_movies
    
        def ensure_present(self, enabled=True):
        '''Ensures the rule and targets are present and synced'''
        rule_description = self.rule.describe()
        if rule_description:
            # Rule exists so update rule, targets and state
            self._sync_rule(enabled)
            self._sync_targets()
            self._sync_state(enabled)
        else:
            # Rule does not exist, so create new rule and targets
            self._create(enabled)
    
    
RETURN = '''
addresses:
  description: Properties of all Elastic IP addresses matching the provided filters. Each element is a dict with all the information related to an EIP.
  returned: on success
  type: list
  sample: [{
        'allocation_id': 'eipalloc-64de1b01',
        'association_id': 'eipassoc-0fe9ce90d6e983e97',
        'domain': 'vpc',
        'instance_id': 'i-01020cfeb25b0c84f',
        'network_interface_id': 'eni-02fdeadfd4beef9323b',
        'network_interface_owner_id': '0123456789',
        'private_ip_address': '10.0.0.1',
        'public_ip': '54.81.104.1',
        'tags': {
            'Name': 'test-vm-54.81.104.1'
        }
    }]
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    
def chunks(l, n):
    '''Yield successive n-sized chunks from l.'''
    ''' https://stackoverflow.com/a/312464 '''
    for i in range(0, len(l), n):
        yield l[i:i + n]
    
        lambda_facts = dict()
    
                while wait_timeout > time.time() and resource['ClusterStatus'] != 'available':
                time.sleep(5)
                if wait_timeout <= time.time():
                    module.fail_json(msg='Timeout waiting for resource %s' % resource.id)
    
                    try:
                    bucket_website.put(WebsiteConfiguration=_create_website_configuration(suffix, error_key, redirect_all_requests))
                    changed = True
                except (ClientError, ParamValidationError) as e:
                    module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
        except KeyError as e:
            try:
                bucket_website.put(WebsiteConfiguration=_create_website_configuration(suffix, error_key, redirect_all_requests))
                changed = True
            except (ClientError, ParamValidationError) as e:
                module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
        except ValueError as e:
            module.fail_json(msg=str(e))
    
    
def delete_global_forwarding_rule(client, name, project_id):
    '''
    Delete a Global Forwarding Rule.
    
                if res.h2:
                self.write_ip(ip, res.domain, res.handshake_time)
    
    - CommonToken: A basic and most commonly used Token implementation.
- ClassicToken: A Token object as used in ANTLR 2.x, used to %tree
  construction.
    
            return '[@%r,%r,<%r>%s,%r:%r]' % (self.index,
                                          txt,
                                          self.type,
                                          channelStr,
                                          self.line,
                                          self.charPositionInLine
                                          )
    
    
    bokecc_download_by_id = site.download_by_id

    
    from xml.etree import cElementTree as ET
from copy import copy
from ..common import *
#----------------------------------------------------------------------
def ckplayer_get_info_by_xml(ckinfo):
    '''str->dict
    Information for CKPlayer API content.'''
    e = ET.XML(ckinfo)
    video_dict = {'title': '',
                  #'duration': 0,
                  'links': [],
                  'size': 0,
                  'flashvars': '',}
    dictified = dictify(e)['ckplayer']
    if 'info' in dictified:
        if '_text' in dictified['info'][0]['title'][0]:  #title
            video_dict['title'] = dictified['info'][0]['title'][0]['_text'].strip()
    
    headers = {
    'DNT': '1',
    'Accept-Encoding': 'gzip, deflate, sdch, br',
    'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/49.0.2623.75 Safari/537.36',
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
    'Cache-Control': 'max-age=0',
    'Referer': 'http://www.dilidili.com/',
    'Connection': 'keep-alive',
    'Save-Data': 'on',
}
    
    recur_limit = 3
    
        type, ext, size = url_info(urls[0], True)
    size = urls_size(urls)
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
                if item.get(CONF_TEXT) is not None:
                if isinstance(item.get(CONF_TEXT), template.Template):
                    output[ATTR_MAIN_TEXT] = item[CONF_TEXT].async_render()
                else:
                    output[ATTR_MAIN_TEXT] = item.get(CONF_TEXT)
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_HOST, default=DEFAULT_HOST): cv.string,
        vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
        vol.Optional(CONF_PREFIX, default=DEFAULT_PREFIX): cv.string,
        vol.Optional(CONF_RATE, default=DEFAULT_RATE):
            vol.All(vol.Coerce(int), vol.Range(min=1)),
    }),
}, extra=vol.ALLOW_EXTRA)
    
    
def setup_scanner(hass, config, see, discovery_info=None):
    '''Set up the demo tracker.'''
    def offset():
        '''Return random offset.'''
        return (random.randrange(500, 2000)) / 2e5 * random.choice((-1, 1))
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.last_results = {}
    
            _LOGGER.info('Scanner initialized')
    
            _LOGGER.info('Scanner initialized')
    
        def _store_result(self, result):
        '''Extract and store the device list in self.last_results.'''
        self.last_results = []
        for device_entry in result:
            # Check if the device is marked as connected
            if int(device_entry['online']) == 1:
                self.last_results.append(device_entry['mac'])