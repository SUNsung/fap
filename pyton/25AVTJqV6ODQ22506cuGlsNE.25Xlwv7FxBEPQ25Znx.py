
        
            alpha = 0.01  # regularization parameter
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
        op.add_option('--algorithm',
                  dest='selected_algorithm',
                  default=default_algorithms,
                  type=str,
                  help='Comma-separated list of transformer to benchmark. '
                       'Default: %default. \nAvailable: %default')
    
    mu_second = 0.0 + 10 ** 6  # number of microseconds in a second
    
    
URL = ('http://www.cs.cornell.edu/people/pabo/'
       'movie-review-data/review_polarity.tar.gz')
    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    
        def plot_support_vectors(self, support_vectors):
        '''Plot the support vectors by placing circles over the
        corresponding data points and adds the circle collection
        to the contours list.'''
        cs = self.ax.scatter(support_vectors[:, 0], support_vectors[:, 1],
                             s=80, edgecolors='k', facecolors='none')
        self.contours.append(cs)
    
    # Author: Kemal Eren <kemal@kemaleren.com>
# License: BSD 3 clause
    
    # Plot changes in predicted probabilities via arrows
plt.figure(0)
colors = ['r', 'g', 'b']
for i in range(clf_probs.shape[0]):
    plt.arrow(clf_probs[i, 0], clf_probs[i, 1],
              sig_clf_probs[i, 0] - clf_probs[i, 0],
              sig_clf_probs[i, 1] - clf_probs[i, 1],
              color=colors[y_test[i]], head_width=1e-2)
    
    np.random.seed(0)
###############################################################################
n_features = 100
# simulation covariance matrix (AR(1) process)
r = 0.1
real_cov = toeplitz(r ** np.arange(n_features))
coloring_matrix = cholesky(real_cov)
    
    from tornado.options import define, options
    
            elif callable(target):
            return _CallableAdapter(
                partial(target, **target_params), request.connection
            )
    
    
def _resolve_addr(host, port, family=socket.AF_UNSPEC):
    # On Solaris, getaddrinfo fails if the given port is not found
    # in /etc/services and no socket type is given, so we must pass
    # one here.  The socket type used here doesn't seem to actually
    # matter (we discard the one we get back in the results),
    # so the addresses we return should still be usable with SOCK_DGRAM.
    addrinfo = socket.getaddrinfo(host, port, family, socket.SOCK_STREAM)
    results = []
    for family, socktype, proto, canonname, address in addrinfo:
        results.append((family, address))
    return results
    
        def get_app(self):
        class App(HTTPServerConnectionDelegate):
            def start_request(self, server_conn, request_conn):
                return StreamingChunkSizeTest.MessageDelegate(request_conn)
        return App()