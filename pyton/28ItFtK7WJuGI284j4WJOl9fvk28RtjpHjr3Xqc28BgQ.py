
        
        
httpie_info = packages.pop('httpie')
print('''
  url '{url}'
  sha256 '{sha256}'
'''.format(**httpie_info))
    
    
class HTTPMessage(object):
    '''Abstract class for HTTP messages.'''
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
    
def main(args=sys.argv[1:], env=Environment(), custom_log_error=None):
    '''
    The main function.
    
            :param mime: E.g., 'application/atom+xml'.
        :param content: The body content as text
    
    
DEFAULT_CONFIG_DIR = str(os.environ.get(
    'HTTPIE_CONFIG_DIR',
    os.path.expanduser('~/.httpie') if not is_windows else
    os.path.expandvars(r'%APPDATA%\\httpie')
))
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
      def __init__(self, metagraph, model):
    self._metagraph = metagraph
    self.replicate_states(model.initial_state_name)
    self.replicate_states(model.final_state_name)
    self.update_snapshot_name('variables')
    self.update_snapshot_name('trainable_variables')
    
      def __init__(self, multivalent_tokens=False):
    self._seq = tf.train.SequenceExample()
    self._flist = self._seq.feature_lists.feature_list
    self._timesteps = []
    self._multivalent_tokens = multivalent_tokens
    
        with tf.gfile.GFile(
        os.path.join(self._logging_dir, METRIC_LOG_FILE_NAME), 'a') as f:
      metric = {
          'name': name,
          'value': float(value),
          'unit': unit,
          'global_step': global_step,
          'timestamp': datetime.datetime.utcnow().strftime(
              _DATE_TIME_FORMAT_PATTERN),
          'extras': extras}
      try:
        json.dump(metric, f)
        f.write('\n')
      except (TypeError, ValueError) as e:
        tf.logging.warning('Failed to dump metric to log file: '
                           'name %s, value %s, error %s', name, value, e)
    
    
class TestFeatureExtraction(utils_test.MiniGoUnitTest):
    
        lib_tracker = LibertyTracker.from_board(utils_test.BOARD_SIZE, board)
    captured = lib_tracker.add_stone(BLACK, coords.from_kgs(
        utils_test.BOARD_SIZE, 'B8'))
    self.assertEqual(len(lib_tracker.groups), 1)
    sole_group_id = lib_tracker.group_index[coords.from_kgs(
        utils_test.BOARD_SIZE, 'A9')]
    sole_group = lib_tracker.groups[sole_group_id]
    self.assertEqual(sole_group.stones,
                     coords_from_kgs_set('A9 B9 A8 B8'))
    self.assertEqual(sole_group.liberties,
                     coords_from_kgs_set('C9 C8 A7 B7'))
    self.assertEqual(captured, set())
    
      def set_komi(self, komi):
    self.komi = komi
    self.position.komi = komi
    
    
class TestSgfGeneration(utils_test.MiniGoUnitTest):
    
      def test_detect_num(self):
    string = '000017-model.index'
    detected_name = utils.detect_model_num(string)
    self.assertEqual(detected_name, 17)
    
        old_layer = keras.layers.Convolution1D(5, 3,
                                           init='normal',
                                           subsample_length=2,
                                           border_mode='valid',
                                           W_regularizer='l1',
                                           b_regularizer='l2',
                                           W_constraint='maxnorm',
                                           b_constraint='unitnorm',
                                           name='conv')
    new_layer = keras.layers.Conv1D(5, 3,
                                    kernel_initializer='normal',
                                    strides=2,
                                    padding='valid',
                                    kernel_regularizer='l1',
                                    bias_regularizer='l2',
                                    kernel_constraint='max_norm',
                                    bias_constraint='unit_norm',
                                    name='conv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    
def collect_class_methods(cls, methods):
    if isinstance(methods, (list, tuple)):
        return [getattr(cls, m) if isinstance(m, str) else m for m in methods]
    methods = []
    for _, method in inspect.getmembers(cls, predicate=inspect.isroutine):
        if method.__name__[0] == '_' or method.__name__ in EXCLUDE:
            continue
        methods.append(method)
    return methods
    
        # a Model inside a Sequential
    x = Input(shape=(1,))
    y = Dense(2)(x)
    inner_model = Model(x, y)
    outer_model = Sequential()
    outer_model.add(inner_model)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
        # fit generator with validation data and accuracy
    model.fit_generator(data_generator(True), len(X_train), epochs=2,
                        validation_data=(X_test, y_test),
                        callbacks=callbacks_factory(histogram_freq=1))
    
    
class Evaluator(object):
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_normal(tensor_shape):
    _runner(initializers.RandomNormal(mean=0, stddev=1), tensor_shape,
            target_mean=0., target_std=1)
    
        # 3. Callables return themselves for some reason
    a = activations.get(lambda x: 5)
    assert a(None) == 5
    
        loss = model.evaluate([x_test, x_test], y_test, verbose=0)
    
    def generate_movies(n_samples=1200, n_frames=15):
    row = 80
    col = 80
    noisy_movies = np.zeros((n_samples, n_frames, row, col, 1), dtype=np.float)
    shifted_movies = np.zeros((n_samples, n_frames, row, col, 1),
                              dtype=np.float)