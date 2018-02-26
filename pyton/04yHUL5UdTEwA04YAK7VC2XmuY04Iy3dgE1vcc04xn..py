
        
        
@pytest.fixture
def client():
    return blueprintexample.app.test_client()
    
        A microblog example application written as Flask tutorial with
    Flask and sqlite3.
    
        A simple application that shows how Flask and jQuery get along.
    
      perturbs = [_scale_l2(d, FLAGS.perturb_norm_length) for d in perturbs]
  vadv_logits = logits_from_embedding_fn(
      [emb + d for (emb, d) in zip(embedded, perturbs)])
  return _kl_divergence_with_logits(logits, vadv_logits, weights)
    
      def add_token(self, token):
    self._token.int64_list.value.append(token)
    return self
    
    
def evaluate(defun=False):
  model = mnist.Model(data_format())
  dataset = random_dataset()
  if defun:
    model.call = tfe.defun(model.call)
  with tf.device(device()):
    mnist_eager.test(model, dataset)
    
    import tensorflow as tf
    
      @tf.test.mock.patch.dict(premade_estimator.__dict__,
                           {'load_data': four_lines_data})
  def test_premade_estimator(self):
    premade_estimator.main([None, '--train_steps=1'])
    
        # Train the Model.
    classifier.train(
        input_fn=lambda:iris_data.train_input_fn(train_x, train_y,
                                                 args.batch_size),
        steps=args.train_steps)
    
    flags.DEFINE_string('checkpoint_dir', '/tmp/text_train',
                    'Directory where to read model checkpoints.')
flags.DEFINE_integer('eval_interval_secs', 60, 'How often to run the eval.')
flags.DEFINE_integer('num_examples', 32, 'Number of examples to run.')
flags.DEFINE_bool('run_once', False, 'Whether to run eval only once.')
    
        # Build and write sequence files.
    vocab_ids = _build_random_vocabulary(FLAGS.vocab_size)
    seqs = [_build_random_sequence(vocab_ids) for _ in range(5)]
    seqs_label = [
        data.build_labeled_sequence(seq, random.choice([True, False]))
        for seq in seqs
    ]
    seqs_lm = [data.build_lm_sequence(seq) for seq in seqs]
    seqs_ae = [data.build_seq_ae_sequence(seq) for seq in seqs]
    seqs_rev = [data.build_reverse_sequence(seq) for seq in seqs]
    seqs_bidir = [
        data.build_bidirectional_seq(seq, rev)
        for seq, rev in zip(seqs, seqs_rev)
    ]
    seqs_bidir_label = [
        data.build_labeled_sequence(bd_seq, random.choice([True, False]))
        for bd_seq in seqs_bidir
    ]
    
      def save_state(self, value):
    # LSTM tuple states
    state_names = _get_tuple_state_names(self._num_states, self._state_name)
    save_ops = []
    for (c_state, h_state), (c_name, h_name) in zip(value, state_names):
      save_ops.append(self._batch.save_state(c_name, c_state))
      save_ops.append(self._batch.save_state(h_name, h_state))
    return tf.group(*save_ops)
    
    
def _summarize_vars_and_grads(grads_and_vars):
  tf.logging.info('Trainable variables:')
  tf.logging.info('-' * 60)
  for grad, var in grads_and_vars:
    tf.logging.info(var)
    
    FLAGS = tf.app.flags.FLAGS
    
    
class Cache(object):
    
        def __init__(self, person_ids, lookup):
        self.lookup = lookup
        self.person_ids = person_ids
        self.visited_ids = set()
    
        def extract_max_priority_page(self):
        '''Return the highest priority link in `links_to_crawl`.'''
        ...
    
    
class NoTalkProxyTest(unittest.TestCase):
    
        jim = Subscriber('jim', message_center)
    jim.subscribe('cartoon')
    jack = Subscriber('jack', message_center)
    jack.subscribe('music')
    gee = Subscriber('gee', message_center)
    gee.subscribe('movie')
    vani = Subscriber('vani', message_center)
    vani.subscribe('movie')
    vani.unsubscribe('movie')
    
        def test_shall_toggle_from_am_to_fm(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'FM'
        self.assertEqual(state, expected_state_name)
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay(production_code_time_provider)
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
    
class ConcreteHandler1(Handler):
    
    
class MoveFileCommand(object):