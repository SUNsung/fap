
        
        import os
    
        results = {}
    for group in sort_groups(groups):
        results = combine_vars(results, group.get_vars())
    
    ESTIMATORS = {
    'dummy': DummyClassifier(),
    'random_forest': RandomForestClassifier(n_estimators=100,
                                            max_features='sqrt',
                                            min_samples_split=10),
    'extra_trees': ExtraTreesClassifier(n_estimators=100,
                                        max_features='sqrt',
                                        min_samples_split=10),
    'logistic_regression': LogisticRegression(),
    'naive_bayes': MultinomialNB(),
    'adaboost': AdaBoostClassifier(n_estimators=10),
}
    
    
def plot_batch_times(all_times, n_features, all_batch_sizes, data):
    plt.figure()
    plot_results(all_batch_sizes, all_times['pca'], label='PCA')
    plot_results(all_batch_sizes, all_times['rpca'], label='RandomizedPCA')
    plot_results(all_batch_sizes, all_times['ipca'], label='IncrementalPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm runtime vs. batch_size for n_components %i\n \
                 LFW, size %i x %i' % (
                 n_features, data.shape[0], data.shape[1]))
    plt.xlabel('Batch size')
    plt.ylabel('Time (seconds)')
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    
if not os.path.exists(DATA_FOLDER):
    
        # Print and plot the confusion matrix
    cm = metrics.confusion_matrix(y_test, y_predicted)
    print(cm)