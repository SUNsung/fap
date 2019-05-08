
        
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
    
    
MIME_RE = re.compile(r'^[^/]+/[^/]+$')
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            BASIC_AUTH_HEADER_VALUE,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        def test_GET_no_data_no_auto_headers(self, httpbin):
        # https://github.com/jakubroztocil/httpie/issues/62
        r = http('GET', httpbin.url + '/headers')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == '*/*'
        assert 'Content-Type' not in r.json['headers']
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
        def _migrate_implicit_content_type(self):
        '''Migrate the removed implicit_content_type config option'''
        try:
            implicit_content_type = self.pop('implicit_content_type')
        except KeyError:
            self.save()
        else:
            if implicit_content_type == 'form':
                self['default_options'].insert(0, '--form')
            self.save()
            self.load()

    
        # I and J are used interchangeably to allow
    # us to use a 5x5 table (25 letters)
    alphabet = 'ABCDEFGHIKLMNOPQRSTUVWXYZ'
    # we're using a list instead of a '2d' array because it makes the math 
    # for setting up the table and doing the actual encoding/decoding simpler
    table = []
    
    from .hash_table import HashTable
    
            print('Enter the first string: ', end='')
        S1 = raw_input().strip()
    
    
class SubArray:
    
    def compute_heterogeneity(data, k, centroids, cluster_assignment):
    
    heterogeneity = 0.0
    for i in range(k):
        
        # Select all data points that belong to cluster i. Fill in the blank (RHS only)
        member_data_points = data[cluster_assignment==i, :]
        
        if member_data_points.shape[0] > 0: # check if i-th cluster is non-empty
            # Compute distances from centroid to data points (RHS only)
            distances = pairwise_distances(member_data_points, [centroids[i]], metric='euclidean')
            squared_distances = distances**2
            heterogeneity += np.sum(squared_distances)
        
    return heterogeneity
    
        score = float(numerator) / denumerator * 100
    
            a += a
        b >>= 1
    
        for ns in n_samples:
        for nf in n_features:
            it += 1
            print('==================')
            print('Iteration %s of %s' % (it, max(len(n_samples),
                                          len(n_features))))
            print('==================')
            n_informative = nf // 10
            X, Y, coef_ = make_regression(n_samples=ns, n_features=nf,
                                          n_informative=n_informative,
                                          noise=0.1, coef=True)
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
    Line #      Hits         Time  Per Hit   % Time  Line Contents
==============================================================
    56                                           @profile
    57                                           def benchmark_sparse_predict():
    58         1        10854  10854.0      2.8      X_test_sparse = csr_matrix(X_test)
    59       301          477      1.6      0.1      for _ in range(300):
    60       300       381409   1271.4     97.1          clf.predict(X_test_sparse)
'''
    
    # Create a graph capturing local connectivity. Larger number of neighbors
# will give more homogeneous clusters to the cost of computation
# time. A very large number of neighbors gives more evenly distributed
# cluster sizes, but may not impose the local manifold structure of
# the data
knn_graph = kneighbors_graph(X, 30, include_self=False)
    
    The example is engineered to show the effect of the choice of different
metrics. It is applied to waveforms, which can be seen as
high-dimensional vector. Indeed, the difference between metrics is
usually more pronounced in high dimension (in particular for euclidean
and cityblock).
    
    digits = datasets.load_digits()
images = digits.images
X = np.reshape(images, (len(images), -1))
connectivity = grid_to_graph(*images[0].shape)
    
        plot_clustering(X_red, clustering.labels_, '%s linkage' % linkage)
    
    '''
=========================================================
Vector Quantization Example
=========================================================
    
    # Part 1: Quantitative evaluation of various init methods
    
    '''
print(__doc__)
    
    MOCK_MODULES = ['face_recognition_models', 'Click', 'dlib', 'numpy', 'PIL']
sys.modules.update((mod_name, Mock()) for mod_name in MOCK_MODULES)
    
    # Release handle to the webcam
video_capture.release()
cv2.destroyAllWindows()

    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
    # NOTE: This example requires flask to be installed! You can install it with pip:
# $ pip3 install flask
    
        def test_cnn_raw_face_locations(self):
        img = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg'))
        detected_faces = api._raw_face_locations(img, model='cnn')
    
        # 图片上传失败，输出以下html代码
    return '''
    <!doctype html>
    <title>Is this a picture of Obama?</title>
    <h1>Upload a picture and see if it's a picture of Obama!</h1>
    <form method='POST' enctype='multipart/form-data'>
      <input type='file' name='file'>
      <input type='submit' value='Upload'>
    </form>
    '''
    
        pose_predictor = pose_predictor_68_point
    
    
def selu(x):
    '''缩放型指数线性单元'''
    alpha = 1.6732632423543772848170429916717
    scale = 1.0507009873554804934193349852946
    o = tf.nn.elu(x)
    return scale * tf.where(x > 0, o, alpha * o)

    
        with tf.variable_scope(name, reuse=reuse):
        alpha = get_w(alpha_shape, w_initializer=alpha_init, name='alpha')
        # o = relu(x) + 0.5 * tf.multiply(alpha, x - tf.abs(x))  # TFLearn
        o = leaky_relu(x, alpha)  # TensorLayer / <Deep Learning>
    
                # x = FlattenLayer(x)
            x = DenseLayer(x, n_units=1, act=tf.nn.sigmoid)
            o = x.outputs
    
            o = tf.nn.conv2d(x, W, strides=strides, padding=padding) + b
        o = act_fn(o)
    
        Args:
        x(tf.Tensor):
        n_unit(int):
        name(str):
        reuse(bool)
    '''
    return dense(x, n_unit, act_fn=linear, name=(name or 'linear_dense'), reuse=reuse)
    
        Returns:
    
    References:
    https://www.tensorflow.org/api_guides/python/array_ops
    keras.backend
'''
    
    # 构建 FastText 模型
sentences = [['Hello', 'World', '!'], ['I', 'am', 'huay', '.']]
min_ngrams, max_ngrams = 2, 4  # ngrams 范围
model = FastText(sentences, size=5, min_count=1, min_n=min_ngrams, max_n=max_ngrams)
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        db.commit_transaction()
        try:
            self._forwards(orm)
        except Exception:
            # Explicitly resume the transaction because
            # South is going to try and roll it back, but when
            # it can't find one, it'll error itself, masking
            # the actual exception being raised
            #
            # See https://github.com/getsentry/sentry/issues/5035
            db.start_transaction()
            raise
        db.start_transaction()
    
            for environment in RangeQuerySetWrapperWithProgressBar(orm.Environment.objects.all()):
            try:
                with transaction.atomic():
                    orm.EnvironmentProject.objects.create(
                        environment=environment, project_id=environment.project_id
                    )
            except IntegrityError:
                pass
    
            # Adding field 'ApiToken.refresh_token'
        db.add_column(
            'sentry_apitoken',
            'refresh_token',
            self.gf('django.db.models.fields.CharField')(max_length=64, unique=True, null=True),
            keep_default=False
        )
    
        def _forwards(self, orm):
        'Write your forwards methods here.'