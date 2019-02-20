
        
            # now do a benchmark where the number of points is fixed
    # and the variable is the number of features
    
        plt.figure('scikit-learn LASSO benchmark results')
    plt.subplot(211)
    plt.plot(list_n_samples, lasso_results, 'b-',
                            label='Lasso')
    plt.plot(list_n_samples, lars_lasso_results, 'r-',
                            label='LassoLars')
    plt.title('precomputed Gram matrix, %d features, alpha=%s' % (n_features,
                            alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    
        # Plot results
    i = 0
    m = len(list_n_features)
    plt.figure('scikit-learn SGD regression benchmark results',
               figsize=(5 * 2, 4 * m))
    for j in range(m):
        plt.subplot(m, 2, i + 1)
        plt.plot(list_n_samples, np.sqrt(elnet_results[:, j, 0]),
                 label='ElasticNet')
        plt.plot(list_n_samples, np.sqrt(sgd_results[:, j, 0]),
                 label='SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(asgd_results[:, j, 0]),
                 label='A-SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(ridge_results[:, j, 0]),
                 label='Ridge')
        plt.legend(prop={'size': 10})
        plt.xlabel('n_train')
        plt.ylabel('RMSE')
        plt.title('Test error - %d features' % list_n_features[j])
        i += 1
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    import numpy as np
from sklearn.covariance import EllipticEnvelope
from sklearn.svm import OneClassSVM
import matplotlib.pyplot as plt
import matplotlib.font_manager
from sklearn.datasets import load_boston
    
    # Author: Kemal Eren <kemal@kemaleren.com>
# License: BSD 3 clause
    
    These images how similar features are merged together using
feature agglomeration.
'''
print(__doc__)
    
    for linkage in ('ward', 'average', 'complete', 'single'):
    clustering = AgglomerativeClustering(linkage=linkage, n_clusters=10)
    t0 = time()
    clustering.fit(X_red)
    print('%s :\t%.2fs' % (linkage, time() - t0))
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    import face_recognition
from flask import Flask, jsonify, request, redirect
    
        :param known_face_encodings: A list of known face encodings
    :param face_encoding_to_check: A single face encoding to compare against the list
    :param tolerance: How much distance between faces to consider it a match. Lower is more strict. 0.6 is typical best performance.
    :return: A list of True/False values indicating which known_face_encodings match the face encoding to check
    '''
    return list(face_distance(known_face_encodings, face_encoding_to_check) <= tolerance)

    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
            print('I see someone named {}!'.format(name))

    
            # 0.6 is the default face distance match threshold. So we'll spot-check that the numbers returned
        # are above or below that based on if they should match (since the exact numbers could vary).
        self.assertEqual(type(distance_results), np.ndarray)
        self.assertLessEqual(distance_results[0], 0.6)
        self.assertLessEqual(distance_results[1], 0.6)
        self.assertGreater(distance_results[2], 0.6)
    
    
class OutOfData(UnpackException):
    pass
    
    ax = fig.add_axes((0.63 + 0.18, 0.1, 0.16, 0.8))
y = np.row_stack((fnx(), fnx(), fnx()))
x = np.arange(10)
y1, y2, y3 = fnx(), fnx(), fnx()
ax.stackplot(x, y1, y2, y3)
ax.set_xticks([])
ax.set_yticks([])
    
    from collections import namedtuple
    
            exp5 = ('0   1 days 00:00:01\n'
                '1   2 days 00:00:00\n'
                '2   3 days 00:00:00\n'
                'dtype: timedelta64[ns]')