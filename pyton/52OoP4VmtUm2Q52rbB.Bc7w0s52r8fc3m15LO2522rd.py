
        
            Returns:
      The mean loss for the epoch.
    
        Returns:
      a 3 tuple of costs:
        (epoch total cost, epoch reconstruction cost, epoch KL cost)
    '''
    ops_to_eval = [self.cost, self.recon_cost, self.kl_cost]
    collected_op_values = self.run_epoch(datasets, ops_to_eval, kind=kind,
                                         keep_prob=1.0)
    
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
    
      full_name_stem = os.path.join(data_path, data_fname_stem)
  for s, data_dict in dataset_dict.items():
    write_data(full_name_stem + '_' + s, data_dict, compression=compression)
    
        Args:
      filename: Vocabulary file name.
    '''
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      Returns:
    A decoder function with the required interface of `dynamic_rnn_decoder`
    intended for training.
  '''
  with tf.name_scope(name, 'attention_decoder_fn_train', [
      encoder_state, attention_keys, attention_values, attention_score_fn,
      attention_construct_fn
  ]):
    pass
    
    
class RedirectFallbackMiddleware(MiddlewareMixin):
    # Defined as class-level attributes to be subclassing-friendly.
    response_gone_class = HttpResponseGone
    response_redirect_class = HttpResponsePermanentRedirect
    
    KEY_PREFIX = 'django.contrib.sessions.cache'
    
        def flush(self):
        '''
        Remove the current session data from the database and regenerate the
        key.
        '''
        self.clear()
        self.delete(self.session_key)
        self._session_key = None

    
    
class SessionStore(SessionBase):
    '''
    Implement database session store.
    '''
    def __init__(self, session_key=None):
        super().__init__(session_key)