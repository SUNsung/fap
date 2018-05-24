
        
        
@registry.RegisteredClass
class ComponentBuilderBase(object):
  '''Utility to build a single Component in a DRAGNN stack of models.
    
      def testArcSourcePotentialsFromTokens(self):
    with self.test_session():
      tokens = tf.constant([[[4, 5, 6],
                             [5, 6, 7],
                             [6, 7, 8]],
                            [[6, 7, 8],
                             [5, 6, 7],
                             [4, 5, 6]]], tf.float32)  # pyformat: disable
      weights = tf.constant([2, 3, 5], tf.float32)
    
          grads_and_vars = self.optimizer.compute_gradients(
          cost, var_list=params_to_train)
      clipped_gradients = [
          (self._clip_gradients(g), v) for g, v in grads_and_vars
      ]
      gradient_norm = tf.global_norm(list(zip(*clipped_gradients))[0])
    
    
_DUMMY_GOLD_SENTENCE = '''
token {
  word: 'sentence' start: 0 end: 7 tag: 'NN' category: 'NOUN' label: 'ROOT'
}
token {
  word: '0' start: 9 end: 9 head: 0 tag: 'CD' category: 'NUM' label: 'num'
}
token {
  word: '.' start: 10 end: 10 head: 0 tag: '.' category: '.' label: 'punct'
}
'''
    
    Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
    import sys
    
        def __init__(self, *args, **kwargs):
        '''Initialize RequestException with `request` and `response` objects.'''
        response = kwargs.pop('response', None)
        self.response = response
        self.request = kwargs.pop('request', None)
        if (response is not None and not self.request and
                hasattr(response, 'request')):
            self.request = self.response.request
        super(RequestException, self).__init__(*args, **kwargs)
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
        pyopenssl_info = {
        'version': None,
        'openssl_version': '',
    }
    if OpenSSL:
        pyopenssl_info = {
            'version': OpenSSL.__version__,
            'openssl_version': '%x' % OpenSSL.SSL.OPENSSL_VERSION_NUMBER,
        }
    cryptography_info = {
        'version': getattr(cryptography, '__version__', ''),
    }
    idna_info = {
        'version': getattr(idna, '__version__', ''),
    }
    
    # General information about the project.
project = u'Requests'
copyright = u'MMXVIII. A <a href='http://kennethreitz.com/pages/open-projects.html'>Kenneth Reitz</a> Project'
author = u'Kenneth Reitz'
    
        replace_chars = ' \'''