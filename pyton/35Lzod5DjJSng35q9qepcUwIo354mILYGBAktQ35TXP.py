
        
        
if __name__ == '__main__':
    from glmnet.elastic_net import Lasso as GlmnetLasso
    from sklearn.linear_model import Lasso as ScikitLasso
    # Delayed import of matplotlib.pyplot
    import matplotlib.pyplot as plt
    
        plot_feature_times(all_times, batch_size, all_features, data)
    plot_feature_errors(all_errors, batch_size, all_features, data)
    
        # import matplotlib.pyplot as plt
    # plt.matshow(cm)
    # plt.show()

    
    skeleton_dir = os.path.abspath(os.path.join(exercise_dir, '..', 'skeletons'))
if not os.path.exists(skeleton_dir):
    os.makedirs(skeleton_dir)
    
    from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.backends.backend_tkagg import NavigationToolbar2TkAgg
from matplotlib.figure import Figure
from matplotlib.contour import ContourSet
    
        # View probabilities=
    probas = classifier.predict_proba(Xfull)
    n_classes = np.unique(y_pred).size
    for k in range(n_classes):
        plt.subplot(n_classifiers, n_classes, index * n_classes + k + 1)
        plt.title('Class %d' % k)
        if k == 0:
            plt.ylabel(name)
        imshow_handle = plt.imshow(probas[:, k].reshape((100, 100)),
                                   extent=(3, 9, 1, 5), origin='lower')
        plt.xticks(())
        plt.yticks(())
        idx = (y_pred == k)
        if idx.any():
            plt.scatter(X[idx, 0], X[idx, 1], marker='o', c='k')
    
        def _reset_stats(self):
        self.tail.clear()
        self.start = self.lastmark = self.lasttime = time()
    
            # contract requests
        contract_reqs = defaultdict(list)
    
    
class Contract(object):
    ''' Abstract class for contracts '''
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
        def extract_year_month(self, timestamp):
        '''Return the year and month portions of the timestamp.'''
        ...