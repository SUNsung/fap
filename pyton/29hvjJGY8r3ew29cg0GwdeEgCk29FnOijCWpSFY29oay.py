
        
          x_embedding_id = tf.squeeze(features['x_embedding_id'], [-1])
  y_embedding_id = tf.squeeze(features['y_embedding_id'], [-1])
  nc_embedding_id = tf.squeeze(features['nc_embedding_id'], [-1])
  labels = tf.squeeze(features['rel_id'], [-1])
  path_counts = tf.to_float(tf.reshape(features['counts'], [batch_size, -1]))
    
    rnn_a = generate_rnn(rnn_rngs[0], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnn_b = generate_rnn(rnn_rngs[1], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnns = [rnn_a, rnn_b]
    
      E = len(data_e)
  mfr = max_firing_rate
  gauss_e = []
  for e in range(E):
    data = data_e[e]
    N,T = data.shape
    noisy_data = data * mfr + np.random.randn(N,T) * (5.0*mfr) * np.sqrt(dt)
    gauss_e.append(noisy_data)
    
      # Dictionary and reverse dictionry.
  if FLAGS.data_set == 'ptb':
    word_to_id = ptb_loader.build_vocab(
        os.path.join(FLAGS.data_dir, 'ptb.train.txt'))
  elif FLAGS.data_set == 'imdb':
    word_to_id = imdb_loader.build_vocab(
        os.path.join(FLAGS.data_dir, 'vocab.txt'))
  id_to_word = {v: k for k, v in word_to_id.iteritems()}
    
      Args:
    gen_logits:  Generator logits.
    gen_labels:  Labels for the correct token.
    dis_values:  Discriminator values Tensor of shape [batch_size,
      sequence_length].
    is_real_input:  Tensor indicating whether the label is present.
    
        ## Discriminator Variables/Savers.
    if FLAGS.discriminator_model == 'rnn_nas':
      dis_variable_maps = variable_mapping.rnn_nas(hparams, model='dis')
      dis_init_saver = tf.train.Saver(var_list=dis_variable_maps)
      init_savers['dis_init_saver'] = dis_init_saver
    
      for t in ngrams_list:
    key = hash_function(t)
    if key in counts:
      counts[key] += 1
    else:
      counts[key] = 1
  return counts
    
      if not FLAGS.dis_share_embedding:
    decoder_embedding = [
        v for v in tf.trainable_variables()
        if v.op.name == 'dis/decoder/rnn/embedding'
    ][0]
    
        '''
    with tf.name_scope(
        name, 'attention_decoder_fn_inference',
        [time, cell_state, cell_input, cell_output, context_state]):
      if cell_input is not None:
        raise ValueError(
            'Expected cell_input to be None, but saw: %s' % cell_input)
      if cell_output is None:
        # invariant that this is time == 0
        next_input_id = tf.ones(
            [
                batch_size,
            ], dtype=dtype) * (
                start_of_sequence_id)
        done = tf.zeros(
            [
                batch_size,
            ], dtype=tf.bool)
        cell_state = encoder_state
        cell_output = tf.zeros([num_decoder_symbols], dtype=tf.float32)
        cell_input = tf.gather(embeddings, next_input_id)
    
            # Insert the include statement to MANIFEST.in if not present
        with open(manifest_path, 'a+') as manifest:
            manifest.seek(0)
            manifest_content = manifest.read()
            if not 'include fastentrypoints.py' in manifest_content:
                manifest.write(('\n' if manifest_content else '')
                               + 'include fastentrypoints.py')
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'git help')
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
@pytest.mark.parametrize('app, help_text, operations', [
    ('apt', apt_help, apt_operations),
    ('apt-get', apt_get_help, apt_get_operations)
])
def test_get_operations(set_help, app, help_text, operations):
    set_help(help_text)
    assert _get_operations(app) == operations
    
    
Invalid choice: 'dynamdb', maybe you meant:
    
    
no_such_subcommand_old = '''No such subcommand
    
            # No redirect was found. Return the response.
        return response

    
        def __call__(self, func):
        # Note that we are intentionally not using @wraps here for performance
        # reasons. Refs #21109.
        def inner(*args, **kwargs):
            with self:
                return func(*args, **kwargs)
        return inner
    
    
if __name__ == '__main__':
    main()

    
        def create_client(self, resource):
        try:
            region, ec2_url, aws_connect_kwargs = get_aws_connection_info(self.module, boto3=True)
            self.client = boto3_conn(self.module, conn_type='client', resource=resource, region=region, endpoint=ec2_url, **aws_connect_kwargs)
        except (ClientError, BotoCoreError) as e:
                self.module.fail_json_aws(e, msg='Unable to establish connection.')
    
    
if __name__ == '__main__':
    main()

    
    
def get_elasticache_clusters(client, module, region):
    try:
        clusters = describe_cache_clusters_with_backoff(client, cluster_id=module.params.get('name'))
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Couldn't obtain cache cluster info')
    
        if function_name:
        params['FunctionName'] = module.params.get('function_name')
    
        tstart = datetime.now()
    isotonic_regression(Y)
    delta = datetime.now() - tstart
    return total_seconds(delta)
    
    
def plot_feature_errors(all_errors, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_errors['pca'], label='PCA')
    plot_results(all_components, all_errors['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. n_components\n'
                 'LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Mean absolute error')
    
            ax.set_xlabel('n_samples')
        ax.set_ylabel('n_features')
        ax.set_zlabel('Time (s)')
        ax.set_zlim3d(0.0, max_time * 1.1)
        ax.set_title(label)
        # ax.legend()
        i += 1
    plt.show()

    
        plt.figlegend((c_bar, q_bar), ('construction', 'N-point query'),
                  'upper right')
    
        op.add_option('--algorithm',
                  dest='selected_algorithm',
                  default=default_algorithms,
                  type=str,
                  help='Comma-separated list of transformer to benchmark. '
                       'Default: %default. \nAvailable: %default')
    
    if __name__ == '__main__':
    list_n_samples = np.linspace(100, 10000, 5).astype(np.int)
    list_n_features = [10, 100, 1000]
    n_test = 1000
    max_iter = 1000
    noise = 0.1
    alpha = 0.01
    sgd_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    elnet_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    ridge_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    asgd_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    for i, n_train in enumerate(list_n_samples):
        for j, n_features in enumerate(list_n_features):
            X, y, coef = make_regression(
                n_samples=n_train + n_test, n_features=n_features,
                noise=noise, coef=True)
    
    
def benchmark_sparse_predict():
    X_test_sparse = csr_matrix(X_test)
    for _ in range(300):
        clf.predict(X_test_sparse)
    
        scikit_regressor_results.append(
        delta.seconds + delta.microseconds / mu_second)
    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')
    
    
def main(path):
    
    PY_MAJOR, PY_MINOR, PY_PATCH = sys.version_info[ 0 : 3 ]
if not ( ( PY_MAJOR == 2 and PY_MINOR == 7 and PY_PATCH >= 1 ) or
         ( PY_MAJOR == 3 and PY_MINOR >= 4 ) or
         PY_MAJOR > 3 ):
  sys.exit( 'YouCompleteMe requires Python >= 2.7.1 or >= 3.4; '
            'your version of Python is ' + sys.version )
    
    
  def Poll( self, diagnostics_handler ):
    '''This should be called regularly to check for new messages in this buffer.
    Returns True if Poll should be called again in a while. Returns False when
    the completer or server indicated that further polling should not be done
    for the requested file.'''
    
    
def _ListOf( config_entry ):
  if isinstance( config_entry, list ):
    return config_entry
    
    
def StopServer( ycm ):
  try:
    ycm.OnVimLeave()
    WaitUntilProcessIsTerminated( ycm._server_popen )
    CloseStandardStreams( ycm._server_popen )
  except Exception:
    pass
    
    from nose.tools import eq_
from ycm.tests.test_utils import MockVimModule
vim_mock = MockVimModule()
    
      # 0 is not False
  assert_that( _HandlePollResponse( 0, None ), equal_to( True ) )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      _assert_rejects( f, 'This is a Taco' )
  _assert_accepts( f, 'This is a Burrito' )
    
    
def EndsWithPython_Python2Paths_test():
  python_paths = [
    'python',
    'python2',
    '/usr/bin/python2.7',
    '/home/user/.pyenv/shims/python2.7',
    r'C:\Python27\python.exe',
    '/Contents/MacOS/Python'
  ]
    
    
@patch( 'ycm.vimsupport.GetVariableValue',
        GetVariableValue_CompleteItemIs( 'Test' ) )
@patch( 'ycm.vimsupport.ReplaceChunks' )
def PostCompleteFixIt_ApplyFixIt_EmptyFixIt_test( replace_chunks, *args ):
  completions = [
    BuildCompletionFixIt( [ { 'chunks': [] } ] )
  ]
  with _SetUpCompleteDone( completions ) as request:
    request._OnCompleteDone_FixIt()
    replace_chunks.assert_called_once_with( [], silent = True )