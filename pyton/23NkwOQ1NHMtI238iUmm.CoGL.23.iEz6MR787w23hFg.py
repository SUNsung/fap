
        
        '''
print(__doc__)
    
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
    
    from sklearn.cluster import KMeans
from sklearn import datasets
    
    # histogram
plt.figure(4, figsize=(3, 2.2))
plt.clf()
plt.axes([.01, .01, .98, .98])
plt.hist(X, bins=256, color='.5', edgecolor='.5')
plt.yticks(())
plt.xticks(regular_values)
values = np.sort(values)
for center_1, center_2 in zip(values[:-1], values[1:]):
    plt.axvline(.5 * (center_1 + center_2), color='b')
    
    plt.subplot(222)
plt.scatter(X_aniso[:, 0], X_aniso[:, 1], c=y_pred)
plt.title('Anisotropicly Distributed Blobs')
    
    The first plot shows the best inertia reached for each combination
of the model (``KMeans`` or ``MiniBatchKMeans``) and the init method
(``init='random'`` or ``init='kmeans++'``) for increasing values of the
``n_init`` parameter that controls the number of initializations.
    
    import time
import warnings
    
    colors = cycle('bgrcmykbgrcmykbgrcmykbgrcmyk')
for k, col in zip(range(n_clusters_), colors):
    my_members = labels == k
    cluster_center = cluster_centers[k]
    plt.plot(X[my_members, 0], X[my_members, 1], col + '.')
    plt.plot(cluster_center[0], cluster_center[1], 'o', markerfacecolor=col,
             markeredgecolor='k', markersize=14)
plt.title('Estimated number of clusters: %d' % n_clusters_)
plt.show()

    
        # fill the rest of the table in with the remaining alphabet chars
    for char in alphabet:
        if char not in table:
            table.append(char)
    
        def __prepare__(self, N = 0, M = 0):
        self.dp = [[-1 for y in range(0,M)] for x in range(0,N)]
    
    def getBlock(bitString):
	'''[summary]
	Iterator:
		Returns by each call a list of length 16 with the 32 bit
		integer blocks. 
    
    __all__ = ['ckplayer_download']
    
    site_info = 'Douban.com'
download = douban_download
download_playlist = playlist_not_supported('douban')
