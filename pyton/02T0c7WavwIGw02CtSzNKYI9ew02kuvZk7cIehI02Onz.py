
        
              for iii in zip(idxs[0], shuffle_tidxs, idxs[2]):
        S_bxtxd[iii] += 1
    
    
def plot_lfads_timeseries(data_bxtxn, model_vals, ext_input_bxtxi=None,
                          truth_bxtxn=None, bidx=None, output_dist='poisson',
                          conversion_factor=1.0, subplot_cidx=0,
                          col_title=None):
    
    def get_train_n_valid_inds(num_trials, train_fraction, nreplications):
  '''Split the numbers between 0 and num_trials-1 into two portions for
  training and validation, based on the train fraction.
  Args:
    num_trials: the number of trials
    train_fraction: (e.g. .80)
    nreplications: the number of spiking trials per initial condition
  Returns:
    a 2-tuple of two lists: the training indices and validation indices
    '''
  train_inds = []
  valid_inds = []
  for i in range(num_trials):
    # This line divides up the trials so that within one initial condition,
    # the randomness of spikifying the condition is shared among both
    # training and validation data splits.
    if (i % nreplications)+1 > train_fraction * nreplications:
      valid_inds.append(i)
    else:
      train_inds.append(i)
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    
def write_masked_log(log, id_to_word, sequence_eval, present_eval):
  indices_arr = np.asarray(sequence_eval)
  samples = convert_to_human_readable(id_to_word, indices_arr, present_eval,
                                      FLAGS.batch_size)
  for sample in samples:
    log.write(sample + '\n')
  log.flush()
  return samples
    
      # Averages for real and fake token values.
  real = tf.mul(values, present)
  fake = tf.mul(values, missing)
  real_avg = tf.reduce_sum(real) / real_count
  fake_avg = tf.reduce_sum(fake) / fake_count
    
        # Cumulative Discounted Returns.  The true value function V*(s).
    cumulative_rewards = []
    for t in xrange(FLAGS.sequence_length):
      cum_value = tf.zeros(shape=[FLAGS.batch_size / 2])
      for s in xrange(t, FLAGS.sequence_length):
        cum_value += reward_missing_list[s] * np.power(gamma, (
            s - t)) * rewards_list[s]
      cumulative_rewards.append(cum_value)
    cumulative_rewards = tf.stack(cumulative_rewards, axis=1)
    
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
    
        ## Discriminator Variables/Savers.
    if FLAGS.discriminator_model == 'rnn_nas':
      dis_variable_maps = variable_mapping.rnn_nas(hparams, model='dis')
      dis_init_saver = tf.train.Saver(var_list=dis_variable_maps)
      init_savers['dis_init_saver'] = dis_init_saver
    
          next context state: `context_state`, this decoder function does not
      modify the given context state. The context state could be modified when
      applying e.g. beam search.
    
        releaser = GitHubReleaser()
    
        print('20 newsgroups')
    print('=============')
    print('X_train.shape = {0}'.format(X_train.shape))
    print('X_train.format = {0}'.format(X_train.format))
    print('X_train.dtype = {0}'.format(X_train.dtype))
    print('X_train density = {0}'
          ''.format(X_train.nnz / np.product(X_train.shape)))
    print('y_train {0}'.format(y_train.shape))
    print('X_test {0}'.format(X_test.shape))
    print('X_test.format = {0}'.format(X_test.format))
    print('X_test.dtype = {0}'.format(X_test.dtype))
    print('y_test {0}'.format(y_test.shape))
    print()
    
            X = np.random.randn(n_samples, n_features)
        Y = np.random.randn(n_samples)
    
                gc.collect()
            print('benchmarking lars_path (with Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            G = np.dot(X.T, X)  # precomputed Gram matrix
            Xy = np.dot(X.T, y)
            lars_path(X, y, Xy=Xy, Gram=G, method='lasso')
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lars_path (with Gram)'].append(delta)
    
                gc.collect()
            print('benchmarking scikit-learn randomized_svd: n_iter=%d '
                  % n_iter)
            tstart = time()
            randomized_svd(X, rank, n_iter=n_iter)
            results['scikit-learn randomized_svd (n_iter=%d)'
                    % n_iter].append(time() - tstart)
    
        ###########################################################################
    # Set transformer input
    ###########################################################################
    transformers = {}
    
        ###########################################################################
    # Remove unspecified algorithm
    sampling_algorithm = dict((key, value)
                              for key, value in sampling_algorithm.items()
                              if key in selected_algorithm)
    
    Invoke with
-----------
    
    
def run_vectorizer(Vectorizer, X, **params):
    def f():
        vect = Vectorizer(**params)
        vect.fit_transform(X)
    return f
    
            self.http_client = simple_http_client.Client(self.proxy, timeout=10)
    
        try:
        # hide console in MS windows
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startupinfo.wShowWindow = subprocess.SW_HIDE
    
    
    def getLastRewriteTokenIndex(self, programName=DEFAULT_PROGRAM_NAME):
        return self.lastRewriteTokenIndexes.get(programName, -1)
    
    HEADER_ARGS = {'Strict-Transport-Security': HSTS_ARGS}

    
    
    def __eq__(self, other):
        if isinstance(other, self.__class__):
            return (self.filep == other.filep and self.path == other.path and
                    self.addrs == other.addrs and
                    self.get_names() == other.get_names() and
                    self.ssl == other.ssl and
                    self.enabled == other.enabled and
                    self.modmacro == other.modmacro)