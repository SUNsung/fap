
        
            # Correlation of inferred inputs cost.
    self.corr_cost = tf.constant(0.0)
    if hps.co_mean_corr_scale > 0.0:
      all_sum_corr = []
      for i in range(hps.co_dim):
        for j in range(i+1, hps.co_dim):
          sum_corr_ij = tf.constant(0.0)
          for t in range(num_steps):
            u_mean_t = posterior_zs_co[t].mean
            sum_corr_ij += u_mean_t[:,i]*u_mean_t[:,j]
          all_sum_corr.append(0.5 * tf.square(sum_corr_ij))
      self.corr_cost = tf.reduce_mean(all_sum_corr) # div by batch and by n*(n-1)/2 pairs
    
    def _plot_item(W, name, full_name, nspaces):
  plt.figure()
  if W.shape == ():
    print(name, ': ', W)
  elif W.shape[0] == 1:
    plt.stem(W.T)
    plt.title(full_name)
  elif W.shape[1] == 1:
    plt.stem(W)
    plt.title(full_name)
  else:
    plt.imshow(np.abs(W), interpolation='nearest', cmap='jet');
    plt.colorbar()
    plt.title(full_name)
    
            cur_pos = next_pos
        cur_stream[i][0] = cur_stream[i][0][how_many:]
        cur_stream[i][1] = cur_stream[i][1][how_many:]
        cur_stream[i][2] = cur_stream[i][2][how_many:]
    
      Returns:
    mask1: mask for first sentence
    mask2: mask for second sentence
  '''
  mask1_start, mask2_start = [], []
  while sent1[0] == sent2[0]:
    sent1 = sent1[1:]
    sent2 = sent2[1:]
    mask1_start.append(0.)
    mask2_start.append(0.)
    
    # Dependency imports
    
      # Unstack Tensors into lists.
  rewards_list = tf.unstack(rewards, axis=1)
  log_probs_list = tf.unstack(log_probs, axis=1)
  missing = 1. - tf.cast(present, tf.float32)
  missing_list = tf.unstack(missing, axis=1)
    
    '''
requests._internal_utils
~~~~~~~~~~~~~~
    
        def __repr__(self):
        return str(dict(self.items()))
    
        possible_keys = pytest.mark.parametrize('key', ('accept', 'ACCEPT', 'aCcEpT', 'Accept'))
    
    
    builtin_str = str
    bytes = str
    str = unicode
    basestring = basestring
    numeric_types = (int, long, float)
    integer_types = (int, long)
    
            .. seealso:: itervalues() and iteritems().
        '''
        for cookie in iter(self):
            yield cookie.name
    
            # if the server thread fails to finish, the test suite will hang
        # and get killed by the jenkins timeout.
    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'Requests', u'Requests Documentation',
     author, 'Requests', 'One line description of project.',
     'Miscellaneous'),
]
    
        It basically works like :func:`parse_set_header` just that items
    may appear multiple times and case sensitivity is preserved.
    
            if 400 <= self.status_code < 500:
            http_error_msg = u'%s Client Error: %s for url: %s' % (self.status_code, reason, self.url)
    
        def __str__(self):
        cls = self.__class__
        if self._name_ is not None:
            return '%s.%s' % (cls.__name__, self._name_)
        members, uncovered = _decompose(cls, self._value_)
        if len(members) == 1 and members[0]._name_ is None:
            return '%s.%r' % (cls.__name__, members[0]._value_)
        else:
            return '%s.%s' % (
                    cls.__name__,
                    '|'.join([str(m._name_ or m._value_) for m in members]),
                    )
    
            self.assertEqual(partial_sums, [0, 1, 3, 6, 10])
        self.assertEqual(total, 10)
    
    def handleSlides(slides):
    for slide in slides:
        handleSlide(slide)
    
    def print_title(title, pattern = '-'):
    print('\n'.join(('', title, pattern * len(title)))) 
    
            if CLICK_TYPE_DOUBLE in self._ignored_click_types:
            # Listen to all but double click type events
            channel.on_button_click_or_hold = self._on_click
        elif CLICK_TYPE_HOLD in self._ignored_click_types:
            # Listen to all but hold click type events
            channel.on_button_single_or_double_click = self._on_click
        else:
            # Listen to all click type events
            channel.on_button_single_or_double_click_or_hold = self._on_click
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_NAME): cv.string,
        vol.Required(CONF_WHITELIST, default=[]):
            vol.All(cv.ensure_list, [cv.entity_id]),
    }),
}, extra=vol.ALLOW_EXTRA)
    
        for idx, module_conf in enumerate(remotes):
        load_module(CONF_REMOTE, idx, module_conf)
    
    from homeassistant.const import (
    EVENT_HOMEASSISTANT_STOP, EVENT_HOMEASSISTANT_START)
    
    
def contains(name):
    '''Determine if the dataset is in the catalog.'''
    return name in _DATASETS.keys()
    
    
def add_single_gpu_param_update_ops(model, gpu_id):
    # Learning rate of 0 is a dummy value to be set properly at the
    # start of training
    lr = model.param_init_net.ConstantFill(
        [], 'lr', shape=[1], value=0.0
    )
    one = model.param_init_net.ConstantFill(
        [], 'one', shape=[1], value=1.0
    )
    wd = model.param_init_net.ConstantFill(
        [], 'wd', shape=[1], value=cfg.SOLVER.WEIGHT_DECAY
    )
    # weight decay of GroupNorm's parameters
    wd_gn = model.param_init_net.ConstantFill(
        [], 'wd_gn', shape=[1], value=cfg.SOLVER.WEIGHT_DECAY_GN
    )
    for param in model.TrainableParams(gpu_id=gpu_id):
        logger.debug('param ' + str(param) + ' will be updated')
        param_grad = model.param_to_grad[param]
        # Initialize momentum vector
        param_momentum = model.param_init_net.ConstantFill(
            [param], param + '_momentum', value=0.0
        )
        if param in model.biases:
            # Special treatment for biases (mainly to match historical impl.
            # details):
            # (1) Do not apply weight decay
            # (2) Use a 2x higher learning rate
            model.Scale(param_grad, param_grad, scale=2.0)
        elif param in model.gn_params:
            # Special treatment for GroupNorm's parameters
            model.WeightedSum([param_grad, one, param, wd_gn], param_grad)
        elif cfg.SOLVER.WEIGHT_DECAY > 0:
            # Apply weight decay to non-bias weights
            model.WeightedSum([param_grad, one, param, wd], param_grad)
        # Update param_grad and param_momentum in place
        model.net.MomentumSGDUpdate(
            [param_grad, param_momentum, lr, param],
            [param_grad, param_momentum, param],
            momentum=cfg.SOLVER.MOMENTUM
        )

    
    '''Construct minibatches for Mask R-CNN training when keypoints are enabled.
Handles the minibatch blobs that are specific to training Mask R-CNN for
keypoint detection. Other blobs that are generic to RPN or Fast/er R-CNN are
handled by their respecitive roi_data modules.
'''
    
    
def main(opts):
    logger = logging.getLogger(__name__)
    roidb = combined_roidb_for_training(
        cfg.TRAIN.DATASETS, cfg.TRAIN.PROPOSAL_FILES)
    logger.info('{:d} roidb entries'.format(len(roidb)))
    roi_data_loader = RoIDataLoader(
        roidb,
        num_loaders=cfg.DATA_LOADER.NUM_THREADS,
        minibatch_queue_size=cfg.DATA_LOADER.MINIBATCH_QUEUE_SIZE,
        blobs_queue_capacity=cfg.DATA_LOADER.BLOBS_QUEUE_CAPACITY
    )
    blob_names = roi_data_loader.get_output_names()