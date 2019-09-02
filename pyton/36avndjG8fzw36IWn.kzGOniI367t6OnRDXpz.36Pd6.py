
        
        
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    
class ExitStatus(Enum):
    '''Program exit code constants.'''
    SUCCESS = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
    import pytest
    
    from httpie import __version__, sessions
from httpie.cli.constants import SSL_VERSION_ARG_MAPPING
from httpie.cli.dicts import RequestHeadersDict
from httpie.plugins import plugin_manager
from httpie.utils import repr_dict
    
    REQUESTS_IMP_ERR = None
try:
    import requests
except ImportError:
    REQUESTS_IMP_ERR = traceback.format_exc()
    REQUESTS_FOUND = False
else:
    REQUESTS_FOUND = True
    
    
class ClcBlueprintPackage:
    
    ANSIBLE_METADATA = {
    'metadata_version': '1.1',
    'status': ['preview'],
    'supported_by': 'community',
}
    
        def __init__(self, host, suffix, module, members=None, tls=False):
        if tls:
            self.base_url = str(str('https://') + str(host))
            self.url = str(str('https://') + str(host) + str(suffix))
        else:
            self.base_url = str(str('http://') + str(host))
            self.url = str(str('http://') + str(host) + str(suffix))
        self.module = module
        self.page = self.fetch_balancer_page()
        if members is None:
            self._members = []
    
    
import os
import tempfile
import traceback
from distutils.version import LooseVersion
from ansible.module_utils.basic import AnsibleModule, missing_required_lib
from ansible.module_utils._text import to_native
    
                else:
                # If does not exist, do nothing
                return (True, changed, 'Issue does not exist', {})
    
    
RETURN = '''
# Default return values
'''
    
            if channel in channels_by_tag:
            target = channels_by_tag[channel]
        else:
            module.fail_json(msg='Channel '%s' not found. Available channels: '%s'' % (channel, '', ''.join(channels_by_tag.keys())))
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        name = module.params['name']
    port = module.params['port']
    user = module.params['user']
    password = module.params['password']
    state = module.params['state']
    timeout = module.params['timeout']
    
            # test if we're actually logged in
        if password or login_token:
            gh_obj.me()
    except github3.exceptions.AuthenticationFailed as e:
        module.fail_json(msg='Failed to connect to GitHub: %s' % to_native(e),
                         details='Please check username and password or token '
                                 'for repository %s' % repo)
    
        Examples
    --------
    >>> import numpy as np
    >>> from scipy.misc import bytescale
    >>> img = np.array([[ 91.06794177,   3.39058326,  84.4221549 ],
    ...                 [ 73.88003259,  80.91433048,   4.88878881],
    ...                 [ 51.53875334,  34.45808177,  27.5873488 ]])
    >>> bytescale(img)
    array([[255,   0, 236],
           [205, 225,   4],
           [140,  90,  70]], dtype=uint8)
    >>> bytescale(img, high=200, low=100)
    array([[200, 100, 192],
           [180, 188, 102],
           [155, 135, 128]], dtype=uint8)
    >>> bytescale(img, cmin=0, cmax=255)
    array([[91,  3, 84],
           [74, 81,  5],
           [52, 34, 28]], dtype=uint8)
    
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
    
    data, row_idx, col_idx = sg._shuffle(data, random_state=0)
plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Shuffled dataset')
    
    from sklearn import datasets, cluster
from sklearn.feature_extraction.image import grid_to_graph
    
    np.random.seed(0)
###############################################################################
n_features = 100
# simulation covariance matrix (AR(1) process)
r = 0.1
real_cov = toeplitz(r ** np.arange(n_features))
coloring_matrix = cholesky(real_cov)
    
    for i, face_distance in enumerate(face_distances):
    print('The test image has a distance of {:.2} from known image #{}'.format(face_distance, i))
    print('- With a normal cutoff of 0.6, would the test image match the known image? {}'.format(face_distance < 0.6))
    print('- With a very strict cutoff of 0.5, would the test image match the known image? {}'.format(face_distance < 0.5))
    print()

    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    # Load a sample picture and learn how to recognize it.
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
    # 载入样本图片（奥巴马和拜登）
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
            # Send frame to global
        write_frame_list[worker_id] = frame_process
    
    import mock
    
        '''
    
        def ifaces(self, *ifaces_groups):
        '''Does plugin implements specified interface groups?'''
        return not ifaces_groups or any(
            all(iface.implementedBy(self.plugin_cls)
                for iface in ifaces)
            for ifaces in ifaces_groups)
    
      Things we check for: spaces around operators, spaces after
  if/for/while/switch, no spaces around parens in function calls, two
  spaces between code and comment, don't start a block with a blank
  line, don't end a function with a blank line, don't add a blank line
  after public/protected/private, don't have too many blank lines in a row.