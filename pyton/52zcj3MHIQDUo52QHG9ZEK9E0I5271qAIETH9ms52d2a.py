
        
          def __init__(self, batch_size, z_size, mean, logvar):
    '''Create a diagonal gaussian distribution.
    
    # Check to make sure the RNN is the one we used in the paper.
if N == 50:
  assert abs(rnn['W'][0,0] - 0.06239899) < 1e-8, 'Error in random seed?'
  rem_check = nreplications * train_percentage
  assert  abs(rem_check - int(rem_check)) < 1e-8, \
    'Train percentage  * nreplications should be integral number.'
    
    rates_train, rates_valid = split_list_by_inds(rates, train_inds, valid_inds)
spikes_train, spikes_valid = split_list_by_inds(spikes, train_inds, valid_inds)
condition_labels_train, condition_labels_valid = split_list_by_inds(
    condition_labels, train_inds, valid_inds)
ext_input_train, ext_input_valid = split_list_by_inds(
    ext_input, train_inds, valid_inds)
    
    def get_train_n_valid_inds(num_trials, train_fraction, nreplications):
  '''Split the numbers between 0 and num_trials-1 into two portions for
  training and validation, based on the train fraction.
  Args:
    num_trials: the number of trials
    train_fraction: (e.g. .80)
    nreplications: the number of spiking trials per initial condition
  Returns:
    a 2-tuple of two lists: the training indices and validation indices
    '''
  train_inds = []
  valid_inds = []
  for i in range(num_trials):
    # This line divides up the trials so that within one initial condition,
    # the randomness of spikifying the condition is shared among both
    # training and validation data splits.
    if (i % nreplications)+1 > train_fraction * nreplications:
      valid_inds.append(i)
    else:
      train_inds.append(i)
    
      def encode(self, sentence):
    '''Convert a sentence to a list of ids, with special tokens added.'''
    word_ids = [self.word_to_id(cur_word) for cur_word in sentence.split()]
    return np.array([self.bos] + word_ids + [self.eos], dtype=np.int32)
    
      def __init__(self, test_data_name='wsc273'):
    vocab_file = os.path.join(FLAGS.data_dir, 'vocab.txt')
    self.vocab = utils.CharsVocabulary(vocab_file, 50)
    assert test_data_name in ['pdp60', 'wsc273'], (
        'Test data must be pdp60 or wsc273, got {}'.format(test_data_name))
    self.test_data_name = test_data_name
    
      Returns:
    gen_train_op: Generator training op.
  '''
  del hparams
  with tf.name_scope('train_generator'):
    if FLAGS.generator_optimizer == 'sgd':
      gen_optimizer = tf.train.GradientDescentOptimizer(learning_rate)
    elif FLAGS.generator_optimizer == 'adam':
      gen_optimizer = tf.train.AdamOptimizer(learning_rate)
    else:
      raise NotImplementedError
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    print('\nOptimizing Generator vars:')
    for v in gen_vars:
      print(v)
    
        # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
        # test that successful registration redirects to the login page
    response = client.post(
        '/auth/register', data={'username': 'a', 'password': 'a'}
    )
    assert 'http://localhost/auth/login' == response.headers['Location']
    
        def fake_init_db():
        Recorder.called = True
    
    
# context locals
_request_ctx_stack = LocalStack()
_app_ctx_stack = LocalStack()
current_app = LocalProxy(_find_app)
request = LocalProxy(partial(_lookup_req_object, 'request'))
session = LocalProxy(partial(_lookup_req_object, 'session'))
g = LocalProxy(partial(_lookup_app_object, 'g'))

    
    
@LocalProxy
def wsgi_errors_stream():
    '''Find the most appropriate error stream for the application. If a request
    is active, log to ``wsgi.errors``, otherwise use ``sys.stderr``.
    
    
def _default_template_ctx_processor():
    '''Default template context processor.  Injects `request`,
    `session` and `g`.
    '''
    reqctx = _request_ctx_stack.top
    appctx = _app_ctx_stack.top
    rv = {}
    if appctx is not None:
        rv['g'] = appctx.g
    if reqctx is not None:
        rv['request'] = reqctx.request
        rv['session'] = reqctx.session
    return rv
    
    
def parse_changelog():
    with open('CHANGES.rst') as f:
        lineiter = iter(f)
        for line in lineiter:
            match = re.search('^Version\s+(.*)', line.strip())
    
        def _IfExp(self, t):
        self.write('(')
        self.dispatch(t.body)
        self.write(' if ')
        self.dispatch(t.test)
        self.write(' else ')
        self.dispatch(t.orelse)
        self.write(')')
    
            bz2f = BZ2File(BytesIO(), 'w')
        try:
            self.assertFalse(bz2f.readable())
        finally:
            bz2f.close()
        self.assertRaises(ValueError, bz2f.readable)
    
    class DBPickler(pickle.Pickler):
    
    import os
import smtplib
# For guessing MIME type based on file name extension
import mimetypes
    
    def test():
    manager = MyManager()
    manager.start()
    
            #
        # Test error handling
        #