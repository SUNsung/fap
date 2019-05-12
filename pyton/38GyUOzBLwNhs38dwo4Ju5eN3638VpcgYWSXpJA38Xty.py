
        
        
def read_data(data_fname):
  ''' Read saved data in HDF5 format.
    
      all_embs = np.zeros([vocab.size, 1024])
  for i in xrange(vocab.size):
    input_dict = {t['inputs_in']: inputs,
                  t['targets_in']: targets,
                  t['target_weights_in']: weights}
    if 'char_inputs_in' in t:
      input_dict[t['char_inputs_in']] = (
          vocab.word_char_ids[i].reshape([-1, 1, MAX_WORD_LEN]))
    embs = sess.run(t['all_embs'], input_dict)
    all_embs[i, :] = embs
    sys.stderr.write('Finished word embedding %d/%d\n' % (i, vocab.size))
    
    
def generate_logs(sess, model, log, id_to_word, feed):
  '''Impute Sequences using the model for a particular feed and send it to
  logs.
  '''
  # Impute Sequences.
  [p, inputs_eval, sequence_eval] = sess.run(
      [model.present, model.inputs, model.fake_sequence], feed_dict=feed)
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
      Returns:
    gen_train_op: Generator training op.
  '''
  del hparams
  with tf.name_scope('train_generator'):
    if FLAGS.generator_optimizer == 'sgd':
      gen_optimizer = tf.train.GradientDescentOptimizer(learning_rate)
    elif FLAGS.generator_optimizer == 'adam':
      gen_optimizer = tf.train.AdamOptimizer(learning_rate)
    else:
      raise NotImplementedError
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    print('\nOptimizing Generator vars:')
    for v in gen_vars:
      print(v)
    
      Args:
    init_savers:  Dictionary of init_savers.  'init_saver_name': init_saver.
    sess:  tf.Session.
  '''
  ## Load Generator weights from MaskGAN checkpoint.
  if FLAGS.maskgan_ckpt:
    print('Restoring Generator from %s.' % FLAGS.maskgan_ckpt)
    tf.logging.info('Restoring Generator from %s.' % FLAGS.maskgan_ckpt)
    print('Asserting Generator is a seq2seq-variant.')
    tf.logging.info('Asserting Generator is a seq2seq-variant.')
    assert FLAGS.generator_model.startswith('seq2seq')
    init_saver = init_savers['init_saver']
    init_saver.restore(sess, FLAGS.maskgan_ckpt)
    
        def _get_session_key(self):
        '''
        Instead of generating a random string, generate a secure url-safe
        base64-encoded string of data as our session key.
        '''
        return signing.dumps(
            self._session, compress=True,
            salt='django.contrib.sessions.backends.signed_cookies',
            serializer=self.serializer,
        )
    
    
def _scale_enum(anchor, scales):
    '''Enumerate a set of anchors for each scale wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    ws = w * scales
    hs = h * scales
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors

    
    
_RENAME = {
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v1up4convs':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v1up4convs',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v1up':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v1up',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v0upshare':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v0upshare',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v0up':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v0up',
    # Removed head_builder module in favor of the more specific fast_rcnn name
    'head_builder.add_roi_2mlp_head':
        'fast_rcnn_heads.add_roi_2mlp_head',
}
    
    
def add_fpn_retinanet_outputs(model, blobs_in, dim_in, spatial_scales):
    '''RetinaNet head. For classification and box regression, we can chose to
    have the same conv tower or a separate tower. 'bl_feat_list' stores the list
    of feature blobs for bbox prediction. These blobs can be shared cls feature
    blobs if we share the tower or else are independent blobs.
    '''
    dim_out = dim_in
    k_max = cfg.FPN.RPN_MAX_LEVEL  # coarsest level of pyramid
    k_min = cfg.FPN.RPN_MIN_LEVEL  # finest level of pyramid
    A = len(cfg.RETINANET.ASPECT_RATIOS) * cfg.RETINANET.SCALES_PER_OCTAVE
    
    
def _expand_bbox_targets(bbox_target_data):
    '''Bounding-box regression targets are stored in a compact form in the
    roidb.
    
    # Example usage:
# data_loader_benchmark.par \
#   NUM_GPUS 2 \
#   TRAIN.DATASETS '('voc_2007_trainval',)' \
#   TRAIN.PROPOSAL_FILES /path/to/voc_2007_trainval/proposals.pkl \
#   DATA_LOADER.NUM_THREADS 4 \
#   DATA_LOADER.MINIBATCH_QUEUE_SIZE 64 \
#   DATA_LOADER.BLOBS_QUEUE_CAPACITY 8
    
    
def load_script(path: str) -> types.ModuleType:
    fullname = '__mitmproxy_script__.{}'.format(
        os.path.splitext(os.path.basename(path))[0]
    )
    # the fullname is not unique among scripts, so if there already is an existing script with said
    # fullname, remove it.
    sys.modules.pop(fullname, None)
    oldpath = sys.path
    sys.path.insert(0, os.path.dirname(path))
    m = None
    try:
        loader = importlib.machinery.SourceFileLoader(fullname, path)
        spec = importlib.util.spec_from_loader(fullname, loader=loader)
        m = importlib.util.module_from_spec(spec)
        loader.exec_module(m)
        if not getattr(m, 'name', None):
            m.name = path  # type: ignore
    except Exception as e:
        script_error_handler(path, e, msg=str(e))
    finally:
        sys.path[:] = oldpath
        return m
    
    
def domain_match(a: str, b: str) -> bool:
    if cookiejar.domain_match(a, b):  # type: ignore
        return True
    elif cookiejar.domain_match(a, b.strip('.')):  # type: ignore
        return True
    return False
    
        def call_strings(self, path: str, args: typing.Sequence[str]) -> typing.Any:
        '''
            Call a command using a list of string arguments. May raise CommandError.
        '''
        if path not in self.commands:
            raise exceptions.CommandError('Unknown command: %s' % path)
        return self.commands[path].call(args)
    
        def __getattr__(self, k):
        if k in self.names:
            return self.names[k]
        raise AttributeError('No such attribute: %s', k)