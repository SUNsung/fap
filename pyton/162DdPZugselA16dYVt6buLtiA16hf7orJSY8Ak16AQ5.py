
        
        
class MockMaster(object):
    
        self.setUp()
    builder = bulk_component.BulkFeatureIdExtractorComponentBuilder(
        self.master, component_spec)
    builder.network = AssertPreCreateBeforeCreateNetwork(builder, self)
    builder.build_greedy_inference(
        component.MasterState(['foo', 'bar'], 2), self.network_states)
    
          labels = digraph_ops.LabelPotentialsFromTokenPairs(sources, targets,
                                                         weights)
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'UNEXPECTED_PROMPT_RESPONSE')
def test_auth_plugin_prompt_password_false(httpbin):
    
        def __init__(self, env=Environment(), **kwargs):
    
            Use `self.raw_auth` to access the raw value passed through
        `--auth, -a`.
    
        '''
)
positional.add_argument(
    'url',
    metavar='URL',
    help='''
    The scheme defaults to 'http://' if the URL does not include one.
    (You can override this with: --default-scheme=https)
    
    # FIXME:
# We test against a local httpbin instance which uses a self-signed cert.
# Requests without --verify=<CA_BUNDLE> will fail with a verification error.
# See: https://github.com/kevin1024/pytest-httpbin#https-support
CA_BUNDLE = pytest_httpbin.certs.where()
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
        def test_download_interrupted(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(
            url=httpbin_both.url + '/',
            headers={'Content-Length': 5}
        ))
        downloader.chunk_downloaded(b'1234')
        downloader.finish()
        assert downloader.interrupted

    
        def test_verbose_implies_all(self, httpbin):
        r = http('--verbose', '--follow', httpbin + '/redirect/1')
        assert 'GET /redirect/1 HTTP/1.1' in r
        assert 'HTTP/1.1 302 FOUND' in r
        assert 'GET /get HTTP/1.1' in r
        assert HTTP_OK in r
    
            String:                    '#4e9a06',        # class: 's'
        String.Backtick:           '#4e9a06',        # class: 'sb'
        String.Char:               '#4e9a06',        # class: 'sc'
        String.Doc:                'italic #8f5902', # class: 'sd' - like a comment
        String.Double:             '#4e9a06',        # class: 's2'
        String.Escape:             '#4e9a06',        # class: 'se'
        String.Heredoc:            '#4e9a06',        # class: 'sh'
        String.Interpol:           '#4e9a06',        # class: 'si'
        String.Other:              '#4e9a06',        # class: 'sx'
        String.Regex:              '#4e9a06',        # class: 'sr'
        String.Single:             '#4e9a06',        # class: 's1'
        String.Symbol:             '#4e9a06',        # class: 'ss'
    
            self.cert_verify(conn, request.url, verify, cert)
        url = self.request_url(request, proxies)
        self.add_headers(request, stream=stream, timeout=timeout, verify=verify, cert=cert, proxies=proxies)
    
        # OPENSSL_VERSION_NUMBER doesn't exist in the Python 2.6 ssl module.
    system_ssl = getattr(ssl, 'OPENSSL_VERSION_NUMBER', None)
    system_ssl_info = {
        'version': '%x' % system_ssl if system_ssl is not None else ''
    }
    
            The encoding of the response content is determined based solely on HTTP
        headers, following RFC 2616 to the letter. If you can take advantage of
        non-HTTP knowledge to make a better guess at the encoding, you should
        set ``r.encoding`` appropriately before accessing this property.
        '''
    
            # Resolve redirects if allowed.
        history = [resp for resp in gen] if allow_redirects else []
    
    # (c) 2016 Red Hat, Inc.
#
# This file is part of Ansible
#
# Ansible is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Ansible is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Ansible.  If not, see <http://www.gnu.org/licenses/>.
'''CLI tool for starting new Shippable CI runs.'''
    
        terminal_stdout_re = [
        re.compile(r'[\r\n]?<.+>(?:\s*)$'),
        re.compile(r'[\r\n]?\[.+\](?:\s*)$'),
    ]
    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
            task_data = self._task_data[task_uuid]
    
    from sklearn.utils import check_random_state
from sklearn.metrics.pairwise import pairwise_distances
from sklearn.metrics.pairwise import pairwise_kernels
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
    
if not os.path.exists(TRAIN_FOLDER) or not os.path.exists(TEST_FOLDER):
    
        # import matplotlib.pyplot as plt
    # plt.matshow(cm)
    # plt.show()

    
    # Train uncalibrated random forest classifier on whole train and validation
# data and evaluate on test data
clf = RandomForestClassifier(n_estimators=25)
clf.fit(X_train_valid, y_train_valid)
clf_probs = clf.predict_proba(X_test)
score = log_loss(y_test, clf_probs)
    
    plt.axis('tight')
plt.axis('off')
plt.suptitle('Ground truth', size=20)