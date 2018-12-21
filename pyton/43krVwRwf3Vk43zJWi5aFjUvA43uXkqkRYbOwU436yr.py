
        
          Args:
    records: a record list with TensorFlow examples.
    
        Returns:
      The test predictions.
    '''
    predictions, _ = zip(*self.predict_with_score(session, inputs))
    return np.array(predictions)
    
    # write out the dataset
write_datasets(FLAGS.save_dir, FLAGS.datafile_name, datasets)
print ('Saved to ', os.path.join(FLAGS.save_dir,
                                 FLAGS.datafile_name + '_' + dataset_name))

    
      Args:
    data_e: nexamples length list of NxT trials
    dt: how often the data are sampled
    max_firing_rate: the firing rate that is associated with a value of 1.0
  Returns:
    gauss_e: a list of length b of the data with noise.
    '''
    
      Args:
    in_size: The integer size of the non-batc input dimension. [(x),y]
    out_size: The integer size of non-batch output dimension. [x,(y)]
    do_bias (optional): Add a (learnable) bias vector to the operation,
      if false, b will be None
    mat_init_value (optional): numpy constant for matrix initialization, if None
      , do random, with additional parameters.
    alpha (optional): A multiplicative scaling for the weight initialization
      of the matrix, in the form \alpha * 1/\sqrt{x.shape[1]}.
    identity_if_possible (optional): just return identity,
      if x.shape[1] == out_size.
    normalized (optional): Option to divide out by the norms of the rows of W.
    name (optional): The name prefix to add to variables.
    collections (optional): List of additional collections. (Placed in
      tf.GraphKeys.GLOBAL_VARIABLES already, so no need for that.)
    
    
def ptb_iterator(raw_data, batch_size, num_steps, epoch_size_override=None):
  '''Iterate on the raw PTB data.
    
        Args:
      hparams:  Hyperparameters for the MaskGAN.
      data: Data to evaluate.
      id_to_word: Dictionary of indices to words.
      log_dir: Log directory.
      output_file:  Output file for the samples.
  '''
  # Boolean indicating operational mode.
  is_training = False
    
    import tensorflow as tf
    
        for index, pred in zip(index_batch, pred_batch):
      indices_predictions.append([str(id_to_word[index]), pred])
    batch_of_indices_predictions.append(indices_predictions)
  return batch_of_indices_predictions
    
    
def construct_ngrams_dict(ngrams_list):
  '''Construct a ngram dictionary which maps an ngram tuple to the number
  of times it appears in the text.'''
  counts = {}
    
        '''
    # Serialize JSON data, if needed.
    data = args.data
    auto_json = data and not args.form
    if (args.json or auto_json) and isinstance(data, dict):
        if data:
            data = json.dumps(data)
        else:
            # We need to set data to an empty string to prevent requests
            # from assigning an empty list to `response.request.data`.
            data = ''
    
        def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
        def test_request_body_from_file_by_path_no_data_items_allowed(
            self, httpbin):
        env = MockEnvironment(stdin_isatty=False)
        r = http('POST', httpbin.url + '/post', '@' + FILE_PATH_ARG, 'foo=bar',
                 env=env, error_exit_ok=True)
        assert 'cannot be mixed' in r.stderr

    
        What it should do it take a markdown file, and split it into more files. A targetfile should have the same
    number of lines as the original, with source code snippets and markdown non-words removed, for spell-checking.
    
    if args.dict:
    jieba.initialize(args.dict)
else:
    jieba.initialize()
if args.user_dict:
    jieba.load_userdict(args.user_dict)
    
    try:
    import pkg_resources
    get_module_res = lambda *res: pkg_resources.resource_stream(__name__,
                                                                os.path.join(*res))
except ImportError:
    get_module_res = lambda *res: open(os.path.normpath(os.path.join(
                            os.getcwd(), os.path.dirname(__file__), *res)), 'rb')
    
    
class TextRank(KeywordExtractor):
    
    
def viterbi(obs, states, start_p, trans_p, emit_p):
    V = [{}]  # tabular
    mem_path = [{}]
    all_states = trans_p.keys()
    for y in states.get(obs[0], all_states):  # init
        V[0][y] = start_p[y] + emit_p[y].get(obs[0], MIN_FLOAT)
        mem_path[0][y] = ''
    for t in xrange(1, len(obs)):
        V.append({})
        mem_path.append({})
        #prev_states = get_top_states(V[t-1])
        prev_states = [
            x for x in mem_path[t - 1].keys() if len(trans_p[x]) > 0]
    
        def testSetDictionary(self):
        jieba.set_dictionary('foobar.txt')
        for content in test_contents:
            result = jieba.cut(content)
            assert isinstance(result, types.GeneratorType), 'Test SetDictionary Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test SetDictionary error on content: %s' % content
            print(' , '.join(result), file=sys.stderr)
        print('testSetDictionary', file=sys.stderr)
    
        def test_del_msg_failure_with_null_msg(self):
        '''Del_msg fails: Returns 200 and does not set del_on_recipient.'''
        message = MagicMock(spec=Message)
        message.name = 'msg_3'
        message.to_id = self.id
        message.del_on_recipient = False
    
        def test_bool(self):
        self.assertEquals(True, ConfigValue.bool('TrUe'))
        self.assertEquals(False, ConfigValue.bool('fAlSe'))
        with self.assertRaises(ValueError):
            ConfigValue.bool('asdf')
    
        def test_filtered_modules_do_not_include_filtered_sources(self):
        test_files = ['foo.js', 'bar.js']
        filtered_files = ['baz.js', 'qux.js']
        all_files = test_files + filtered_files
        filter_module = TestModule('filter_module', *filtered_files)
        test_module = TestModule('test_module', filter_module=filter_module, *all_files)
        self.assertEqual(test_module.build(), concat_sources(test_files))

    
    class TestGetScrapeUrl(unittest.TestCase):
    @patch('r2.lib.media.Link')
    def test_link_post(self, Link):
        post = Link()
        post.url = 'https://example.com'
        post.is_self = False
        url = _get_scrape_url(post)
        self.assertEqual(url, 'https://example.com')
    
            perm_set = TestPermissionSet()
        perm_set['x'] = True
        self.assertTrue(perm_set['x'])
        self.assertFalse(perm_set['y'])
        perm_set['x'] = False
        self.assertFalse(perm_set['x'])
        perm_set[perm_set.ALL] = True
        self.assertTrue(perm_set['x'])
        self.assertTrue(perm_set['y'])
        self.assertFalse(perm_set['z'])
        self.assertTrue(perm_set.get('x', False))
        self.assertFalse(perm_set.get('z', False))
        self.assertTrue(perm_set.get('z', True))
    
        def test_no_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=200,
                      height=800)
        url = self.provider.resize_image(image)
        self.assertEqual(url, 'https://unsplash.it/200/400')
    
        def test_unpad_evil_message(self):
        from r2.lib.tracking import _unpad_message
        evil = ('a' * 88) + chr(57)
        result = _unpad_message(evil)
        self.assertEquals(result, '')
    
        nonce = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(9))
    filename = topic_name.replace('/', '.') + '.' + nonce
    filename = os.path.join(PATH_CHEAT_SHEETS_SPOOL, filename)
    
            if field:
            self.field = field
            self.size_x = len(field[0])
            self.size_y = len(field)
            return
    
        def _log_visit(self, interval, ip_address):
        if ip_address not in self.counter[interval]:
            self.counter[interval][ip_address] = 0
        self.counter[interval][ip_address] += 1
    
    LIMITS = Limits()