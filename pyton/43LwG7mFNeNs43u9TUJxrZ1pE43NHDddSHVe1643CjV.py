
        
            def remaining_cards(self):
        return len(self.cards) - self.deal_index
    
        def __init__(self, first_user, second_user):
        super(PrivateChat, self).__init__()
        self.users.append(first_user)
        self.users.append(second_user)
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
    
class PersonServer(object):
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
    
class Page(object):
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
    
class JSONDecoder(_json.JSONDecoder):
    '''The default JSON decoder.  This one does not change the behavior from
    the default simplejson decoder.  Consult the :mod:`json` documentation
    for more information.  This decoder is not only used for the load
    functions of this module but also :attr:`~flask.Request`.
    '''
    
            # on exit we want to clean up earlier.  Normally the request context
        # stays preserved until the next request in the same thread comes
        # in.  See RequestGlobals.push() for the general behavior.
        top = _request_ctx_stack.top
        if top is not None and top.preserved:
            top.pop()
    
                c_bar = plt.bar(xvals, build_time[alg] - bottom,
                            width, bottom, color='r')
            q_bar = plt.bar(xvals, query_time[alg],
                            width, build_time[alg], color='b')
    
        max_it = len(samples_range) * len(features_range)
    for i_s, n_samples in enumerate(samples_range):
        for i_f, n_features in enumerate(features_range):
            it += 1
            n_informative = n_features / 10
            print('====================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('====================')
            # dataset_kwargs = {
            #     'n_train_samples': n_samples,
            #     'n_test_samples': 2,
            #     'n_features': n_features,
            #     'n_informative': n_informative,
            #     'effective_rank': min(n_samples, n_features) / 10,
            #     #'effective_rank': None,
            #     'bias': 0.0,
            # }
            dataset_kwargs = {
                'n_samples': 1,
                'n_components': n_features,
                'n_features': n_samples,
                'n_nonzero_coefs': n_informative,
                'random_state': 0
            }
            print('n_samples: %d' % n_samples)
            print('n_features: %d' % n_features)
            y, X, _ = make_sparse_coded_signal(**dataset_kwargs)
            X = np.asfortranarray(X)
    
                gc.collect()
            print('benchmarking scipy svd: ')
            tstart = time()
            svd(X, full_matrices=False)
            results['scipy svd'].append(time() - tstart)
    
        print('Transformer performance:')
    print('===========================')
    print('Results are averaged over %s repetition(s).' % opts.n_times)
    print('')
    print('%s | %s | %s' % ('Transformer'.ljust(30),
                            'fit'.center(12),
                            'transform'.center(12)))
    print(31 * '-' + ('|' + '-' * 14) * 2)
    
    Does two benchmarks
    
    
# Symlinks should have same data as target
for src, dst in symlinks.items():
    if dst in dirs:
        dirs[src] = dirs[dst]
    
        target = utils.unescape(target).strip()
    title = utils.unescape(title).strip()
    config = inliner.document.settings.env.app.config
    if config.issues_user_uri:
        ref = config.issues_user_uri.format(user=target)
    else:
        ref = 'https://github.com/{0}'.format(target)
    if has_explicit_title:
        text = title
    else:
        text = '@{0}'.format(target)
    
    
if not os.path.exists(DATA_FOLDER):
    
        print('Generating e that is relatively prime to (p - 1) * (q - 1)...')
    while True:
        e = random.randrange(2 ** (keySize - 1), 2 ** (keySize))
        if cryptoMath.gcd(e, (p - 1) * (q - 1)) == 1:
            break
    
        def __hash_double_function(self, key, data, increment):
        return (increment * self.__hash_function_2(key, data)) % self.size_table
    
        def __init__(self, arr):
        # we need a list not a string, so do something to change the type
        self.array = arr.split(',')
        print(('the input array is:', self.array))
    
    	for m in getBlock(bs):
		A = a0 
		B = b0
		C = c0
		D = d0
		for i in range(64):
			if i <= 15:
				#f = (B & C) | (not32(B) & D)
				f = D ^ (B & (C ^ D))
				g = i
			elif i<= 31:
				#f = (D & B) | (not32(D) & C)
				f = C ^ (D & (B ^ C))
				g = (5*i+1) % 16
			elif i <= 47:
				f = B ^ C ^ D
				g = (3*i+5) % 16
			else:
				f = C ^ (B | not32(D))
				g = (7*i) % 16
			dtemp = D
			D = C
			C = B
			B = sum32(B,leftrot32((A + f + tvals[i] + m[g]) % 2**32, s[i]))
			A = dtemp
		a0 = sum32(a0, A)
		b0 = sum32(b0, B)
		c0 = sum32(c0, C)
		d0 = sum32(d0, D)
    
    
        '''
        loop over all possible splits for the decision tree. find the best split.
        if no split exists that is less than 2 * error for the entire array
        then the data set is not split and the average for the entire array is used as the predictor
        '''
        for i in range(len(X)):
            if len(X[:i]) < self.min_leaf_size:
                continue
            elif len(X[i:]) < self.min_leaf_size:
                continue
            else:
                error_left = self.mean_squared_error(X[:i], np.mean(y[:i]))
                error_right = self.mean_squared_error(X[i:], np.mean(y[i:]))
                error = error_left + error_right
                if error < min_error:
                    best_split = i
                    min_error = error
    
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