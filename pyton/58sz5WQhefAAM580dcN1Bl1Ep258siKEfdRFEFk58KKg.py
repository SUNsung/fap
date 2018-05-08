
        
        faces = fetch_lfw_people(resize=.2, min_faces_per_person=5)
# limit dataset to 5000 people (don't care who they are!)
X = faces.data[:5000]
n_samples, h, w = faces.images.shape
n_features = X.shape[1]
    
        ###########################################################################
    # Set transformer input
    ###########################################################################
    transformers = {}
    
    if __name__ == '__main__':
    ###########################################################################
    # Option parser
    ###########################################################################
    op = optparse.OptionParser()
    op.add_option('--n-times',
                  dest='n_times', default=5, type=int,
                  help='Benchmark results are average over n_times experiments')
    
    import os
import tarfile
from contextlib import closing
try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
        # TASK: print the mean and std for each candidate along with the parameter
    # settings for all the candidates explored by grid search.
    n_candidates = len(grid_search.cv_results_['params'])
    for i in range(n_candidates):
        print(i, 'params - %s; mean - %0.2f; std - %0.2f'
                 % (grid_search.cv_results_['params'][i],
                    grid_search.cv_results_['mean_test_score'][i],
                    grid_search.cv_results_['std_test_score'][i]))
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
    from __future__ import division