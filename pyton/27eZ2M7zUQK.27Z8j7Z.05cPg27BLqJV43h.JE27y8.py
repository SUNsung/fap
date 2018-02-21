
        
          def replicate_states(self, state_coll_name):
    state_list = self._metagraph.collection_def[state_coll_name]
    num_states = len(state_list.node_list.value)
    for replica_id in range(1, FLAGS.num_gpus):
      for i in range(num_states):
        state_list.node_list.value.append(state_list.node_list.value[i])
    for replica_id in range(FLAGS.num_gpus):
      for i in range(num_states):
        index = replica_id * num_states + i
        state_list.node_list.value[index] = with_autoparallel_prefix(
            replica_id, state_list.node_list.value[index])
    
    py_binary(
    name = 'train_classifier',
    srcs = ['train_classifier.py'],
    deps = [
        ':graphs',
        ':train_utils',
        # google3 file dep,
        # tensorflow internal dep,
    ],
)
    
    
def virtual_adversarial_loss_bidir(logits, embedded, inputs,
                                   logits_from_embedding_fn):
  '''Virtual adversarial loss for bidirectional models.'''
  logits = tf.stop_gradient(logits)
  f_inputs, _ = inputs
  weights = f_inputs.eos_weights
  if FLAGS.single_label:
    indices = tf.stack([tf.range(FLAGS.batch_size), f_inputs.length - 1], 1)
    weights = tf.expand_dims(tf.gather_nd(f_inputs.eos_weights, indices), 1)
  assert weights is not None
    
    Computational time:
  1.8 hours to train 10000 steps without adversarial or virtual adversarial
    training, on 1 layer 1024 hidden units LSTM, 256 embeddings, 400 truncated
    BP, 64 minibatch and on single GPU (Pascal Titan X, cuDNNv5).
    
    If you are not interested in eager execution, you should ignore this file.
'''
from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    import tensorflow as tf
    
          with self.assertRaises(tf.errors.OutOfRangeError):
        sess.run([result.key, result.uint8image])
    
    
def maybe_download_and_extract():
  '''Download and extract model tar file.'''
  dest_directory = FLAGS.model_dir
  if not os.path.exists(dest_directory):
    os.makedirs(dest_directory)
  filename = DATA_URL.split('/')[-1]
  filepath = os.path.join(dest_directory, filename)
  if not os.path.exists(filepath):
    def _progress(count, block_size, total_size):
      sys.stdout.write('\r>> Downloading %s %.1f%%' % (
          filename, float(count * block_size) / float(total_size) * 100.0))
      sys.stdout.flush()
    filepath, _ = urllib.request.urlretrieve(DATA_URL, filepath, _progress)
    print()
    statinfo = os.stat(filepath)
    print('Successfully downloaded', filename, statinfo.st_size, 'bytes.')
  tarfile.open(filepath, 'r:gz').extractall(dest_directory)
    
            with ExceptionStackContext(error_handler):
            request = HTTPRequest(self.get_url('/custom_reason'),
                                  prepare_curl_callback=lambda curl: 1 / 0)
        yield [error_event.wait(), self.http_client.fetch(request)]
        self.assertEqual(1, len(exc_info))
        self.assertIs(exc_info[0][0], ZeroDivisionError)
    
        @gen_test
    def test_notify_all_with_timeout(self):
        c = locks.Condition()
        self.record_done(c.wait(), 0)
        self.record_done(c.wait(timedelta(seconds=0.01)), 1)
        self.record_done(c.wait(), 2)
    
        def get_current_user(self):
        user_id = self.get_secure_cookie('blogdemo_user')
        if not user_id:
            return None
        return self.db.get('SELECT * FROM authors WHERE id = %s', int(user_id))