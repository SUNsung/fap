
        
            # second blueprint instance
    r = client.get('/pages/hello')
    assert r.status_code == 200
    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
    
def plot_feature_times(all_times, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_times['pca'], label='PCA')
    plot_results(all_components, all_times['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plot_results(all_components, all_times['rpca'], label='RandomizedPCA')
    plt.legend(loc='upper left')
    plt.suptitle('Algorithm runtime vs. n_components\n \
                 LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Time (seconds)')
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    parameters = {
        'vect__ngram_range': [(1, 1), (1, 2)],
    }
    grid_search = GridSearchCV(pipeline, parameters, n_jobs=-1)
    grid_search.fit(docs_train, y_train)
    
        print('Generating skeleton for %s' % f)
    
    plt.matshow(np.outer(np.sort(model.row_labels_) + 1,
                     np.sort(model.column_labels_) + 1),
            cmap=plt.cm.Blues)
plt.title('Checkerboard structure of rearranged data')
    
    # Plot modifications of calibrator
for i in range(prediction.shape[0]):
    plt.arrow(p[i, 0], p[i, 1],
              prediction[i, 0] - p[i, 0], prediction[i, 1] - p[i, 1],
              head_width=1e-2, color=colors[np.argmax(p[i])])
# Plot boundaries of unit simplex
plt.plot([0.0, 1.0, 0.0, 0.0], [0.0, 0.0, 1.0, 0.0], 'k', label='Simplex')
    
    
def uniform_labelings_scores(score_func, n_samples, n_clusters_range,
                             fixed_n_classes=None, n_runs=5, seed=42):
    '''Compute score for 2 random uniform cluster labelings.
    
        Proxying through World allows for easy testing and caching if needed.
    '''
    
    api('flairlist', FlairListJsonTemplate)
api('flaircsv', FlairCsvJsonTemplate)
api('flairselector', FlairSelectorJsonTemplate)
    
            def builder_wrapper(thing = None):
            kw = {}
            if not thing:
                kw['url'] = url
                kw['title'] = title
            return ButtonLite(thing,
                              image = 1 if buttonimage is None else buttonimage,
                              target = '_new' if newwindow else '_parent',
                              styled = styled, **kw)