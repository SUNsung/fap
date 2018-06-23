
        
              with tf.variable_scope(component.name, reuse=True):
        sources = network_units.NamedTensor(
            tf.zeros([_BATCH_SIZE * _NUM_TOKENS, _TOKEN_DIM]), 'sources')
        targets = network_units.NamedTensor(
            tf.zeros([_BATCH_SIZE * _NUM_TOKENS, _TOKEN_DIM]), 'targets')
    
        update_network_states(self, tensors, network_states, stride)
    self._add_runtime_hooks()
    return state.handle
    
      def testSigmoidCrossEntropyLoss(self):
    indices = tf.constant([0, 0, 1])
    gold_labels = tf.constant([0, 1, 2])
    probs = tf.constant([0.6, 0.7, 0.2])
    logits = tf.constant([[0.9, -0.3, 0.1], [-0.5, 0.4, 2.0]])
    cost, correct, total, gold_labels = (
        component.build_sigmoid_cross_entropy_loss(logits, gold_labels, indices,
                                                   probs))
    
    # The saved model tags to export.  The same set of tags must be specified when
# loading the saved model.
_SAVED_MODEL_TAGS = [tf.saved_model.tag_constants.SERVING]
    
        if batch_size_limit is not None:
      gold_reader_strings = gold_reader_strings[:batch_size_limit]
      test_reader_strings = test_reader_strings[:batch_size_limit]
    
      def testCreateLexiconContext(self):
    expected_context = task_spec_pb2.TaskSpec()
    text_format.Parse(_EXPECTED_CONTEXT, expected_context)
    self.assertProtoEquals(
        lexicon.create_lexicon_context('/tmp'), expected_context)
    
      Args:
    num_nodes: [B] vector of graph sizes per batch item.
    scores: [B,M,M] tensor of padded batched arc and root scores, in the format
      used by the maximum_spanning_tree() op.  Padding values must be finite.
    forest: If true, sum over spanning forests instead of trees.
    max_dynamic_range: If specified, incoming scores for each node are clipped
      to at most this far from the maximum such score (in the log domain).
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
                        resp = HTTPResponse.from_httplib(
                        r,
                        pool=conn,
                        connection=low_conn,
                        preload_content=False,
                        decode_content=False
                    )
                except:
                    # If we hit any problems here, clean up the connection.
                    # Then, reraise so that we can handle the actual exception.
                    low_conn.close()
                    raise
    
    import numpy as np
from scipy.cluster import hierarchy
import matplotlib.pyplot as plt
    
    
def bench_sample(sampling, n_population, n_samples):
    gc.collect()
    # start time
    t_start = datetime.now()
    sampling(n_population, n_samples)
    delta = (datetime.now() - t_start)
    # stop time
    time = compute_time(t_start, delta)
    return time
    
            if not in_exercise_region or linestrip.startswith('#'):
            output_file.write(line)
    
    # Create different classifiers. The logistic regression cannot do
# multiclass out of the box.
classifiers = {'L1 logistic': LogisticRegression(C=C, penalty='l1'),
               'L2 logistic (OvR)': LogisticRegression(C=C, penalty='l2'),
               'Linear SVC': SVC(kernel='linear', C=C, probability=True,
                                 random_state=0),
               'L2 logistic (Multinomial)': LogisticRegression(
                C=C, solver='lbfgs', multi_class='multinomial'),
               'GPC': GaussianProcessClassifier(kernel)
               }
    
        Only one feature contains discriminative information, the other features
    contain only noise.
    '''
    X, y = make_blobs(n_samples=n_samples, n_features=1, centers=[[-2], [2]])
    
            self.tail.appendleft(delta)
        self.lasttime = now
        self.concurrent += 1
    
            if infos:
            writeln(' (%s)' % (', '.join(infos),))
        else:
            write('\n')
    
            def eb_wrapper(failure):
            case = _create_testcase(method, 'errback')
            exc_info = failure.value, failure.type, failure.getTracebackObject()
            results.addError(case, exc_info)
    
    def get_marker(line):
    matchlist = TAG_REGEX.findall(line)
    if matchlist:
        namematch = NAMED_A_TAG_REGEX.match(line)
        if namematch:
            return namematch.group(1) # group 0 is full match
    
        # libraries
    lib_dir = os.path.join(base_dir, 'lib')
    
    def score(model, data_val, metrics, gpus, batch_size, rgb_mean=None, mean_img=None,
          image_shape='3,224,224', data_nthreads=4, label_name='softmax_label', max_num_examples=None):
    # create data iterator
    data_shape = tuple([int(i) for i in image_shape.split(',')])
    if mean_img is not None:
        mean_args = {'mean_img':mean_img}
    elif rgb_mean is not None:
        rgb_mean = [float(i) for i in rgb_mean.split(',')]
        mean_args = {'mean_r':rgb_mean[0], 'mean_g':rgb_mean[1],
          'mean_b':rgb_mean[2]}
    
    # A Simple Downsampling Factory
def DownsampleFactory(data, ch_3x3, name, attr):
    # conv 3x3
    conv = ConvFactory(data=data, name=name+'_conv',kernel=(3, 3), stride=(2, 2), num_filter=ch_3x3, pad=(1, 1), attr=attr)
    # pool
    pool = mx.symbol.Pooling(data=data, name=name+'_pool',kernel=(3, 3), stride=(2, 2), pad=(1, 1), pool_type='max', attr=attr)
    # concat
    concat = mx.symbol.Concat(*[conv, pool], name=name+'_ch_concat')
    return concat
    
    def test_imagenet1k_inception_bn(**kwargs):
    acc = mx.metric.create('acc')
    m = 'imagenet1k-inception-bn'
    g = 0.75
    (speed,) = score(model=m,
                     data_val=VAL_DATA,
                     rgb_mean='123.68,116.779,103.939', metrics=acc, **kwargs)
    r = acc.get()[1]
    print('Tested %s acc = %f, speed = %f img/sec' % (m, r, speed))
    assert r > g and r < g + .1