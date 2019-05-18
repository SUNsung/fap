
        
                request_line = '{method} {path}{query} HTTP/1.1'.format(
            method=self._orig.method,
            path=url.path or '/',
            query='?' + url.query if url.query else ''
        )
    
        def __iter__(self):
        return iter(self._plugins)
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth == USERNAME + SEP_CREDENTIALS + PASSWORD
            assert username == USERNAME
            assert password == PASSWORD
            return basic_auth()
    
    
def test_unicode_form_item_verbose(httpbin):
    r = http('--verbose', '--form',
             'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
    from httpie import __version__
from httpie.compat import is_windows
    
        if args.auth_plugin:
        session.auth = {
            'type': args.auth_plugin.auth_type,
            'raw_auth': args.auth_plugin.raw_auth,
        }
    elif session.auth:
        kwargs['auth'] = session.auth
    
        # start time
    tstart = time()
    clf = factory(alpha=alpha).fit(X, Y)
    delta = (time() - tstart)
    # stop time
    
        print('vectorizing data')
    
    X -= X.mean(axis=0)
X /= X.std(axis=0)
    
                tstart = time()
            clf.fit(X_train, y_train)
            sgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                      y_test)
            sgd_results[i, j, 1] = time() - tstart
    
    In the second benchmark, we increase the number of dimensions of the
training set, classify a sample and plot the time taken as a function
of the number of dimensions.
'''
import numpy as np
import matplotlib.pyplot as plt
import gc
from datetime import datetime
    
        input_file = open(os.path.join(exercise_dir, f))
    output_file = open(os.path.join(skeleton_dir, f), 'w')
    
    # Create a graph capturing local connectivity. Larger number of neighbors
# will give more homogeneous clusters to the cost of computation
# time. A very large number of neighbors gives more evenly distributed
# cluster sizes, but may not impose the local manifold structure of
# the data
knn_graph = kneighbors_graph(X, 30, include_self=False)
    
    What this example shows us is the behavior 'rich getting richer' of
agglomerative clustering that tends to create uneven cluster sizes.
This behavior is pronounced for the average linkage strategy,
that ends up with a couple of singleton clusters, while in the case
of single linkage we get a single central cluster with all other clusters
being drawn from noise points around the fringes.
'''
    
    
class TestLoader(object):
    '''
    This class is responsible for loading tests according to various criteria
    and returning them wrapped in a TestSuite
    '''
    testMethodPrefix = 'test'
    sortTestMethodsUsing = staticmethod(util.three_way_cmp)
    testNamePatterns = None
    suiteClass = suite.TestSuite
    _top_level_dir = None
    
            class Foo(unittest.TestCase):
            def test_1(self): pass
            def test_2(self): pass
    
            readline = self.get_readline((b'\xef\xbb\xbfprint(something)\n',))
        encoding, consumed_lines = detect_encoding(readline)
        self.assertEqual(encoding, 'utf-8-sig')
        self.assertEqual(consumed_lines, [b'print(something)\n'])
    
        def compare_files(self, file1, file2):
        with open(file1) as fp:
            lines1 = fp.readlines()
        with open(file2) as fp:
            lines2 = fp.readlines()
        self.assertEqual(lines1, lines2)
    
            # write some items containing non-ASCII characters
        items = {
            'id1': {PARTITION_KEY: 'id1', 'data': 'foobar123 ✓'},
            'id2': {PARTITION_KEY: 'id2', 'data': 'foobar123 £'},
            'id3': {PARTITION_KEY: 'id3', 'data': 'foobar123 ¢'}
        }
        for k, item in items.items():
            table.put_item(Item=item)
    
            assert 'Parameters' in response
        assert len(response['Parameters']) > 0
        assert response['Parameters'][0]['Name'] == 'test_put'
        assert response['Parameters'][0]['Value'] == '1'

    
    
def get_kinesis_events(stream_name, shard_id, max_results=10, env=None):
    env = aws_stack.get_environment(env)
    records = aws_stack.kinesis_get_latest_records(stream_name, shard_id, count=max_results, env=env)
    for r in records:
        r['ApproximateArrivalTimestamp'] = mktime(r['ApproximateArrivalTimestamp'])
    result = {
        'events': records
    }
    return result
    
    
def get_authorizers(path):
    result = {'item': []}
    api_id = get_api_id_from_path(path)
    for key, value in AUTHORIZERS.items():
        auth_api_id = get_api_id_from_path(value['_links']['self']['href'])
        if auth_api_id == api_id:
            result['item'].append(value)
    return result
    
            key2, url2 = multipart_content.find_multipart_redirect_url(data2, headers)
    
    
def bucket_exists(name):
    s3_client = aws_stack.connect_to_service('s3')
    buckets = s3_client.list_buckets()
    for bucket in buckets['Buckets']:
        if bucket['Name'] == name:
            return True
    
    Adapted from code contributed by BigMoyan.
'''
from __future__ import print_function
    
        # load weights
    if weights == 'imagenet':
        print('K.image_dim_ordering:', K.image_dim_ordering())
        if K.image_dim_ordering() == 'th':
            if include_top:
                weights_path = get_file('vgg16_weights_th_dim_ordering_th_kernels.h5',
                                        TH_WEIGHTS_PATH,
                                        cache_subdir='models')
            else:
                weights_path = get_file('vgg16_weights_th_dim_ordering_th_kernels_notop.h5',
                                        TH_WEIGHTS_PATH_NO_TOP,
                                        cache_subdir='models')
            model.load_weights(weights_path)
            if K.backend() == 'tensorflow':
                warnings.warn('You are using the TensorFlow backend, yet you '
                              'are using the Theano '
                              'image dimension ordering convention '
                              '(`image_dim_ordering='th'`). '
                              'For best performance, set '
                              '`image_dim_ordering='tf'` in '
                              'your Keras config '
                              'at ~/.keras/keras.json.')
                convert_all_kernels_in_model(model)
        else:
            if include_top:
                weights_path = get_file('vgg16_weights_tf_dim_ordering_tf_kernels.h5',
                                        TF_WEIGHTS_PATH,
                                        cache_subdir='models')
            else:
                weights_path = get_file('vgg16_weights_tf_dim_ordering_tf_kernels_notop.h5',
                                        TF_WEIGHTS_PATH_NO_TOP,
                                        cache_subdir='models')
            model.load_weights(weights_path)
            if K.backend() == 'theano':
                convert_all_kernels_in_model(model)
    return model
    
        :param output_pixel_vals: if output should be pixel values (i.e. int8
    values) or floats
    
            o_preact = (index_dot(x_, self.W_o) +
                    T.dot(h_, self.U_o) + self.b_o)
        o = T.nnet.sigmoid(o_preact)
    
        def steps(self):
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
    def plot_supervised_chart(annotate=False):
    create_base(supervised=True)
    if annotate:
        fontdict = dict(color='r', weight='bold', size=14)
        pl.text(1.9, 4.55, 'X = vec.fit_transform(input)',
                fontdict=fontdict,
                rotation=20, ha='left', va='bottom')
        pl.text(3.7, 3.2, 'clf.fit(X, y)',
                fontdict=fontdict,
                rotation=20, ha='left', va='bottom')
        pl.text(1.7, 1.5, 'X_new = vec.transform(input)',
                fontdict=fontdict,
                rotation=20, ha='left', va='bottom')
        pl.text(6.1, 1.5, 'y_new = clf.predict(X_new)',
                fontdict=fontdict,
                rotation=20, ha='left', va='bottom')
    
    flags.DEFINE_string(
    'output_file', None,
    'Output TF example file (or comma-separated list of files).')
    
      if use_token_type:
    if token_type_ids is None:
      raise ValueError('`token_type_ids` must be specified if'
                       '`use_token_type` is True.')
    token_type_table = tf.get_variable(
        name=token_type_embedding_name,
        shape=[token_type_vocab_size, width],
        initializer=create_initializer(initializer_range))
    # This vocab will be small so we always do one-hot here, since it is always
    # faster for a small vocabulary.
    flat_token_type_ids = tf.reshape(token_type_ids, [-1])
    one_hot_ids = tf.one_hot(flat_token_type_ids, depth=token_type_vocab_size)
    token_type_embeddings = tf.matmul(one_hot_ids, token_type_table)
    token_type_embeddings = tf.reshape(token_type_embeddings,
                                       [batch_size, seq_length, width])
    output += token_type_embeddings
    
    import modeling
import six
import tensorflow as tf
    
      return model_fn
    
      # These functions want `str` for both Python2 and Python3, but in one case
  # it's a Unicode string and in the other it's a byte string.
  if six.PY3:
    if isinstance(text, str):
      return text
    elif isinstance(text, bytes):
      return text.decode('utf-8', 'ignore')
    else:
      raise ValueError('Unsupported string type: %s' % (type(text)))
  elif six.PY2:
    if isinstance(text, str):
      return text
    elif isinstance(text, unicode):
      return text.encode('utf-8')
    else:
      raise ValueError('Unsupported string type: %s' % (type(text)))
  else:
    raise ValueError('Not running on Python2 or Python 3?')
    
        self.assertFalse(tokenization._is_control(u'A'))
    self.assertFalse(tokenization._is_control(u' '))
    self.assertFalse(tokenization._is_control(u'\t'))
    self.assertFalse(tokenization._is_control(u'\r'))
    self.assertFalse(tokenization._is_control(u'\U0001F4A9'))