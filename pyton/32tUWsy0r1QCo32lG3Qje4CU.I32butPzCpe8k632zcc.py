
        
            def reraise(tp, value, tb=None):
        if value.__traceback__ is not tb:
            raise value.with_traceback(tb)
        raise value
    
        for idx, (loader, srcobj, triple) in enumerate(attempts):
        if isinstance(srcobj, Flask):
            src_info = 'application '%s'' % srcobj.import_name
        elif isinstance(srcobj, Blueprint):
            src_info = 'blueprint '%s' (%s)' % (srcobj.name,
                                                srcobj.import_name)
        else:
            src_info = repr(srcobj)
    
    # The namespace for code signals.  If you are not Flask code, do
# not put signals in here.  Create your own namespace instead.
_signals = Namespace()
    
        def get_source(self, environment, template):
        if self.app.config['EXPLAIN_TEMPLATE_LOADING']:
            return self._get_source_explained(environment, template)
        return self._get_source_fast(environment, template)
    
        _tabulate(results, args.metrics, args.formats)
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
    
if __name__ == '__main__':
    ###########################################################################
    # Option parser
    ###########################################################################
    op = optparse.OptionParser()
    op.add_option('--n-times',
                  dest='n_times', default=5, type=int,
                  help='Benchmark results are average over n_times experiments')
    
        xx = np.arange(start_dim, start_dim + n * step, step)
    plt.subplot(212)
    plt.title('Learning in high dimensional spaces')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of dimensions')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    
if not os.path.exists(DATA_FOLDER):
    
    # Split the dataset in training and test set:
docs_train, docs_test, y_train, y_test = train_test_split(
    dataset.data, dataset.target, test_size=0.5)
    
        # import matplotlib.pyplot as plt
    # plt.matshow(cm)
    # plt.show()

    
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.99,
                                                    random_state=42)
    
    
collect_ignore = [
    # deprecated or moved modules
    'scrapy/conf.py',
    'scrapy/stats.py',
    'scrapy/project.py',
    'scrapy/utils/decorator.py',
    'scrapy/statscol.py',
    'scrapy/squeue.py',
    'scrapy/log.py',
    'scrapy/dupefilter.py',
    'scrapy/command.py',
    'scrapy/linkextractor.py',
    'scrapy/spider.py',
    
    from six.moves.urllib.parse import urlencode
    
            # start checks
        if opts.list:
            for spider, methods in sorted(contract_reqs.items()):
                if not methods and not opts.verbose:
                    continue
                print(spider)
                for method in sorted(methods):
                    print('  * %s' % method)
        else:
            start = time.time()
            self.crawler_process.start()
            stop = time.time()
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False}
    
        def test_same_server(self):
        from certbot_apache.obj import VirtualHost
        no_name1 = VirtualHost(
            'fp', 'vhp', set([self.addr1]), False, False, None)
        no_name2 = VirtualHost(
            'fp', 'vhp', set([self.addr2]), False, False, None)
        no_name3 = VirtualHost(
            'fp', 'vhp', set([self.addr_default]),
            False, False, None)
        no_name4 = VirtualHost(
            'fp', 'vhp', set([self.addr2, self.addr_default]),
            False, False, None)
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_succesful_redirect(self, mock_get_request):
        mock_get_request.return_value = create_response(
            301, {'location': 'https://test.com'})
        self.assertTrue(self.validator.redirect('test.com'))
    
    
class NotifyTests(unittest.TestCase):
    '''Tests for the notifier.'''