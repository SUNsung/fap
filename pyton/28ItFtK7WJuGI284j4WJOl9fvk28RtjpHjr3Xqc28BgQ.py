
        
            '''
    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
        max_it = len(samples_range) * len(features_range)
    for n_samples in samples_range:
        for n_features in features_range:
            it += 1
            print('==============================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('==============================')
            print()
            data = nr.randint(-50, 51, (n_samples, n_features))
    
                gc.collect()
            print('benchmarking lasso_path (without Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            lasso_path(X, y, precompute=False)
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lasso_path (without Gram)'].append(delta)
    
                gc.collect()
            print('benchmarking lars_path (with Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            G = np.dot(X.T, X)  # precomputed Gram matrix
            Xy = np.dot(X.T, y)
            lars_path(X, y, Xy=Xy, Gram=G, max_iter=n_informative)
            delta = time() - tstart
            print('%0.3fs' % delta)
            lars_gram[i_f, i_s] = delta
    
        print('Averaging results...', end='')
    for name in sampling_algorithm:
        time[name] = np.mean(time[name], axis=1)
    print('done\n')
    
        # start time
    tstart = datetime.now()
    clf = DecisionTreeClassifier()
    clf.fit(X, Y).predict(X)
    delta = (datetime.now() - tstart)
    # stop time
    
      Returns:
    list of lines with C++11 raw strings replaced by empty strings.
  '''
    
        parser = argparse.ArgumentParser(description = 'Download all the PDF/HTML links into README.md')
    parser.add_argument('-d', action='store', dest='directory')
    parser.add_argument('--no-html', action='store_true', dest='nohtml', default = False)
    parser.add_argument('--overwrite', action='store_true', default = False)    
    results = parser.parse_args()