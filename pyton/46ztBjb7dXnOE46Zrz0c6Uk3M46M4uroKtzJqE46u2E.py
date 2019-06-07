
        
            self.vocab_size, self.relata_dim = 0, 0
    self.path_to_index = None
    self.path_dim = 0
    
    
def _extract_last_relevant(output, seq_lengths):
  '''Get the last relevant LSTM output cell for each batch instance.
    
        # Convert to full tensors, not lists of tensors in time dim.
    gen_states = list_t_bxn_to_tensor_bxtxn(gen_states)
    factors = list_t_bxn_to_tensor_bxtxn(factors)
    out_dist_params = list_t_bxn_to_tensor_bxtxn(out_dist_params)
    if self.hps.ic_dim > 0:
      # select first time point
      prior_g0_mean = prior_g0_mean[0]
      prior_g0_logvar = prior_g0_logvar[0]
      post_g0_mean = post_g0_mean[0]
      post_g0_logvar = post_g0_logvar[0]
    if self.hps.co_dim > 0:
      controller_outputs = list_t_bxn_to_tensor_bxtxn(controller_outputs)
    
    
class CharsVocabulary(Vocabulary):
  '''Vocabulary containing character-level information.'''
    
    FLAGS = tf.flags.FLAGS
# General flags.
tf.flags.DEFINE_string('mode', 'eval',
                       'One of [sample, eval, dump_emb, dump_lstm_emb]. '
                       ''sample' mode samples future word predictions, using '
                       'FLAGS.prefix as prefix (prefix could be left empty). '
                       ''eval' mode calculates perplexity of the '
                       'FLAGS.input_data. '
                       ''dump_emb' mode dumps word and softmax embeddings to '
                       'FLAGS.save_dir. embeddings are dumped in the same '
                       'order as words in vocabulary. All words in vocabulary '
                       'are dumped.'
                       'dump_lstm_emb dumps lstm embeddings of FLAGS.sentence '
                       'to FLAGS.save_dir.')
tf.flags.DEFINE_string('pbtxt', '',
                       'GraphDef proto text file used to construct model '
                       'structure.')
tf.flags.DEFINE_string('ckpt', '',
                       'Checkpoint directory used to fill model values.')
tf.flags.DEFINE_string('vocab_file', '', 'Vocabulary file.')
tf.flags.DEFINE_string('save_dir', '',
                       'Used for 'dump_emb' mode to save word embeddings.')
# sample mode flags.
tf.flags.DEFINE_string('prefix', '',
                       'Used for 'sample' mode to predict next words.')
tf.flags.DEFINE_integer('max_sample_words', 100,
                        'Sampling stops either when </S> is met or this number '
                        'of steps has passed.')
tf.flags.DEFINE_integer('num_samples', 3,
                        'Number of samples to generate for the prefix.')
# dump_lstm_emb mode flags.
tf.flags.DEFINE_string('sentence', '',
                       'Used as input for 'dump_lstm_emb' mode.')
# eval mode flags.
tf.flags.DEFINE_string('input_data', '',
                       'Input data files for eval model.')
tf.flags.DEFINE_integer('max_eval_steps', 1000000,
                        'Maximum mumber of steps to run 'eval' mode.')
    
      def __init__(self, test_data_name='wsc273'):
    vocab_file = os.path.join(FLAGS.data_dir, 'vocab.txt')
    self.vocab = utils.CharsVocabulary(vocab_file, 50)
    assert test_data_name in ['pdp60', 'wsc273'], (
        'Test data must be pdp60 or wsc273, got {}'.format(test_data_name))
    self.test_data_name = test_data_name
    
      batch_of_indices_predictions = []
    
    
def find_all_ngrams(dataset, n):
  '''Generate a list of all ngrams.'''
  return zip(*[dataset[i:] for i in xrange(n)])
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
    
def test_logout(client, auth):
    auth.login()
    
        assert 'closed' in str(e)
    
        def __init__(self, request, key):
        form_matches = request.form.getlist(key)
        buf = [
            'You tried to access the file '%s' in the request.files '
            'dictionary but it does not exist.  The mimetype for the request '
            'is '%s' instead of 'multipart/form-data' which means that no '
            'file contents were transmitted.  To fix this error you should '
            'provide enctype='multipart/form-data' in your form.'
            % (key, request.mimetype)
        ]
        if form_matches:
            buf.append(
                '\n\nThe browser instead transmitted some file names. '
                'This was submitted: %s' % ', '.join(''%s'' % x for x in form_matches)
            )
        self.msg = ''.join(buf)