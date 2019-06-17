
        
        
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
    
@pytest.mark.parametrize('command', [
    Command('apt list --upgradable', no_match_output),
    Command('sudo apt list --upgradable', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
    
@pytest.fixture
def brew_install_no_argument():
    return '''This command requires a formula argument'''
    
    
def rand_center(data, k):
    '''随机采样 k 个样本作为聚类中心'''
    centers = np.array(random.sample(list(data), k))
    return centers
    
        return g
    
    sum_ngrams = 0
for s in sentences:
    for w in s:
        w = w.lower()
        # from gensim.models._utils_any2vec import compute_ngrams
        ret = compute_ngrams(w, min_ngrams, max_ngrams)
        print(ret)
        sum_ngrams += len(ret)
'''
['<h', 'he', 'el', 'll', 'lo', 'o>', '<he', 'hel', 'ell', 'llo', 'lo>', '<hel', 'hell', 'ello', 'llo>']
['<w', 'wo', 'or', 'rl', 'ld', 'd>', '<wo', 'wor', 'orl', 'rld', 'ld>', '<wor', 'worl', 'orld', 'rld>']
['<!', '!>', '<!>']
['<i', 'i>', '<i>']
['<a', 'am', 'm>', '<am', 'am>', '<am>']
['<h', 'hu', 'ua', 'ay', 'y>', '<hu', 'hua', 'uay', 'ay>', '<hua', 'huay', 'uay>']
['<.', '.>', '<.>']
'''
assert sum_ngrams == len(model.wv.vectors_ngrams)
print(sum_ngrams)  # 57
print()
    
    
class TestNaitivePool(unittest.TestCase):
    
    
class Publisher:
    def __init__(self, msg_center):
        self.provider = msg_center
    
        def __init__(self, time_provider):
        self.time_provider = time_provider
    
            As an alternative you might even in case of success
        call the next handler.
        '''
        res = self.check_range(request)
        if not res and self.successor:
            self.successor.handle(request)
    
    
def get_serializer(serializer):
    ''' Return requested serializer '''
    if serializer == 'json':
        return JSONSerializer
    if serializer == 'pickle':
        return PickleSerializer
    if serializer == 'yaml' and yaml is not None:
        return YAMLSerializer
    if serializer == 'yaml' and yaml is None:
        logger.warning('You must have PyYAML installed to use YAML as the serializer.'
                       'Switching to JSON as the serializer.')
    return JSONSerializer
    
                    if channels < self.group:
                    raise ValueError('Input channels should be larger than group size' +
                                     '; Received input channels: ' + str(channels) +
                                     '; Group size: ' + str(self.group))
    
            self.initialize_globals(pathscript)
        self.set_geometry()
        self.wrapper = ProcessWrapper(pathscript)
    
    
class StatusBar(ttk.Frame):  # pylint: disable=too-many-ancestors
    ''' Status Bar for displaying the Status Message and
        Progress Bar '''
    
        def load_alignments(self):
        ''' Loading alignments '''
        logger.debug('Loading alignments')
        if len(self.args.alignments_file) > 1 and self.args.job != 'merge':
            logger.error('Multiple alignments files are only permitted for merging')
            exit(0)
        if len(self.args.alignments_file) == 1 and self.args.job == 'merge':
            logger.error('More than one alignments file required for merging')
            exit(0)
    
        def save_fig(self, location):
        ''' Save the figure to file '''
        logger.debug('Saving graph: '%s'', location)
        keys = sorted([key.replace('raw_', '') for key in self.calcs.stats.keys()
                       if key.startswith('raw_')])
        filename = ' - '.join(keys)
        now = datetime.datetime.now().strftime('%Y%m%d_%H%M%S')
        filename = os.path.join(location, '{}_{}.{}'.format(filename, now, 'png'))
        self.fig.set_size_inches(16, 9)
        self.fig.savefig(filename, bbox_inches='tight', dpi=120)
        print('Saved graph to {}'.format(filename))
        logger.debug('Saved graph: '%s'', filename)
        self.resize_fig()
    
            insertion = np.rint(new_face[y_crop, x_crop] * 255.0).astype('uint8')
        insertion_mask = np.rint(raw_mask[y_crop, x_crop] * 255.0).astype('uint8')
        insertion_mask[insertion_mask != 0] = 255
        prior = np.rint(np.pad(old_face * 255.0,
                               ((height, height), (width, width), (0, 0)),
                               'constant')).astype('uint8')