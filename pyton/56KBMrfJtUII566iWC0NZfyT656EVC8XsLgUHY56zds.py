
        
        
@pytest.fixture
def source_root():
    return Path(__file__).parent.parent.resolve()
    
    
def test_match():
    assert match(Command('apt list --upgradable', match_output))
    assert match(Command('sudo apt list --upgradable', match_output))
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
    from httpie.utils import repr_dict_nice
    
    from httpie.plugins import plugin_manager
from httpie.context import Environment
    
                if b'\0' in line:
                raise BinarySuppressedError()
    
        '''
    
        def __iter__(self):
        return iter(self._plugins)
    
        @property
    def path(self):
        '''Return the config file path creating basedir, if needed.'''
        path = self._get_path()
        try:
            os.makedirs(os.path.dirname(path), mode=0o700)
        except OSError as e:
            if e.errno != errno.EEXIST:
                raise
        return path
    
        get_item_parameters = pytest.mark.parametrize(
        'key, value', (
            ('bad_gateway', 502),
            ('not_a_key', None)
        )
    )
    
            Punctuation:               'bold #000000',   # class: 'p'
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
    Available hooks:
    
            # Verify we receive an Authorization header in response, then redirect.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert expected_digest in request_content
        sock.send(text_302)
    
            with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(b'hehehe, not received')
            sock.close()
    
    
    {# Latex figure (float) alignment
#'figure_align': 'htbp',
}
    
                self.rebuild_method(prepared_request, resp)
    
                r = requests.get(url, auth=auth)
            assert r.status_code == 401
    
        n_samples = 2000
    list_n_features = np.linspace(500, 3000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, [n_samples],
                                           list_n_features, precompute=False)
    plt.subplot(212)
    plt.plot(list_n_features, lasso_results, 'b-', label='Lasso')
    plt.plot(list_n_features, lars_lasso_results, 'r-', label='LassoLars')
    plt.title('%d samples, alpha=%s' % (n_samples, alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
        if dataset_name == 'forestcover':
        dataset = fetch_covtype()
        X = dataset.data
        y = dataset.target
        # normal data are those with attribute 2
        # abnormal those with attribute 4
        s = (y == 2) + (y == 4)
        X = X[s, :]
        y = y[s]
        y = (y != 2).astype(int)
    
    import numpy as np
import gc
from time import time
from collections import defaultdict
import matplotlib.pyplot as plt
from sklearn.datasets import fetch_lfw_people
from sklearn.decomposition import IncrementalPCA, PCA
    
        results = defaultdict(lambda: [])
    
    import numpy as np
from scipy.cluster import hierarchy
import matplotlib.pyplot as plt
    
        # Print results
    ###########################################################################
    print('Script arguments')
    print('===========================')
    arguments = vars(opts)
    print('%s \t | %s ' % ('Arguments'.ljust(16),
                           'Value'.center(12),))
    print(25 * '-' + ('|' + '-' * 14) * 1)
    for key, value in arguments.items():
        print('%s \t | %s ' % (str(key).ljust(16),
                               str(value).strip().center(12)))
    print('')
    
                tstart = time()
            clf.fit(X_train, y_train)
            asgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                       y_test)
            asgd_results[i, j, 1] = time() - tstart
    
        scikit_classifier_results = []
    scikit_regressor_results = []
    n = 10
    step = 500
    start_dim = 500
    n_classes = 10
    
    
def setup(app):
    # Format template for issues URI
    # e.g. 'https://github.com/sloria/marshmallow/issues/{issue}
    app.add_config_value('issues_uri', default=None, rebuild='html')
    # Shortcut for GitHub, e.g. 'sloria/marshmallow'
    app.add_config_value('issues_github_path', default=None, rebuild='html')
    # Format template for user profile URI
    # e.g. 'https://github.com/{user}'
    app.add_config_value('issues_user_uri', default=None, rebuild='html')
    app.add_role('issue', issue_role)
    app.add_role('user', user_role)

    
                short_text_filename = os.path.join(short_text_lang_folder,
                                               '%s_%04d.txt' % (lang, j))
            print('Writing %s' % short_text_filename)
            open(short_text_filename, 'wb').write(
                small_content.encode('utf-8', 'ignore'))
            j += 1
            if j >= 1000:
                break
    
    def os_constant(key):
    # XXX TODO: In the future, this could return different constants
    #           based on what OS we are running under.  To see an
    #           approach to how to handle different OSes, see the
    #           apache version of this file.  Currently, we do not
    #           actually have any OS-specific constants on Nginx.
    '''
    Get a constant value for operating system
    
        def test_kid_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url, kid=self.kid)
        self.assertEqual(jws.signature.combined.nonce, self.nonce)
        self.assertEqual(jws.signature.combined.url, self.url)
        self.assertEqual(jws.signature.combined.kid, self.kid)
        self.assertEqual(jws.signature.combined.jwk, None)
        # TODO: check that nonce is in protected header
    
        return _split_aug_path(vhost_path)[0]
    
    
class VirtualHostTest(unittest.TestCase):
    '''Test the VirtualHost class.'''
    
        def test_mod_config(self):
        z_domains = []
        for achall in self.achalls:
            self.sni.add_chall(achall)
            z_domain = achall.response(self.auth_key).z_domain
            z_domains.append(set([z_domain.decode('ascii')]))