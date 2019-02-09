
        
            # Define the loss function and the optimization algorithm
    self.cross_entropies = tf.nn.sparse_softmax_cross_entropy_with_logits(
        logits=self.scores, labels=tf.reduce_mean(self.batch_labels))
    self.cost = tf.reduce_sum(self.cross_entropies, name='cost')
    self.global_step = tf.Variable(0, name='global_step', trainable=False)
    self.optimizer = tf.train.AdamOptimizer()
    self.train_op = self.optimizer.minimize(self.cost,
                                            global_step=self.global_step)
    
    
def all_plot(d, full_name='', exclude='', nspaces=0):
  '''Recursively plot all the LFADS model parameters in the nested
  dictionary.'''
  for k, v in d.iteritems():
    this_name = full_name+'/'+k
    if isinstance(v, dict):
      all_plot(v, full_name=this_name, exclude=exclude, nspaces=nspaces+4)
    else:
      if exclude == '' or exclude not in this_name:
        _plot_item(v, name=k, full_name=full_name+'/'+k, nspaces=nspaces+4)
    
    # Containers for storing data across data.
datasets = {}
for n in range(ndatasets):
  print(n+1, ' of ', ndatasets)
    
    
def main(_):
  evaluate_ensemble('pdp60', 1)  # 60%
  evaluate_ensemble('pdp60', 5)  # 70%
  evaluate_ensemble('wsc273', 10)  # 61.5%
  evaluate_ensemble('wsc273', 14)  # 63.7%
    
      def id_to_word(self, cur_id):
    if cur_id < self.size:
      return self._id_to_word[int(cur_id)]
    return '<ERROR_out_of_vocab_id>'
    
      Returns:
    values:  tf.float32 Tensor of predictions of shape [batch_size,
      sequence_length]
  '''
  if FLAGS.baseline_method == 'critic':
    if FLAGS.discriminator_model == 'seq2seq_vd':
      values = critic_vd.critic_seq2seq_vd_derivative(
          hparams, sequence, is_training, reuse=reuse)
    else:
      raise NotImplementedError
  else:
    raise NotImplementedError
  return values

    
          # Calculate the forward advantage only on the missing tokens.
      cum_advantage = tf.zeros(shape=[FLAGS.batch_size])
      for s in xrange(t, FLAGS.sequence_length):
        cum_advantage += missing_list[s] * np.power(gamma, (s - t)) * (
            rewards_list[s] - baselines[s])
      # Clip advantages.
      cum_advantage = tf.clip_by_value(cum_advantage, -FLAGS.advantage_clipping,
                                       FLAGS.advantage_clipping)
      advantages.append(missing_list[t] * cum_advantage)
      final_gen_objective += tf.multiply(
          log_probability, missing_list[t] * tf.stop_gradient(cum_advantage))
    
        elif FLAGS.discriminator_model == 'seq2seq_vd':
      load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
      print('Restoring Discriminator from %s.' % load_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % load_ckpt)
      dis_encoder_init_saver = init_savers['dis_encoder_init_saver']
      dis_decoder_init_saver = init_savers['dis_decoder_init_saver']
      dis_encoder_init_saver.restore(sess, load_ckpt)
      dis_decoder_init_saver.restore(sess, load_ckpt)
    
    
def test_current_version():
    version = Environment().config['__meta__']['httpie']
    assert version == __version__

    
        name = None
    helpurl = None
    about = None
    
        num_train_samples = 50000
    
        - Divide the model's input(s) into multiple sub-batches.
    - Apply a model copy on each sub-batch. Every model copy
        is executed on a dedicated GPU.
    - Concatenate the results (on CPU) into one big batch.
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    # Reverse-lookup token index to decode sequences back to
# something readable.
reverse_input_char_index = dict(
    (i, char) for char, i in input_token_index.items())
reverse_target_char_index = dict(
    (i, char) for char, i in target_token_index.items())
    
        print('vectorizing data')
    
    
def fixed_batch_size_comparison(data):
    all_features = [i.astype(int) for i in np.linspace(data.shape[1] // 10,
                                                       data.shape[1], num=5)]
    batch_size = 1000
    # Compare runtimes and error for fixed batch size
    all_times = defaultdict(list)
    all_errors = defaultdict(list)
    for n_components in all_features:
        pca = PCA(n_components=n_components)
        ipca = IncrementalPCA(n_components=n_components, batch_size=batch_size)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('ipca', ipca)]}
    
        # start time
    tstart = datetime.now()
    clf = DecisionTreeClassifier()
    clf.fit(X, Y).predict(X)
    delta = (datetime.now() - tstart)
    # stop time
    
        target = utils.unescape(target).strip()
    title = utils.unescape(title).strip()
    config = inliner.document.settings.env.app.config
    if config.issues_user_uri:
        ref = config.issues_user_uri.format(user=target)
    else:
        ref = 'https://github.com/{0}'.format(target)
    if has_explicit_title:
        text = title
    else:
        text = '@{0}'.format(target)
    
        if f == os.path.basename(__file__):
        continue
    
    
def benchmark_influence(conf):
    '''
    Benchmark influence of :changing_param: on both MSE and latency.
    '''
    prediction_times = []
    prediction_powers = []
    complexities = []
    for param_value in conf['changing_param_values']:
        conf['tuned_params'][conf['changing_param']] = param_value
        estimator = conf['estimator'](**conf['tuned_params'])
        print('Benchmarking %s' % estimator)
        estimator.fit(conf['data']['X_train'], conf['data']['y_train'])
        conf['postfit_hook'](estimator)
        complexity = conf['complexity_computer'](estimator)
        complexities.append(complexity)
        start_time = time.time()
        for _ in range(conf['n_samples']):
            y_pred = estimator.predict(conf['data']['X_test'])
        elapsed_time = (time.time() - start_time) / float(conf['n_samples'])
        prediction_times.append(elapsed_time)
        pred_score = conf['prediction_performance_computer'](
            conf['data']['y_test'], y_pred)
        prediction_powers.append(pred_score)
        print('Complexity: %d | %s: %.4f | Pred. Time: %fs\n' % (
            complexity, conf['prediction_performance_label'], pred_score,
            elapsed_time))
    return prediction_powers, prediction_times, complexities
    
    In both examples below, the main result is that the empirical covariance
estimate, as a non-robust one, is highly influenced by the heterogeneous
structure of the observations. Although the robust covariance estimate is
able to focus on the main mode of the data distribution, it sticks to the
assumption that the data should be Gaussian distributed, yielding some biased
estimation of the data structure, but yet accurate to some extent.
The One-Class SVM does not assume any parametric form of the data distribution
and can therefore model the complex shape of the data much better.
    
    # Create a graph capturing local connectivity. Larger number of neighbors
# will give more homogeneous clusters to the cost of computation
# time. A very large number of neighbors gives more evenly distributed
# cluster sizes, but may not impose the local manifold structure of
# the data
knn_graph = kneighbors_graph(X, 30, include_self=False)
    
    estimators = [('k_means_iris_8', KMeans(n_clusters=8)),
              ('k_means_iris_3', KMeans(n_clusters=3)),
              ('k_means_iris_bad_init', KMeans(n_clusters=3, n_init=1,
                                               init='random'))]
    
    import numpy as np
import matplotlib.pyplot as plt
    
                    # Update the previous file
                if _filename:
                    with open(_filename, 'w') as _file:
                        _file.write(_contents)
    
    
class QPSSpider(Spider):
    
    
    
    from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
    
        def _print_headers(self, headers, prefix):
        for key, values in headers.items():
            for value in values:
                self._print_bytes(prefix + b' ' + key + b': ' + value)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
    __all__ = ['cntv_download', 'cntv_download_by_id']
    
    from ..common import *
import json
    
                    moz_ec_name = search_dict(sym_to_name, 'mozEcName')
                push = search_dict(sym_to_name, 'push')
                patt = '{}\.{}\('(.+?)'\)'.format(moz_ec_name, push)
                ec_list = re.findall(patt, code)
                [magic_list.append(sym_to_name[ec]) for ec in ec_list]
        return magic_list
    
        (prob, state) = max((V[len(obs) - 1][y], y) for y in 'ES')
    
    if opt.topK is None:
    topK = 10
else:
    topK = int(opt.topK)
    
    while True:
    line = sys.stdin.readline()
    if line=='':
        break
    line = line.strip()
    for word in jieba.cut(line):
        print(word)
    
    parser = OptionParser(USAGE)
parser.add_option('-k',dest='topK')
opt, args = parser.parse_args()
    
    url = sys.argv[1]
content = open(url,'rb').read()
t1 = time.time()
words = list(pseg.cut(content))