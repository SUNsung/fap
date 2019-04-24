
        
            # noinspection PyProtectedMember
    @property
    def headers(self):
        original = self._orig.raw._original_response
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return HTTPBasicAuth(username, password)
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
    error_msg = None
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
    if twisted_version >= (14, 0, 0):
    
    import time
import threading
    
        def close(self):
        self.fd.close()
    
        ANTLR generates code that throws exceptions upon recognition error and
    also generates code to catch these exceptions in each rule.  If you
    want to quit upon first error, you can turn off the automatic error
    handling mechanism using rulecatch action, but you still need to
    override methods mismatch and recoverFromMismatchSet.
    
    In general, the recognition exceptions can track where in a grammar a
    problem occurred and/or what was the expected input.  While the parser
    knows its state (such as current input symbol and line info) that
    state can change before the exception is reported so current token index
    is computed and stored at exception time.  From this info, you can
    perhaps print an entire line of input not just a single token, for example.
    Better to just say the recognizer had a problem and then let the parser
    figure out a fancy report.
    
    '''
    
            # mmmhhh,... perhaps look at the first argument
        # (f_locals[co_varnames[0]]?) and test if it's a (sub)class of
        # requested recognizer...
        
        rules = []
        for frame in reversed(inspect.stack()):
            code = frame[0].f_code
            codeMod = inspect.getmodule(code)
            if codeMod is None:
                continue
    
        publicKey, privateKey = generateKey(keySize)
    print('\nWriting public key to file %s_pubkey.txt...' % name)
    with open('%s_pubkey.txt' % name, 'w') as fo:
        fo.write('%s,%s,%s' % (keySize, publicKey[0], publicKey[1]))
    
        def _colision_resolution(self, key, data=None):
        i = 1
        new_key = self.hash_function(data)
    
                if new_key is None:
                break
    
                if (arr[i-1] <= j):
                dp[i][j] = dp[i][j] or dp[i-1][j-arr[i-1]]
    
        def predict(self, x):
        '''
        predict:
        @param x: a floating point value to predict the label of
        the prediction function works by recursively calling the predict function
        of the appropriate subtrees based on the tree's decision boundary
        '''
        if self.prediction is not None:
            return self.prediction
        elif self.left or self.right is not None:
            if x >= self.decision_boundary:
                return self.right.predict(x)
            else:
                return self.left.predict(x)
        else:
            print('Error: Decision tree not yet trained')
            return None
    
    def revise_centroids(data, k, cluster_assignment):
    new_centroids = []
    for i in range(k):
        # Select all data points that belong to cluster i. Fill in the blank (RHS only)
        member_data_points = data[cluster_assignment==i]
        # Compute the mean of the data points. Fill in the blank (RHS only)
        centroid = member_data_points.mean(axis=0)
        new_centroids.append(centroid)
    new_centroids = np.array(new_centroids)
    
    return new_centroids
    
        return res