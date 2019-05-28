
        
            publicKey = (n, e)
    privateKey = (n, d)
    return (publicKey, privateKey)
    
    
class DoubleHash(HashTable):
    '''
        Hash Table example with open addressing and Double Hash
    '''
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    
    	TEMPORARY_ARRAY = [ element for element in ARRAY[1:] if element >= PIVOT ]
	TEMPORARY_ARRAY = [PIVOT] + longestSub(TEMPORARY_ARRAY)
	if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
		return TEMPORARY_ARRAY
	else:
		return LONGEST_SUB
    
        def solve_sub_array(self):
        rear = [int(self.array[0])]*len(self.array)
        sum_value = [int(self.array[0])]*len(self.array)
        for i in range(1, len(self.array)):
            sum_value[i] = max(int(self.array[i]) + sum_value[i-1], int(self.array[i]))
            rear[i] = max(sum_value[i], rear[i-1])
        return rear[len(self.array)-1]
    
        for i in range(1, n+1):
        for j in range(1, s+1):
            dp[i][j]= dp[i][j-1]
    
        def train(self, X, y):
        '''
        train:
        @param X: a one dimensional numpy array
        @param y: a one dimensional numpy array. 
        The contents of y are the labels for the corresponding X values
    
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
    
        return score

    
    # frequency taken from http://en.wikipedia.org/wiki/Letter_frequency
englishLetterFreq = {'E': 12.70, 'T': 9.06, 'A': 8.17, 'O': 7.51, 'I': 6.97,
                     'N': 6.75, 'S': 6.33, 'H': 6.09, 'R': 5.99, 'D': 4.25,
                     'L': 4.03, 'C': 2.78, 'U': 2.76, 'M': 2.41, 'W': 2.36,
                     'F': 2.23, 'G': 2.02, 'Y': 1.97, 'P': 1.93, 'B': 1.29,
                     'V': 0.98, 'K': 0.77, 'J': 0.15, 'X': 0.15, 'Q': 0.10,
                     'Z': 0.07}
ETAOIN = 'ETAOINSHRDLCUMWFGYPBVKJXQZ'
LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    
        def __init__(self, handler=None, host='localhost', port=0, requests_to_handle=1, wait_to_close_event=None):
        super(Server, self).__init__()
    
            # because special names such as Name.Class, Name.Function, etc.
        # are not recognized as such later in the parsing, we choose them
        # to look the same as ordinary variables.
        Name:                      '#000000',        # class: 'n'
        Name.Attribute:            '#c4a000',        # class: 'na' - to be revised
        Name.Builtin:              '#004461',        # class: 'nb'
        Name.Builtin.Pseudo:       '#3465a4',        # class: 'bp'
        Name.Class:                '#000000',        # class: 'nc' - to be revised
        Name.Constant:             '#000000',        # class: 'no' - to be revised
        Name.Decorator:            '#888',           # class: 'nd' - to be revised
        Name.Entity:               '#ce5c00',        # class: 'ni'
        Name.Exception:            'bold #cc0000',   # class: 'ne'
        Name.Function:             '#000000',        # class: 'nf'
        Name.Property:             '#000000',        # class: 'py'
        Name.Label:                '#f57900',        # class: 'nl'
        Name.Namespace:            '#000000',        # class: 'nn' - to be revised
        Name.Other:                '#000000',        # class: 'nx'
        Name.Tag:                  'bold #004461',   # class: 'nt' - like a keyword
        Name.Variable:             '#000000',        # class: 'nv' - to be revised
        Name.Variable.Class:       '#000000',        # class: 'vc' - to be revised
        Name.Variable.Global:      '#000000',        # class: 'vg' - to be revised
        Name.Variable.Instance:    '#000000',        # class: 'vi' - to be revised
    
            url = request.path_url
        if is_proxied_http_request and not using_socks_proxy:
            url = urldefragauth(request.url)
    
        def test_requests_after_timeout_are_not_received(self):
        '''the basic response handler times out when receiving requests'''
        server = Server.basic_response_server(request_timeout=1)
    
        def proxy_bypass(host):  # noqa
        '''Return True, if the host should be bypassed.
    
            with pytest.warns(None) as warning_records:
            warnings.simplefilter('always')
            requests.get(httpbin_secure('status', '200'),
                         verify=httpbin_ca_bundle)
    
    try:
    from io import BytesIO
except ImportError:
    from cStringIO import StringIO as BytesIO
try:
    from google.appengine.api import urlfetch
    from google.appengine.runtime import apiproxy_errors
except ImportError:
    urlfetch = None
try:
    import sae
except ImportError:
    sae = None
try:
    import bae.core.wsgi
except ImportError:
    bae = None
try:
    import socket
    import select
except ImportError:
    socket = None
try:
    import OpenSSL
except ImportError:
    OpenSSL = None
    
            raise MismatchedTokenException(ttype, input)
    
    
class JWSTest(unittest.TestCase):
    '''Tests for acme.jws.JWS.'''
    
            for path in error_files:
            # Check to see if it was an error resulting from the use of
            # the httpd lens
            lens_path = self.aug.get(path + '/lens')
            # As aug.get may return null
            if lens_path and lens in lens_path:
                msg = (
                    'There has been an error in parsing the file {0} on line {1}: '
                    '{2}'.format(
                    # Strip off /augeas/files and /error
                    path[13:len(path) - 6],
                    self.aug.get(path + '/line'),
                    self.aug.get(path + '/message')))
                raise errors.PluginError(msg)
    
    
# -- Options for Texinfo output -------------------------------------------
    
    Use of this plugin requires a configuration file containing Cloudflare API
credentials, obtained from your Cloudflare
`account page <https://www.cloudflare.com/a/account/my-account>`_.
    
    
Named Arguments
---------------