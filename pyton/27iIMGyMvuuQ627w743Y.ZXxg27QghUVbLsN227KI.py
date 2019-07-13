
        
            # OPTIMIZATION
    # train the io matrices only
    if self.hps.do_train_io_only:
      self.train_vars = tvars = \
        tf.get_collection('IO_transformations',
                          scope=tf.get_variable_scope().name)
    # train the encoder only
    elif self.hps.do_train_encoder_only:
      tvars1 = \
        tf.get_collection(tf.GraphKeys.TRAINABLE_VARIABLES,
                          scope='LFADS/ic_enc_*')
      tvars2 = \
        tf.get_collection(tf.GraphKeys.TRAINABLE_VARIABLES,
                          scope='LFADS/z/ic_enc_*')
    
    # Note that the dimension of the initial conditions is separated from the
# dimensions of the generator initial conditions (and a linear matrix will
# adapt the shapes if necessary).  This is just another way to control
# complexity.  In all likelihood, setting the ic dims to the size of the
# generator hidden state is just fine.
flags.DEFINE_integer('ic_dim', IC_DIM, 'Dimension of h0')
# Setting the dimensions of the factors to something smaller than the data
# dimension is a way to get a reduced dimensionality representation of your
# data.
flags.DEFINE_integer('factors_dim', FACTORS_DIM,
                     'Number of factors from generator')
flags.DEFINE_integer('ic_enc_dim', IC_ENC_DIM,
                     'Cell hidden size, encoder of h0')
    
    
def split_list_by_inds(data, inds1, inds2):
  '''Take the data, a list, and split it up based on the indices in inds1 and
  inds2.
  Args:
    data: the list of data to split
    inds1, the first list of indices
    inds2, the second list of indices
  Returns: a 2-tuple of two lists.
  '''
  if data is None or len(data) == 0:
    return [], []
  else:
    dout1 = [data[i] for i in inds1]
    dout2 = [data[i] for i in inds2]
    return dout1, dout2
    
    
class CharsVocabulary(Vocabulary):
  '''Vocabulary containing character-level information.'''
    
          softmax = sess.run(t['softmax_out'],
                         feed_dict={t['char_inputs_in']: char_ids_inputs,
                                    t['inputs_in']: inputs,
                                    t['targets_in']: targets,
                                    t['target_weights_in']: weights})
    
      # Cut preprocessed into patches of shape [batch_size, num_timesteps]
  patches = []
  for row in range(nrow):
    patches.append([])
    for col in range(ncol):
      patch = [sent[col * num_timesteps:
                    (col+1) * num_timesteps + 1]
               for sent in preprocessed[row * batch_size:
                                        (row+1) * batch_size]]
      if np.all(np.array(patch)[:, 1:] == PAD):
        patch = None  # no need to process this patch.
      patches[-1].append(patch)
  return patches
    
          for s in xrange(t, FLAGS.sequence_length):
        cum_advantage += missing_list[s] * np.power(gamma,
                                                    (s - t)) * rewards_list[s]
      cum_advantage -= baselines[t]
      # Clip advantages.
      cum_advantage = tf.clip_by_value(cum_advantage, -FLAGS.advantage_clipping,
                                       FLAGS.advantage_clipping)
      advantages.append(missing_list[t] * cum_advantage)
      final_gen_objective += tf.multiply(
          log_probability, missing_list[t] * tf.stop_gradient(cum_advantage))
    
      # Common elements to Generator and Discriminator.
  embedding = [
      v for v in tf.trainable_variables()
      if v.op.name == str(model) + '/rnn/embedding'
  ][0]
  lstm_w_0 = [
      v for v in tf.trainable_variables()
      if v.op.name ==
      str(model) + '/rnn/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat'
  ][0]
  lstm_b_0 = [
      v for v in tf.trainable_variables()
      if v.op.name == str(model) +
      '/rnn/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat'
  ][0]
  lstm_w_1 = [
      v for v in tf.trainable_variables()
      if v.op.name ==
      str(model) + '/rnn/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat'
  ][0]
  lstm_b_1 = [
      v for v in tf.trainable_variables()
      if v.op.name == str(model) +
      '/rnn/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat'
  ][0]
    
            # XXX Should this raise AttributeError or ValueError?
        suite = loader.loadTestsFromName('abc () //', unittest)
        error, test = self.check_deferred_error(loader, suite)
        expected = 'module 'unittest' has no attribute 'abc () //''
        expected_regex = r'module 'unittest' has no attribute 'abc \(\) //''
        self.assertIn(
            expected, error,
            'missing error string in %r' % error)
        self.assertRaisesRegex(
            AttributeError, expected_regex, getattr(test, 'abc () //'))
    
        @classmethod
    def tearDownClass(cls):
        del cls.dialog
        cls.root.update_idletasks()
        cls.root.destroy()
        del cls.root
    
    # A simple generator function
def baz():
    for i in range(10):
        yield i*i
    
    def test():
    NUMBER_OF_PROCESSES = 4
    TASKS1 = [(mul, (i, 7)) for i in range(20)]
    TASKS2 = [(plus, (i, 8)) for i in range(10)]
    
    import os
import sys
from distutils.util import get_platform
PLAT_SPEC = '%s-%d.%d' % (get_platform(), *sys.version_info[:2])
src = os.path.join('build', 'lib.%s' % PLAT_SPEC)
sys.path.append(src)
    
    import os
import warnings
    
    
def __miles_to_meters(miles: float) -> float:
    '''Convert miles to meters.'''
    return miles * 1609.344
    
                result = 0 % s
            expected = Series([np.nan, 0.0])
            tm.assert_series_equal(result, expected)
    
            # other array is an Integer
        if isinstance(other, IntegerArray):
            omask = getattr(other, 'mask', None)
            mask = getattr(other, 'data', other)
            if omask is not None:
                mask |= omask
    
            _check(float_frame, float_frame_dense)
        _check(float_frame_int_kind, float_frame_dense)
        _check(float_frame_fill0, float_frame_fill0_dense)
        _check(float_frame_fill2, float_frame_fill2_dense)
    
            c1 = ctor(['a', 'a'], categories=['a', 'b'], ordered=False)
        c2 = ctor(['b', 'b'], categories=['b', 'a'], ordered=False)
        assert (c1 != c2).all()
    
        if not is_list_like(comps):
        raise TypeError(
            'only list-like objects are allowed to be passed'
            ' to isin(), you passed a [{comps_type}]'.format(
                comps_type=type(comps).__name__
            )
        )
    if not is_list_like(values):
        raise TypeError(
            'only list-like objects are allowed to be passed'
            ' to isin(), you passed a [{values_type}]'.format(
                values_type=type(values).__name__
            )
        )
    
        for filename in filenames:
        fd = codecs.open(filename, mode='r', encoding='utf-8')
        for line in fd.readlines():
            refs = re.findall(r'(?<=<a href=')[^']*', markdown.markdown(line))
            for ref in refs:
                if ref not in urls:
                    urls.append(ref)
    
        def test_strong_etag_match(self):
        computed_etag = ''xyzzy''
        etags = ''xyzzy''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=304)
    
    # These benchmarks are delicate.  They hit various fast-paths in the gen
# machinery in order to stay synchronous so we don't need an IOLoop.
# This removes noise from the results, but it's easy to change things
# in a way that completely invalidates the results.
    
    
# copied from fix_tuple_params.py
def is_docstring(stmt):
    return isinstance(stmt, pytree.Node) and stmt.children[0].type == token.STRING
    
    JIS_TYPICAL_DISTRIBUTION_RATIO = 3.0
    
    Win1250HungarianModel = {
  'char_to_order_map': win1250HungarianCharToOrderMap,
  'precedence_matrix': HungarianLangModel,
  'typical_positive_ratio': 0.947368,
  'keep_english_letter': True,
  'charset_name': 'windows-1250',
  'language': 'Hungarian',
}

    
    
class MultiByteCharSetProber(CharSetProber):
    '''
    MultiByteCharSetProber
    '''
    
        def feed(self, byte_str):
        for i in range(len(byte_str)):
            coding_state = self.coding_sm.next_state(byte_str[i])
            if coding_state == MachineState.ERROR:
                self.logger.debug('%s %s prober hit error at byte %s',
                                  self.charset_name, self.language, i)
                self._state = ProbingState.NOT_ME
                break
            elif coding_state == MachineState.ITS_ME:
                self._state = ProbingState.FOUND_IT
                break
            elif coding_state == MachineState.START:
                char_len = self.coding_sm.get_current_charlen()
                if i == 0:
                    self._last_char[1] = byte_str[0]
                    self.distribution_analyzer.feed(self._last_char, char_len)
                else:
                    self.distribution_analyzer.feed(byte_str[i - 1:i + 1],
                                                    char_len)
    
    UCS2LE_CLS = (
    0,0,0,0,0,0,0,0,  # 00 - 07
    0,0,1,0,0,2,0,0,  # 08 - 0f
    0,0,0,0,0,0,0,0,  # 10 - 17
    0,0,0,3,0,0,0,0,  # 18 - 1f
    0,0,0,0,0,0,0,0,  # 20 - 27
    0,3,3,3,3,3,0,0,  # 28 - 2f
    0,0,0,0,0,0,0,0,  # 30 - 37
    0,0,0,0,0,0,0,0,  # 38 - 3f
    0,0,0,0,0,0,0,0,  # 40 - 47
    0,0,0,0,0,0,0,0,  # 48 - 4f
    0,0,0,0,0,0,0,0,  # 50 - 57
    0,0,0,0,0,0,0,0,  # 58 - 5f
    0,0,0,0,0,0,0,0,  # 60 - 67
    0,0,0,0,0,0,0,0,  # 68 - 6f
    0,0,0,0,0,0,0,0,  # 70 - 77
    0,0,0,0,0,0,0,0,  # 78 - 7f
    0,0,0,0,0,0,0,0,  # 80 - 87
    0,0,0,0,0,0,0,0,  # 88 - 8f
    0,0,0,0,0,0,0,0,  # 90 - 97
    0,0,0,0,0,0,0,0,  # 98 - 9f
    0,0,0,0,0,0,0,0,  # a0 - a7
    0,0,0,0,0,0,0,0,  # a8 - af
    0,0,0,0,0,0,0,0,  # b0 - b7
    0,0,0,0,0,0,0,0,  # b8 - bf
    0,0,0,0,0,0,0,0,  # c0 - c7
    0,0,0,0,0,0,0,0,  # c8 - cf
    0,0,0,0,0,0,0,0,  # d0 - d7
    0,0,0,0,0,0,0,0,  # d8 - df
    0,0,0,0,0,0,0,0,  # e0 - e7
    0,0,0,0,0,0,0,0,  # e8 - ef
    0,0,0,0,0,0,0,0,  # f0 - f7
    0,0,0,0,0,0,4,5   # f8 - ff
)
    
        def __init__(self, model, reversed=False, name_prober=None):
        super(SingleByteCharSetProber, self).__init__()
        self._model = model
        # TRUE if we need to reverse every pair in the model lookup
        self._reversed = reversed
        # Optional auxiliary prober for name decision
        self._name_prober = name_prober
        self._last_order = None
        self._seq_counters = None
        self._total_seqs = None
        self._total_char = None
        self._freq_char = None
        self.reset()
    
                u = UniversalDetector()
            u.feed(some_bytes)
            u.close()
            detected = u.result
    
    class UTF8Prober(CharSetProber):
    ONE_CHAR_PROB = 0.5
    
        def remove(self, val):
        if val in self.idxs:
            idx, last = self.idxs[val], self.nums[-1]
            self.nums[idx], self.idxs[last] = last, idx
            self.nums.pop()
            self.idxs.pop(val, 0)
            return True
        return False
    
            return True
    
    Example: