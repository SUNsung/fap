
        
        # Dependency labels used in the paths.
DEPLABELS = [
    'PAD',     'UNK',       'ROOT',    'abbrev',    'acomp', 'advcl',
    'advmod',  'agent',     'amod',    'appos',     'attr',  'aux',
    'auxpass', 'cc',        'ccomp',   'complm',    'conj',  'cop',
    'csubj',   'csubjpass', 'dep',     'det',       'dobj',  'expl',
    'infmod',  'iobj',      'mark',    'mwe',       'nc',    'neg',
    'nn',      'npadvmod',  'nsubj',   'nsubjpass', 'num',   'number',
    'p',       'parataxis', 'partmod', 'pcomp',     'pobj',  'poss',
    'preconj', 'predet',    'prep',    'prepc',     'prt',   'ps',
    'purpcl',  'quantmod',  'rcmod',   'ref',       'rel',   'suffix',
    'title',   'tmod',      'xcomp',   'xsubj',
]
    
      @classmethod
  def default_hparams(cls):
    '''Returns the default hyper-parameters.'''
    return tf.contrib.training.HParams(
        max_path_len=8,
        num_classes=37,
        num_epochs=30,
        input_keep_prob=0.9,
        learning_rate=0.001,
        learn_lemmas=False,
        random_seed=133,  # zero means no random seed
        lemma_embeddings_file='glove/glove.6B.50d.bin',
        num_pos=len(lexnet_common.POSTAGS),
        num_dep=len(lexnet_common.DEPLABELS),
        num_directions=len(lexnet_common.DIRS),
        lemma_dim=50,
        pos_dim=4,
        dep_dim=5,
        dir_dim=1)
    
    rates_train = nparray_and_transpose(rates_train)
rates_valid = nparray_and_transpose(rates_valid)
spikes_train = nparray_and_transpose(spikes_train)
spikes_valid = nparray_and_transpose(spikes_valid)
    
        us = np.zeros([1, ntime_steps])
    for t in range(ntime_steps):
      x_t = alpha*x_tm1 + np.dot(W,r_tm1) + b
      if input_time is not None and t == input_time:
        us[0,t] = input_magnitude
        x_t += Bin * us[0,t] # DCS is this what was used?
      r_t = np.tanh(x_t)
      x_tm1 = x_t
      r_tm1 = r_t
      rs[:,t] = r_t
    return rs, us
    
        is_chief = FLAGS.task == 0
    
    
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
    
      Args:
    session:  Current tf.Session.
    lr_update: tf.assign operation.
    lr_placeholder: tf.placeholder for the new learning rate.
    new_lr: New learning rate to use.
  '''
  session.run(lr_update, feed_dict={lr_placeholder: new_lr})
    
        def iter_body(self, chunk_size):
        yield self.body
    
    UNICODE = FILE_CONTENT

    
        def test_binary_file_form(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=B', '--form', 'POST', httpbin.url + '/post',
                 'test@' + BIN_FILE_PATH_ARG, env=env)
        assert bytes(BIN_FILE_CONTENT) in bytes(r)
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        # Raises
        ValueError: in case of invalid `label_mode`.
    '''
    if label_mode not in ['fine', 'coarse']:
        raise ValueError('`label_mode` must be one of `'fine'`, `'coarse'`.')
    
        print_fn(
        'Total params: {:,}'.format(trainable_count + non_trainable_count))
    print_fn('Trainable params: {:,}'.format(trainable_count))
    print_fn('Non-trainable params: {:,}'.format(non_trainable_count))
    print_fn('_' * line_length)
    
            layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': (3, 3),
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_first'},
                   input_shape=(num_samples, stack_size, num_row, num_col))
    
    
def generate_logistic_dataset(size):
    X = np.sort(np.random.normal(size=size))
    return np.random.random(size=size) < 1.0 / (1.0 + np.exp(-X))
    
        for i, DD in enumerate(Drange):
        print('D = %i (%i out of %i)' % (DD, i + 1, len(Drange)))
        X = get_data(N, DD, dataset)
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=k,
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
                gc.collect()
            print('benchmarking orthogonal_mp (without Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            orthogonal_mp(X, y, precompute=False,
                          n_nonzero_coefs=n_informative)
            delta = time() - tstart
            print('%0.3fs' % delta)
            omp[i_f, i_s] = delta
    
    
def plot_power_iter_vs_s(power_iter, s, title):
    plt.figure()
    for l in sorted(s.keys()):
        plt.plot(power_iter, s[l], label=l, marker='o')
    plt.legend(loc='lower right', prop={'size': 10})
    plt.suptitle(title)
    plt.ylabel('norm discrepancy')
    plt.xlabel('n_iter')
    
    ratio = scikits_time / scipy_time
    
        selected_algorithm = opts.selected_algorithm.split(',')
    for key in selected_algorithm:
        if key not in default_algorithms.split(','):
            raise ValueError('Unknown sampling algorithm \'%s\' not in (%s).'
                             % (key, default_algorithms))