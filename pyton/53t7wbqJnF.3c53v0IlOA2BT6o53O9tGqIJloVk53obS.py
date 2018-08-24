
        
        flags = tf.app.flags
flags.DEFINE_string('save_dir', '/tmp/' + DATA_DIR + '/',
                    'Directory for saving data.')
flags.DEFINE_string('datafile_name', 'thits_data',
                    'Name of data file for input case.')
flags.DEFINE_string('noise_type', 'poisson', 'Noise type for data.')
flags.DEFINE_integer('synth_data_seed', 5, 'Random seed for RNN generation.')
flags.DEFINE_float('T', 1.0, 'Time in seconds to generate.')
flags.DEFINE_integer('C', 100, 'Number of conditions')
flags.DEFINE_integer('N', 50, 'Number of units for the RNN')
flags.DEFINE_integer('S', 50, 'Number of sampled units from RNN')
flags.DEFINE_integer('npcs', 10, 'Number of PCS for multi-session case.')
flags.DEFINE_float('train_percentage', 4.0/5.0,
                   'Percentage of train vs validation trials')
flags.DEFINE_integer('nreplications', 40,
                     'Number of noise replications of the same underlying rates.')
flags.DEFINE_float('g', 1.5, 'Complexity of dynamics')
flags.DEFINE_float('x0_std', 1.0,
                   'Volume from which to pull initial conditions (affects diversity of dynamics.')
flags.DEFINE_float('tau', 0.025, 'Time constant of RNN')
flags.DEFINE_float('dt', 0.010, 'Time bin')
flags.DEFINE_float('input_magnitude', 20.0,
                   'For the input case, what is the value of the input?')
flags.DEFINE_float('max_firing_rate', 30.0, 'Map 1.0 of RNN to a spikes per second')
FLAGS = flags.FLAGS
    
      # Now for each dataset, we regress the channel data onto the top
  # pcs, and this will be our alignment matrix for that dataset.
  # |B - A*W|^2
  for name, dataset in datasets.items():
    cidx_s = channel_idxs[name][0]
    cidx_f = channel_idxs[name][1]
    all_data_zm_chxtc = all_data_zm_nxtc[cidx_s:cidx_f,:] # ch for channel
    W_chxp, _, _, _ = \
        np.linalg.lstsq(all_data_zm_chxtc.T, all_data_pca_pxtc.T)
    dataset['alignment_matrix_cxf'] = W_chxp
    alignment_bias_cx1 = all_data_mean_nx1[cidx_s:cidx_f]
    dataset['alignment_bias_c'] = np.squeeze(alignment_bias_cx1, axis=1)
    
      # Note the use of get_variable vs. tf.Variable.  this is because get_variable
  # does not allow the initialization of the variable with a value.
  if normalized:
    w_collections = [tf.GraphKeys.GLOBAL_VARIABLES, 'norm-variables']
    if collections:
      w_collections += collections
    if mat_init_value is not None:
      w = tf.Variable(mat_init_value, name=wname, collections=w_collections,
                      trainable=trainable)
    else:
      w = tf.get_variable(wname, [in_size, out_size], initializer=mat_init,
                          collections=w_collections, trainable=trainable)
    w = tf.nn.l2_normalize(w, dim=0) # x W, so xW_j = \sum_i x_bi W_ij
  else:
    w_collections = [tf.GraphKeys.GLOBAL_VARIABLES]
    if collections:
      w_collections += collections
    if mat_init_value is not None:
      w = tf.Variable(mat_init_value, name=wname, collections=w_collections,
                      trainable=trainable)
    else:
      w = tf.get_variable(wname, [in_size, out_size], initializer=mat_init,
                          collections=w_collections, trainable=trainable)
  b = None
  if do_bias:
    b_collections = [tf.GraphKeys.GLOBAL_VARIABLES]
    if collections:
      b_collections += collections
    bname = (name + '/b') if name else '/b'
    if bias_init_value is None:
      b = tf.get_variable(bname, [1, out_size],
                          initializer=tf.zeros_initializer(),
                          collections=b_collections,
                          trainable=trainable)
    else:
      b = tf.Variable(bias_init_value, name=bname,
                      collections=b_collections,
                      trainable=trainable)
    
    
def construct_ngrams_dict(ngrams_list):
  '''Construct a ngram dictionary which maps an ngram tuple to the number
  of times it appears in the text.'''
  counts = {}
    
      if not FLAGS.seq2seq_share_embedding:
    variable_mapping = {
        str(model_str) + '/embedding':
            encoder_embedding,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
            encoder_lstm_w_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
            encoder_lstm_b_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
            encoder_lstm_w_1,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
            encoder_lstm_b_1
    }
  else:
    variable_mapping = {
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
            encoder_lstm_w_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
            encoder_lstm_b_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
            encoder_lstm_w_1,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
            encoder_lstm_b_1
    }
  return variable_mapping
    
        def test_server(self):
    
    # register the Foo class; make `g()` and `_h()` accessible via proxy
MyManager.register('Foo2', Foo, exposed=('g', '_h'))
    
        def test_chunked(self):
        self.check_url('/chunked')
    
    import tornado.ioloop
import tornado.web
from tornado import options
    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
        # Start workers, then wait for the work queue to be empty.
    workers = gen.multi([worker() for _ in range(concurrency)])
    await q.join(timeout=timedelta(seconds=300))
    assert fetching == fetched
    print('Done in %d seconds, fetched %s URLs.' % (
        time.time() - start, len(fetched)))
    
        def callback(response):
        response.rethrow()
        assert len(response.body) == (options.num_chunks * options.chunk_size)
        logging.warning('fetch completed in %s seconds', response.request_time)
        IOLoop.current().stop()
    
    
if __name__ == '__main__':
    main()

    
    extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.coverage',
    'sphinx.ext.doctest',
    'sphinx.ext.intersphinx',
    'sphinx.ext.viewcode',
]
    
    
@gen.coroutine
def main():
    args = parse_command_line()