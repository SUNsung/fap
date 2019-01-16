
        
            with tf.gfile.Open(filename) as f:
      idx = 0
      for line in f:
        word_name = line.strip()
        if word_name == '<S>':
          self._bos = idx
        elif word_name == '</S>':
          self._eos = idx
        elif word_name == '<UNK>':
          self._unk = idx
        if word_name == '!!!MAXTERMID':
          continue
    
        fname = os.path.join(FLAGS.save_dir, 'lstm_emb_step_%d.npy' % i)
    with tf.gfile.Open(fname, mode='w') as f:
      np.save(f, lstm_emb)
    sys.stderr.write('LSTM embedding step %d file saved\n' % i)
    
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
    
      Returns:
    Tuple of the (sequence, logits, log_probs) of the Generator.   Sequence
      and logits have shape [batch_size, sequence_length, vocab_size].  The
      log_probs will have shape [batch_size, sequence_length].  Log_probs
      corresponds to the log probability of selecting the words.
  '''
  if FLAGS.generator_model == 'rnn':
    (sequence, logits, log_probs, initial_state, final_state) = rnn.generator(
        hparams,
        inputs,
        targets,
        present,
        is_training=is_training,
        is_validating=is_validating,
        reuse=reuse)
  elif FLAGS.generator_model == 'rnn_zaremba':
    (sequence, logits, log_probs, initial_state,
     final_state) = rnn_zaremba.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_zaremba':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq_zaremba.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'rnn_nas':
    (sequence, logits, log_probs, initial_state,
     final_state) = rnn_nas.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_nas':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq_nas.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_vd':
    (sequence, logits, log_probs, initial_state, final_state,
     encoder_states) = seq2seq_vd.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  else:
    raise NotImplementedError
  return (sequence, logits, log_probs, initial_state, final_state,
          encoder_states)
    
      Returns:
    avg_log_perplexity:  Scalar indicating the average log perplexity per
      missing token in the batch.
  '''
  # logits = tf.Print(logits, [logits], message='logits:', summarize=50)
  # targets = tf.Print(targets, [targets], message='targets:', summarize=50)
  eps = 1e-12
  logits = tf.reshape(logits, [-1, FLAGS.vocab_size])
    
      Returns:
    A decoder function with the required interface of `dynamic_rnn_decoder`
    intended for training.
  '''
  with tf.name_scope(name, 'attention_decoder_fn_train', [
      encoder_state, attention_keys, attention_values, attention_score_fn,
      attention_construct_fn
  ]):
    pass
    
        def __init__(self, config, logger):
        self.config = config
        self.logger = logger
        self.check_api = None
        self.ip_manager = None
    
            pemfile = '/etc/ssl/certs/CA.pem'
        new_certfile = '/usr/local/share/ca-certificates/CA.crt'
        if not os.path.exists(pemfile) or not CertUtil.file_is_same(certfile, new_certfile):
            if os.system('cp '%s' '%s' && update-ca-certificates' % (certfile, new_certfile)) != 0:
                xlog.warning('install root certificate failed, Please run as administrator/root/sudo')
    
    
def gae_application(environ, start_response):
    cookie = environ.get('HTTP_COOKIE', '')
    options = environ.get('HTTP_X_GOA_OPTIONS', '')
    if environ['REQUEST_METHOD'] == 'GET' and not cookie:
        if '204' in environ['QUERY_STRING']:
            start_response('204 No Content', [])
            yield ''
        else:
            timestamp = long(os.environ['CURRENT_VERSION_ID'].split('.')[1])/2**28
            ctime = time.strftime('%Y-%m-%d %H:%M:%S', time.gmtime(timestamp+8*3600))
            html = u'GoAgent Python Server %s \u5df2\u7ecf\u5728\u5de5\u4f5c\u4e86\uff0c\u90e8\u7f72\u65f6\u95f4 %s\n' % (__version__, ctime)
            start_response('200 OK', [('Content-Type', 'text/plain; charset=utf-8')])
            yield html.encode('utf8')
        raise StopIteration
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    ('index', 'face_recognition',
     u'Face Recognition Documentation',
     [u'Adam Geitgey'], 1)
]
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
    # Note: This isn't exactly the same as a 'percent match'. The scale isn't linear. But you can assume that images with a
# smaller distance are more similar to each other than ones with a larger distance.
    
    1. Prepare a set of images of the known people you want to recognize. Organize the images in a single directory
   with a sub-directory for each known person.
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
        # Loop through each face in this frame of video
    for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
        # See if the face is a match for the known face(s)
        matches = face_recognition.compare_faces(known_face_encodings, face_encoding)