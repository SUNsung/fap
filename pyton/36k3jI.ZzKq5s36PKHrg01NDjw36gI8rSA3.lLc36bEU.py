
def _word_dropout(words, input_keep_prob):
  '''Drops words with probability 1 - input_keep_prob.
    
    
# for multi-session 'stitching' models, the per-session readin matrices map from
# neurons to input factors which are fed into the shared encoder. These are
# initialized by alignment_matrix_cxf and alignment_bias_c in the input .h5
# files. They can be fixed or made trainable.
flags.DEFINE_boolean('do_train_readin', DO_TRAIN_READIN, 'Whether to train the \
                     readin matrices and bias vectors. False leaves them fixed \
                     at their initial values specified by the alignment \
                     matrices and vectors.')
    
      def _load_random_shard(self):
    '''Randomly select a file and read it.'''
    return self._load_shard(random.choice(self._all_shards))
    
    FLAGS = tf.flags.FLAGS
# General flags.
tf.flags.DEFINE_string('mode', 'eval',
                       'One of [sample, eval, dump_emb, dump_lstm_emb]. '
                       ''sample' mode samples future word predictions, using '
                       'FLAGS.prefix as prefix (prefix could be left empty). '
                       ''eval' mode calculates perplexity of the '
                       'FLAGS.input_data. '
                       ''dump_emb' mode dumps word and softmax embeddings to '
                       'FLAGS.save_dir. embeddings are dumped in the same '
                       'order as words in vocabulary. All words in vocabulary '
                       'are dumped.'
                       'dump_lstm_emb dumps lstm embeddings of FLAGS.sentence '
                       'to FLAGS.save_dir.')
tf.flags.DEFINE_string('pbtxt', '',
                       'GraphDef proto text file used to construct model '
                       'structure.')
tf.flags.DEFINE_string('ckpt', '',
                       'Checkpoint directory used to fill model values.')
tf.flags.DEFINE_string('vocab_file', '', 'Vocabulary file.')
tf.flags.DEFINE_string('save_dir', '',
                       'Used for 'dump_emb' mode to save word embeddings.')
# sample mode flags.
tf.flags.DEFINE_string('prefix', '',
                       'Used for 'sample' mode to predict next words.')
tf.flags.DEFINE_integer('max_sample_words', 100,
                        'Sampling stops either when </S> is met or this number '
                        'of steps has passed.')
tf.flags.DEFINE_integer('num_samples', 3,
                        'Number of samples to generate for the prefix.')
# dump_lstm_emb mode flags.
tf.flags.DEFINE_string('sentence', '',
                       'Used as input for 'dump_lstm_emb' mode.')
# eval mode flags.
tf.flags.DEFINE_string('input_data', '',
                       'Input data files for eval model.')
tf.flags.DEFINE_integer('max_eval_steps', 1000000,
                        'Maximum mumber of steps to run 'eval' mode.')
    
    
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
    
    
def write_unmasked_log(log, id_to_word, sequence_eval):
  '''Helper function for logging evaluated sequences without mask.'''
  indices_arr = np.asarray(sequence_eval)
  samples = helper.convert_to_human_readable(id_to_word, indices_arr,
                                             FLAGS.batch_size)
  for sample in samples:
    log.write(sample + '\n')
  log.flush()
  return samples
    
      '''
  loss = tf.losses.sigmoid_cross_entropy(labels,
                                         predictions,
                                         weights=missing_tokens)
  loss = tf.Print(
      loss, [loss, labels, missing_tokens],
      message='loss, labels, missing_tokens',
      summarize=25,
      first_n=25)
  return loss
    
    
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
    
        def __init__(self, debuglevel=0):
        self._init_github_account()
        https_handler = make_HTTPS_handler({}, debuglevel=debuglevel)
        self._opener = compat_urllib_request.build_opener(https_handler)
    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    
iv = key = [0x20, 0x15] + 14 * [0]
    
    versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
    with io.open('update/releases.atom', 'w', encoding='utf-8') as atom_file:
    atom_file.write(atom_template)

    
    with io.open(README_FILE, 'w', encoding='utf-8') as f:
    f.write(header)
    f.write(options)
    f.write(footer)

    
    
if __name__ == '__main__':
    main()

    
    from test.helper import try_rm
    
        Returns:
      A tuple of (directory, basename, extension).
    '''
    
        Each code snipped should go into a separate file in codedir.
    
    # This is a very simple benchmark to give you an idea of how fast each step of face recognition will run on your system.
# Notice that face detection gets very slow at large image sizes. So you might consider running face detection on a
# scaled down version of your image and then running face encodings on the the full size image.
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
    
def train(train_dir, model_save_path=None, n_neighbors=None, knn_algo='ball_tree', verbose=False):
    '''
    Trains a k-nearest neighbors classifier for face recognition.
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    rgb_frame = frame[:, :, ::-1]
    
    while True:
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
    # Get a reference to the Raspberry Pi camera.
# If this fails, make sure you have a camera connected to the RPi and that you
# enabled your camera in raspi-config and rebooted first.
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
            # Clear the frames array to start the next batch
        frames = []

    
        # 将每一个人脸与已知样本图片比对
    for face_encoding in face_encodings:
        # 看是否属于奥巴马或者拜登
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'