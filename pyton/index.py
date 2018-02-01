
        
        # TODO: ensure that history changes.

    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      def testPtbRawData(self):
    tmpdir = tf.test.get_temp_dir()
    for suffix in 'train', 'valid', 'test':
      filename = os.path.join(tmpdir, 'ptb.%s.txt' % suffix)
      with tf.gfile.GFile(filename, 'w') as fh:
        fh.write(self._string_data)
    # Smoke test
    output = reader.ptb_raw_data(tmpdir)
    self.assertEqual(len(output), 4)
    
    
def csv_input_fn(csv_path, batch_size):
    # Create a dataset containing the text lines.
    dataset = tf.data.TextLineDataset(csv_path).skip(1)
    
        # Generate predictions from the model
    expected = ['Setosa', 'Versicolor', 'Virginica']
    predict_x = {
        'SepalLength': [5.1, 5.9, 6.9],
        'SepalWidth': [3.3, 3.0, 3.1],
        'PetalLength': [1.7, 4.2, 5.4],
        'PetalWidth': [0.5, 1.5, 2.1],
    }
    
    exports_files(['LICENSE'])
    
    PAD_ID = 0
GO_ID = 1
EOS_ID = 2
UNK_ID = 3
    
          # Create target_weights to be 0 for targets that are padding.
      batch_weight = np.ones(self.batch_size, dtype=np.float32)
      for batch_idx in xrange(self.batch_size):
        # We set weight to 0 if the corresponding target is a PAD symbol.
        # The corresponding target is decoder_input shifted by 1 forward.
        if length_idx < decoder_size - 1:
          target = decoder_inputs[batch_idx][length_idx + 1]
        if length_idx == decoder_size - 1 or target == data_utils.PAD_ID:
          batch_weight[batch_idx] = 0.0
      batch_weights.append(batch_weight)
    return batch_encoder_inputs, batch_decoder_inputs, batch_weights

    
    CIFAR_FILENAME = 'cifar-10-python.tar.gz'
CIFAR_DOWNLOAD_URL = 'https://www.cs.toronto.edu/~kriz/' + CIFAR_FILENAME
CIFAR_LOCAL_FOLDER = 'cifar-10-batches-py'
    
        def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
    
def extract_board_data(url):
    json_data = extract_json_data(url, limit=LIMIT)
    pin_list = json_data['pins']
    title = json_data['title']
    pin_count = json_data['pin_count']
    pin_count -= len(pin_list)
    
    from ..common import *
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
    
def mtv81_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_content(url)
    title = HTMLParser().unescape(
        '|'.join(match1(html, r'<title>(.*?)</title>').split('|')[:-2]))