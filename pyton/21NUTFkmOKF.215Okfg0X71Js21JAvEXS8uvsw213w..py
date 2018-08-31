
        
        
if __name__ == '__main__':
    main()

    
    new_version = {}
    
    import rsa
import json
from binascii import hexlify
    
        ies = sorted(youtube_dl.gen_extractors(), key=lambda i: i.IE_NAME.lower())
    out = '# Supported sites\n' + ''.join(
        ' - ' + md + '\n'
        for md in gen_ies_md(ies))
    
    if len(sys.argv) >= 2 and sys.argv[1] == 'py2exe':
    params = py2exe_params
else:
    files_spec = [
        ('etc/bash_completion.d', ['youtube-dl.bash-completion']),
        ('etc/fish/completions', ['youtube-dl.fish']),
        ('share/doc/youtube_dl', ['README.txt']),
        ('share/man/man1', ['youtube-dl.1'])
    ]
    root = os.path.dirname(os.path.abspath(__file__))
    data_files = []
    for dirname, files in files_spec:
        resfiles = []
        for fn in files:
            if not os.path.exists(fn):
                warnings.warn('Skipping file %s since it is not present. Type  make  to build all automatically generated files.' % fn)
            else:
                resfiles.append(fn)
        data_files.append((dirname, resfiles))
    
    
def assertGreaterEqual(self, got, expected, msg=None):
    if not (got >= expected):
        if msg is None:
            msg = '%r not greater than or equal to %r' % (got, expected)
        self.assertTrue(got >= expected, msg)
    
            for mpd_file, mpd_url, expected_formats in _TEST_CASES:
            with io.open('./test/testdata/mpd/%s.mpd' % mpd_file,
                         mode='r', encoding='utf-8') as f:
                formats = self.ie._parse_mpd_formats(
                    compat_etree_fromstring(f.read().encode('utf-8')),
                    mpd_url=mpd_url)
                self.ie._sort_formats(formats)
                expect_value(self, formats, expected_formats, None)
    
        def test_youtube_extract(self):
        assertExtractId = lambda url, id: self.assertEqual(YoutubeIE.extract_id(url), id)
        assertExtractId('http://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?feature=player_embedded&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch_popup?v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('http://www.youtube.com/watch?v=BaW_jenozKcsharePLED17F32AD9753930', 'BaW_jenozKc')
        assertExtractId('BaW_jenozKc', 'BaW_jenozKc')
    
        Args:
      session: The current TensorFlow session,
      instances: The instances for which to load the labels.
    
        # Convert to full tensors, not lists of tensors in time dim.
    gen_states = list_t_bxn_to_tensor_bxtxn(gen_states)
    factors = list_t_bxn_to_tensor_bxtxn(factors)
    out_dist_params = list_t_bxn_to_tensor_bxtxn(out_dist_params)
    if self.hps.ic_dim > 0:
      # select first time point
      prior_g0_mean = prior_g0_mean[0]
      prior_g0_logvar = prior_g0_logvar[0]
      post_g0_mean = post_g0_mean[0]
      post_g0_logvar = post_g0_logvar[0]
    if self.hps.co_dim > 0:
      controller_outputs = list_t_bxn_to_tensor_bxtxn(controller_outputs)
    
    
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
    
      Returns:
    The length B list of TxN numpy tensors.
  '''
  T = len(values_t_bxn)
  B, N = values_t_bxn[0].shape
  values_b_txn = []
  for b in range(B):
    values_pb_txn = np.zeros([T,N])
    for t in range(T):
      values_pb_txn[t,:] = values_t_bxn[t][b,:]
    values_b_txn.append(values_pb_txn)
    
        self.bos_char = free_ids[0]  # <begin sentence>
    self.eos_char = free_ids[1]  # <end sentence>
    self.bow_char = free_ids[2]  # <begin word>
    self.eow_char = free_ids[3]  # <end word>
    self.pad_char = free_ids[4]  # <padding>
    
    
def _convert_to_partial(scoring1, scoring2):
  '''Convert full scoring into partial scoring.'''
  mask1, mask2 = _substitution_mask(
      scoring1['sentence'], scoring2['sentence'])
    
      '''
  zero_tensor = tf.constant(0., dtype=tf.float32, shape=[])
    
      for t in ngrams_list:
    key = hash_function(t)
    if key in counts:
      counts[key] += 1
    else:
      counts[key] = 1
  return counts
    
      ## Encoder forward variables.
  encoder_lstm_w_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  encoder_lstm_b_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  encoder_lstm_w_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  encoder_lstm_b_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
    
        old_update_wrapper = functools.update_wrapper
    def update_wrapper(wrapper, wrapped, *a, **kw):
        rv = old_update_wrapper(wrapper, wrapped, *a, **kw)
        rv._original_function = wrapped
        return rv
    functools.update_wrapper = update_wrapper
    
        if db is not None:
        db.close()
    
        assert 'closed' in str(e)
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
            @app.route('/stream')
        def streamed_response():
            def generate():
                yield 'Hello '
                yield request.args['name']
                yield '!'
            return Response(stream_with_context(generate()))
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))