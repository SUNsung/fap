
        
            @value.setter
    def value(self, new_value):
        if 1 <= new_value <= 13:
            self._value = new_value
        else:
            raise ValueError('Invalid card value: {}'.format(new_value))
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
    
class LookupService(object):
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
    plot(euclidean_distances)
plot(rbf_kernels)
plt.show()

    
    First, we fix a training set, increase the number of
samples to classify and plot number of classified samples as a
function of time.
    
        # import matplotlib.pyplot as plt
    # plt.matshow(cm)
    # plt.show()

    
    Second, when using a connectivity matrix, single, average and complete
linkage are unstable and tend to create a few clusters that grow very
quickly. Indeed, average and complete linkage fight this percolation behavior
by considering all the distances between two clusters when merging them (
while single linkage exaggerates the behaviour by considering only the
shortest distance between clusters). The connectivity graph breaks this
mechanism for average and complete linkage, making them resemble the more
brittle single linkage. This effect is more pronounced for very sparse graphs
(try decreasing the number of neighbors in kneighbors_graph) and with
complete linkage. In particular, having a very small number of neighbors in
the graph, imposes a geometry that is close to that of single linkage,
which is well known to have this percolation instability. '''
# Authors: Gael Varoquaux, Nelle Varoquaux
# License: BSD 3 clause
    
    from sklearn.cluster import AgglomerativeClustering
from sklearn.metrics import pairwise_distances
    
    These images how similar features are merged together using
feature agglomeration.
'''
print(__doc__)
    
    plt.subplot(223)
plt.scatter(X_varied[:, 0], X_varied[:, 1], c=y_pred)
plt.title('Unequal Variance')
    
    # blobs with varied variances
varied = datasets.make_blobs(n_samples=n_samples,
                             cluster_std=[1.0, 2.5, 0.5],
                             random_state=random_state)
    
    # #############################################################################
# Plot result
import matplotlib.pyplot as plt
from itertools import cycle