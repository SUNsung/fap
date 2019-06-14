
        
              # Initialize the variables with the current batch data
      batch_indices = list(
          range(chunk, min(chunk + self.hparams.batch_size, len(test_pred))))
    
        # CONTROLLER -> GENERATOR -> RATES
    # (u(t) -> gen(t) -> factors(t) -> rates(t) -> p(x_t|z_t) )
    self.controller_outputs = u_t = [None] * num_steps
    self.con_ics = con_state = None
    self.con_states = con_states = [None] * num_steps
    self.con_outs = con_outs = [None] * num_steps
    self.gen_inputs = gen_inputs = [None] * num_steps
    if co_dim > 0:
      # gen_cell_class here for l2 penalty recurrent weights
      # didn't split the cell_weight scale here, because I doubt it matters
      con_cell = gen_cell_class(hps.con_dim,
                                input_weight_scale=hps.cell_weight_scale,
                                rec_weight_scale=hps.cell_weight_scale,
                                clip_value=hps.cell_clip_value,
                                recurrent_collections=['l2_con_reg'])
      with tf.variable_scope('con', reuse=False):
        self.con_ics = tf.tile(
            tf.Variable(tf.zeros([1, hps.con_dim*con_cell.state_multiplier]),
                        name='c0'),
            tf.stack([batch_size, 1]))
        self.con_ics.set_shape([None, con_cell.state_size]) # tile loses shape
        con_states[-1] = self.con_ics
    
      rates, x0s, inputs = \
      generate_data(rnn, T=T, E=E, x0s=x0s, P_sxn=P_sxn,
                    input_magnitude=input_magnitude,
                    input_times=input_times)
    
    flags = tf.app.flags
flags.DEFINE_string('save_dir', '/tmp/' + DATA_DIR + '/',
                    'Directory for saving data.')
flags.DEFINE_string('datafile_name', 'conditioned_rnn_data',
                    'Name of data file for input case.')
flags.DEFINE_integer('synth_data_seed', 5, 'Random seed for RNN generation.')
flags.DEFINE_float('T', 1.0, 'Time in seconds to generate.')
flags.DEFINE_integer('C', 400, 'Number of conditions')
flags.DEFINE_integer('N', 50, 'Number of units for the RNN')
flags.DEFINE_float('train_percentage', 4.0/5.0,
                   'Percentage of train vs validation trials')
flags.DEFINE_integer('nreplications', 10,
                     'Number of spikifications of the same underlying rates.')
flags.DEFINE_float('g', 1.5, 'Complexity of dynamics')
flags.DEFINE_float('x0_std', 1.0,
                   'Volume from which to pull initial conditions (affects diversity of dynamics.')
flags.DEFINE_float('tau', 0.025, 'Time constant of RNN')
flags.DEFINE_float('dt', 0.010, 'Time bin')
flags.DEFINE_float('max_firing_rate', 30.0, 'Map 1.0 of RNN to a spikes per second')
FLAGS = flags.FLAGS
    
      samples = []
  for sequence_id in xrange(min(len(arr), max_num_to_print)):
    buffer_str = ' '.join(
        [str(id_to_word[index]) for index in arr[sequence_id, :]])
    samples.append(buffer_str)
  return samples
    
    
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
    
    '''Model utilities.'''
    
    
UPDATED_MOD_SSL_CONF_DIGEST = '.updated-options-ssl-apache-conf-digest.txt'
'''Name of the hash of the updated or informed mod_ssl_conf as saved in `IConfig.config_dir`.'''
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)
    
    # If false, no module index is generated.
#html_domain_indices = True
    
        # Invert the predicted soft masks
    masks_inv = masks_hf[:, :, :, ::-1]
    
    
def cityscapes_to_coco_without_person_rider(cityscapes_id):
    lookup = {
        0: 0,  # ... background
        1: 2,  # bicycle
        2: 3,  # car
        3: -1,  # person (ignore)
        4: 7,  # train
        5: 8,  # truck
        6: 4,  # motorcycle
        7: 6,  # bus
        8: -1,  # rider (ignore)
    }
    return lookup[cityscapes_id]
    
    
def _whctrs(anchor):
    '''Return width, height, x center, and y center for an anchor (window).'''
    w = anchor[2] - anchor[0] + 1
    h = anchor[3] - anchor[1] + 1
    x_ctr = anchor[0] + 0.5 * (w - 1)
    y_ctr = anchor[1] + 0.5 * (h - 1)
    return w, h, x_ctr, y_ctr
    
    
def mask_rcnn_frozen_features(model):
    logger.warn('Deprecated: use `TRAIN.FREEZE_CONV_BODY: True` instead')
    return build_generic_detection_model(
        model,
        get_func(cfg.MODEL.CONV_BODY),
        add_roi_box_head_func=get_func(cfg.FAST_RCNN.ROI_BOX_HEAD),
        add_roi_mask_head_func=get_func(cfg.MRCNN.ROI_MASK_HEAD),
        freeze_conv_body=True
    )
    
    
def add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale):
    '''Add RPN outputs to a single scale model (i.e., no FPN).'''
    anchors = generate_anchors(
        stride=1. / spatial_scale,
        sizes=cfg.RPN.SIZES,
        aspect_ratios=cfg.RPN.ASPECT_RATIOS
    )
    num_anchors = anchors.shape[0]
    dim_out = dim_in
    # RPN hidden representation
    model.Conv(
        blob_in,
        'conv_rpn',
        dim_in,
        dim_out,
        kernel=3,
        pad=1,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    model.Relu('conv_rpn', 'conv_rpn')
    # Proposal classification scores
    model.Conv(
        'conv_rpn',
        'rpn_cls_logits',
        dim_in,
        num_anchors,
        kernel=1,
        pad=0,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    # Proposal bbox regression deltas
    model.Conv(
        'conv_rpn',
        'rpn_bbox_pred',
        dim_in,
        4 * num_anchors,
        kernel=1,
        pad=0,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    
    
def _sample_rois(roidb, im_scale, batch_idx):
    '''Generate a random sample of RoIs comprising foreground and background
    examples.
    '''
    rois_per_image = int(cfg.TRAIN.BATCH_SIZE_PER_IM)
    fg_rois_per_image = int(np.round(cfg.TRAIN.FG_FRACTION * rois_per_image))
    max_overlaps = roidb['max_overlaps']
    
    from detectron.core.config import cfg
import detectron.utils.blob as blob_utils
import detectron.utils.boxes as box_utils
import detectron.utils.segms as segm_utils
    
    
def get_minibatch(roidb):
    '''Given a roidb, construct a minibatch sampled from it.'''
    # We collect blobs from each image onto a list and then concat them into a
    # single tensor, hence we initialize each blob to an empty list
    blobs = {k: [] for k in get_minibatch_blob_names()}
    # Get the input image blob, formatted for caffe2
    im_blob, im_scales = _get_image_blob(roidb)
    blobs['data'] = im_blob
    if cfg.RPN.RPN_ON:
        # RPN-only or end-to-end Faster/Mask R-CNN
        valid = rpn_roi_data.add_rpn_blobs(blobs, im_scales, roidb)
    elif cfg.RETINANET.RETINANET_ON:
        im_width, im_height = im_blob.shape[3], im_blob.shape[2]
        # im_width, im_height corresponds to the network input: padded image
        # (if needed) width and height. We pass it as input and slice the data
        # accordingly so that we don't need to use SampleAsOp
        valid = retinanet_roi_data.add_retinanet_blobs(
            blobs, im_scales, roidb, im_width, im_height
        )
    else:
        # Fast R-CNN like models trained on precomputed proposals
        valid = fast_rcnn_roi_data.add_fast_rcnn_blobs(blobs, im_scales, roidb)
    return blobs, valid
    
        def test_size_exceptions(self):
        A = np.random.randn(2, 256, 42, 86).astype(np.float32)
        I = np.array(np.random.permutation(10), dtype=np.int32)
        with self.assertRaises(RuntimeError):
            self._run_op_test(A, I)
    
    
def ignore_sigpipe():
    # Restore default behavior for SIGPIPE instead of raising
    # an exception when encountered.
    if not IS_WINDOWS_PLATFORM:
        signal.signal(signal.SIGPIPE, signal.SIG_DFL)

    
    
def get_service_name_from_network_mode(network_mode):
    return get_source_name_from_network_mode(network_mode, 'service')
    
        def create_volume(self, name, driver=None, opts=None, external=None, custom_name=False):
        if external:
            custom_name = True
            if isinstance(external, six.text_type):
                name = external
    
        def test_single_path_from_env(self):
        with mock.patch.dict(os.environ):
            os.environ['COMPOSE_FILE'] = 'one.yml'
            environment = Environment.from_env_file('.')
            assert get_config_path_from_options('.', {}, environment) == ['one.yml']
    
    import unittest
    
    
class VerboseProxyTestCase(unittest.TestCase):
    
        def test_sort_service_dicts_circular_imports(self):
        services = [
            {
                'links': ['redis'],
                'name': 'web'
            },
            {
                'name': 'redis',
                'links': ['web']
            },
        ]
    
        def test_parallel_execute(self):
        results, errors = parallel_execute(
            objects=[1, 2, 3, 4, 5],
            func=lambda x: x * 2,
            get_name=six.text_type,
            msg='Doubling',
        )