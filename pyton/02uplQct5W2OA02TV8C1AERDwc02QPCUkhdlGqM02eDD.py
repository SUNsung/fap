    iterkeys = lambda d: d.iterkeys()
    itervalues = lambda d: d.itervalues()
    iteritems = lambda d: d.iteritems()
    
    
def _dump_loader_info(loader):
    yield 'class: %s.%s' % (type(loader).__module__, type(loader).__name__)
    for key, value in sorted(loader.__dict__.items()):
        if key.startswith('_'):
            continue
        if isinstance(value, (tuple, list)):
            if not all(isinstance(x, (str, text_type)) for x in value):
                continue
            yield '%s:' % key
            for item in value:
                yield '  - %s' % item
            continue
        elif not isinstance(value, (str, text_type, int, float, bool)):
            continue
        yield '%s: %r' % (key, value)
    
        If there is no handler for the logger's effective level, add a
    :class:`~logging.StreamHandler` for
    :func:`~flask.logging.wsgi_errors_stream` with a basic format.
    '''
    logger = logging.getLogger('flask.app')
    
            This creates an instance of :attr:`null_session_class` by default.
        '''
        return self.null_session_class()
    
    
def test_egg_installed_paths(install_egg, modules_tmpdir,
                             modules_tmpdir_prefix):
    modules_tmpdir.mkdir('site_egg').join('__init__.py').write(
        'import flask\n\napp = flask.Flask(__name__)'
    )
    install_egg('site_egg')
    try:
        import site_egg
        assert site_egg.app.instance_path == \
            str(modules_tmpdir.join('var/').join('site_egg-instance'))
    finally:
        if 'site_egg' in sys.modules:
            del sys.modules['site_egg']
    
        def fire():
        with app.test_client() as c:
            rv = c.get('/')
            assert rv.status_code == 200
            assert rv.data == b'<h1>42</h1>'
    
        print('Classifier Training')
    print('===================')
    accuracy, train_time, test_time = {}, {}, {}
    for name in sorted(args['estimators']):
        clf = ESTIMATORS[name]
        try:
            clf.set_params(random_state=0)
        except (TypeError, ValueError):
            pass
    
        classes : array-like of ints (1d or 0d)
        The number of classes in the input.
    
        ###########################################################################
    # Set Python core input
    sampling_algorithm['python-core-sample'] = \
        lambda n_population, n_sample: \
            random.sample(xrange(n_population), n_sample)
    
            text_filename = os.path.join(text_lang_folder,
                                     '%s_%04d.txt' % (lang, i))
        print('Writing %s' % text_filename)
        open(text_filename, 'wb').write(content.encode('utf-8', 'ignore'))
        i += 1
    
    # Plot the results (= shape of the data points cloud)
plt.figure(1)  # two clusters
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X1[:, 0], X1[:, 1], color='black')
bbox_args = dict(boxstyle='round', fc='0.8')
arrow_args = dict(arrowstyle='->')
plt.annotate('several confounded points', xy=(24, 19),
             xycoords='data', textcoords='data',
             xytext=(13, 10), bbox=bbox_args, arrowprops=arrow_args)
plt.xlim((xx1.min(), xx1.max()))
plt.ylim((yy1.min(), yy1.max()))
plt.legend((legend1_values_list[0].collections[0],
            legend1_values_list[1].collections[0],
            legend1_values_list[2].collections[0]),
           (legend1_keys_list[0], legend1_keys_list[1], legend1_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('accessibility to radial highways')
plt.xlabel('pupil-teacher ratio by town')
    
        def refit(self):
        '''Refit the model if already fitted. '''
        if self.fitted:
            self.fit()
    
    data, row_idx, col_idx = sg._shuffle(data, random_state=0)
plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Shuffled dataset')
    
        This returns an array of input data with shape `(n_samples, n_features)`
    and an array of `n_samples` target labels.
    
    
plt.show()

    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
                result.printErrors()
            result.printSummary(start, stop)
            self.exitcode = int(not result.wasSuccessful())
    
            ajax_crawl_request.meta['ajax_crawlable'] = True
        return ajax_crawl_request
    
        def process_request(self, request, spider):
        auth = getattr(self, 'auth', None)
        if auth and b'Authorization' not in request.headers:
            request.headers[b'Authorization'] = auth

    
        @classmethod
    def from_settings(cls, settings):
        debug = settings.getbool('DUPEFILTER_DEBUG')
        return cls(job_dir(settings), debug)
    
    import os
import sys
from .common import *
    
            cert = ssl_sock.get_peer_certificate()
        if not cert:
            raise socket.error('certificate is none')
    
    
class Http1Worker(HttpWorker):
    version = '1.1'
    
        def _create_ssl_connection(self, ip):
        if not self.check_local_network.is_ok(ip):
            self.logger.debug('connect %s blocked: network fail', ip)
            self.ip_manager.ssl_closed(ip, 'network fail')
            time.sleep(10)
            return
    
    A tree.RewriteCardinalityException is raised, when the parsers hits a
cardinality mismatch during AST construction. Although this is basically a
bug in your grammar, it can only be detected at runtime.
    
        def __str__(self):
        return 'MismatchedTreeNodeException(%r!=%r)' % (
            self.getUnexpectedType(), self.expecting
            )
    __repr__ = __str__
