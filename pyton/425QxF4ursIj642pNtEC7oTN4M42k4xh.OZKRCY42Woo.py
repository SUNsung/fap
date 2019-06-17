
        
            def _escalate_call(self):
        self.call.state = CallState.READY
        call = self.call
        self.call = None
        self.call_center.notify_call_escalated(call)
    
        def reject_friend_request(self, from_user_id, to_user_id):
        pass
    
        def mapper(self, _, line):
        yield line, 1
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
    # Calibrated just above the average value for the rnn synthetic data.
MAX_GRAD_NORM = 200.0
CELL_CLIP_VALUE = 5.0
KEEP_PROB = 0.95
TEMPORAL_SPIKE_JITTER_WIDTH = 0
OUTPUT_DISTRIBUTION = 'poisson' # 'poisson' or 'gaussian'
NUM_STEPS_FOR_GEN_IC = MAX_INT # set to num_steps if greater than num_steps
    
      Args:
    prefix_words: Prefix words.
    vocab: Vocabulary. Contains max word chard id length and converts between
        words and ids.
  '''
  targets = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  weights = np.ones([BATCH_SIZE, NUM_TIMESTEPS], np.float32)
    
    
def evaluate_ensemble(test_data_name, number_of_lms):
  ensemble = EnsembleLM(test_data_name)
  model_list = ['lm{:02d}'.format(i+1) for i in range(number_of_lms)]
  for model_name in model_list:
    ensemble.add_single_model(model_name)
  accuracy = ensemble.evaluate()
  print('Accuracy of {} LM(s) on {} = {}'.format(
      number_of_lms, test_data_name, accuracy))
    
        for i, word in enumerate(self._id_to_word):
      if i == self.bos:
        self._word_char_ids[i] = self.bos_chars
      elif i == self.eos:
        self._word_char_ids[i] = self.eos_chars
      else:
        self._word_char_ids[i] = self._convert_word_to_char_ids(word)
    
    
def build_vocab(filename):
  data = _read_words(filename)
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    
def create_discriminator(hparams,
                         sequence,
                         is_training,
                         reuse=None,
                         initial_state=None,
                         inputs=None,
                         present=None):
  '''Create the Discriminator model specified by the FLAGS and hparams.
    
        ## Calculate the Advantages, A(s,a) = Q(s,a) - \hat{V}(s).
    advantages = []
    for t in xrange(FLAGS.sequence_length):
      log_probability = log_probs_list[t]
      cum_advantage = tf.zeros(shape=[FLAGS.batch_size])
    
            next_prime_gt = next_prime(value % self.size_table) \
            if not check_prime(value % self.size_table) else value % self.size_table  #gt = bigger than
        return next_prime_gt - (data % next_prime_gt)
    
            else:
            colision_resolution = self._colision_resolution(key, data)
            if colision_resolution is not None:
                self._set_value(colision_resolution, data)
            else:
                self.rehashing()
                self.insert_data(data)
    
    This is a pure Python implementation of Dynamic Programming solution to the longest increasing subsequence of a given sequence.
    
    This is a pure Python implementation of Dynamic Programming solution to the longest_sub_array problem.
    
    
def elu(x):
    '''指数线性单元'''
    return tf.nn.elu(x)
    
        '''
    max_sentence_len, max_word_len, char_vocab_size = get_shape(x)[1:]
    
        Examples:
        l2_regularizer = l2(0.01)
        tf.get_variable(..., regularizer=l2_regularizer, ...)
    '''
    
        def test_weak_etag_match(self):
        computed_etag = ''xyzzy1''
        etags = 'W/'xyzzy1''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=304)
    
    
def run():
    io_loop = IOLoop(make_current=True)
    app = Application([('/', RootHandler)])
    port = random.randrange(options.min_port, options.max_port)
    app.listen(port, address='127.0.0.1')
    signal.signal(signal.SIGCHLD, handle_sigchld)
    args = ['ab']
    args.extend(['-n', str(options.n)])
    args.extend(['-c', str(options.c)])
    if options.keepalive:
        args.append('-k')
    if options.quiet:
        # just stops the progress messages printed to stderr
        args.append('-q')
    args.append('http://127.0.0.1:%d/' % port)
    subprocess.Popen(args)
    io_loop.start()
    io_loop.close()
    io_loop.clear_current()
    
            # This timeout needs to be fairly generous for pypy due to jit
        # warmup costs.
        for i in range(40):
            if autoreload_proc.poll() is not None:
                break
            time.sleep(0.1)
        else:
            autoreload_proc.kill()
            raise Exception('subprocess failed to terminate')