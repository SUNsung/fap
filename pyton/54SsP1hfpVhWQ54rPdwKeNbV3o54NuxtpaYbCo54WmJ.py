README_FILE = 'README.md'
helptext = sys.stdin.read()
    
            self.port = random.randint(20000, 30000)
        self.server_process = subprocess.Popen([
            'srelay', '-f', '-i', '127.0.0.1:%d' % self.port],
            stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    
            formats = [
            {
                'format_id': f['type'],
                'filesize': int(f['filesize']),
                'url': f['url']
            } for f in info['rfiles']
        ]
        self._sort_formats(formats)
    
        with tf.Graph().as_default():
      # Build the actual graphs. The choice of spec is arbitrary, as long as
      # training and annotation nodes can be constructed.
      builder, target = self.getBuilderAndTarget(test_name)
      train = builder.add_training_from_config(target)
      anno = builder.add_annotation(test_name)
    
      # To eliminate overflow, we locally normalize the scores.  Specifically, for
  # each node we divide its incoming arc scores and root selection score by the
  # maximum such score.  Since each node in a tree must select exactly one of
  # these scores (i.e., it is either a root or has exactly one incoming arc),
  # the local normalization factors are identical for all trees and can thus be
  # factored out of the sum over trees.
  #
  # More concretely, we find the maximum per node, divide all scores for that
  # node by the maximum, and then find the partition function of the normalized
  # scores.  Then we recover the un-normalized partition function by multiplying
  # the per-node maxima back in.  This final step is performed in the log domain
  # to avoid overflow.
  #
  # Note that underflow is still possible, but unlikely as long as the scores
  # are close to feasible (i.e., there is not too much mass on non-trees).  The
  # |max_dynamic_range| argument can be used to mitigate this.
    
      def create(self,
             fixed_embeddings,
             linked_embeddings,
             context_tensor_arrays,
             attention_tensor,
             during_training,
             stride=None):
    '''Forwards the lengths and scores.'''
    check.NotNone(stride, 'MstSolverNetwork requires stride')
    
        # Extract the batched local step indices.
    local_indices = lookup_named_tensor('indices', linked_embeddings)
    local_indices_bxn = tf.reshape(local_indices.tensor, [stride, -1])
    local_indices_bxn = tf.to_int32(local_indices_bxn)
    num_steps = tf.shape(local_indices_bxn)[1]
    
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
    
      def testNoPretrainSteps(self):
    '''Edge case, 1 target, no pretrain.'''
    generated_schedule = trainer_lib.generate_target_per_step_schedule([0],
                                                                       [10])
    expected_schedule = [0] * 10
    self.assertEqual(generated_schedule, expected_schedule)
    
          processed = []
      start_time = time.time()
      run_metadata = tf.RunMetadata()
      for start in range(0, len(char_corpus), FLAGS.max_batch_size):
        end = min(start + FLAGS.max_batch_size, len(char_corpus))
        feed_dict = {annotator['input_batch']: char_corpus[start:end]}
        if FLAGS.timeline_output_file and end == len(char_corpus):
          serialized_annotations = sess.run(
              annotator['annotations'], feed_dict=feed_dict,
              options=tf.RunOptions(trace_level=tf.RunOptions.FULL_TRACE),
              run_metadata=run_metadata)
          trace = timeline.Timeline(step_stats=run_metadata.step_stats)
          with open(FLAGS.timeline_output_file, 'w') as trace_file:
            trace_file.write(trace.generate_chrome_trace_format())
        else:
          serialized_annotations = sess.run(
              annotator['annotations'], feed_dict=feed_dict)
        processed.extend(serialized_annotations)
    
        print()
    print('Classification performance:')
    print('===========================')
    print()
    print('%s %s %s %s' % ('Classifier  ', 'train-time', 'test-time',
                           'Accuracy'))
    print('-' * 44)
    for name in sorted(accuracy, key=accuracy.get):
        print('%s %s %s %s' % (name.ljust(16),
                               ('%.4fs' % train_time[name]).center(10),
                               ('%.4fs' % test_time[name]).center(10),
                               ('%.4f' % accuracy[name]).center(10)))
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    from sklearn import svm
from sklearn.datasets import dump_svmlight_file
from sklearn.externals.six.moves import xrange
    
    plt.plot(features_samples_ratio, acc_clf1, linewidth=2,
         label='Linear Discriminant Analysis with shrinkage', color='navy')
plt.plot(features_samples_ratio, acc_clf2, linewidth=2,
         label='Linear Discriminant Analysis', color='gold')
    
    # Plot the ground-truth labelling
plt.figure()
plt.axes([0, 0, 1, 1])
for l, c, n in zip(range(n_clusters), 'rgb',
                   labels):
    lines = plt.plot(X[y == l].T, c=c, alpha=.5)
    lines[0].set_label(n)
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)
    
    # If true, links to the reST sources are added to the pages.
#html_show_sourcelink = True
    
    # Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    @mock.patch('certbot.notify.subprocess.Popen')
    def test_smtp_failure(self, mock_popen, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        lmtp_obj.sendmail.side_effect = socket.error(17)
        proc = mock.MagicMock()
        mock_popen.return_value = proc
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
        self.assertEqual(proc.communicate.call_count, 1)