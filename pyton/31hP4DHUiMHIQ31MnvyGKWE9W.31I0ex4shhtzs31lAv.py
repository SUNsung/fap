
        
            logvar_bxn = tf.tile(z_logvar_1xn, size_bx1)
    self.logvar_bxn = logvar_bxn
    self.noise_bxn = noise_bxn = tf.random_normal(tf.shape(logvar_bxn))
    self.sample_bxn = mean_bxn + tf.exp(0.5 * logvar_bxn) * noise_bxn
    
      input_title = ''
  if 'controller_outputs' in model_vals.keys():
    input_title += ' Controller Output'
    plt.subplot(nrows,2,3+subplot_cidx)
    u_t = model_vals['controller_outputs'][0:-1]
    plot_time_series(u_t, bidx, n_to_plot=n_to_plot, color='c', scale=1.0,
                     title=col_title + input_title)
    
    
def write_model_samples(hps, datasets, dataset_name=None, output_fname=None):
  '''Use the prior distribution to generate samples from the model.
  Generates batch_size number of samples (set through FLAGS).
    
      def _get_sentence(self, forever=True):
    while True:
      ids = self._load_random_shard()
      for current_ids in ids:
        yield current_ids
      if not forever:
        break
    
      Args:
    vocab: Vocabulary. Contains vocabulary size and converts word to ids.
  '''
  assert FLAGS.save_dir, 'Must specify FLAGS.save_dir for dump_emb.'
  inputs = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  targets = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  weights = np.ones([BATCH_SIZE, NUM_TIMESTEPS], np.float32)
    
        # Add the single LM prediction.
    probs = single_lm.assign_probs(self.sentences, self.test_data_name)
    self.all_probs.append(probs)
    print('Done adding {}'.format(model_name))
    
              generate_logs(sess, model, output_file, id_to_word, eval_feed)
      output_file.close()
      print('Closing output_file.')
      return
    
      Args:
    values: Value given by the Wasserstein Discriminator of shape [batch_size,
      sequence_length] to an imputed batch (real and fake).
    is_real_input: tf.bool Tensor of shape [batch_size, sequence_length]. If
      true, it indicates that the label is known.
    
    
def convert_to_human_readable(id_to_word, arr, max_num_to_print):
  '''Convert a np.array of indices into words using id_to_word dictionary.
  Return max_num_to_print results.
  '''
  assert arr.ndim == 2
    
    
# TODO(adai): IMDB labels placeholder to model.
def create_generator(hparams,
                     inputs,
                     targets,
                     present,
                     is_training,
                     is_validating,
                     reuse=None):
  '''Create the Generator model specified by the FLAGS and hparams.
    
        def create_asset(self, release_id, asset):
        asset_name = os.path.basename(asset)
        url = self._UPLOADS_URL % (release_id, asset_name)
        # Our files are small enough to be loaded directly into memory.
        data = open(asset, 'rb').read()
        req = sanitized_Request(url, data)
        mime_type, _ = mimetypes.guess_type(asset_name)
        req.add_header('Content-Type', mime_type or 'application/octet-stream')
        return self._call(req)
    
    password = key
new_key = aes_encrypt(password, key_expansion(password))
r = openssl_encode('aes-128-ctr', new_key, iv)
print('aes_decrypt_text 16')
print(repr(r))
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
    
def assertRegexpMatches(self, text, regexp, msg=None):
    if hasattr(self, 'assertRegexp'):
        return self.assertRegexp(text, regexp, msg)
    else:
        m = re.match(regexp, text)
        if not m:
            note = 'Regexp didn\'t match: %r not found' % (regexp)
            if len(text) < 1000:
                note += ' in %r' % text
            if msg is None:
                msg = note
            else:
                msg = note + ', ' + msg
            self.assertTrue(m, msg)
    
            for mpd_file, mpd_url, expected_formats in _TEST_CASES:
            with io.open('./test/testdata/mpd/%s.mpd' % mpd_file,
                         mode='r', encoding='utf-8') as f:
                formats = self.ie._parse_mpd_formats(
                    compat_etree_fromstring(f.read().encode('utf-8')),
                    mpd_url=mpd_url)
                self.ie._sort_formats(formats)
                expect_value(self, formats, expected_formats, None)
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
    
class Log(object):
    def __init__(self):
        self.fd = open(log_file, 'a')
    
            fn = os.path.join(current_path, 'sni_slice.txt')
        self.slice = RandomGetSlice(fn, 20, '|')
    
    
class RC4FileObject(object):
    '''fileobj for rc4'''
    def __init__(self, stream, key):
        self.__stream = stream
        self.__cipher = _Crypto_Cipher_ARC4_new(key) if key else lambda x:x
    def __getattr__(self, attr):
        if attr not in ('__stream', '__cipher'):
            return getattr(self.__stream, attr)
    def read(self, size=-1):
        return self.__cipher.encrypt(self.__stream.read(size))
    
            return [token.text for token in tokens]