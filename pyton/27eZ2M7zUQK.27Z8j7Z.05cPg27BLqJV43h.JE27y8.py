
def get_info(package_name):
    api_url = 'https://pypi.python.org/pypi/{}/json'.format(package_name)
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(
            '{}: download not found: {}'.format(package_name, resp))
    
        # noinspection PyProtectedMember
    @property
    def headers(self):
        original = self._orig.raw._original_response
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
            if color_scheme != PRESET_STYLE and env.colors == 256:
            fmt_class = Terminal256Formatter
        else:
            fmt_class = TerminalFormatter
        self.formatter = fmt_class(style=style_class)
    
        # noinspection PyUnboundLocalVariable
    return '%.*f %s' % (precision, n / factor, suffix)

    
    
class TestResult(object):
    
        from config_module_app import app
    assert app.instance_path == str(modules_tmpdir.join('instance'))
    
    def _read_words(filename):
  with tf.gfile.GFile(filename, 'r') as f:
    if Py3:
      return f.read().replace('\n', '<eos>').split()
    else:
      return f.read().decode('utf-8').replace('\n', '<eos>').split()
    
        # Compute predictions.
    predicted_classes = tf.argmax(logits, 1)
    if mode == tf.estimator.ModeKeys.PREDICT:
        predictions = {
            'class_ids': predicted_classes[:, tf.newaxis],
            'probabilities': tf.nn.softmax(logits),
            'logits': logits,
        }
        return tf.estimator.EstimatorSpec(mode, predictions=predictions)
    
    from six.moves import StringIO
    
    
class Options(object):
  '''Options used by our word2vec model.'''
    
    
def fake_data(num_images):
  '''Generate a fake dataset that matches the dimensions of MNIST.'''
  data = numpy.ndarray(
      shape=(num_images, IMAGE_SIZE, IMAGE_SIZE, NUM_CHANNELS),
      dtype=numpy.float32)
  labels = numpy.zeros(shape=(num_images,), dtype=numpy.int64)
  for image in xrange(num_images):
    label = image % 2
    data[image, :, :, 0] = label - 0.5
    labels[image] = label
  return data, labels
    
    # URLs for WMT data.
_WMT_ENFR_TRAIN_URL = 'http://www.statmt.org/wmt10/training-giga-fren.tar'
_WMT_ENFR_DEV_URL = 'http://www.statmt.org/wmt15/dev-v2.tgz'
    
        Args:
      data: a tuple of size len(self.buckets) in which each element contains
        lists of pairs of input and output data that we use to create a batch.
      bucket_id: integer, which bucket to get the batch for.
    
    
def convert_to_tfrecord(input_files, output_file):
  '''Converts a file to TFRecords.'''
  print('Generating %s' % output_file)
  with tf.python_io.TFRecordWriter(output_file) as record_writer:
    for input_file in input_files:
      data_dict = read_pickle_from_file(input_file)
      data = data_dict['data']
      labels = data_dict['labels']
      num_entries_in_batch = len(labels)
      for i in range(num_entries_in_batch):
        example = tf.train.Example(features=tf.train.Features(
            feature={
                'image': _bytes_feature(data[i].tobytes()),
                'label': _int64_feature(labels[i])
            }))
        record_writer.write(example.SerializeToString())