
        
        import urllib3
import chardet
import warnings
from .exceptions import RequestsDependencyWarning
    
    
class RequestException(IOError):
    '''There was an ambiguous exception that occurred while handling your
    request.
    '''
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
    
class TestTestServer:
    
    # If true, show URL addresses after external links.
#latex_show_urls = False
    
        print('20 newsgroups')
    print('=============')
    print('X_train.shape = {0}'.format(X_train.shape))
    print('X_train.format = {0}'.format(X_train.format))
    print('X_train.dtype = {0}'.format(X_train.dtype))
    print('X_train density = {0}'
          ''.format(X_train.nnz / np.product(X_train.shape)))
    print('y_train {0}'.format(y_train.shape))
    print('X_test {0}'.format(X_test.shape))
    print('X_test.format = {0}'.format(X_test.format))
    print('X_test.dtype = {0}'.format(X_test.dtype))
    print('y_test {0}'.format(y_test.shape))
    print()
    
        Returns
    -------
    array of floats shaped like (metrics, formats, samples, classes, density)
        Time in seconds.
    '''
    metrics = np.atleast_1d(metrics)
    samples = np.atleast_1d(samples)
    classes = np.atleast_1d(classes)
    density = np.atleast_1d(density)
    formats = np.atleast_1d(formats)
    out = np.zeros((len(metrics), len(formats), len(samples), len(classes),
                    len(density)), dtype=float)
    it = itertools.product(samples, classes, density)
    for i, (s, c, d) in enumerate(it):
        _, y_true = make_multilabel_classification(n_samples=s, n_features=1,
                                                   n_classes=c, n_labels=d * c,
                                                   random_state=42)
        _, y_pred = make_multilabel_classification(n_samples=s, n_features=1,
                                                   n_classes=c, n_labels=d * c,
                                                   random_state=84)
        for j, f in enumerate(formats):
            f_true = f(y_true)
            f_pred = f(y_pred)
            for k, metric in enumerate(metrics):
                t = timeit(partial(metric, f_true, f_pred), number=n_times)
    
        for n_components in [i.astype(int) for i in
                         np.linspace(data.shape[1] // 10,
                                     data.shape[1], num=4)]:
        all_times = defaultdict(list)
        all_errors = defaultdict(list)
        pca = PCA(n_components=n_components)
        rpca = PCA(n_components=n_components, svd_solver='randomized',
                   random_state=1999)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('rpca', rpca)]}
    
    
def euclidean_distances(X, n_jobs):
    return pairwise_distances(X, metric='euclidean', n_jobs=n_jobs)
    
            for iteration in xrange(opts.n_times):
            print('\titer %s...' % iteration, end='')
            time_to_fit, time_to_transform = bench_scikit_transformer(X_dense,
              transformers[name])
            time_fit[name].append(time_to_fit)
            time_transform[name].append(time_to_transform)
            print('done')
    
    from scipy.sparse.csr import csr_matrix
import numpy as np
from sklearn.linear_model.stochastic_gradient import SGDRegressor
from sklearn.metrics import r2_score
    
        fn = os.path.relpath(fn,
                         start=os.path.dirname(__import__(package).__file__))
    try:
        lineno = inspect.getsourcelines(obj)[1]
    except Exception:
        lineno = ''
    return url_fmt.format(revision=revision, package=package,
                          path=fn, lineno=lineno)
    
        def decode(self, value):
        if value != self.resource_type:
            raise jose.DeserializationError(
                'Wrong resource type: {0} instead of {1}'.format(
                    value, self.resource_type))
        return value

    
    
class ResourceTest(unittest.TestCase):
    '''Tests for acme.fields.Resource.'''
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
            :param list ex_errs: Existing errors before save
    
        def test_revert_challenge_config(self):
        mock_load = mock.Mock()
        self.config.aug.load = mock_load
    
    from certbot_apache.tests import util
    
        Include {ssl_options_conf_path}
    SSLCertificateFile {cert_path}
    SSLCertificateKeyFile {key_path}
    
      The files passed in will be linted; at least one file must be provided.
  Default linted extensions are %s.
  Other file types will be ignored.
  Change the extensions with the --extensions flag.
    
        #Checking correctness of path
    if not os.path.isdir(loc):
        print('Invalid directory. Please try again!', file = sys.stderr)
        sys.exit(1)
    
            # Adding model 'EventProcessingIssue'
        db.create_table(
            'sentry_eventprocessingissue', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'raw_event', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.RawEvent']
                    )
                ), (
                    'processing_issue',
                    self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ProcessingIssue']
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['EventProcessingIssue'])
    
            for renv in dupe_release_envs:
            release_id = renv['release_id']
            organization_id = renv['organization_id']
            environment_id = renv['environment_id']
            renvs = list(
                orm.ReleaseEnvironment.objects.filter(
                    release_id=release_id,
                    organization_id=organization_id,
                    environment_id=environment_id,
                ).order_by('first_seen')
            )
            to_renv = renvs[0]
            from_renvs = renvs[1:]
            last_seen = max([re.last_seen for re in renvs])
            orm.ReleaseEnvironment.objects.filter(
                id=to_renv.id,
            ).update(last_seen=last_seen)
            orm.ReleaseEnvironment.objects.filter(
                id__in=[re.id for re in from_renvs],
            ).delete()
    
        def backwards(self, orm):
        # Removing unique constraint on 'ApiAuthorization', fields ['user', 'application']
        db.delete_unique('sentry_apiauthorization', ['user_id', 'application_id'])