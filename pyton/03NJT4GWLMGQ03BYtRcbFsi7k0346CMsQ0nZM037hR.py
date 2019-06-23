
        
            @property
    def content_type(self):
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
        def __iter__(self):
        '''Return an iterator over `self.msg`.'''
        if self.with_headers:
            yield self.get_headers()
            yield b'\r\n\r\n'
    
    
ENTRY_POINT_NAMES = [
    'httpie.plugins.auth.v1',
    'httpie.plugins.formatter.v1',
    'httpie.plugins.converter.v1',
    'httpie.plugins.transport.v1',
]
    
    
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
    
        return fn
    
    EXAMPLES = '''
---
# Simple example of listing all info for a function
- name: List all for a specific function
  lambda_facts:
    query: all
    function_name: myFunction
  register: my_function_details
# List all versions of a function
- name: List function versions
  lambda_facts:
    query: versions
    function_name: myFunction
  register: my_function_versions
# List all lambda function versions
- name: List all function
  lambda_facts:
    query: all
    max_items: 20
- name: show Lambda facts
  debug:
    var: lambda_facts
'''
    
        creds, params = get_google_cloud_credentials(module)
    pubsub_client = pubsub.Client(project=params['project_id'], credentials=creds, use_gax=False)
    pubsub_client.user_agent = 'ansible-pubsub-0.1'
    
        eol = len(current_rules) - len(desired_rules)
    if eol > 0:
        for rule in current_rules[eol:]:
            deletions.append(rule)
    
        deletions = 0
    additions = 0
    
    RETURN = '''
stdout:
  description: the set of responses from the commands
  returned: always
  type: list
  sample: ['...', '...']
stdout_lines:
  description: The value of stdout split into a list
  returned: always
  type: list
  sample: [['...', '...'], ['...'], ['...']]
failed_conditions:
  description: the conditionals that failed
  returned: failed
  type: list
  sample: ['...', '...']
'''
    
        for n_components in [i.astype(int) for i in
                         np.linspace(data.shape[1] // 10,
                                     data.shape[1], num=4)]:
        all_times = defaultdict(list)
        all_errors = defaultdict(list)
        pca = PCA(n_components=n_components)
        rpca = PCA(n_components=n_components, svd_solver='randomized',
                   random_state=1999)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('rpca', rpca)]}
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    The dataset is the Boston Housing dataset (resp. 20 Newsgroups) for
regression (resp. classification).
    
    The data is generated with the ``make_checkerboard`` function, then
shuffled and passed to the Spectral Biclustering algorithm. The rows
and columns of the shuffled matrix are rearranged to show the
biclusters found by the algorithm.
    
    # Create a graph capturing local connectivity. Larger number of neighbors
# will give more homogeneous clusters to the cost of computation
# time. A very large number of neighbors gives more evenly distributed
# cluster sizes, but may not impose the local manifold structure of
# the data
knn_graph = kneighbors_graph(X, 30, include_self=False)
    
            # catch warnings related to kneighbors_graph
        with warnings.catch_warnings():
            warnings.filterwarnings(
                'ignore',
                message='the number of connected components of the ' +
                'connectivity matrix is [0-9]{1,2}' +
                ' > 1. Completing it to avoid stopping the tree early.',
                category=UserWarning)
            algorithm.fit(X)
    
    # #############################################################################
# Generate sample data
centers = [[1, 1], [-1, -1], [1, -1]]
X, _ = make_blobs(n_samples=10000, centers=centers, cluster_std=0.6)
    
        def draw_black_image(self):
        ''' Change image to black at correct dimensions '''
        logger.trace('Drawing black image')
        height, width = self.image.shape[:2]
        self.image = np.zeros((height, width, 3), np.uint8)
    
                if not bottleneck_ts:
                raise Exception('unable to find bottleneck tensors! please provide checkpoint '
                                'nodes manually, or use checkpoints='speed'.')
    
            self.status_message.set('Ready')
    
    
class Model(ModelBase):
    ''' Improved Autoeencoder Model '''
    def __init__(self, *args, **kwargs):
        logger.debug('Initializing %s: (args: %s, kwargs: %s',
                     self.__class__.__name__, args, kwargs)
        kwargs['input_shape'] = (64, 64, 3)
        kwargs['encoder_dim'] = 1024
        super().__init__(*args, **kwargs)
        logger.debug('Initialized %s', self.__class__.__name__)
    
        def sort_commands(self, category, classes):
        ''' Format classes into command names and sort:
            Specific workflow order for faceswap.
            Alphabetical for all others '''
        commands = sorted(self.format_command_name(command)
                          for command in classes)
        if category == 'faceswap':
            ordered = ['extract', 'train', 'convert']
            commands = ordered + [command for command in commands
                                  if command not in ordered]
        logger.debug(commands)
        return commands