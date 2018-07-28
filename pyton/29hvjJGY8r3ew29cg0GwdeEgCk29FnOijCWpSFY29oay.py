
        
            def _handle_requests(self):
        for _ in range(self.requests_to_handle):
            sock = self._accept_connection()
            if not sock:
                break
    
    
@pytest.mark.skipif(sys.version_info[:2] != (2,6), reason='Only run on Python 2.6')
def test_system_ssl_py26():
    '''OPENSSL_VERSION_NUMBER isn't provided in Python 2.6, verify we don't
    blow up in this case.
    '''
    assert info()['system_ssl'] == {'version': ''}
    
    import idna
import urllib3
import chardet
    
    # If true, show URL addresses after external links.
#man_show_urls = False
    
        for i, yi in enumerate(grid_y):
        for j, xi in enumerate(grid_x):
            z_sample = np.array([[xi, yi]])
            x_decoded = decoder.predict(z_sample)
            digit = x_decoded[0].reshape(digit_size, digit_size)
            figure[i * digit_size: (i + 1) * digit_size,
                   j * digit_size: (j + 1) * digit_size] = digit
    
            x = np.random.random((1,) + shape)
    
    
@keras_test
def test_max_norm():
    array = get_example_array()
    for m in get_test_values():
        norm_instance = constraints.max_norm(m)
        normed = norm_instance(K.variable(array))
        assert(np.all(K.eval(normed) < m))
    
    
def test_selu():
    x = K.placeholder(ndim=2)
    f = K.function([x], [activations.selu(x)])
    alpha = 1.6732632423543772848170429916717
    scale = 1.0507009873554804934193349852946
    
    
max_features = 20000
# cut texts after this number of words
# (among top max_features most common words)
maxlen = 100
batch_size = 32
    
    from .cifar import load_batch
from ..utils.data_utils import get_file
from .. import backend as K
import numpy as np
import os
    
            # test exceptions
        no_projects_input_url = 'https://www.googleapis.com/compute/v1/not-projects/myproject/global/backendServices/mybackendservice/getHealth'
        no_resource_input_url = 'https://www.googleapis.com/compute/v1/not-projects/myproject/global'
    
    import os
import re
    
    
def get_data(N, D, dataset='dense'):
    if dataset == 'dense':
        np.random.seed(0)
        return np.random.random((N, D))
    elif dataset == 'digits':
        X = datasets.load_digits().data
        i = np.argsort(X[0])[::-1]
        X = X[:, i]
        return X[:N, :D]
    else:
        raise ValueError('invalid dataset: %s' % dataset)
    
        (opts, args) = op.parse_args()
    if len(args) > 0:
        op.error('this script takes no arguments.')
        sys.exit(1)
    opts.n_components = type_auto_or_int(opts.n_components)
    opts.density = type_auto_or_float(opts.density)
    selected_transformers = opts.selected_transformers.split(',')
    
        # Print and plot the confusion matrix
    cm = metrics.confusion_matrix(y_test, y_predicted)
    print(cm)
    
    A simple graphical frontend for Libsvm mainly intended for didactic
purposes. You can create data points by point and click and visualize
the decision region induced by different kernels and parameter settings.
    
    # Plot modifications of calibrator
for i in range(prediction.shape[0]):
    plt.arrow(p[i, 0], p[i, 1],
              prediction[i, 0] - p[i, 0], prediction[i, 1] - p[i, 1],
              head_width=1e-2, color=colors[np.argmax(p[i])])
# Plot boundaries of unit simplex
plt.plot([0.0, 1.0, 0.0, 0.0], [0.0, 0.0, 1.0, 0.0], 'k', label='Simplex')
    
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
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.
    
    \note Please be warned that the line numbers in the API documentation do not
match the real locations in the source code of the package. This is an
unintended artifact of doxygen, which I could only convince to use the
correct module names by concatenating all files from the package into a single
module file...
    
    
class MismatchedNotSetException(MismatchedSetException):
    '''@brief Used for remote debugger deserialization'''
    
    def __str__(self):
        return 'MismatchedNotSetException(%r!=%r)' % (
            self.getUnexpectedType(), self.expecting
            )
    __repr__ = __str__
    
            self.decisionNumber = decisionNumber
    
    
MINIMUM = 80