
        
            READY = 0
    IN_PROGRESS = 1
    COMPLETE = 2
    
        def __init__(self):
        self.head = None
        self.tail = None
    
    
class PagesDataStore(object):
    
            if self.values[key] is None:
            self._set_value(key, data)
    
    The problem is :
Given two strings A and B. Find the minimum number of operations to string B such that A = B. The permitted operations are removal,  insertion, and substitution.
'''
from __future__ import print_function
    
        return diff

    
        def train(self, X, y):
        '''
        train:
        @param X: a one dimensional numpy array
        @param y: a one dimensional numpy array. 
        The contents of y are the labels for the corresponding X values
    
      3. find centroids and clusters using kmeans function.
  
        centroids, cluster_assignment = kmeans(
            X, 
            k, 
            initial_centroids, 
            maxiter=400,
            record_heterogeneity=heterogeneity, 
            verbose=True # whether to print logs in console or not.(default=False)
            )
  
  
  4. Plot the loss function, hetrogeneity values for every iteration saved in hetrogeneity list.
        plot_heterogeneity(
            heterogeneity, 
            k
        )
  
  5. Have fun..
  
'''
from __future__ import print_function
from sklearn.metrics import pairwise_distances
import numpy as np
    
        return res
    
    # add noise
y += 0.01 * np.random.normal((n_samples,))
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
        plt.imshow(avg_dist, interpolation='nearest', cmap=plt.cm.gnuplot2,
               vmin=0)
    plt.xticks(range(n_clusters), labels, rotation=45)
    plt.yticks(range(n_clusters), labels)
    plt.colorbar()
    plt.suptitle('Interclass %s distances' % metric, size=18)
    plt.tight_layout()
    
    # Code source: Gaël Varoquaux
# Modified for documentation by Jaques Grobler
# License: BSD 3 clause
    
    identic = np.logical_not(different)
ax.plot(X[identic, 0], X[identic, 1], 'w',
        markerfacecolor='#bbbbbb', marker='.')
ax.plot(X[different, 0], X[different, 1], 'w',
        markerfacecolor='m', marker='.')
ax.set_title('Difference')
ax.set_xticks(())
ax.set_yticks(())