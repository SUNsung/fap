
        
        
def with_metaclass(meta, *bases):
    '''Create a base class with a metaclass.'''
    # This requires a bit of explanation: the basic idea is to make a
    # dummy metaclass for one level of class instantiation that replaces
    # itself with the actual metaclass.
    class metaclass(type):
        def __new__(cls, name, this_bases, d):
            return meta(name, bases, d)
    return type.__new__(metaclass, 'temporary_class', (), {})
    
        if not changed:
        fail('Could not find %s in %s', pattern, filename)
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        def prepare_request(self, request):
        '''Constructs a :class:`PreparedRequest <PreparedRequest>` for
        transmission and returns it. The :class:`PreparedRequest` has settings
        merged from the :class:`Request <Request>` instance and those of the
        :class:`Session`.
    
        See https://github.com/requests/requests/issues/3772.
    '''
    text_200_chal = (b'HTTP/1.1 200 OK\r\n'
                     b'Content-Length: 0\r\n'
                     b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                     b', opaque='372825293d1c26955496c80ed6426e9e', '
                     b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
    # If true, '()' will be appended to :func: etc. cross-reference text.
add_function_parentheses = False
    
            ri = urlparse(url)
    
        op.add_option('--transformers',
                  dest='selected_transformers',
                  default='GaussianRandomProjection,SparseRandomProjection',
                  type=str,
                  help='Comma-separated list of transformer to benchmark. '
                       'Default: %default. Available: '
                       'GaussianRandomProjection,SparseRandomProjection')
    
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
    
    
def get_parser():
    from optparse import OptionParser
    op = OptionParser()
    op.add_option('--output',
                  action='store', type='str', dest='output',
                  help='Path where to dump data.')
    return op
    
    import numpy as np
from matplotlib import pyplot as plt
    
    # Create different classifiers. The logistic regression cannot do
# multiclass out of the box.
classifiers = {'L1 logistic': LogisticRegression(C=C, penalty='l1'),
               'L2 logistic (OvR)': LogisticRegression(C=C, penalty='l2'),
               'Linear SVC': SVC(kernel='linear', C=C, probability=True,
                                 random_state=0),
               'L2 logistic (Multinomial)': LogisticRegression(
                C=C, solver='lbfgs', multi_class='multinomial'),
               'GPC': GaussianProcessClassifier(kernel)
               }
    
        description = proj_info['description'],
    keywords = proj_info['keywords'],
    
    from ..common import *
from hashlib import md5
from urllib.parse import urlparse
import re
    
    from ..common import *
    
            self.title = match1(content,
                            r'setup\[\'title\'\] = '([^']+)';')
    
    class Pinterest(VideoExtractor):
    # site name
    name = 'Pinterest'