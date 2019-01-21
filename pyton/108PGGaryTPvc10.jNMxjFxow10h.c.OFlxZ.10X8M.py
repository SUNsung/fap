
        
              # Reflect on the boundaries to not lose mass.
      shuffle_tidxs[shuffle_tidxs < 0] = -shuffle_tidxs[shuffle_tidxs < 0]
      shuffle_tidxs[shuffle_tidxs > T-1] = \
          (T-1)-(shuffle_tidxs[shuffle_tidxs > T-1] -(T-1))
    
    
def generate_data(rnn, T, E, x0s=None, P_sxn=None, input_magnitude=0.0,
                  input_times=None):
  ''' Generates data from an randomly initialized RNN.
  Args:
    rnn: the rnn
    T: Time in seconds to run (divided by rnn['dt'] to get steps, rounded down.
    E: total number of examples
    S: number of samples (subsampling N)
  Returns:
    A list of length E of NxT tensors of the network being run.
  '''
  N = rnn['N']
  def run_rnn(rnn, x0, ntime_steps, input_time=None):
    rs = np.zeros([N,ntime_steps])
    x_tm1 = x0
    r_tm1 = np.tanh(x0)
    tau = rnn['tau']
    dt = rnn['dt']
    alpha = (1.0-dt/tau)
    W = dt/tau*rnn['W']*rnn['g']
    Bin = dt/tau*rnn['Bin']
    Bin2 = dt/tau*rnn['Bin2']
    b = dt/tau*rnn['b']
    
    
def flatten(list_of_lists):
  '''Takes a list of lists and returns a list of the elements.
    
      def _score_patches(self, word_patches):
    '''Score a 2D matrix of word_patches and stitch results together.'''
    batch_size, num_timesteps = self.shape
    nrow, ncol = len(word_patches), len(word_patches[0])
    max_len = num_timesteps * ncol
    probs = np.zeros([0, max_len])  # accumulate results into this.
    
      @property
  def eos(self):
    return self._eos
    
    '''Model construction.'''
    
      Returns:
    avg_log_perplexity:  Scalar indicating the average log perplexity per
      missing token in the batch.
  '''
  # logits = tf.Print(logits, [logits], message='logits:', summarize=50)
  # targets = tf.Print(targets, [targets], message='targets:', summarize=50)
  eps = 1e-12
  logits = tf.reshape(logits, [-1, FLAGS.vocab_size])
    
      for _, value in gen_ngrams_dict.iteritems():
    total_ngrams_produced += value
    
          next input: `cell_input`, this decoder function does not modify the
      given input. The input could be modified when applying e.g. attention.
    
    
class CITextExtension(CreateExtension):
    
        def delete(self, session_key=None):
        '''
        To delete, clear the session key and the underlying data structure
        and set the modified flag so that the cookie is set on the client for
        the current request.
        '''
        self._session_key = ''
        self._session_cache = {}
        self.modified = True
    
        class Meta:
        abstract = True
        verbose_name = _('session')
        verbose_name_plural = _('sessions')
    
    
class Session(AbstractBaseSession):
    '''
    Django provides full support for anonymous sessions. The session
    framework lets you store and retrieve arbitrary data on a
    per-site-visitor basis. It stores data on the server side and
    abstracts the sending and receiving of cookies. Cookies contain a
    session ID -- not the data itself.
    
        req_protocol = request.scheme
    req_site = get_current_site(request)