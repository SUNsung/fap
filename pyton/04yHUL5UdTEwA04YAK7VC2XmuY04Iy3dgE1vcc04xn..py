
        
        from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
        results = benchmark([METRICS[k] for k in args.metrics],
                        [FORMATS[k] for k in args.formats],
                        args.samples, args.classes, args.density,
                        args.n_times)
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
        print('Dataset statics')
    print('===========================')
    print('n_samples \t= %s' % opts.n_samples)
    print('n_features \t= %s' % opts.n_features)
    if opts.n_components == 'auto':
        print('n_components \t= %s (auto)' %
              johnson_lindenstrauss_min_dim(n_samples=opts.n_samples,
                                            eps=opts.eps))
    else:
        print('n_components \t= %s' % opts.n_components)
    print('n_elements \t= %s' % (opts.n_features * opts.n_samples))
    print('n_nonzeros \t= %s per feature' % n_nonzeros)
    print('ratio_nonzeros \t= %s' % opts.ratio_nonzeros)
    print('')
    
    '''
# Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: Simplified BSD
    
    # Author: Kemal Eren <kemal@kemaleren.com>
# License: BSD 3 clause
    
    # Author: Kemal Eren <kemal@kemaleren.com>
# License: BSD 3 clause
    
    ax = plt.axes([0.15, 0.04, 0.7, 0.05])
plt.title('Probability')
plt.colorbar(imshow_handle, cax=ax, orientation='horizontal')
    
        Only one feature contains discriminative information, the other features
    contain only noise.
    '''
    X, y = make_blobs(n_samples=n_samples, n_features=1, centers=[[-2], [2]])