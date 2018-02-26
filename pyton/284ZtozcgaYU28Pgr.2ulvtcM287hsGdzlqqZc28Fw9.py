
        
        error_msg = None
    
    
class Downloader(object):
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    CIFAR_FILENAME = 'cifar-10-python.tar.gz'
CIFAR_DOWNLOAD_URL = 'https://www.cs.toronto.edu/~kriz/' + CIFAR_FILENAME
CIFAR_LOCAL_FOLDER = 'cifar-10-batches-py'
    
        model = cifar10_main.Cifar10Model(
        32, data_format='channels_last', num_classes=num_classes)
    fake_input = tf.random_uniform([batch_size, _HEIGHT, _WIDTH, _NUM_CHANNELS])
    output = model(fake_input, training=True)
    
            # Extract and save features.
        (locations_out, descriptors_out, feature_scales_out,
         attention_out) = sess.run(
             [locations, descriptors, feature_scales, attention],
             feed_dict={
                 input_image:
                     im,
                 input_score_threshold:
                     config.delf_local_config.score_threshold,
                 input_image_scales:
                     list(config.image_scales),
                 input_max_feature_num:
                     config.delf_local_config.max_feature_num
             })
    
      Note that this should eventually be handled by replicate_model_fn
  directly. Multi-GPU support is currently experimental, however,
  so doing the work here until that feature is in place.
  '''
  from tensorflow.python.client import device_lib
    
      def setUp(self):
    FLAGS.train_data = os.path.join(self.get_temp_dir(), 'test-text.txt')
    FLAGS.eval_data = os.path.join(self.get_temp_dir(), 'eval-text.txt')
    FLAGS.save_path = self.get_temp_dir()
    with open(FLAGS.train_data, 'w') as f:
      f.write(
          '''alice was beginning to get very tired of sitting by her sister on
          the bank, and of having nothing to do: once or twice she had peeped
          into the book her sister was reading, but it had no pictures or
          conversations in it, 'and what is the use of a book,' thought alice
          'without pictures or conversations?' So she was considering in her own
          mind (as well as she could, for the hot day made her feel very sleepy
          and stupid), whether the pleasure of making a daisy-chain would be
          worth the trouble of getting up and picking the daisies, when suddenly
          a White rabbit with pink eyes ran close by her.\n''')
      with open(FLAGS.eval_data, 'w') as f:
        f.write('alice she rabbit once\n')
    
          for i in range(3):
        key, label, uint8image = sess.run([
            result.key, result.label, result.uint8image])
        self.assertEqual('%s:%d' % (filename, i), tf.compat.as_text(key))
        self.assertEqual(labels[i], label)
        self.assertAllEqual(expected[i], uint8image)
    
        if not all((board_x, board_y)):
        return 0, 0, 0, 0
    
    
def check_screenshot():  # 检查获取截图的方式
    global screenshot_way
    if (screenshot_way < 0):
        print('暂不支持当前设备')
        sys.exit()
    binary_screenshot = pull_screenshot()
    try:
        Image.open(BytesIO(binary_screenshot)).load()  # 直接使用内存IO
        print('Capture Method: {}'.format(screenshot_way))
    except Exception:
        screenshot_way -= 1
        check_screenshot()