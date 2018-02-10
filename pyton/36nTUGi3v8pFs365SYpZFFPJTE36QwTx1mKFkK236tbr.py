
        
        # Bibliographic Dublin Core info.
#epub_title = ''
#epub_author = ''
#epub_publisher = ''
#epub_copyright = ''
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
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
    
    
def _file_to_word_ids(filename, word_to_id):
  data = _read_words(filename)
  return [word_to_id[word] for word in data if word in word_to_id]
    
      def setUp(self):
    FLAGS.train_data = os.path.join(self.get_temp_dir() + 'test-text.txt')
    FLAGS.eval_data = os.path.join(self.get_temp_dir() + 'eval-text.txt')
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
    
      def setUp(self):
    self._string_data = '\n'.join(
        [' hello there i am',
         ' rain as day',
         ' want some cheesy puffs ?'])
    
        predictions = classifier.predict(
        input_fn=lambda:iris_data.eval_input_fn(predict_x,
                                                labels=None,
                                                batch_size=args.batch_size))
    
    import tensorflow as tf
import pandas as pd
    
    py_test(
    name = 'cifar10_input_test',
    size = 'small',
    srcs = ['cifar10_input_test.py'],
    srcs_version = 'PY2AND3',
    deps = [
        ':cifar10_input',
        '//tensorflow:tensorflow_py',
        '//tensorflow/python:framework_test_lib',
        '//tensorflow/python:platform_test',
    ],
)
    
    py_library(
    name = 'rnn_cell',
    srcs = [
        'rnn_cell.py',
    ],
    srcs_version = 'PY2AND3',
    deps = [
        ':linear',
        '//tensorflow:tensorflow_py',
    ],
)
    
      # lrn2
  with tf.name_scope('lrn2') as scope:
    lrn2 = tf.nn.local_response_normalization(conv2,
                                              alpha=1e-4,
                                              beta=0.75,
                                              depth_radius=2,
                                              bias=2.0)