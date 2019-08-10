
        
            def score(self):
        total_value = 0
        for card in self.cards:
            total_value += card.value
        return total_value
    
        def reducer(self, key, values):
        '''Sum values for each key.
    
    
class Budget(object):
    
            Emit key value pairs of the form:
    
    
class Graph(object):
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
    
class PagesDataStore(object):
    
    
class FootNoteForm(forms.ModelForm):
    extra_field = forms.CharField()
    
        def test_redirect_HEAD(self):
        'Default is a temporary redirect'
        response = RedirectView.as_view(url='/bar/')(self.rf.head('/foo/'))
        self.assertEqual(response.status_code, 302)
        self.assertEqual(response.url, '/bar/')
    
        def _wrapper(self, *args, **kwargs):
        # bound_method has the signature that 'decorator' expects i.e. no
        # 'self' argument, but it's a closure over self so it can call
        # 'func'. Also, wrap method.__get__() in a function because new
        # attributes can't be set on bound method objects, only on functions.
        bound_method = partial(method.__get__(self, type(self)))
        for dec in decorators:
            bound_method = dec(bound_method)
        return bound_method(*args, **kwargs)
    
     When instantiating a DataSource object, use the filename of a
 GDAL-supported data source.  For example, a SHP file or a
 TIGER/Line file from the government.
    
            # Instantiate target spatial reference system
        target_srs = SpatialReference(srid)
    
    
def get_derivatives_helper(loss):
    '''Return get_gradients() and get_hessians() functions for a given loss.
    '''
    
    
def _sparse_min_max(X, axis):
        return (_sparse_min_or_max(X, axis, np.minimum),
                _sparse_min_or_max(X, axis, np.maximum))
    
            print('benchmarking scikit-learn: ')
        scikit_results.append(bench(ScikitLasso, X, Y, X_test, Y_test, coef_))
        print('benchmarking glmnet: ')
        glmnet_results.append(bench(GlmnetLasso, X, Y, X_test, Y_test, coef_))
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
                tstart = time()
            clf.fit(X_train, y_train)
            sgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                      y_test)
            sgd_results[i, j, 1] = time() - tstart
    
    import numpy as np
from sklearn.covariance import EllipticEnvelope
from sklearn.svm import OneClassSVM
import matplotlib.pyplot as plt
import matplotlib.font_manager
from sklearn.datasets import load_boston