
        
          def RunCompositeOptimizerTraining(self, reset_learning_rate):
    grid_point = self.MakeHyperparams(learning_method='composite')
    spec = grid_point.composite_optimizer_spec
    spec.reset_learning_rate = reset_learning_rate
    spec.switch_after_steps = 1
    spec.method1.learning_method = 'adam'
    spec.method2.learning_method = 'momentum'
    spec.method2.momentum = 0.9
    self.RunTraining(grid_point)
    
    
if __name__ == '__main__':
  tf.test.main()

    
      # Reapply the normalization factor that was divided out.
  log_partition_function_b = (
      log_normalized_partition_function_b + log_normalization_factor_b)
  return tf.cast(log_partition_function_b, orig_dtype)

    
      def testMaximumSpanningTreeGradient(self):
    '''Tests the MST max score gradient.'''
    with self.test_session() as session:
      num_nodes = tf.constant([4, 3], tf.int32)
      scores = tf.constant([[[0, 0, 0, 0],
                             [1, 0, 0, 0],
                             [1, 2, 0, 0],
                             [1, 2, 3, 4]],
                            [[4, 3, 2, 9],
                             [0, 0, 2, 9],
                             [0, 0, 0, 9],
                             [9, 9, 9, 9]]], tf.int32)  # pyformat: disable
    
      The hooks remove the last row from the embedding matrix.  The extra row was
  probably intended for out-of-vocabulary items, but those are handled in the
  feature system and the extra row is never used.
    
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
    
      This LSTM network unit supports multiple layers with layer normalization.
  Because it is imported from tf.contrib.rnn, we need to capture the created
  variables during initialization time.
    
    flags.DEFINE_string('master_spec', '',
                    'Path to text file containing a DRAGNN master spec to run.')
flags.DEFINE_string('resource_dir', '',
                    'Optional base directory for resources in the master spec.')
flags.DEFINE_bool('complete_master_spec', False, 'Whether the master_spec '
                  'needs the lexicon and other resources added to it.')
flags.DEFINE_string('checkpoint_file', '', 'Path to trained model checkpoint.')
flags.DEFINE_string('input_file', '',
                    'File of CoNLL-formatted sentences to read from.')
flags.DEFINE_string('output_file', '',
                    'File path to write annotated sentences to.')
flags.DEFINE_integer('max_batch_size', 2048, 'Maximum batch size to support.')
flags.DEFINE_string('inference_beam_size', '', 'Comma separated list of '
                    'component_name=beam_size pairs.')
flags.DEFINE_string('locally_normalize', '', 'Comma separated list of '
                    'component names to do local normalization on.')
flags.DEFINE_integer('threads', 10, 'Number of threads used for intra- and '
                     'inter-op parallelism.')
flags.DEFINE_string('timeline_output_file', '', 'Path to save timeline to. '
                    'If specified, the final iteration of the evaluation loop '
                    'will capture and save a TensorFlow timeline.')
flags.DEFINE_string('log_file', '', 'File path to write parser eval results.')
flags.DEFINE_string('language_name', '_', 'Name of language being parsed, '
                    'for logging.')
    
      checkpoint_dir = os.path.dirname(checkpoint_path)
  if tf.gfile.IsDirectory(checkpoint_dir):
    tf.gfile.DeleteRecursively(checkpoint_dir)
  elif tf.gfile.Exists(checkpoint_dir):
    tf.gfile.Remove(checkpoint_dir)
  tf.gfile.MakeDirs(checkpoint_dir)
    
      # Constructs lexical resources for SyntaxNet in the given resource path, from
  # the training data.
  if FLAGS.compute_lexicon:
    logging.info('Computing lexicon...')
    lexicon.build_lexicon(FLAGS.resource_path, FLAGS.training_corpus_path)
    
        def syntax(self):
        return '[options] <spider>'
    
            path = self._schemes[scheme]
        try:
            dhcls = load_object(path)
            dh = dhcls(self._crawler.settings)
        except NotConfigured as ex:
            self._notconfigured[scheme] = str(ex)
            return None
        except Exception as ex:
            logger.error('Loading '%(clspath)s' for scheme '%(scheme)s'',
                         {'clspath': path, 'scheme': scheme},
                         exc_info=True,  extra={'crawler': self._crawler})
            self._notconfigured[scheme] = str(ex)
            return None
        else:
            self._handlers[scheme] = dh
        return self._handlers[scheme]
    
            @defer.inlineCallbacks
        def process_response(response):
            assert response is not None, 'Received None in process_response'
            if isinstance(response, Request):
                defer.returnValue(response)
    
            for fmt, func in six.iteritems(self._formats):
            new_response = func(response)
            if new_response:
                logger.debug('Decompressed response with format: %(responsefmt)s',
                             {'responsefmt': fmt}, extra={'spider': spider})
                return new_response
        return response

    
    from scrapy import signals
    
    from scrapy.utils.job import job_dir
from scrapy.utils.request import request_fingerprint
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_error(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.side_effect = [acme_errors.Error]
        self.assertFalse(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
        # The font size ('10pt', '11pt' or '12pt').
    #'pointsize': '10pt',
    
        @mock.patch('certbot.display.enhancements.util')
    def test_cancel(self, mock_util):
        mock_util().menu.return_value = (display_util.CANCEL, 1)
        self.assertFalse(self._call())
    
    class BytesWalkTests(WalkTests):
    '''Tests for os.walk() with bytes.'''
    def walk(self, top, **kwargs):
        if 'follow_symlinks' in kwargs:
            kwargs['followlinks'] = kwargs.pop('follow_symlinks')
        for broot, bdirs, bfiles in os.walk(os.fsencode(top), **kwargs):
            root = os.fsdecode(broot)
            dirs = list(map(os.fsdecode, bdirs))
            files = list(map(os.fsdecode, bfiles))
            yield (root, dirs, files)
            bdirs[:] = list(map(os.fsencode, dirs))
            bfiles[:] = list(map(os.fsencode, files))
    
                Klass = MagicMock
            _kwargs = {}
            if new_callable is not None:
                Klass = new_callable
            elif spec is not None or spec_set is not None:
                this_spec = spec
                if spec_set is not None:
                    this_spec = spec_set
                if _is_list(this_spec):
                    not_callable = '__call__' not in this_spec
                else:
                    not_callable = not callable(this_spec)
                if not_callable:
                    Klass = NonCallableMagicMock
    
    #
# If you don't want process information in the log, set this to zero
#
logProcesses = True
    
            # Issue #8260: Test readline() followed by read()
        f = getreader()
        self.assertEqual(f.readline(), lines[0])
        self.assertEqual(f.read(), ''.join(lines[1:]))
        self.assertEqual(f.read(), '')
    
        def assertDictEqual(self, d1, d2, msg=None):
        self.assertIsInstance(d1, dict, 'First argument is not a dictionary')
        self.assertIsInstance(d2, dict, 'Second argument is not a dictionary')
    
        P1 = 'power< func=NAME trailer< '(' node=any ')' > any* >'
    p1 = patcomp.compile_pattern(P1)
    
        def test_double_star_dict_literal_after_keywords(self):
        self.validate('''func(spam='fried', **{'eggs':'scrambled'})''')
    
            for cons in self.hash_constructors:
            m1 = cons()
            m1.update(aas)
            m1.update(bees)
            m1.update(cees)
            m1.update(dees)
            if m1.name in self.shakes:
                args = (16,)
            else:
                args = ()
    
            hashlib_ext = Extension(
            '_hashlib', ['_hashopenssl.c'],
            depends=['hashlib.h'],
            include_dirs=openssl_includes,
            library_dirs=openssl_libdirs,
            libraries=openssl_libs,
        )