
        
        DEPLABEL_TO_ID = {label: lid for lid, label in enumerate(DEPLABELS)}
    
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
    
      Yields:
    Pairs of the batched data, each a matrix of shape [batch_size, num_steps].
    The second element of the tuple is the same data time-shifted to the
    right by one. The third is a set of weights with 1 indicating a word was
    present and 0 not.
    
      for sequence in sequences:
    indices = []
    for embedding in sequence:
      indices.append(np.argmax(embedding))
    batch_of_indices.append(indices)
  return batch_of_indices
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
    
def create_dis_train_op(hparams, dis_loss, global_step):
  '''Create Discriminator train op.'''
  with tf.name_scope('train_discriminator'):
    dis_optimizer = tf.train.AdamOptimizer(hparams.dis_learning_rate)
    dis_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('dis')
    ]
    if FLAGS.dis_update_share_embedding and FLAGS.dis_share_embedding:
      shared_embedding = [
          v for v in tf.trainable_variables()
          if v.op.name == 'gen/decoder/rnn/embedding'
      ][0]
      dis_vars.append(shared_embedding)
    print('\nOptimizing Discriminator vars:')
    for v in dis_vars:
      print(v)
    dis_grads = tf.gradients(dis_loss, dis_vars)
    dis_grads_clipped, _ = tf.clip_by_global_norm(dis_grads,
                                                  FLAGS.grad_clipping)
    dis_train_op = dis_optimizer.apply_gradients(
        zip(dis_grads_clipped, dis_vars), global_step=global_step)
    return dis_train_op, dis_grads_clipped, dis_vars
    
        elif FLAGS.discriminator_model == 'seq2seq_vd':
      load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
      print('Restoring Discriminator from %s.' % load_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % load_ckpt)
      dis_encoder_init_saver = init_savers['dis_encoder_init_saver']
      dis_decoder_init_saver = init_savers['dis_decoder_init_saver']
      dis_encoder_init_saver.restore(sess, load_ckpt)
      dis_decoder_init_saver.restore(sess, load_ckpt)
    
        with tf.variable_scope('rnn') as vs:
      outputs, _, _ = tf.contrib.rnn.static_bidirectional_rnn(
          cell_fwd, cell_bwd, rnn_inputs, state_fwd, state_bwd, scope=vs)
    
        def __init__(self, debuglevel=0):
        self._init_github_account()
        https_handler = make_HTTPS_handler({}, debuglevel=debuglevel)
        self._opener = compat_urllib_request.build_opener(https_handler)
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    new_version = {}
    
    
class TestIqiyiSDKInterpreter(unittest.TestCase):
    def test_iqiyi_sdk_interpreter(self):
        '''
        Test the functionality of IqiyiSDKInterpreter by trying to log in
    
      * dynamodb
'''
    
    
def test_match():
    command = Command('brew install sshfs', output)
    assert match(command)
    
    
def _is_not_okay_to_test():
    return 'elasticsearch' not in _get_formulas()
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
        gc.collect()
    
        class_name = info['fullname'].split('.')[0]
    if type(class_name) != str:
        # Python 2 only
        class_name = class_name.encode('utf-8')
    module = __import__(info['module'], fromlist=[class_name])
    obj = attrgetter(info['fullname'])(module)
    
        for line in input_file:
        linestrip = line.strip()
        if len(linestrip) == 0:
            in_exercise_region = False
        elif linestrip.startswith('# TASK:'):
            in_exercise_region = True
    
    from sklearn.datasets import make_checkerboard
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralBiclustering
from sklearn.metrics import consensus_score
    
    from sklearn.cluster import AgglomerativeClustering
from sklearn.metrics import pairwise_distances
    
        def report_out_of_quota(self, appid):
        self.logger.warn('report_out_of_quota:%s', appid)
        with self.lock:
            if appid not in self.out_of_quota_appids:
                self.out_of_quota_appids.append(appid)
            try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
            if not any(os.path.isfile('%s/certutil' % x) for x in os.environ['PATH'].split(os.pathsep)):
            xlog.warn('please install *libnss3-tools* package to import GoAgent root ca')
            return False
    
        def __init__(self, input=None):
        Exception.__init__(self)
    
        if len(unknown_face_encodings) > 0:
        face_found = True
        # See if the first face in the uploaded image matches the known face of Obama
        match_results = face_recognition.compare_faces([known_face_encoding], unknown_face_encodings[0])
        if match_results[0]:
            is_obama = True
    
        :param css:  plain tuple representation of the rect in (top, right, bottom, left) order
    :param image_shape: numpy shape of the image array
    :return: a trimmed plain tuple representation of the rect in (top, right, bottom, left) order
    '''
    return max(css[0], 0), min(css[1], image_shape[1]), min(css[2], image_shape[0]), max(css[3], 0)
    
    # Create a PIL imagedraw object so we can draw on the picture
pil_image = Image.fromarray(image)
d = ImageDraw.Draw(pil_image)