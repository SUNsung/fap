
        
        
def print_cm(cm, labels):
  '''Pretty print for confusion matrices.
    
        total_cost = total_recon_cost = total_kl_cost = 0.0
    # normalizing by batch done in distributions.py
    epoch_size = len(collected_op_values)
    for op_values in collected_op_values:
      total_cost += op_values[0]
      total_recon_cost += op_values[1]
      total_kl_cost += op_values[2]
    
      Args:
    hps: The dictionary of hyperparameters.
    datasets: A dictionary of data dictionaries.  The dataset dict is simply a
      name(string)-> data dictionary mapping (See top of lfads.py).
  '''
  model = build_model(hps, kind='train', datasets=datasets)
  if hps.do_reset_learning_rate:
    sess = tf.get_default_session()
    sess.run(model.learning_rate.initializer)
    
      E = len(data_e)
  spikes_e = []
  for e in range(E):
    data = data_e[e]
    N,T = data.shape
    data_s = np.zeros([N,T]).astype(np.int)
    for n in range(N):
      f = data[n,:]
      s = rng.poisson(f*max_firing_rate*dt, size=T)
      data_s[n,:] = s
    spikes_e.append(data_s)
    
        tf.logging.info('Loaded %d words.', current_idx)
    tf.logging.info('Finished loading')
    return zip(ids, chars_ids, global_word_ids)
    
          if (vocab.id_to_word(samples[0]) == '</S>' or
          len(sent) > FLAGS.max_sample_words):
        break
    
      Args:
    raw_data: one of the raw data outputs from imdb_raw_data.
    batch_size: int, the batch size.
    num_steps: int, the number of unrolls.
    
    
def recursive_length(item):
  '''Recursively determine the total number of elements in nested list.'''
  if type(item) == list:
    return sum(recursive_length(subitem) for subitem in item)
  else:
    return 1.
    
      return construct_fn
    
        infile, outfile = args
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    # NAME
    
        template = template.replace('{{fileopts}}', '|'.join(fileopts))
    template = template.replace('{{diropts}}', '|'.join(diropts))
    template = template.replace('{{flags}}', ' '.join(flags))
    
    # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
exclude_patterns = ['_build']
    
        def test_module_exec(self):
        if sys.version_info >= (2, 7):  # Python 2.6 doesn't support package execution
            subprocess.check_call([sys.executable, '-m', 'youtube_dl', '--version'], cwd=rootDir, stdout=_DEV_NULL)
    
    
class TestSocks(unittest.TestCase):
    _SKIP_SOCKS_TEST = True
    
        def test_allsubtitles(self):
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertEqual(set(subtitles.keys()), set(['en']))
        self.assertEqual(md5(subtitles['en']), '97e7670cbae3c4d26ae8bcc7fdd78d4b')
    
        Args:
        x(tf.Tensor):
        n_unit_ls(list of int):
        act_fn:
        name(str):
    '''
    # n_layer = len(n_unit_list)
    name = name or 'dense'
    for i, n_unit in enumerate(n_unit_ls):
        x = dense(x, n_unit, act_fn=act_fn, name='{}-{}'.format(name, i))
    
        name = name or 'highway_conv2d'
    for i, kz in enumerate(kernel_size):
        x = highway_conv2d(x, kz, act_fn, strides, padding, carry_bias, name='{}-{}'.format(name, i))
    
    # 构建 FastText 模型
sentences = [['Hello', 'World', '!'], ['I', 'am', 'huay', '.']]
min_ngrams, max_ngrams = 2, 4  # ngrams 范围
model = FastText(sentences, size=5, min_count=1, min_n=min_ngrams, max_n=max_ngrams)
    
    def LoadPlist(filename):
  '''Plists can be read with plistlib.'''
  # creating our own data
  data = None
  
  try:
    p = subprocess.Popen(
        ['/usr/bin/plutil', '-convert', 'xml1', '-o', '-', filename],
        stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out_data, err_data = p.communicate()
  except IOError as e:
    # file could not be found
    print(e)
      
  if(p.returncode == 0):
      data = plistlib.readPlistFromString(out_data)
  
  return data