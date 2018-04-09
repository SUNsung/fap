
        
            def test_yahoo_https(self):
        # https://github.com/rg3/youtube-dl/issues/2701
        self.assertMatch(
            'https://screen.yahoo.com/smartwatches-latest-wearable-gadgets-163745379-cbs.html',
            ['Yahoo'])
    
            def _find_spec(key):
            m = re.search(
                r'(?m)^//\s*%s:\s*(.*?)\n' % re.escape(key), as_content)
            if not m:
                raise ValueError('Cannot find %s in %s' % (key, testfile))
            return json.loads(m.group(1))
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
      def replicate_states(self, state_coll_name):
    state_list = self._metagraph.collection_def[state_coll_name]
    num_states = len(state_list.node_list.value)
    for replica_id in range(1, FLAGS.num_gpus):
      for i in range(num_states):
        state_list.node_list.value.append(state_list.node_list.value[i])
    for replica_id in range(FLAGS.num_gpus):
      for i in range(num_states):
        index = replica_id * num_states + i
        state_list.node_list.value[index] = with_autoparallel_prefix(
            replica_id, state_list.node_list.value[index])
    
      Args:
    signal: 1D np.array of the input time-domain signal.
    fft_length: Size of the FFT to apply.
    hop_length: Advance (in samples) between each frame passed to FFT.
    window_length: Length of each block of samples to pass to FFT.
    
    
if __name__ == '__main__':
  tf.test.main()

    
    import os.path
    
        seq_ex = seq.seq
    fl = seq_ex.feature_lists.feature_list
    fl_token = fl[data.SequenceWrapper.F_TOKEN_ID].feature
    fl_label = fl[data.SequenceWrapper.F_LABEL].feature
    fl_weight = fl[data.SequenceWrapper.F_WEIGHT].feature
    _ = [self.assertEqual(len(f), 2) for f in [fl_token, fl_label, fl_weight]]
    self.assertAllEqual([f.int64_list.value[0] for f in fl_token], [1, 10])
    self.assertAllEqual([f.int64_list.value[0] for f in fl_label], [2, 20])
    self.assertAllEqual([f.float_list.value[0] for f in fl_weight], [3.0, 30.0])
    
      tf.logging.info('Eval metric values:')
  summary = tf.summary.Summary()
  for name, val in zip(metric_names, values):
    summary.value.add(tag=name, simple_value=val)
    tf.logging.info('%s = %.3f', name, val)
    
      def _lm_loss(self,
               inputs,
               emb_key='lm_embedded',
               lstm_layer='lstm',
               lm_loss_layer='lm_loss',
               loss_name='lm_loss',
               compute_loss=True):
    embedded = self.layers['embedding'](inputs.tokens)
    self.tensors[emb_key] = embedded
    lstm_out, next_state = self.layers[lstm_layer](embedded, inputs.state,
                                                   inputs.length)
    if compute_loss:
      loss = self.layers[lm_loss_layer](
          [lstm_out, inputs.labels, inputs.weights])
      with tf.control_dependencies([inputs.save_state(next_state)]):
        loss = tf.identity(loss)
        tf.summary.scalar(loss_name, loss)
    
    
def _build_random_sequence(vocab_ids):
  seq_len = random.randint(10, 200)
  ids = vocab_ids.values()
  seq = data.SequenceWrapper()
  for token_id in [random.choice(ids) for _ in range(seq_len)]:
    seq.add_timestep().set_token(token_id)
  return seq
    
        n_samples = 2000
    list_n_features = np.linspace(500, 3000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, [n_samples],
                                           list_n_features, precompute=False)
    plt.subplot(212)
    plt.plot(list_n_features, lasso_results, 'b-', label='Lasso')
    plt.plot(list_n_features, lars_lasso_results, 'r-', label='LassoLars')
    plt.title('%d samples, alpha=%s' % (n_samples, alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
        samples : array-like of ints (1d or 0d)
        The number of samples to generate as input.
    
    
if not os.path.exists(DATA_FOLDER):
    
    for f in solutions:
    if not f.endswith('.py'):
        continue
    
    
class Controller(object):
    def __init__(self, model):
        self.model = model
        self.kernel = Tk.IntVar()
        self.surface_type = Tk.IntVar()
        # Whether or not a model has been fitted
        self.fitted = False
    
    plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Original dataset')
    
    
def plot_calibration_curve(est, name, fig_index):
    '''Plot calibration curve for est w/o and with calibration. '''
    # Calibrated with isotonic calibration
    isotonic = CalibratedClassifierCV(est, cv=2, method='isotonic')
    
    iris = datasets.load_iris()
X = iris.data[:, 0:2]  # we only take the first two features for visualization
y = iris.target
    
        When fixed_n_classes is not None the first labeling is considered a ground
    truth class assignment with fixed number of classes.
    '''
    random_labels = np.random.RandomState(seed).randint
    scores = np.zeros((len(n_clusters_range), n_runs))