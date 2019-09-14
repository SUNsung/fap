
        
            def test_needs_email(self):
        self.config.email = None
        self.assertRaises(errors.Error, self._call)
    
        def __init__(self, plugins):
        # plugins are sorted so the same order is used between runs.
        # This prevents deadlock caused by plugins acquiring a lock
        # and ensures at least one concurrent Certbot instance will run
        # successfully.
    
        print('Done!')
    if failures:
        print('Some downloads have failed:')
        for fail in failures:
            print('> ' + fail)

    
        def __call__(self, text, **kargs):
        words = jieba.tokenize(text, mode='search')
        token = Token()
        for (w, start_pos, stop_pos) in words:
            if not accepted_chars.match(w) and len(w) <= 1:
                continue
            token.original = token.text = w
            token.pos = start_pos
            token.startchar = start_pos
            token.endchar = stop_pos
            yield token
    
    
def add_force_split(word):
    global Force_Split_Words
    Force_Split_Words.add(word)
    
        def __getattr__(self, name):
        if name in ('cut_for_search', 'lcut_for_search', 'tokenize'):
            # may be possible?
            raise NotImplementedError
        return getattr(self.tokenizer, name)
    
    result = jieba.tokenize('永和服装饰品有限公司')
for tk in result:
    print('word %s\t\t start: %d \t\t end:%d' % (tk[0],tk[1],tk[2]))
    
    if opt.topK is None:
    topK = 10
else:
    topK = int(opt.topK)
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    print('speed %s bytes/second' % (len(content)/tm_cost))
    
            result = apigateway_listener.get_resource_for_path('/foo/bar', {'/{param1}/bar1': {}, '/foo/bar2': {}})
        self.assertEqual(result, None)

    
            # assert that the SM has been created
        state_machines_after = self.sfn_client.list_state_machines()['stateMachines']
        self.assertEqual(len(state_machines_after), len(state_machines_before) + 1)
    
    
def should_record(api, method, path, data, headers):
    ''' Decide whether or not a given API call should be recorded (persisted to disk) '''
    if api == 's3':
        if method not in ['PUT', 'POST', 'DELETE']:
            return False
        return True
    return False
    
            response = ssm_client.get_parameters(
            Names=['test_put'],
        )
    
    
    '''
    def __init__(self, nS, nA, P, isd):
        self.P = P
        self.isd = isd
        self.lastaction = None # for rendering
        self.nS = nS
        self.nA = nA
    
        Adapted from Example 6.6 (page 106) from Reinforcement Learning: An Introduction
    by Sutton and Barto:
    http://incompleteideas.net/book/bookdraft2018jan1.pdf
    
            self.ansi_mode = False
        if 'rgb_array' not in modes:
            if 'ansi' in modes:
                self.ansi_mode = True
            else:
                logger.info('Disabling video recorder because {} neither supports video mode 'rgb_array' nor 'ansi'.'.format(env))
                # Whoops, turns out we shouldn't be enabled after all
                self.enabled = False
                return
    
        def __init__(self):
        self.seed()
        self.viewer = None
        self.observation_space = spaces.Box(0, 255, (FIELD_H,FIELD_W,3), dtype=np.uint8)
        self.action_space = spaces.Discrete(10)
        self.bogus_mnist = np.zeros( (10,6,6), dtype=np.uint8 )
        for digit in range(10):
            for y in range(6):
                self.bogus_mnist[digit,y,:] = [ord(char) for char in bogus_mnist[digit][y]]
        self.reset()
    
            return self.state, step_reward, done, {}
    
    
class FrozenLakeEnv(discrete.DiscreteEnv):
    '''
    Winter is here. You and your friends were tossing around a frisbee at the park
    when you made a wild throw that left the frisbee out in the middle of the lake.
    The water is mostly frozen, but there are a few holes where the ice has melted.
    If you step into one of those holes, you'll fall into the freezing water.
    At this time, there's an international frisbee shortage, so it's absolutely imperative that
    you navigate across the lake and retrieve the disc.
    However, the ice is slippery, so you won't always move in the direction you intend.
    The surface is described using a grid like the following
    
    import modeling
import six
import tensorflow as tf
    
        return {
        'ansi': answer,
        'links': links
    }

    
        _adapter_name = 'late.nz'
    _output_format = 'ansi'
    _repository_url = 'https://github.com/chubin/late.nz'
    
        def _get_list(self, prefix=None):
        return []
    
        answers = [
        postprocessing.postprocess(
            answer, keyword, search_options, request_options=request_options)
        for answer in answers
    ]
    
            skip = ['fosdem']
        if skip_dirs:
            skip.append('cheat.sheets dir')
        if skip_internal:
            skip.append('internal')
        sources_to_merge = [x for x in self._adapter if x not in skip]
    
    def show_usage():
    '''
    Show how to use the program in the standalone mode
    '''