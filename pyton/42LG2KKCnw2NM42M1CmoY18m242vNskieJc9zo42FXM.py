        if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
      with open(vocab_file) as f_in:
    vocab = [line.strip() for line in f_in]
    
    # This flag is used for an experiment where one sees if training a model with
# many days data can be used to learn the dynamics from a held-out days data.
# If you don't care about that particular experiment, this flag should always be
# false.
flags.DEFINE_boolean('do_train_io_only', DO_TRAIN_IO_ONLY,
                     'Train only the input (readin) and output (readout) \
                     affine functions.')
    
      # A bit of filtering. We don't care about spectral properties, or
  # filtering artifacts, simply correlate time steps a bit.
  filt_len = 6
  bc_filt = np.ones([filt_len])/float(filt_len)
  for c in range(nchannels_all):
    all_data_nxtc[c,:] = scipy.signal.filtfilt(bc_filt, [1.0], all_data_nxtc[c,:])
    
    
def init_linear(in_size, out_size, do_bias=True, mat_init_value=None,
                bias_init_value=None, alpha=1.0, identity_if_possible=False,
                normalized=False, name=None, collections=None, trainable=True):
  '''Linear (affine) transformation, y = x W + b, for a variety of
  configurations.
    
        if len(word) > self.max_word_length - 2:
      word = word[:self.max_word_length-2]
    cur_word = self.bow_char + word + self.eow_char
    for j in range(len(cur_word)):
      code[j] = ord(cur_word[j])
    return code
    
      inputs = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  char_ids_inputs = np.zeros(
      [BATCH_SIZE, NUM_TIMESTEPS, vocab.max_word_length], np.int32)
  for i in xrange(len(word_ids)):
    inputs[0, 0] = word_ids[i]
    char_ids_inputs[0, 0, :] = char_ids[i]
    
        batch_size, num_timesteps = self.shape
    softmax = softmax.reshape((num_timesteps, batch_size, -1))
    softmax = np.transpose(softmax, [1, 0, 2])
    probs = np.array([[softmax[row, col, target_ids[row, col]]
                       for col in range(num_timesteps)]
                      for row in range(batch_size)])
    print(probs)
    return probs
    
    
def cut_to_patches(sentences, batch_size, num_timesteps):
  '''Cut sentences into patches of shape (batch_size, num_timesteps).
    
        if FLAGS.prefix_label and use_prefix:
      label = sequence_example.context.feature['class'].int64_list.value[0]
      review_words = [EOS_INDEX + 1 + label]
    else:
      review_words = []
    review_words.extend([
        f.int64_list.value[0]
        for f in sequence_example.feature_lists.feature_list['token_id'].feature
    ])
    all_words.append(review_words)
  return all_words
    
    
def ptb_raw_data(data_path=None):
  '''Load PTB raw data from data directory 'data_path'.
  Reads PTB text files, converts strings to integer ids,
  and performs mini-batching of the inputs.
  The PTB dataset comes from Tomas Mikolov's webpage:
  http://www.fit.vutbr.cz/~imikolov/rnnlm/simple-examples.tgz
  Args:
    data_path: string path to the directory where simple-examples.tgz has
      been extracted.
  Returns:
    tuple (train_data, valid_data, test_data, vocabulary)
    where each of the data objects can be passed to PTBIterator.
  '''
    
    '''Random helper functions for converting between indices and one-hot encodings
as well as printing/logging helpers.
'''
    
    
def _create_attention_score_fn(name,
                               num_units,
                               attention_option,
                               reuse,
                               dtype=tf.float32):
  '''Different ways to compute attention scores.
    
        # 'I want us to put a big-ol' comment on top of it that
    # says that this behaviour is dumb but we need to preserve
    # it because people are relying on it.'
    #    - Lukasa
    #
    # These are here solely to maintain backwards compatibility
    # for things like ints. This will be removed in 3.0.0.
    if not isinstance(username, basestring):
        warnings.warn(
            'Non-string usernames will no longer be supported in Requests '
            '3.0.0. Please convert the object you've passed in ({!r}) to '
            'a string or bytes object in the near future to avoid '
            'problems.'.format(username),
            category=DeprecationWarning,
        )
        username = str(username)
    
    '''
requests.compat
~~~~~~~~~~~~~~~
    
        return {'name': implementation, 'version': implementation_version}
    
        def test_zipped_paths_extracted(self, tmpdir):
        zipped_py = tmpdir.join('test.zip')
        with zipfile.ZipFile(zipped_py.strpath, 'w') as f:
            f.write(__file__)
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
            video_id = match1(html, r'data-brightcove-id='(\d+)'')
        
        assert account_number, video_id
    
        print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([real_url], title, ext, size, output_dir=output_dir, merge=merge)
    
        urls = matchall(content, dailymotion_embed_patterns)
    for url in urls:
        found = True
        dailymotion_download(url, output_dir=output_dir, merge=merge, info_only=info_only)
    
    from ..common import *
import json
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge=merge, headers = fake_headers)
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(url, title, ext, size, output_dir, merge=False)
    
    # The reST default role (used for this markup: `text`) to use for all
# documents.
#default_role = None
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
    
def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS
    
    requirements = [
    'face_recognition_models>=0.3.0',
    'Click>=6.0',
    'dlib>=19.7',
    'numpy',
    'Pillow'
]
    
        # 将每一个人脸与已知样本图片比对
    for face_encoding in face_encodings:
        # 看是否属于奥巴马或者拜登
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'