
        
            for i in range(1, n + 1):
        print('==================')
        print('Iteration %02d of %02d' % (i, n))
        print('==================')
        n_features = i * step
        n_informative = n_features / 10
    
    ward = AgglomerativeClustering(n_clusters=3, linkage='ward')
    
    solutions = os.listdir(exercise_dir)
    
    This example shows the effect of imposing a connectivity graph to capture
local structure in the data. The graph is simply the graph of 20 nearest
neighbors.
    
    labels = ('Waveform 1', 'Waveform 2', 'Waveform 3')
    
    X_restored = agglo.inverse_transform(X_reduced)
images_restored = np.reshape(X_restored, images.shape)
plt.figure(1, figsize=(4, 3.5))
plt.clf()
plt.subplots_adjust(left=.01, right=.99, bottom=.01, top=.91)
for i in range(4):
    plt.subplot(3, 4, i + 1)
    plt.imshow(images[i], cmap=plt.cm.gray, vmax=16, interpolation='nearest')
    plt.xticks(())
    plt.yticks(())
    if i == 1:
        plt.title('Original data')
    plt.subplot(3, 4, 4 + i + 1)
    plt.imshow(images_restored[i], cmap=plt.cm.gray, vmax=16,
               interpolation='nearest')
    if i == 1:
        plt.title('Agglomerated data')
    plt.xticks(())
    plt.yticks(())
    
    
#----------------------------------------------------------------------
# Visualize the clustering
def plot_clustering(X_red, labels, title=None):
    x_min, x_max = np.min(X_red, axis=0), np.max(X_red, axis=0)
    X_red = (X_red - x_min) / (x_max - x_min)
    
    
try:  # SciPy >= 0.16 have face in misc
    from scipy.misc import face
    face = face(gray=True)
except ImportError:
    face = sp.face(gray=True)
    
    plt.subplot(222)
plt.scatter(X_aniso[:, 0], X_aniso[:, 1], c=y_pred)
plt.title('Anisotropicly Distributed Blobs')
    
    The second plot demonstrate one single run of the ``MiniBatchKMeans``
estimator using a ``init='random'`` and ``n_init=1``. This run leads to
a bad convergence (local optimum) with estimated centers stuck
between ground truth clusters.
    
    # #############################################################################
# Plot result
    
        '''
    prob = np.array(prob)
    outcome = np.array(outcome)
    
    # Now I have an array of 12 columns and 891 rows
# I can access any element I want, so the entire first column would
# be data[0::,0].astype(np.float) -- This means all of the rows (from start to end), in column 0
# I have to add the .astype() command, because
# when appending the rows, python thought it was a string - so needed to convert
    
    with tf.device('/cpu:0'):
  sum = tf.add_n(c2) #Addition of all elements in c2, i.e. A^n + B^n
    
        This function is useful for visualizing datasets whose rows are images,
    and also columns of matrices for transforming those rows
    (such as the first layer of a neural net).
    
    
def gauss_weight(ndim_in, ndim_out=None, sd=.005):
    if ndim_out is None:
        ndim_out = ndim_in
    W = numpy.random.randn(ndim_in, ndim_out) * sd
    return numpy.asarray(W, dtype=config.floatX)
    
    
def set_p_to_zero(pvect, i):
    ''' Provided utility function: given a symbolic vector of
    probabilities and an index 'i', set the probability of the
    i-th element to 0 and renormalize the probabilities so they
    sum to 1.
    '''
    new_pvect = T.set_subtensor(pvect[i], 0.)
    new_pvect = new_pvect / new_pvect.sum()
    return new_pvect
    
        def test_clean_date_time_zone(self):
        date, date_time, time_zone_parsed = \
            self.mr_job.clean_date_time_zone(self.DATE_TIME_ZONE_VALID)
        self.assertEqual(date, self.DATE_VALID)
        self.assertEqual(date_time, self.DATE_TIME_VALID)
        self.assertEqual(time_zone_parsed, self.TIME_ZONE_VALID)