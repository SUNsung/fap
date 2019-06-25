
        
        
class FileModeWarning(RequestsWarning, DeprecationWarning):
    '''A file was opened in text mode, but Requests determined its binary length.'''
    pass
    
        def __iter__(self):
        return (casedkey for casedkey, mappedvalue in self._store.values())
    
        return inner
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
            Comment:                   'italic #8f5902', # class: 'c'
        Comment.Preproc:           'noitalic',       # class: 'cp'
    
    # -------
# Pythons
# -------
    
    # TODO: response is the only one
    
    This module contains the primary objects that power Requests.
'''
    
        Handles decoding/encoding between RFC3339 strings and aware (not
    naive) `datetime.datetime` objects
    (e.g. ``datetime.datetime.now(pytz.utc)``).
    
    # http://docs.readthedocs.org/en/latest/theme.html#how-do-i-use-this-locally-and-on-read-the-docs
# on_rtd is whether we are on readthedocs.org
on_rtd = os.environ.get('READTHEDOCS', None) == 'True'
if not on_rtd:  # only import and set the theme if we're building docs locally
    import sphinx_rtd_theme
    html_theme = 'sphinx_rtd_theme'
    html_theme_path = [sphinx_rtd_theme.get_html_theme_path()]
# otherwise, readthedocs.org uses their theme by default, so no need to specify it
    
        def step(self, action):
        assert self.action_space.contains(action)
        if self.np_random.rand() < self.slip:
            action = not action  # agent slipped, reverse action taken
        if action:  # 'backwards': go back to the beginning, get small reward
            reward = self.small
            self.state = 0
        elif self.state < self.n - 1:  # 'forwards': go up along the chain
            reward = 0
            self.state += 1
        else:  # 'forwards': stay at the end of the chain, collect large reward
            reward = self.large
        done = False
        return self.state, reward, done, {}
    
    # TODO: don't hardcode sizeof_int here
def _bigint_from_bytes(bytes):
    sizeof_int = 4
    padding = sizeof_int - len(bytes) % sizeof_int
    bytes += b'\0' * padding
    int_count = int(len(bytes) / sizeof_int)
    unpacked = struct.unpack('{}I'.format(int_count), bytes)
    accum = 0
    for i, val in enumerate(unpacked):
        accum += 2 ** (sizeof_int * 8 * i) * val
    return accum
    
        def test_reversed_addition_3rows(self):
        env = alg.reversed_addition.ReversedAdditionEnv(base=3, rows=3)
        input_expected = [
            ([[1,1,0],[0,1,1]], [2, 2]),
            ([[1,1,2],[0,1,1]], [1,0,1]),
        ]
        for (input_grid, expected_target) in input_expected:
            self.assertEqual(env.target_from_input_data(input_grid), expected_target)
    
                # Physically correct is to always apply friction_limit until speed is equal.
            # But dt is finite, that will lead to oscillations if difference is already near zero.
            f_force *= 205000*SIZE*SIZE  # Random coefficient to cut oscillations in few steps (have no effect on friction_limit)
            p_force *= 205000*SIZE*SIZE
            force = np.sqrt(np.square(f_force) + np.square(p_force))
    
      if use_tpu:
    optimizer = tf.contrib.tpu.CrossShardOptimizer(optimizer)
    
      return model_fn
    
    
def write_instance_to_example_files(instances, tokenizer, max_seq_length,
                                    max_predictions_per_seq, output_files):
  '''Create TF example files from `TrainingInstance`s.'''
  writers = []
  for output_file in output_files:
    writers.append(tf.python_io.TFRecordWriter(output_file))
    
    test_ci = functools.partial(__check_path__, './ci')