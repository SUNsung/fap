cc_test(
    name = 'index_translator_test',
    srcs = ['index_translator_test.cc'],
    deps = [
        ':index_translator',
        '//dragnn/core/test:mock_component',
        '//dragnn/core/test:mock_transition_state',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
    ],
)
    
    cc_test(
    name = 'spanning_tree_iterator_test',
    size = 'small',
    srcs = ['spanning_tree_iterator_test.cc'],
    deps = [
        ':spanning_tree_iterator',
        '//syntaxnet:test_main',
        '@org_tensorflow//tensorflow/core:lib',
        '@org_tensorflow//tensorflow/core:test',
    ],
)
    
    tf_proto_library_cc(
    name = 'spec_proto',
    srcs = ['spec.proto'],
)
    
        # Get embedding matrix variables.
    with tf.variable_scope(comp.name, reuse=True):
      constant_embedding_matrix = tf.get_variable(
          network_units.fixed_embeddings_name(0))
      trainable_embedding_matrix = tf.get_variable(
          network_units.fixed_embeddings_name(1))
    
      def testCombineArcAndRootPotentials(self):
    with self.test_session():
      arcs = tf.constant([[[1, 2, 3],
                           [2, 3, 4],
                           [3, 4, 5]],
                          [[3, 4, 5],
                           [2, 3, 4],
                           [1, 2, 3]]], tf.float32)  # pyformat: disable
      roots = tf.constant([[6, 7, 8],
                           [8, 7, 6]], tf.float32)  # pyformat: disable
    
      Returns:
    Dict mapping from shortened resource path to original resource path.
  '''
  for component_spec in master_spec.component:
    for feature_spec in component_spec.fixed_feature:
      feature_spec.ClearField('pretrained_embedding_matrix')
      feature_spec.ClearField('vocab')
    
      def testTaggerParserWithAttention(self):
    spec = self.LoadSpec('tagger_parser_master_spec.textproto')
    
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
    
            print('Iteration %s of %s' % (i, n_iter))
    
    
def plot_feature_errors(all_errors, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_errors['pca'], label='PCA')
    plot_results(all_components, all_errors['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plot_results(all_components, all_errors['rpca'], label='RandomizedPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. n_components\n'
                 'LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Mean absolute error')
    
            for i, alg in enumerate(algorithms):
            xvals = 0.1 + i * (1 + len(vals)) + np.arange(len(vals))
            width = 0.8
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
    
if not os.path.exists(TRAIN_FOLDER) or not os.path.exists(TEST_FOLDER):
    
    # Plot the confusion matrix
cm = metrics.confusion_matrix(y_test, y_predicted)
print(cm)
    
    The logistic regression is not a multiclass classifier out of the box. As
a result it can identify only the first class.
'''
print(__doc__)
    
            # octal
        self.assertEqual(format(3, 'o'), '3')
        self.assertEqual(format(-3, 'o'), '-3')
        self.assertEqual(format(1234, 'o'), '2322')
        self.assertEqual(format(-1234, 'o'), '-2322')
        self.assertEqual(format(1234, '-o'), '2322')
        self.assertEqual(format(-1234, '-o'), '-2322')
        self.assertEqual(format(1234, ' o'), ' 2322')
        self.assertEqual(format(-1234, ' o'), '-2322')
        self.assertEqual(format(1234, '+o'), '+2322')
        self.assertEqual(format(-1234, '+o'), '-2322')
        self.assertRaises(ValueError, format, 1234567890, ',o')
        self.assertEqual(format(1234567890, '_o'), '111_4540_1322')
    
        def __init__(self, message=None):
        '''Initialize an MHMessage instance.'''
        self._sequences = []
        Message.__init__(self, message)
    
        def _extractname(self, mo):
        return mo.group('hexrgb').upper()
    
            for func, args, kwargs, expected in self.CALLS_KWARGS:
            with self.subTest(func=func, args=args, kwargs=kwargs):
                result = _testcapi.pyobject_fastcalldict(func, args, kwargs)
                self.check_result(result, expected)
    
        def test_exec_failure(self):
        self.create_module('foo', '1/0')
        try:
            import foo
        except ZeroDivisionError as e:
            tb = e.__traceback__
        else:
            self.fail('ZeroDivisionError should have been raised')
        self.assert_traceback(tb, [__file__, 'foo.py'])