
        
        versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
    import datetime
import io
import json
import textwrap
    
    
from youtube_dl import YoutubeDL
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        def test_proxy_http(self):
        params = self._check_params(['primary_proxy', 'primary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL({
            'proxy': params['primary_proxy']
        })
        self.assertEqual(
            ydl.urlopen('http://yt-dl.org/ip').read().decode('utf-8'),
            params['primary_server_ip'])
    
            page = self._download_json(
            'http://vxml.56.com/json/%s/' % text_id, text_id, 'Downloading video info')
    
    from tensorflow.core.framework import variable_pb2
from tensorflow.core.protobuf import rewriter_config_pb2
    
      Returns:
    log_sum_exp of the arguments.
  '''
  m = tf.reduce_max(x_k)
  x1_k = x_k - m
  u_k = tf.exp(x1_k)
  z = tf.reduce_sum(u_k)
  return tf.log(z) + m
    
      Args:
    arr: Numpy array of arbitrary shape.
    
            attention_score = slim.conv2d(
            feature_map_conv1,
            1,
            kernel,
            rate=1,
            activation_fn=None,
            normalizer_fn=None,
            scope='conv2')
    
          # Finalize enqueue threads.
      coord.request_stop()
      coord.join(threads)
    
    
def random_dataset():
  batch_size = 64
  images = tf.random_normal([batch_size, 784])
  labels = tf.random_uniform([batch_size], minval=0, maxval=10, dtype=tf.int32)
  return tf.data.Dataset.from_tensors((images, labels))
    
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
    
    import word2vec
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    
def dataset(directory, images_file, labels_file):
  images_file = download(directory, images_file)
  labels_file = download(directory, labels_file)
    
        final_timestep = reverse_seq[-1]
    eos_id = len(seq) - 1
    self.assertEqual(final_timestep.token, eos_id)
    self.assertEqual(final_timestep.label, 0)
    self.assertEqual(final_timestep.weight, 0.0)
    
      Yields:
    Document
    
        value_ops_dict = dict(zip(metric_names, value_ops))
    
    
def secure_hash(filename, hash_func=sha1):
    ''' Return a secure hash hex digest of local file, None if file is not present or a directory. '''
    
        # by setting the `trainable` argument, in Sequential
    model = Sequential()
    layer = Dense(2, input_dim=1)
    model.add(layer)
    assert model.trainable_weights == layer.trainable_weights
    layer.trainable = False
    assert model.trainable_weights == []
    
    print('Building model...')
model = Sequential()
model.add(Dense(512, input_shape=(max_words,)))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
    
        >>> tokenize('Bob dropped the apple. Where is the apple?')
    ['Bob', 'dropped', 'the', 'apple', '.', 'Where', 'is', 'the', 'apple', '?']
    '''
    return [x.strip() for x in re.split('(\W+)?', sent) if x.strip()]
    
    # Reserve 0 for masking via pad_sequences
vocab_size = len(vocab) + 1
word_idx = dict((c, i + 1) for i, c in enumerate(vocab))
story_maxlen = max(map(len, (x for x, _, _ in train + test)))
query_maxlen = max(map(len, (x for _, x, _ in train + test)))
    
    # Vectorize the data.
input_texts = []
target_texts = []
input_characters = set()
target_characters = set()
with open(data_path, 'r', encoding='utf-8') as f:
    lines = f.read().split('\n')
for line in lines[: min(num_samples, len(lines) - 1)]:
    input_text, target_text = line.split('\t')
    # We use 'tab' as the 'start sequence' character
    # for the targets, and '\n' as 'end sequence' character.
    target_text = '\t' + target_text + '\n'
    input_texts.append(input_text)
    target_texts.append(target_text)
    for char in input_text:
        if char not in input_characters:
            input_characters.add(char)
    for char in target_text:
        if char not in target_characters:
            target_characters.add(char)
    
        # Generate empty target sequence of length 1.
    target_seq = np.zeros((1, 1, num_decoder_tokens))
    # Populate the first character of target sequence with the start character.
    target_seq[0, 0, target_token_index['\t']] = 1.