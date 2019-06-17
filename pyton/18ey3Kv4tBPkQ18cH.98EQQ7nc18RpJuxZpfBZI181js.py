
        
            plt.clf()
    xx = range(0, n * step, step)
    plt.title('Lasso regression on sample dataset (%d features)' % n_features)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of samples to classify')
    plt.ylabel('Time (s)')
    plt.show()
    
            start = time.time()
        func(X, n_jobs=-1)
        multi_core.append(time.time() - start)
    
    Second example
--------------
The second example shows the ability of the Minimum Covariance Determinant
robust estimator of covariance to concentrate on the main mode of the data
distribution: the location seems to be well estimated, although the covariance
is hard to estimate due to the banana-shaped distribution. Anyway, we can
get rid of some outlying observations.
The One-Class SVM is able to capture the real data structure, but the
difficulty is to adjust its kernel bandwidth parameter so as to obtain
a good compromise between the shape of the data scatter matrix and the
risk of over-fitting the data.
    
    import numpy as np
import matplotlib.pyplot as plt
# Though the following import is not directly being used, it is required
# for 3D projection to work
from mpl_toolkits.mplot3d import Axes3D