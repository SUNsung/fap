
        
        # Plot the results (= shape of the data points cloud)
plt.figure(1)  # two clusters
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X1[:, 0], X1[:, 1], color='black')
bbox_args = dict(boxstyle='round', fc='0.8')
arrow_args = dict(arrowstyle='->')
plt.annotate('several confounded points', xy=(24, 19),
             xycoords='data', textcoords='data',
             xytext=(13, 10), bbox=bbox_args, arrowprops=arrow_args)
plt.xlim((xx1.min(), xx1.max()))
plt.ylim((yy1.min(), yy1.max()))
plt.legend((legend1_values_list[0].collections[0],
            legend1_values_list[1].collections[0],
            legend1_values_list[2].collections[0]),
           (legend1_keys_list[0], legend1_keys_list[1], legend1_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('accessibility to radial highways')
plt.xlabel('pupil-teacher ratio by town')
    
    from sklearn import datasets, cluster
from sklearn.feature_extraction.image import grid_to_graph
    
    The second plot demonstrate one single run of the ``MiniBatchKMeans``
estimator using a ``init='random'`` and ``n_init=1``. This run leads to
a bad convergence (local optimum) with estimated centers stuck
between ground truth clusters.
    
    # Anisotropicly distributed data
random_state = 170
X, y = datasets.make_blobs(n_samples=n_samples, random_state=random_state)
transformation = [[0.6, -0.6], [-0.4, 0.8]]
X_aniso = np.dot(X, transformation)
aniso = (X_aniso, y)
    
    print(__doc__)
    
    # plot shrinkage coefficient
plt.subplot(2, 1, 2)
plt.errorbar(n_samples_range, lw_shrinkage.mean(1), yerr=lw_shrinkage.std(1),
             label='Ledoit-Wolf', color='navy', lw=2)
plt.errorbar(n_samples_range, oa_shrinkage.mean(1), yerr=oa_shrinkage.std(1),
             label='OAS', color='darkorange', lw=2)
plt.xlabel('n_samples')
plt.ylabel('Shrinkage')
plt.legend(loc='lower right')
plt.ylim(plt.ylim()[0], 1. + (plt.ylim()[1] - plt.ylim()[0]) / 10.)
plt.xlim(5, 31)
    
        def test_decode_good(self):
        self.assertEqual('x', self.field.decode('x'))
    
        Assumes:
     * That subclasses also subclass unittest.TestCase
     * That the authenticator is stored as self.auth
    '''
    
    ===================================== =====================================
``--dns-rfc2136-credentials``         RFC 2136 credentials_ INI file.
                                      (Required)
``--dns-rfc2136-propagation-seconds`` The number of seconds to wait for DNS
                                      to propagate before asking the ACME
                                      server to verify the DNS record.
                                      (Default: 60)
===================================== =====================================
    
                logger.debug('No authoritative SOA record found for %s', domain_name)
            return False
        except Exception as e:
            raise errors.PluginError('Encountered error when making query: {0}'
                                     .format(e))

    
    
if __name__ == '__main__':
    main()
