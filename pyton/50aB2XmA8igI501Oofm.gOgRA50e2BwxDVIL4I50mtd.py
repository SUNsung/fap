
        
            '''
    is_windows = is_windows
    config_dir = DEFAULT_CONFIG_DIR
    stdin = sys.stdin
    stdin_isatty = stdin.isatty()
    stdin_encoding = None
    stdout = sys.stdout
    stdout_isatty = stdout.isatty()
    stdout_encoding = None
    stderr = sys.stderr
    stderr_isatty = stderr.isatty()
    colors = 256
    if not is_windows:
        if curses:
            try:
                curses.setupterm()
                colors = curses.tigetnum('colors')
            except curses.error:
                pass
    else:
        # noinspection PyUnresolvedReferences
        import colorama.initialise
        stdout = colorama.initialise.wrap_stream(
            stdout, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        stderr = colorama.initialise.wrap_stream(
            stderr, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        del colorama
    
        def load_installed_plugins(self):
        for entry_point_name in ENTRY_POINT_NAMES:
            for entry_point in iter_entry_points(entry_point_name):
                plugin = entry_point.load()
                plugin.package_name = entry_point.dist.key
                self.register(entry_point.load())
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
    ward = AgglomerativeClustering(n_clusters=3, linkage='ward')
    
    plt.matshow(np.outer(np.sort(model.row_labels_) + 1,
                     np.sort(model.column_labels_) + 1),
            cmap=plt.cm.Blues)
plt.title('Checkerboard structure of rearranged data')
    
    Two consequences of imposing a connectivity can be seen. First clustering
with a connectivity matrix is much faster.
    
    print(__doc__)
from time import time
    
        # print(index)
    # print(word_freq)
    return index, word_freq
    
    from ...utils import get_shape, get_w
    
    
def highway_dense(x, act_fn=relu, carry_bias=-1.0, name=None):
    '''用于全连接层的 highway
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_input]
    
        def __init__(self, l1=0., l2=0.):
        '''
        Args:
            l1(float): L1 正则化的系数
            l2(float): L2 正则化的系数
        '''
        self.l1 = np.asarray(l1, dtype=np.float32)
        self.l2 = np.asarray(l2, dtype=np.float32)
    
        def __init__(self, unpacked, extra):
        self.unpacked = unpacked
        self.extra = extra
    
    
def parse_args(args=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('version', type=str, help='Pandas version (0.23.0)')
    return parser.parse_args(args)