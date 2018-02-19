
def export_state_tuples(state_tuples, name):
  for state_tuple in state_tuples:
    tf.add_to_collection(name, state_tuple.c)
    tf.add_to_collection(name, state_tuple.h)
    
    # Model specific paramenters
tf.flags.DEFINE_string(
    'master', default=None,
    help='GRPC URL of the master (e.g. grpc://ip.address.of.tpu:8470). You '
    'must specify either this flag or --tpu_name.')
    
    CIFAR_FILENAME = 'cifar-10-python.tar.gz'
CIFAR_DOWNLOAD_URL = 'https://www.cs.toronto.edu/~kriz/' + CIFAR_FILENAME
CIFAR_LOCAL_FOLDER = 'cifar-10-batches-py'
    
    
def check_labels_file_header(filename):
  '''Validate that filename corresponds to labels for the MNIST dataset.'''
  with tf.gfile.Open(filename, 'rb') as f:
    magic = read32(f)
    num_items = read32(f)
    if magic != 2049:
      raise ValueError('Invalid magic number %d in MNIST file %s' % (magic,
                                                                     f.name))
    
      def testWriteAndReadToFile(self):
    data = np.array([[[-1.0, 125.0, -2.5], [14.5, 3.5, 0.0]],
                     [[20.0, 0.0, 30.0], [25.5, 36.0, 42.0]]])
    tmpdir = tf.test.get_temp_dir()
    filename = os.path.join(tmpdir, 'test.datum')
    datum_io.WriteToFile(data, filename)
    data_read = datum_io.ReadFromFile(filename)
    self.assertAllEqual(data_read, data)
    
      def GetAttentionPrelogit(
      self,
      images,
      weight_decay=0.0001,
      attention_nonlinear=_SUPPORTED_ATTENTION_NONLINEARITY[0],
      attention_type=_SUPPORTED_ATTENTION_TYPES[0],
      kernel=1,
      training_resnet=False,
      training_attention=False,
      reuse=False,
      use_batch_norm=True):
    '''Constructs attention model on resnet_v1_50.
    
      def _ProcessSingleScale(scale_index,
                          boxes,
                          features,
                          scales,
                          scores,
                          reuse=True):
    '''Resize the image and run feature extraction and keypoint selection.
    
    
class Model(tf.keras.Model):
  '''Model to recognize digits in the MNIST dataset.
    
          with self.assertRaises(tf.errors.OutOfRangeError):
        sess.run([result.key, result.uint8image])
    
        predictions = classifier.predict(
        input_fn=lambda:iris_data.eval_input_fn(predict_x,
                                                labels=None,
                                                batch_size=args.batch_size))