
        
            # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
    
def filter_options(readme):
    ret = ''
    in_options = False
    for line in readme.split('\n'):
        if line.startswith('# '):
            if line[2:].startswith('OPTIONS'):
                in_options = True
            else:
                in_options = False
    
        def test_youtube(self):
        self._assert_restricted('07FYdnEawAQ', '07FYdnEawAQ.mp4', 10)
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
        def _step_by_step(self, step_ord):
    
    
class EditDistance:
    '''
    Use :
    solver              = EditDistance()
    editDistanceResult  = solver.solve(firstString, secondString)
    '''
    
    	if len(sys.argv) == 1:
		try:
			n = int(raw_input('Enter a number: '))
			print(partition(n))
		except ValueError:
			print('Please enter a number.')
	else:
		try:
			n = int(sys.argv[1])
			print(partition(n))
		except ValueError:
			print('Please pass a number.')
    
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
    
    '''
requests.structures
~~~~~~~~~~~~~~~~~~~
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
        get_item_parameters = pytest.mark.parametrize(
        'key, value', (
            ('bad_gateway', 502),
            ('not_a_key', None)
        )
    )
    
        def _accept_connection(self):
        try:
            ready, _, _ = select.select([self.server_sock], [], [], self.WAIT_EVENT_TIMEOUT)
            if not ready:
                return None
    
            Literal:                   '#000000',        # class: 'l'
        Literal.Date:              '#000000',        # class: 'ld'
    
    
def morsel_to_cookie(morsel):
    '''Convert a Morsel object into a Cookie containing the one k/v pair.'''
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
            assert r.status_code == 200
        assert len(r.history) == 2
        assert r.history[0].request.url == url
    
        def test_basic(self):
        '''messages are sent and received properly'''
        question = b'success?'
        answer = b'yeah, success'
    
        def test_unconsumed_session_response_closes_connection(self, httpbin):
        s = requests.session()
    
    # If true, do not generate a @detailmenu in the 'Top' node's menu.
# texinfo_no_detailmenu = False
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        state=dict(required=True, choices=['present', 'absent']),
        name=dict(required=True),
        description=dict(required=False),
        subnets=dict(required=False, type='list'),
    )
    )
    module = AnsibleModule(argument_spec=argument_spec)
    
    ## List all Subscriptions in a project
- gcpubsub_facts:
    view: subscriptions
    state: list
    
    EXAMPLES = '''
    
        client = HBACRuleIPAClient(module=module,
                               host=module.params['ipa_host'],
                               port=module.params['ipa_port'],
                               protocol=module.params['ipa_prot'])
    
        url = module.params.get('url')
    
    
DOCUMENTATION = '''
---
module: honeybadger_deployment
author: 'Benjamin Curtis (@stympy)'
version_added: '2.2'
short_description: Notify Honeybadger.io about app deployments
description:
   - Notify Honeybadger.io about app deployments (see http://docs.honeybadger.io/article/188-deployment-tracking)
options:
  token:
    description:
      - API token.
    required: true
  environment:
    description:
      - The environment name, typically 'production', 'staging', etc.
    required: true
  user:
    description:
      - The username of the person doing the deployment
  repo:
    description:
      - URL of the project repository
  revision:
    description:
      - A hash, number, tag, or other identifier showing what revision was deployed
  url:
    description:
      - Optional URL to submit the notification to.
    default: 'https://api.honeybadger.io/v1/deploys'
  validate_certs:
    description:
      - If C(no), SSL certificates for the target url will not be validated. This should only be used
        on personally controlled sites using self-signed certificates.
    type: bool
    default: 'yes'
    
    - name: Disable api feature
  icinga2_feature:
    name: api
    state: absent
'''
    
            for filename in os.listdir(firefox_path):
            if filename.endswith('.default') and os.path.isdir(os.path.join(firefox_path, filename)):
                config_path = os.path.join(firefox_path, filename)
                #xlog.debug('Got Firefox path: %s', config_path)
                return config_path
    
            self.lock = threading.Lock()
    
    A tree.RewriteCardinalityException is raised, when the parsers hits a
cardinality mismatch during AST construction. Although this is basically a
bug in your grammar, it can only be detected at runtime.
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
            elif isinstance(e, NoViableAltException):
            msg = 'no viable alternative at input ' \
                  + self.getTokenErrorDisplay(e.token)
    
        You can insert stuff, replace, and delete chunks.  Note that the
    operations are done lazily--only if you convert the buffer to a
    String.  This is very efficient because you are not moving data around
    all the time.  As the buffer of tokens is converted to strings, the
    toString() method(s) check to see if there is an operation at the
    current index.  If so, the operation is done and then normal String
    rendering continues on the buffer.  This is like having multiple Turing
    machine instruction streams (programs) operating on a single input tape. :)