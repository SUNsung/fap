
        
            exec('def reraise(tp, value, tb=None):\n raise tp, value, tb')
    
        #: When data is changed, this is set to ``True``. Only the session
    #: dictionary itself is tracked; if the session contains mutable
    #: data (for example a nested dict) then this must be set to
    #: ``True`` manually when modifying that data. The session cookie
    #: will only be written to the response if this is ``True``.
    modified = False
    
                # If we have no method at all in there we don't want to add a
            # method list. This is for instance the case for the base class
            # or another subclass of a base method view that does not introduce
            # new methods.
            if methods:
                cls.methods = methods
    
    
@pytest.mark.skipif(greenlet is None, reason='greenlet not installed')
class TestGreenletContextCopying(object):
    
        # The directory may already exist when running locally multiple times.
    if not os.path.exists(lexicon_output_path):
      os.mkdir(lexicon_output_path)
    
            self.assertAlmostEqual(tf.exp(log_partition_functions[0]).eval(), 2.0)
        self.assertAlmostEqual(
            tf.exp(log_partition_functions[1]).eval(), 3.0 * 5.0)
        self.assertAlmostEqual(
            tf.exp(log_partition_functions[2]).eval(), 7.0 * 11.0 * 13.0)
    
          # Add hooks.  This should ignore channel 0 and add hooks for channel 1.
      with tf.variable_scope(component.name, reuse=True):
        runtime_support.add_hooks(component, export_pb2.CellSubgraphSpec())
    
      def testReadAndProjectivize(self):
    reader = sentence_io.ConllSentenceReader(
        self.filepath, self.batch_size, projectivize=True)
    self.assertParseable(reader, self.batch_size, False)
    self.assertParseable(reader, self.batch_size, False)
    self.assertParseable(reader, 14, True)
    self.assertParseable(reader, 0, True)
    self.assertParseable(reader, 0, True)
    
      Arguments:
    sess: TF session to use.
    trainers: List of training ops to use.
    annotator: Annotation op.
    evaluator: Function taking two serialized corpora and returning a dict of
      scalar summaries representing evaluation metrics. The 'eval_metric'
      summary will be used for early stopping.
    pretrain_steps: List of the no. of pre-training steps for each train op.
    train_steps: List of the total no. of steps for each train op.
    train_corpus: Training corpus to use.
    eval_corpus: Holdout Corpus for early stoping.
    eval_gold: Reference of eval_corpus for computing accuracy.
      eval_corpus and eval_gold are allowed to be the same if eval_corpus
      already contains gold annotation.
      Note for segmentation eval_corpus and eval_gold are always different since
      eval_corpus contains sentences whose tokens are utf8-characters while
      eval_gold's tokens are gold words.
    batch_size: How many examples to send to the train op at a time.
    summary_writer: TF SummaryWriter to use to write summaries.
    report_every: How often to compute summaries (in steps).
    saver: TF saver op to save variables.
    checkpoint_filename: File to save checkpoints to.
    checkpoint_stats: Stats of checkpoint.
  '''
  if not checkpoint_stats:
    checkpoint_stats = [0] * (len(train_steps) + 1)
    
      session_config = tf.ConfigProto(
      log_device_placement=False,
      intra_op_parallelism_threads=FLAGS.threads,
      inter_op_parallelism_threads=FLAGS.threads)
    
        base = 'src/sentry/locale'
    for locale in os.listdir(base):
        fn = os.path.join(base, locale, 'LC_MESSAGES', 'django.po')
        if not os.path.isfile(fn):
            continue
    
        def on_diagnostics_passed(self):
        super(Suspect, self).send_diagnostics_pass_report()
        super(Suspect, self).clear_alarm()  # loss of redundancy alarm
        super(Suspect, self).next_state('standby')
    
        def test_sequential_execution(self):
        self.command_stack[0].execute()
        output_after_first_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_execution[0], 'bar.txt')
        self.command_stack[1].execute()
        output_after_second_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_execution[0], 'baz.txt')
    
        def unsubscribe(self, msg, subscriber):
        self.subscribers[msg].remove(subscriber)
    
        def test_bunch_launch(self):
        self.runner.runAll()
        output = self.out.getvalue().strip()
        self.assertEqual(output, str(self.average_result_tc1 + '\n\n' +
                         self.average_result_tc2 + '\n\n' +
                         self.average_result_tc3))
