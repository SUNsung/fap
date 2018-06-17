
        
            def implements_to_string(cls):
        cls.__unicode__ = cls.__str__
        cls.__str__ = lambda x: x.__unicode__().encode('utf-8')
        return cls
    
            :param variable_name: name of the environment variable
        :param silent: set to ``True`` if you want silent failure for missing
                       files.
        :return: bool. ``True`` if able to load config, ``False`` otherwise.
        '''
        rv = os.environ.get(variable_name)
        if not rv:
            if silent:
                return False
            raise RuntimeError('The environment variable %r is not set '
                               'and as such configuration could not be '
                               'loaded.  Set this variable and make it '
                               'point to a configuration file' %
                               variable_name)
        return self.from_pyfile(rv, silent=silent)
    
    
@LocalProxy
def wsgi_errors_stream():
    '''Find the most appropriate error stream for the application. If a request
    is active, log to ``wsgi.errors``, otherwise use ``sys.stderr``.
    
        def get_signing_serializer(self, app):
        if not app.secret_key:
            return None
        signer_kwargs = dict(
            key_derivation=self.key_derivation,
            digest_method=self.digest_method
        )
        return URLSafeTimedSerializer(app.secret_key, salt=self.salt,
                                      serializer=self.serializer,
                                      signer_kwargs=signer_kwargs)
    
    
class View(object):
    '''Alternative way to use view functions.  A subclass has to implement
    :meth:`dispatch_request` which is called with the view arguments from
    the URL routing system.  If :attr:`methods` is provided the methods
    do not have to be passed to the :meth:`~flask.Flask.add_url_rule`
    method explicitly::
    
    
def set_init_version(version):
    info('Setting __init__.py version to %s', version)
    set_filename_version('flask/__init__.py', version, '__version__')
    
    
def test_uninstalled_module_paths(modules_tmpdir, purge_module):
    app = modules_tmpdir.join('config_module_app.py').write(
        'import os\n'
        'import flask\n'
        'here = os.path.abspath(os.path.dirname(__file__))\n'
        'app = flask.Flask(__name__)\n'
    )
    purge_module('config_module_app')
    
        return lasso_results, lars_lasso_results
    
            plt.gcf().suptitle('%s data set' % dataset.capitalize(), fontsize=16)
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
        fig = plt.figure('scikit-learn sample w/o replacement benchmark results')
    plt.title('n_population = %s, n_times = %s' %
              (opts.n_population, opts.n_times))
    ax = fig.add_subplot(111)
    for name in sampling_algorithm:
        ax.plot(ratio, time[name], label=name)
    
    Does two benchmarks
    
            X, y = generate_data(n_test, n_features)
        score_clf1 += clf1.score(X, y)
        score_clf2 += clf2.score(X, y)
    
    plt.title('Clustering measures for random uniform labeling\n'
          'against reference assignment with %d classes' % n_classes)
plt.xlabel('Number of clusters (Number of samples is fixed to %d)' % n_samples)
plt.ylabel('Score value')
plt.ylim(ymin=-0.05, ymax=1.05)
plt.legend(plots, names)
plt.show()

    
    
# Plot clustering results
for index, metric in enumerate(['cosine', 'euclidean', 'cityblock']):
    model = AgglomerativeClustering(n_clusters=n_clusters,
                                    linkage='average', affinity=metric)
    model.fit(X)
    plt.figure()
    plt.axes([0, 0, 1, 1])
    for l, c in zip(np.arange(model.n_clusters), 'rgbk'):
        plt.plot(X[model.labels_ == l].T, c=c, alpha=.5)
    plt.axis('tight')
    plt.axis('off')
    plt.suptitle('AgglomerativeClustering(affinity=%s)' % metric, size=20)
    
            self.assertFalse(self.vhost2.conflicts([self.addr1,
                                                self.addr_default]))
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_hsts_expire(self, mock_get_request):
        mock_get_request.return_value = create_response(
            headers={'strict-transport-security': 'max-age=3600'})
        self.assertFalse(self.validator.hsts('test.com'))
    
    autodoc_member_order = 'bysource'
autodoc_default_flags = ['show-inheritance', 'private-members']
    
        description = 'Example Installer plugin'
    
        hass.services.register(DOMAIN, SERVICE_VOLUME_MUTE,
                           lambda service:
                           keyboard.tap_key(keyboard.volume_mute_key),
                           schema=TAP_KEY_SCHEMA)
    
    import homeassistant.config as config_util
    
    patch_file = 'homeassistant.components.device_tracker.bt_home_hub_5'