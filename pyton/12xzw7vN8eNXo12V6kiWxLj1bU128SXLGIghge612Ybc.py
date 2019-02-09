
        
                print('benchmarking scikit-learn: ')
        scikit_results.append(bench(ScikitLasso, X, Y, X_test, Y_test, coef_))
        print('benchmarking glmnet: ')
        glmnet_results.append(bench(GlmnetLasso, X, Y, X_test, Y_test, coef_))
    
    faces = fetch_lfw_people(resize=.2, min_faces_per_person=5)
# limit dataset to 5000 people (don't care who they are!)
X = faces.data[:5000]
n_samples, h, w = faces.images.shape
n_features = X.shape[1]
    
        xx = range(0, n * step, step)
    plt.figure('scikit-learn tree benchmark results')
    plt.subplot(211)
    plt.title('Learning with varying number of samples')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    
        # TASK: Build a vectorizer / classifier pipeline that filters out tokens
    # that are too rare or too frequent
    
            if not in_exercise_region or linestrip.startswith('#'):
            output_file.write(line)
    
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
    
    # compressed face
plt.figure(2, figsize=(3, 2.2))
plt.imshow(face_compressed, cmap=plt.cm.gray, vmin=vmin, vmax=vmax)
    
    # Incorrect number of clusters
y_pred = KMeans(n_clusters=2, random_state=random_state).fit_predict(X)
    
        def parse(self, response):
        for link in self.link_extractor.extract_links(response):
            yield scrapy.Request(link.url, callback=self.parse)

    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        def syntax(self):
        return '<spider>'
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
            if not self.first_response:
            logger.error('No response downloaded for: %(url)s',
                         {'url': url})
    
        from twisted.internet.ssl import AcceptableCiphers
    from twisted.internet._sslverify import (ClientTLSOptions,
                                             verifyHostname,
                                             VerificationError)
    try:
        # XXX: this import would fail on Debian jessie with system installed
        # service_identity library, due to lack of cryptography.x509 dependency
        # See https://github.com/pyca/service_identity/issues/21
        from service_identity.exceptions import CertificateError
        verification_errors = (CertificateError, VerificationError)
    except ImportError:
        verification_errors = VerificationError
    
            part_head, _ = part.split(b'\r\n\r\n', 1)
        head_parsed = parse_data(part_head.lstrip(b'\r\n'))
    
    
def test_sqs_queue_names():
    sqs_client = aws_stack.connect_to_service('sqs')
    queue_name = '%s.fifo' % short_uid()
    # make sure we can create *.fifo queues
    queue_url = sqs_client.create_queue(QueueName=queue_name, Attributes={'FifoQueue': 'true'})['QueueUrl']
    sqs_client.delete_queue(QueueUrl=queue_url)
    
    
def get_tls_version(environment):
    compose_tls_version = environment.get('COMPOSE_TLS_VERSION', None)
    if not compose_tls_version:
        return None
    
    
class Formatter(object):
    '''Format tabular data for printing.'''
    def table(self, headers, rows):
        table = texttable.Texttable(max_width=get_tty_width())
        table.set_cols_dtype(['t' for h in headers])
        table.add_rows([headers] + rows)
        table.set_deco(table.HEADER)
        table.set_chars(['-', '|', '+', '-'])
    
    # WindowsError is not defined on non-win32 platforms. Avoid runtime errors by
# defining it as OSError (its parent class) if missing.
try:
    WindowsError
except NameError:
    WindowsError = OSError
    
    This is a vendored and modified copy of:
github.com/wroberts/pytimeparse @ cc0550d
    
        Unrecognised input (anything other than 'y', 'n', 'yes',
    'no' or '') will return None.
    '''
    answer = input(prompt).strip().lower()
    
        def test_format_error(self):
        output = self.formatter.format(make_log_record(logging.ERROR))
        expected = colors.red('ERROR') + ': '
        assert output == expected + MESSAGE