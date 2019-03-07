
        
            # Variational Lower Bound on posterior, p(z|x), plus reconstruction cost.
    # KL and reconstruction costs are normalized only by batch size, not by
    # dimension, or by time steps.
    kl_cost_g0_b = tf.zeros_like(batch_size, dtype=tf.float32)
    kl_cost_co_b = tf.zeros_like(batch_size, dtype=tf.float32)
    self.kl_cost = tf.constant(0.0) # VAE KL cost
    self.recon_cost = tf.constant(0.0) # VAE reconstruction cost
    self.nll_bound_vae = tf.constant(0.0)
    self.nll_bound_iwae = tf.constant(0.0) # for eval with IWAE cost.
    if kind in ['train', 'posterior_sample_and_average', 'posterior_push_mean']:
      kl_cost_g0_b = 0.0
      kl_cost_co_b = 0.0
      if ic_dim > 0:
        g0_priors = [self.prior_zs_g0]
        g0_posts = [self.posterior_zs_g0]
        kl_cost_g0_b = KLCost_GaussianGaussian(g0_posts, g0_priors).kl_cost_b
        kl_cost_g0_b = hps.kl_ic_weight * kl_cost_g0_b
      if co_dim > 0:
        kl_cost_co_b = \
            KLCost_GaussianGaussianProcessSampled(
                posterior_zs_co, prior_zs_ar_con).kl_cost_b
        kl_cost_co_b = hps.kl_co_weight * kl_cost_co_b
    
    
def all_plot(d, full_name='', exclude='', nspaces=0):
  '''Recursively plot all the LFADS model parameters in the nested
  dictionary.'''
  for k, v in d.iteritems():
    this_name = full_name+'/'+k
    if isinstance(v, dict):
      all_plot(v, full_name=this_name, exclude=exclude, nspaces=nspaces+4)
    else:
      if exclude == '' or exclude not in this_name:
        _plot_item(v, name=k, full_name=full_name+'/'+k, nspaces=nspaces+4)
    
      Returns:
    The dataset structures, with the field alignment_matrix_cxf added.
    This is # channels x npcs dimension
'''
  nchannels_all = 0
  channel_idxs = {}
  conditions_all = {}
  nconditions_all = 0
  for name, dataset in datasets.items():
    cidxs = np.where(dataset['P_sxn'])[1] # non-zero entries in columns
    channel_idxs[name] = [cidxs[0], cidxs[-1]+1]
    nchannels_all += cidxs[-1]+1 - cidxs[0]
    conditions_all[name] = np.unique(dataset['condition_labels_train'])
    
      if mat_init_value is not None and mat_init_value.shape != (in_size, out_size):
    raise ValueError(
        'Provided mat_init_value must have shape [%d, %d].'%(in_size, out_size))
  if bias_init_value is not None and bias_init_value.shape != (1,out_size):
    raise ValueError(
        'Provided bias_init_value must have shape [1,%d].'%(out_size,))
    
        sys.stderr.write('Eval Step: %d, Average Perplexity: %f.\n' %
                     (i, perplexity))
    
        # Add the single LM prediction.
    probs = single_lm.assign_probs(self.sentences, self.test_data_name)
    self.all_probs.append(probs)
    print('Done adding {}'.format(model_name))
    
      mask1_end, mask2_end = [], []
  while sent1[-1] == sent2[-1]:
    if (len(sent1) == 1) or (len(sent2) == 1):
      break
    sent1 = sent1[:-1]
    sent2 = sent2[:-1]
    mask1_end = [0.] + mask1_end
    mask2_end = [0.] + mask2_end
    
      train_path = os.path.join(data_path, 'train_lm.tfrecords')
  valid_path = os.path.join(data_path, 'test_lm.tfrecords')
    
    
def create_critic_train_op(hparams, critic_loss, global_step):
  '''Create Discriminator train op.'''
  with tf.name_scope('train_critic'):
    critic_optimizer = tf.train.AdamOptimizer(hparams.critic_learning_rate)
    output_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('critic')
    ]
    
        ## Discriminator Models.
    if (FLAGS.discriminator_model == 'rnn_nas' or
        FLAGS.discriminator_model == 'rnn_zaremba' or
        FLAGS.discriminator_model == 'rnn_vd' or
        FLAGS.discriminator_model == 'cnn'):
      load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
      print('Restoring Discriminator from %s.' % load_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % load_ckpt)
      dis_init_saver = init_savers['dis_init_saver']
      dis_init_saver.restore(sess, load_ckpt)
    
      ## Attention.
  if FLAGS.attention_option is not None:
    decoder_attention_keys = [
        v for v in tf.trainable_variables()
        if v.op.name == 'dis/decoder/attention_keys/weights'
    ][0]
    decoder_attention_construct_weights = [
        v for v in tf.trainable_variables()
        if v.op.name == 'dis/decoder/rnn/attention_construct/weights'
    ][0]
    
    
def load_data(label_mode='fine'):
    '''Loads CIFAR100 dataset.
    
    
def test_preprocess_input():
    # Test image batch with float and int image input
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int32')
    assert utils.preprocess_input(x).shape == x.shape
    assert utils.preprocess_input(xint).shape == xint.shape
    
        if isinstance(gpus, (list, tuple)):
        if len(gpus) <= 1:
            raise ValueError('For multi-gpu usage to be effective, '
                             'call `multi_gpu_model` with `len(gpus) >= 2`. '
                             'Received: `gpus=%s`' % gpus)
        num_gpus = len(gpus)
        target_gpu_ids = gpus
    else:
        if gpus <= 1:
            raise ValueError('For multi-gpu usage to be effective, '
                             'call `multi_gpu_model` with `gpus >= 2`. '
                             'Received: `gpus=%d`' % gpus)
        num_gpus = gpus
        target_gpu_ids = range(num_gpus)
    
        def reset_states(self, states=None):
        if not self.stateful:
            raise AttributeError('Layer must be stateful.')
        input_shape = self.input_spec[0].shape
        state_shape = self.compute_output_shape(input_shape)
        if self.return_state:
            state_shape = state_shape[0]
        if self.return_sequences:
            state_shape = state_shape[:1] + state_shape[2:]
        if None in state_shape:
            raise ValueError('If a RNN is stateful, it needs to know '
                             'its batch size. Specify the batch size '
                             'of your input tensors: \n'
                             '- If using a Sequential model, '
                             'specify the batch size by passing '
                             'a `batch_input_shape` '
                             'argument to your first layer.\n'
                             '- If using the functional API, specify '
                             'the time dimension by passing a '
                             '`batch_shape` argument to your Input layer.\n'
                             'The same thing goes for the number of rows '
                             'and columns.')
    
    from __future__ import print_function
import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Dropout, Flatten
from keras.layers import Conv2D, MaxPooling2D
from keras import backend as K
    
    x_train = x_train.reshape(x_train.shape[0], -1, 1)
x_test = x_test.reshape(x_test.shape[0], -1, 1)
x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    from __future__ import print_function
    
    score_model2 = model2.evaluate(x_test,
                               y_test,
                               batch_size=batch_size,
                               verbose=1)
    
        # Returns
        List of shape tuples (or single tuple), one tuple per input.
    '''
    input_tensors = to_list(input_tensors)
    shapes = []
    for x in input_tensors:
        try:
            shapes.append(K.int_shape(x))
        except TypeError:
            shapes.append(None)
    return unpack_singleton(shapes)

    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
        if title is None:
      title = url
    
    
class Funshion(VideoExtractor):
    name = 'funshion'
    stream_types = [
        {'id': 'sdvd'},
        {'id': 'sdvd_h265'},
        {'id': 'hd'},
        {'id': 'hd_h265'},
        {'id': 'dvd'},
        {'id': 'dvd_h265'},
        {'id': 'tv'},
        {'id': 'tv_h265'}
    ]
    a_mobile_url = 'http://m.fun.tv/implay/?mid=302555'
    video_ep = 'http://pv.funshion.com/v7/video/play/?id={}&cl=mweb&uc=111'
    media_ep = 'http://pm.funshion.com/v7/media/play/?id={}&cl=mweb&uc=111'
    coeff = None
    
            docid = r1('/file/d/([^/]+)', url)
    
            self.flashvars = dict(IService=isvc, uuid=uuid, other=other, v=player_time)
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
        def build_floor(self):
        raise NotImplementedError
    
        return _lazy_property
    
    '''
*What is this pattern about?
This pattern is used when creating an object is costly (and they are
created frequently) but only a few are used at a time. With a Pool we
can manage those instances we have as of now by caching them. Now it
is possible to skip the costly creation of an object if one is
available in the pool.
A pool allows to 'check out' an inactive object and then to return it.
If none are available the pool creates one to provide without wait.
    
        d = prototype.clone()
    a = prototype.clone(value='a-value', category='a')
    b = prototype.clone(value='b-value', is_checked=True)
    dispatcher.register_object('objecta', a)
    dispatcher.register_object('objectb', b)
    dispatcher.register_object('default', d)
    print([{n: p.value} for n, p in dispatcher.get_objects().items()])
    
        def test_c_observers_shall_be_detachable(cls):
        cls.s.detach(cls.dec_obs)
        # hex viewer shall be remaining if dec viewer is detached first
        cls.assertEqual(isinstance(cls.s._observers[0], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.detach(cls.hex_obs)
        cls.assertEqual(len(cls.s._observers), 0)
    
        def test_initial_am_station(self):
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
        def test_cat_eng_localization(self):
        self.assertEqual(self.e.get('cat'), 'cat')
    
        def test_relatives_not_in_properties(self):
        self.assertNotIn('relatives', self.John.__dict__)
    
    
class TestDispatcherFeatures(unittest.TestCase):
    def setUp(self):
        self.dispatcher = PrototypeDispatcher()
        self.prototype = Prototype()
        c = self.prototype.clone()
        a = self.prototype.clone(value='a-value', ext_value='E')
        b = self.prototype.clone(value='b-value', diff=True)
        self.dispatcher.register_object('A', a)
        self.dispatcher.register_object('B', b)
        self.dispatcher.register_object('C', c)