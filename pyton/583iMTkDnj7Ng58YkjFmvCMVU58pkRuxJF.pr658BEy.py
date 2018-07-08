
        
            # We take the [steps, batch*beam, ...] tensor array, gather and concat
    # the steps we might need into a [some_steps*batch*beam, ...] tensor,
    # and flatten 'idx' to dereference this new tensor.
    #
    # The first element of each tensor array is reserved for an
    # initialization variable, so we offset all step indices by +1.
    #
    # TODO(googleuser): It would be great to not have to extract
    # the steps in their entirety, forcing a copy of much of the
    # TensorArray at each step. Better would be to support a
    # TensorArray.gather_nd to pick the specific elements directly.
    # TODO(googleuser): In the interim, a small optimization would
    # be to use tf.unique instead of tf.range.
    step_min = tf.reduce_min(step_idx)
    ta_range = tf.range(step_min + 1, tf.reduce_max(step_idx) + 2)
    act_block = source_array.gather(ta_range)
    act_block = tf.reshape(act_block,
                           tf.concat([[-1], tf.shape(act_block)[2:]], 0))
    flat_idx = (step_idx - step_min) * stride + idx
    act_block = tf.gather(act_block, flat_idx)
    act_block = tf.reshape(act_block, [-1, source_layer_size])
    
      Arguments:
    sess: TF session to use.
    trainers: List of training ops to use.
    annotator: Annotation op.
    evaluator: Function taking two serialized corpora and returning a dict of
      scalar summaries representing evaluation metrics. The 'eval_metric'
      summary will be used for early stopping.
    pretrain_steps: List of the no. of pre-training steps for each train op.
    train_steps: List of the total no. of steps for each train op.
    train_corpus: Training corpus to use.
    eval_corpus: Holdout Corpus for early stoping.
    eval_gold: Reference of eval_corpus for computing accuracy.
      eval_corpus and eval_gold are allowed to be the same if eval_corpus
      already contains gold annotation.
      Note for segmentation eval_corpus and eval_gold are always different since
      eval_corpus contains sentences whose tokens are utf8-characters while
      eval_gold's tokens are gold words.
    batch_size: How many examples to send to the train op at a time.
    summary_writer: TF SummaryWriter to use to write summaries.
    report_every: How often to compute summaries (in steps).
    saver: TF saver op to save variables.
    checkpoint_filename: File to save checkpoints to.
    checkpoint_stats: Stats of checkpoint.
  '''
  if not checkpoint_stats:
    checkpoint_stats = [0] * (len(train_steps) + 1)
    
      with tf.Session(graph=g, config=session_config) as sess:
    tf.logging.info('Initializing variables...')
    sess.run(tf.global_variables_initializer())
    
    Sample invocation:
  bazel run -c opt <...>:dragnn_eval -- \
    --master_spec='/path/to/master-spec' \
    --resource_dir='/path/to/resources/'
    --checkpoint_file='/path/to/model/name.checkpoint' \
    --input_file='/path/to/input/documents/test.connlu'
'''
    
    cc_test(
    name = 'binary_segment_state_test',
    size = 'small',
    srcs = ['binary_segment_state_test.cc'],
    deps = [
        ':base',
        ':parser_transitions',
        ':term_frequency_map',
        ':test_main',
    ],
)
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
        Uses threading to periodically update the status (speed, ETA, etc.).
    
        http://docs.python-requests.org/en/latest/user/advanced/#transport-adapters
    
    positional = parser.add_argument_group(
    title='Positional Arguments',
    description=dedent('''
    These arguments come after any flags and in the order they are listed here.
    Only URL is required.
    
        # noinspection PyUnboundLocalVariable
    return '%.*f %s' % (precision, n / factor, suffix)

    
        density : array-like of ints (1d or 0d)
        The density of positive labels in the input.
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
    import numpy as np
from scipy.cluster import hierarchy
import matplotlib.pyplot as plt
    
        scikit_regressor_results.append(
        delta.seconds + delta.microseconds / mu_second)
    
        package is the name of the root module of the package
    
    pages = {
    u'ar': u'http://ar.wikipedia.org/wiki/%D9%88%D9%8A%D9%83%D9%8A%D8%A8%D9%8A%D8%AF%D9%8A%D8%A7',
    u'de': u'http://de.wikipedia.org/wiki/Wikipedia',
    u'en': u'https://en.wikipedia.org/wiki/Wikipedia',
    u'es': u'http://es.wikipedia.org/wiki/Wikipedia',
    u'fr': u'http://fr.wikipedia.org/wiki/Wikip%C3%A9dia',
    u'it': u'http://it.wikipedia.org/wiki/Wikipedia',
    u'ja': u'http://ja.wikipedia.org/wiki/Wikipedia',
    u'nl': u'http://nl.wikipedia.org/wiki/Wikipedia',
    u'pl': u'http://pl.wikipedia.org/wiki/Wikipedia',
    u'pt': u'http://pt.wikipedia.org/wiki/Wikip%C3%A9dia',
    u'ru': u'http://ru.wikipedia.org/wiki/%D0%92%D0%B8%D0%BA%D0%B8%D0%BF%D0%B5%D0%B4%D0%B8%D1%8F',
#    u'zh': u'http://zh.wikipedia.org/wiki/Wikipedia',
}
    
    # Plot changes in predicted probabilities via arrows
plt.figure(0)
colors = ['r', 'g', 'b']
for i in range(clf_probs.shape[0]):
    plt.arrow(clf_probs[i, 0], clf_probs[i, 1],
              sig_clf_probs[i, 0] - clf_probs[i, 0],
              sig_clf_probs[i, 1] - clf_probs[i, 1],
              color=colors[y_test[i]], head_width=1e-2)
    
        t0 = time()
    scores = uniform_labelings_scores(score_func, n_samples, n_clusters_range,
                                      fixed_n_classes=n_classes)
    print('done in %0.3fs' % (time() - t0))
    plots.append(plt.errorbar(
        n_clusters_range, scores.mean(axis=1), scores.std(axis=1))[0])
    names.append(score_func.__name__)
    
    np.random.seed(0)
###############################################################################
n_features = 100
# simulation covariance matrix (AR(1) process)
r = 0.1
real_cov = toeplitz(r ** np.arange(n_features))
coloring_matrix = cholesky(real_cov)
    
    import matplotlib.pyplot as plt
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
    
def _get_homehub_data(url):
    '''Return mock homehub data.'''
    return '''
    [
        {
            'mac': 'AA:BB:CC:DD:EE:FF,
            'hostname': 'hostname',
            'ip': '192.168.1.43',
            'ipv6': '',
            'name': 'hostname',
            'activity': '1',
            'os': 'Unknown',
            'device': 'Unknown',
            'time_first_seen': '2016/06/05 11:14:45',
            'time_last_active': '2016/06/06 11:33:08',
            'dhcp_option': '39043T90430T9TGK0EKGE5KGE3K904390K45GK054',
            'port': 'wl0',
            'ipv6_ll': 'fe80::gd67:ghrr:fuud:4332',
            'activity_ip': '1',
            'activity_ipv6_ll': '0',
            'activity_ipv6': '0',
            'device_oui': 'NA',
            'device_serial': 'NA',
            'device_class': 'NA'
        }
    ]
    '''