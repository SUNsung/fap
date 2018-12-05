
        
            z_logvar_1xn = \
        tf.get_variable(name=(name+'/logvar'), shape=size_1xn,
                        initializer=tf.constant_initializer(log_var_init),
                        trainable=var_is_trainable)
    
      if ext_input_bxtxi is not None:
    input_title += ' External Input'
    plot_time_series(ext_input_bxtxi, n_to_plot=n_to_plot, color='b',
                     scale=scale, title=col_title + input_title)
    
      Returns:
    dictionary of hyper parameters (ignoring other flag types).
  '''
  d = {}
  # Data
  d['output_dist'] = flags.output_dist
  d['data_dir'] = flags.data_dir
  d['lfads_save_dir'] = flags.lfads_save_dir
  d['checkpoint_pb_load_name'] = flags.checkpoint_pb_load_name
  d['checkpoint_name'] = flags.checkpoint_name
  d['output_filename_stem'] = flags.output_filename_stem
  d['max_ckpt_to_keep'] = flags.max_ckpt_to_keep
  d['max_ckpt_to_keep_lve'] = flags.max_ckpt_to_keep_lve
  d['ps_nexamples_to_process'] = flags.ps_nexamples_to_process
  d['ext_input_dim'] = flags.ext_input_dim
  d['data_filename_stem'] = flags.data_filename_stem
  d['device'] = flags.device
  d['csv_log'] = flags.csv_log
  d['num_steps_for_gen_ic'] = flags.num_steps_for_gen_ic
  d['inject_ext_input_to_gen'] = flags.inject_ext_input_to_gen
  # Cell
  d['cell_weight_scale'] = flags.cell_weight_scale
  # Generation
  d['ic_dim'] = flags.ic_dim
  d['factors_dim'] = flags.factors_dim
  d['ic_enc_dim'] = flags.ic_enc_dim
  d['gen_dim'] = flags.gen_dim
  d['gen_cell_input_weight_scale'] = flags.gen_cell_input_weight_scale
  d['gen_cell_rec_weight_scale'] = flags.gen_cell_rec_weight_scale
  # KL distributions
  d['ic_prior_var_min'] = flags.ic_prior_var_min
  d['ic_prior_var_scale'] = flags.ic_prior_var_scale
  d['ic_prior_var_max'] = flags.ic_prior_var_max
  d['ic_post_var_min'] = flags.ic_post_var_min
  d['co_prior_var_scale'] = flags.co_prior_var_scale
  d['prior_ar_atau'] = flags.prior_ar_atau
  d['prior_ar_nvar'] =  flags.prior_ar_nvar
  d['do_train_prior_ar_atau'] = flags.do_train_prior_ar_atau
  d['do_train_prior_ar_nvar'] = flags.do_train_prior_ar_nvar
  # Controller
  d['do_causal_controller'] = flags.do_causal_controller
  d['controller_input_lag'] = flags.controller_input_lag
  d['do_feed_factors_to_controller'] = flags.do_feed_factors_to_controller
  d['feedback_factors_or_rates'] = flags.feedback_factors_or_rates
  d['co_dim'] = flags.co_dim
  d['ci_enc_dim'] = flags.ci_enc_dim
  d['con_dim'] = flags.con_dim
  d['co_mean_corr_scale'] = flags.co_mean_corr_scale
  # Optimization
  d['batch_size'] = flags.batch_size
  d['learning_rate_init'] = flags.learning_rate_init
  d['learning_rate_decay_factor'] = flags.learning_rate_decay_factor
  d['learning_rate_stop'] = flags.learning_rate_stop
  d['learning_rate_n_to_compare'] = flags.learning_rate_n_to_compare
  d['max_grad_norm'] = flags.max_grad_norm
  d['cell_clip_value'] = flags.cell_clip_value
  d['do_train_io_only'] = flags.do_train_io_only
  d['do_train_encoder_only'] = flags.do_train_encoder_only
  d['do_reset_learning_rate'] = flags.do_reset_learning_rate
  d['do_train_readin'] = flags.do_train_readin
    
    
def split_list_by_inds(data, inds1, inds2):
  '''Take the data, a list, and split it up based on the indices in inds1 and
  inds2.
  Args:
    data: the list of data to split
    inds1, the first list of indices
    inds2, the second list of indices
  Returns: a 2-tuple of two lists.
  '''
  if data is None or len(data) == 0:
    return [], []
  else:
    dout1 = [data[i] for i in inds1]
    dout2 = [data[i] for i in inds2]
    return dout1, dout2
    
    
def flatten(list_of_lists):
  '''Takes a list of lists and returns a list of the elements.
    
    
def get_batch(generator, batch_size, num_steps, max_word_length, pad=False):
  '''Read batches of input.'''
  cur_stream = [None] * batch_size
    
      prefix = [vocab.word_to_id(w) for w in prefix_words.split()]
  prefix_char_ids = [vocab.word_to_char_ids(w) for w in prefix_words.split()]
  for _ in xrange(FLAGS.num_samples):
    inputs = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
    char_ids_inputs = np.zeros(
        [BATCH_SIZE, NUM_TIMESTEPS, vocab.max_word_length], np.int32)
    samples = prefix[:]
    char_ids_samples = prefix_char_ids[:]
    sent = ''
    while True:
      inputs[0, 0] = samples[0]
      char_ids_inputs[0, 0, :] = char_ids_samples[0]
      samples = samples[1:]
      char_ids_samples = char_ids_samples[1:]
    
    
def _read_words(filename):
  with tf.gfile.GFile(filename, 'r') as f:
    return f.read().decode('utf-8').replace('\n', '<eos>').split()
    
      Returns:
    loss_matrix:  Loss matrix of shape [batch_size, sequence_length].
  '''
  cross_entropy_loss = tf.nn.sparse_softmax_cross_entropy_with_logits(
      labels=gen_labels, logits=gen_logits)
  return cross_entropy_loss
    
    
def zip_seq_pred_crossent(id_to_word, sequences, predictions, cross_entropy):
  '''Zip together the sequences, predictions, cross entropy.'''
  indices = convert_to_indices(sequences)
    
      # Only calculate log-perplexity on missing tokens.
  weights = tf.cast(present, tf.float32)
  weights = 1. - weights
  weights = tf.reshape(weights, [-1])
  num_missing = tf.reduce_sum(weights)
    
        # Maximize reward.
    gen_grads = tf.gradients(-final_gen_reward, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    maximize_op = gen_optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    
          # if time > maxlen, return all true vector
      done = tf.cond(
          tf.greater(time, maximum_length),
          lambda: tf.ones([
              batch_size,], dtype=tf.bool), lambda: done)
      return (done, cell_state, next_input, cell_output, context_state)
    
    
if __name__ == '__main__':
    main()

    
        def get(self):
        if len(self.config.GAE_APPIDS):
            if len(self.working_appid_list) == 0:
                time_to_reset = 600 - (time.time() - self.last_reset_time)
                if time_to_reset > 0:
                    self.logger.warn('all appid out of quota, wait %d seconds to reset', time_to_reset)
                    time.sleep(time_to_reset)
                    return None
                else:
                    self.logger.warn('reset appid')
                    self.reset_appid()
    
    
try:
    from Crypto.Cipher.ARC4 import new as _Crypto_Cipher_ARC4_new
except ImportError:
    logging.warn('Load Crypto.Cipher.ARC4 Failed, Use Pure Python Instead.')
    class _Crypto_Cipher_ARC4_new(object):
        def __init__(self, key):
            x = 0
            box = range(256)
            for i, y in enumerate(box):
                x = (x + y + ord(key[i % len(key)])) & 0xff
                box[i], box[x] = box[x], y
            self.__box = box
            self.__x = 0
            self.__y = 0
        def encrypt(self, data):
            out = []
            out_append = out.append
            x = self.__x
            y = self.__y
            box = self.__box
            for char in data:
                x = (x + 1) & 0xff
                y = (y + box[x]) & 0xff
                box[x], box[y] = box[y], box[x]
                out_append(chr(ord(char) ^ box[(box[x] + box[y]) & 0xff]))
            self.__x = x
            self.__y = y
            return ''.join(out)
    
        Note that as of Java 1.4, you can access the stack trace, which means
    that you can compute the complete trace of rules from the start symbol.
    This gives you considerable context information with which to generate
    useful error messages.
    
    
class ParserRuleReturnScope(RuleReturnScope):
    '''
    Rules that return more than a single value must return an object
    containing all the values.  Besides the properties defined in
    RuleLabelScope.predefinedRulePropertiesScope there may be user-defined
    return values.  This class simply defines the minimum properties that
    are always defined and methods to access the others that might be
    available depending on output option such as template and tree.
    
            if first > last or first < 0 or last < 0 or last >= len(self.tokens):
            raise ValueError(
                'replace: range invalid: '+first+'..'+last+
                '(size='+len(self.tokens)+')')
    
    def get_mod_deps(mod_name):
    '''Get known module dependencies.
    
    from certbot.tests import util as certbot_util
    
        def tearDown(self):
        shutil.rmtree(self.temp_dir)
        shutil.rmtree(self.config_dir)
        shutil.rmtree(self.work_dir)
    
            if file and allowed_file(file.filename):
            # The image file seems valid! Detect faces and return the result.
            return detect_faces_in_image(file)
    
    # Loop through each face found in the unknown image
for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
    # See if the face is a match for the known face(s)
    matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
    import face_recognition
from flask import Flask, jsonify, request, redirect