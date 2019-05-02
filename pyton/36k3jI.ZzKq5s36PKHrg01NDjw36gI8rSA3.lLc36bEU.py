
        
            # register the database commands
    from flaskr import db
    db.init_app(app)
    
    
@bp.route('/login', methods=('GET', 'POST'))
def login():
    '''Log in a registered user by adding the user id to the session.'''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
        user = db.execute(
            'SELECT * FROM user WHERE username = ?', (username,)
        ).fetchone()
    
        return render_template('blog/create.html')
    
        with client:
        auth.logout()
        assert 'user_id' not in session

    
    This typically means that you attempted to use functionality that needed
to interface with the current application object in some way. To solve
this, set up an application context with app.app_context().  See the
documentation for more information.\
'''
    
        return logger

    
    
class FlaskCliRunner(CliRunner):
    '''A :class:`~click.testing.CliRunner` for testing a Flask app's
    CLI commands. Typically created using
    :meth:`~flask.Flask.test_cli_runner`. See :ref:`testing-cli`.
    '''
    def __init__(self, app, **kwargs):
        self.app = app
        super(FlaskCliRunner, self).__init__(**kwargs)
    
    
@pytest.fixture(params=(True, False))
def limit_loader(request, monkeypatch):
    '''Patch pkgutil.get_loader to give loader without get_filename or archive.
    
    
def plot_batch_errors(all_errors, n_features, all_batch_sizes, data):
    plt.figure()
    plot_results(all_batch_sizes, all_errors['pca'], label='PCA')
    plot_results(all_batch_sizes, all_errors['ipca'], label='IncrementalPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. batch_size for n_components %i\n \
                 LFW, size %i x %i' % (
                 n_features, data.shape[0], data.shape[1]))
    plt.xlabel('Batch size')
    plt.ylabel('Mean absolute error')
    
        class_name = info['fullname'].split('.')[0]
    if type(class_name) != str:
        # Python 2 only
        class_name = class_name.encode('utf-8')
    module = __import__(info['module'], fromlist=[class_name])
    obj = attrgetter(info['fullname'])(module)
    
    # #############################################################################
# Main code
regression_data = generate_data('regression')
classification_data = generate_data('classification', sparse=True)
configurations = [
    {'estimator': SGDClassifier,
     'tuned_params': {'penalty': 'elasticnet', 'alpha': 0.001, 'loss':
                      'modified_huber', 'fit_intercept': True, 'tol': 1e-3},
     'changing_param': 'l1_ratio',
     'changing_param_values': [0.25, 0.5, 0.75, 0.9],
     'complexity_label': 'non_zero coefficients',
     'complexity_computer': _count_nonzero_coefficients,
     'prediction_performance_computer': hamming_loss,
     'prediction_performance_label': 'Hamming Loss (Misclassification Ratio)',
     'postfit_hook': lambda x: x.sparsify(),
     'data': classification_data,
     'n_samples': 30},
    {'estimator': NuSVR,
     'tuned_params': {'C': 1e3, 'gamma': 2 ** -15},
     'changing_param': 'nu',
     'changing_param_values': [0.1, 0.25, 0.5, 0.75, 0.9],
     'complexity_label': 'n_support_vectors',
     'complexity_computer': lambda x: len(x.support_vectors_),
     'data': regression_data,
     'postfit_hook': lambda x: x,
     'prediction_performance_computer': mean_squared_error,
     'prediction_performance_label': 'MSE',
     'n_samples': 30},
    {'estimator': GradientBoostingRegressor,
     'tuned_params': {'loss': 'ls'},
     'changing_param': 'n_estimators',
     'changing_param_values': [10, 50, 100, 200, 500],
     'complexity_label': 'n_trees',
     'complexity_computer': lambda x: x.n_estimators,
     'data': regression_data,
     'postfit_hook': lambda x: x,
     'prediction_performance_computer': mean_squared_error,
     'prediction_performance_label': 'MSE',
     'n_samples': 30},
]
for conf in configurations:
    prediction_performances, prediction_times, complexities = \
        benchmark_influence(conf)
    plot_influence(conf, prediction_performances, prediction_times,
                   complexities)

    
    First example
-------------
The first example illustrates how robust covariance estimation can help
concentrating on a relevant cluster when another one exists. Here, many
observations are confounded into one and break down the empirical covariance
estimation.
Of course, some screening tools would have pointed out the presence of two
clusters (Support Vector Machines, Gaussian Mixture Models, univariate
outlier detection, ...). But had it been a high-dimensional example, none
of these could be applied that easily.
    
    An example showing how the scikit-learn can be used to recognize images of
hand-written digits.
    
    iris = datasets.load_iris()
X = iris.data
y = iris.target
    
    from sklearn import manifold, datasets
    
    # Note: This isn't exactly the same as a 'percent match'. The scale isn't linear. But you can assume that images with a
# smaller distance are more similar to each other than ones with a larger distance.
    
    # 你需要在sudo raspi-config中把camera功能打开
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
            # Or instead, use the known face with the smallest distance to the new face
        face_distances = face_recognition.face_distance(known_face_encodings, face_encoding)
        best_match_index = np.argmin(face_distances)
        if matches[best_match_index]:
            name = known_face_names[best_match_index]
    
    while True:
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
    
class FaceswapFormatter(logging.Formatter):
    ''' Override formatter to strip newlines and multiple spaces from logger
        Messages that begin with 'R|' should be handled as is
    '''
    def format(self, record):
        if record.msg.startswith('R|'):
            record.msg = record.msg[2:]
            record.strip_spaces = False
        elif record.strip_spaces:
            record.msg = re.sub(' +', ' ', record.msg.replace('\n', '\\n').replace('\r', '\\r'))
        return super().format(record)
    
    
def icnr_keras(shape, dtype=None):
    '''
    Custom initializer for subpix upscaling
    From https://github.com/kostyaev/ICNR
    Note: upscale factor is fixed to 2, and the base initializer is fixed to random normal.
    '''
    # TODO Roll this into ICNR_init when porting GAN 2.2
    shape = list(shape)
    scale = 2
    initializer = tf.keras.initializers.RandomNormal(0, 0.02)
    
                    if channels < self.group:
                    raise ValueError('Input channels should be larger than group size' +
                                     '; Received input channels: ' + str(channels) +
                                     '; Group size: ' + str(self.group))
    
            var_x = self.blocks.upscale(var_x, decoder_complexity, **kwargs)
        var_x = SpatialDropout2D(0.25)(var_x)
        var_x = self.blocks.upscale(var_x, decoder_complexity, **kwargs)
        if self.lowmem:
            var_x = SpatialDropout2D(0.15)(var_x)
        else:
            var_x = SpatialDropout2D(0.25)(var_x)
        var_x = self.blocks.upscale(var_x, decoder_complexity // 2, **kwargs)
        var_x = self.blocks.upscale(var_x, decoder_complexity // 4, **kwargs)
        var_x = Conv2D(3, kernel_size=5, padding='same', activation='sigmoid')(var_x)
        outputs = [var_x]
    
            if self.config.get('mask_type', None):
            var_y = input_
            var_y = self.blocks.upscale(var_y, 512)
            var_y = self.blocks.upscale(var_y, 256)
            var_y = self.blocks.upscale(var_y, self.input_shape[0])
            var_y = Conv2D(1, kernel_size=5, padding='same', activation='sigmoid')(var_y)
            outputs.append(var_y)
        return KerasModel(input_, outputs=outputs)

    
        def reset_session(self):
        ''' Reset currently training sessions '''
        logger.debug('Reset current training session')
        self.clear_session()
        session = get_config().session
        if not session.initialized:
            logger.debug('Training not running')
            print('Training not running')
            return
        msg = 'Currently running training session'
        self.session = session
        self.set_session_summary(msg)
    
    # Fallback URL to use when a non-existing Lambda is invoked. If this matches
# `dynamodb://<table_name>`, then the invocation is recorded in the corresponding
# DynamoDB table. If this matches `http(s)://...`, then the Lambda invocation is
# forwarded as a POST request to that URL.
LAMBDA_FALLBACK_URL = os.environ.get('LAMBDA_FALLBACK_URL', '').strip()
    
                # subprocess.Popen is not thread-safe, hence use a mutex here.. (TODO: mutex still needed?)
            with mutex_popen:
                stdin_arg = subprocess.PIPE if stdin else None
                stdout_arg = open(outfile, 'wb') if isinstance(outfile, six.string_types) else outfile
                stderr_arg = stderr
                if tty:
                    master_fd, slave_fd = pty.openpty()
                    stdin_arg = slave_fd
                    stdout_arg = stderr_arg = None
    
        # create ES domain
    es_client.create_elasticsearch_domain(DomainName=TEST_DOMAIN_NAME)
    assert_true(TEST_DOMAIN_NAME in
        [d['DomainName'] for d in es_client.list_domain_names()['DomainNames']])
    
    
class SSMTest(unittest.TestCase):
    def test_describe_parameters(self):
        ssm_client = aws_stack.connect_to_service('ssm')
    
        def test_extract_path_params(self):
        params = apigateway_listener.extract_path_params('/foo/bar', '/foo/{param1}')
        self.assertEqual(params, {'param1': 'bar'})