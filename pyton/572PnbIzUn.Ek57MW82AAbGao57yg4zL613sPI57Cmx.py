
        
            def create(self):
        '''
        Create a new session instance. Guaranteed to create a new object with
        a unique key and will have saved the result once (with empty data)
        before the method returns.
        '''
        raise NotImplementedError('subclasses of SessionBase must provide a create() method')
    
        def create(self):
        # Because a cache can fail silently (e.g. memcache), we don't know if
        # we are failing to create a new session because of a key collision or
        # because the cache is missing. So we try for a (large) number of times
        # and then raise an exception. That's the risk you shoulder if using
        # cache backing.
        for i in range(10000):
            self._session_key = self._get_new_session_key()
            try:
                self.save(must_create=True)
            except CreateError:
                continue
            self.modified = True
            return
        raise RuntimeError(
            'Unable to create a new session key. '
            'It is likely that the cache is unavailable.')
    
    from django.contrib.sites.shortcuts import get_current_site
from django.core.paginator import EmptyPage, PageNotAnInteger
from django.http import Http404
from django.template.response import TemplateResponse
from django.urls import reverse
from django.utils.http import http_date
    
            X = np.random.randn(n_samples, n_features)
        Y = np.random.randn(n_samples)
    
        if args.plot is not None:
        max_val = getattr(args, args.plot)
        if args.plot in ('classes', 'samples'):
            min_val = 2
        else:
            min_val = 0
        steps = np.linspace(min_val, max_val, num=args.n_steps + 1)[1:]
        if args.plot in ('classes', 'samples'):
            steps = np.unique(np.round(steps).astype(int))
        setattr(args, args.plot, steps)
    
        import matplotlib.pyplot as plt
    fig = plt.figure('scikit-learn OMP vs. LARS benchmark results')
    for i, (label, timings) in enumerate(sorted(six.iteritems(results))):
        ax = fig.add_subplot(1, 2, i+1)
        vmax = max(1 - timings.min(), -1 + timings.max())
        plt.matshow(timings, fignum=False, vmin=1 - vmax, vmax=1 + vmax)
        ax.set_xticklabels([''] + [str(each) for each in samples_range])
        ax.set_yticklabels([''] + [str(each) for each in features_range])
        plt.xlabel('n_samples')
        plt.ylabel('n_features')
        plt.title(label)
    
                gc.collect()
            print('benchmarking scikit-learn randomized_svd: n_iter=0')
            tstart = time()
            randomized_svd(X, rank, n_iter=0)
            results['scikit-learn randomized_svd (n_iter=0)'].append(
                time() - tstart)
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
    # Split data in train set and test set
n_samples = X.shape[0]
X_train, y_train = X[:n_samples // 2], y[:n_samples // 2]
X_test, y_test = X[n_samples // 2:], y[n_samples // 2:]
print('test data sparsity: %f' % sparsity_ratio(X_test))
    
    from docutils import nodes, utils
from sphinx.util.nodes import split_explicit_title
    
    for lang, page in pages.items():