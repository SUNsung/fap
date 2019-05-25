
        
          # Predict all the paths
  for index in range(len(path_index)):
    curr_path_vector = path_vectors[index]
    
        total_cost = total_recon_cost = total_kl_cost = 0.0
    # normalizing by batch done in distributions.py
    epoch_size = len(collected_op_values)
    for op_values in collected_op_values:
      total_cost += op_values[0]
      total_recon_cost += op_values[1]
      total_kl_cost += op_values[2]
    
    # This flag is used for an experiment where one sees if training a model with
# many days data can be used to learn the dynamics from a held-out days data.
# If you don't care about that particular experiment, this flag should always be
# false.
flags.DEFINE_boolean('do_train_io_only', DO_TRAIN_IO_ONLY,
                     'Train only the input (readin) and output (readout) \
                     affine functions.')
    
    data_train_truth, data_valid_truth = split_list_by_inds(truth_data_e,
                                                        train_inds,
                                                        valid_inds)
data_train_spiking, data_valid_spiking = split_list_by_inds(spiking_data_e,
                                                            train_inds,
                                                            valid_inds)
    
      def encode_chars(self, sentence):
    chars_ids = [self.word_to_char_ids(cur_word)
                 for cur_word in sentence.split()]
    return np.vstack([self.bos_chars] + chars_ids + [self.eos_chars])
    
      Args:
    session:  Current tf.Session.
    lr_update: tf.assign operation.
    lr_placeholder: tf.placeholder for the new learning rate.
    new_lr: New learning rate to use.
  '''
  session.run(lr_update, feed_dict={lr_placeholder: new_lr})
    
      # Forward Discriminator Elements.
  if not FLAGS.dis_share_embedding:
    embedding = [
        v for v in tf.trainable_variables() if v.op.name == 'dis/embedding'
    ][0]
  fw_lstm_w_0 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  fw_lstm_b_0 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  fw_lstm_w_1 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  fw_lstm_b_1 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
  if FLAGS.dis_share_embedding:
    variable_mapping = {
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': fw_lstm_w_0,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': fw_lstm_b_0,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': fw_lstm_w_1,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': fw_lstm_b_1
    }
  else:
    variable_mapping = {
        'Model/embedding': embedding,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': fw_lstm_w_0,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': fw_lstm_b_0,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': fw_lstm_w_1,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': fw_lstm_b_1
    }
  return variable_mapping
    
          predictions = tf.transpose(predictions, [1, 0, 2])
      return tf.squeeze(predictions, axis=2)

    
    
@pytest.mark.parametrize('command, packages, which', [
    (Command('a_bad_cmd', 'a_bad_cmd: command not found'),
     [], None),
    (Command('vim', ''), [], None),
    (Command('', ''), [], None),
    (Command('vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim'),
    (Command('sudo vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim')])
def test_not_match(mocker, command, packages, which):
    mocker.patch('thefuck.rules.apt_get.which', return_value=which)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
                with tarfile.TarFile(path, 'r') as archive:
                archive.extractall()
    
    '''
    
            MISSING TOKEN
    
            else:
            raise TypeError('Invalid arguments')
    
        # 'The specifier name is a ``dotted name'' that may resolve ... to ... a
    # test method within a test case class'
    def test_loadTestsFromNames__relative_testmethod(self):
        m = types.ModuleType('m')
        class MyTestCase(unittest.TestCase):
            def test(self):
                pass
        m.testcase_1 = MyTestCase
    
    
def open_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> TextIO:
    '''Return a file-like object opened for text reading of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return TextIOWrapper(reader.open_resource(resource), encoding, errors)
    _check_location(package)
    absolute_package_path = os.path.abspath(package.__spec__.origin)
    package_path = os.path.dirname(absolute_package_path)
    full_path = os.path.join(package_path, resource)
    try:
        return open(full_path, mode='r', encoding=encoding, errors=errors)
    except OSError:
        # Just assume the loader is a resource loader; all the relevant
        # importlib.machinery loaders are and an AttributeError for
        # get_data() will make it clear what is needed from the loader.
        loader = cast(ResourceLoader, package.__spec__.loader)
        data = None
        if hasattr(package.__spec__.loader, 'get_data'):
            with suppress(OSError):
                data = loader.get_data(full_path)
        if data is None:
            package_name = package.__spec__.name
            message = '{!r} resource not found in {!r}'.format(
                resource, package_name)
            raise FileNotFoundError(message)
        else:
            return TextIOWrapper(BytesIO(data), encoding, errors)
    
    import os
import email
import mimetypes
    
    def handleSlideshow(slideshow):
    print('<html>')
    handleSlideshowTitle(slideshow.getElementsByTagName('title')[0])
    slides = slideshow.getElementsByTagName('slide')
    handleToc(slides)
    handleSlides(slides)
    print('</html>')
    
    con = sqlite3.connect(':memory:')
con.isolation_level = None
cur = con.cursor()
    
    
def get_build_version():
    filename = os.path.join(os.path.dirname(compose.__file__), 'GITSHA')
    if not os.path.exists(filename):
        return 'unknown'
    
    import re
    
    from compose.utils import unquote_path
    
        def test_sort_service_dicts_circular_imports(self):
        services = [
            {
                'links': ['redis'],
                'name': 'web'
            },
            {
                'name': 'redis',
                'links': ['web']
            },
        ]
    
        def test_parse_volume_windows_absolute_path_native(self):
        windows_path = 'c:\\Users\\me\\Documents\\shiny\\config:/opt/shiny/config:ro'
        assert VolumeSpec._parse_win32(windows_path, False) == (
            'c:\\Users\\me\\Documents\\shiny\\config',
            '/opt/shiny/config',
            'ro'
        )
    
        @unittest.skip('registration captcha is unfinished')
    def test_captcha_blocking(self):
        with contextlib.nested(
            self.mock_register(),
            self.failed_captcha()
        ):
            res = self.do_register()
            self.assert_failure(res, 'BAD_CAPTCHA')
    
        def test_bool(self):
        self.assertEquals(True, ConfigValue.bool('TrUe'))
        self.assertEquals(False, ConfigValue.bool('fAlSe'))
        with self.assertRaises(ValueError):
            ConfigValue.bool('asdf')
    
        def test_nested_modules_include_all_sources(self):
        test_files_a = ['foo.js', 'bar.js']
        test_module_a = TestModule('test_module_a', *test_files_a)
        test_files_b = ['baz.js', 'qux.js']
        test_module_b = TestModule('test_module_b', *test_files_b)
        test_module = TestModule('test_mobule', test_module_a, test_module_b)
        self.assertEqual(test_module.build(), concat_sources(test_files_a + test_files_b))
    
            perm_set = TestPermissionSet()
        perm_set['x'] = True
        self.assertTrue(perm_set['x'])
        self.assertFalse(perm_set['y'])
        perm_set['x'] = False
        self.assertFalse(perm_set['x'])
        perm_set[perm_set.ALL] = True
        self.assertTrue(perm_set['x'])
        self.assertTrue(perm_set['y'])
        self.assertFalse(perm_set['z'])
        self.assertTrue(perm_set.get('x', False))
        self.assertFalse(perm_set.get('z', False))
        self.assertTrue(perm_set.get('z', True))
    
    import unittest