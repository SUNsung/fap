
        
            def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
    from mrjob.job import MRJob
    
        def __init__(self):
        self.people = {}  # key: person_id, value: person
    
        def __init__(self, size):
        self.size = size
        self.table = [[] for _ in range(self.size)]
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
        def __init__(self, db):
        self.db = db
        pass
    
      if input_magnitude > 0.0:
    # time of 'hits' randomly chosen between [1/4 and 3/4] of total time
    input_times = rng.choice(int(ntime_steps/2), size=[E]) + int(ntime_steps/4)
  else:
    input_times = None
    
    
class IntegrationToBoundModel:
  def __init__(self, N):
    scale = 0.8 / float(N**0.5)
    self.N = N
    self.Wh_nxn = tf.Variable(tf.random_normal([N, N], stddev=scale))
    self.b_1xn = tf.Variable(tf.zeros([1, N]))
    self.Bu_1xn = tf.Variable(tf.zeros([1, N]))
    self.Wro_nxo = tf.Variable(tf.random_normal([N, 1], stddev=scale))
    self.bro_o = tf.Variable(tf.zeros([1]))
    
        if np.isnan(log_perp):
      sys.stderr.error('log_perplexity is Nan.\n')
    else:
      sum_num += log_perp * weights.mean()
      sum_den += weights.mean()
    if sum_den > 0:
      perplexity = np.exp(sum_num / sum_den)
    
      # Load data set.
  if FLAGS.data_set == 'ptb':
    raw_data = ptb_loader.ptb_raw_data(FLAGS.data_dir)
    train_data, valid_data, _, _ = raw_data
  elif FLAGS.data_set == 'imdb':
    raw_data = imdb_loader.imdb_raw_data(FLAGS.data_dir)
    train_data, valid_data = raw_data
  else:
    raise NotImplementedError
    
        # rnn_vd derived from the same code base as rnn_zaremba.
    elif (FLAGS.discriminator_model == 'rnn_zaremba' or
          FLAGS.discriminator_model == 'rnn_vd'):
      dis_variable_maps = variable_mapping.rnn_zaremba(hparams, model='dis')
      dis_init_saver = tf.train.Saver(var_list=dis_variable_maps)
      init_savers['dis_init_saver'] = dis_init_saver