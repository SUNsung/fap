
        
        
EXIT_STATUS_LABELS = {
    value: key
    for key, value in ExitStatus.__dict__.items()
    if key.isupper()
}

    
        return kwargs

    
    
class HTTPMessage(object):
    '''Abstract class for HTTP messages.'''
    
    
install_requires = [
    'requests>=2.18.4',
    'Pygments>=2.1.3'
]
    
    
with open(BIN_FILE_PATH, 'rb') as f:
    BIN_FILE_CONTENT = f.read()
    
        try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)

    
    
def test_POST_JSON_data(httpbin_both):
    r = http('POST', httpbin_both + '/post', 'foo=bar')
    assert HTTP_OK in r
    assert r.json['json']['foo'] == 'bar'
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''CaseInsensitiveDict instance with 'Accept' header.'''
        self.case_insensitive_dict = CaseInsensitiveDict()
        self.case_insensitive_dict['Accept'] = 'application/json'
    
            content += new_content
    
        styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
        # Sometimes, urllib3 only reports its version as 16.1.
    if len(urllib3_version) == 2:
        urllib3_version.append('0')
    
            #: Dictionary mapping protocol or protocol and host to the URL of the proxy
        #: (e.g. {'http': 'foo.bar:3128', 'http://host.name': 'foo.bar:4012'}) to
        #: be used on each :class:`Request <Request>`.
        self.proxies = {}
    
        if args.show_plot:
        plt.plot(*zip(*timings))
        plt.title('Average time taken running isotonic regression')
        plt.xlabel('Number of observations')
        plt.ylabel('Time (s)')
        plt.axis('tight')
        plt.loglog()
        plt.show()

    
    
def compute_bench_2(chunks):
    results = defaultdict(lambda: [])
    n_features = 50000
    means = np.array([[1, 1], [-1, -1], [1, -1], [-1, 1],
                      [0.5, 0.5], [0.75, -0.5], [-1, 0.75], [1, 0]])
    X = np.empty((0, 2))
    for i in range(8):
        X = np.r_[X, means[i] + 0.8 * np.random.randn(n_features, 2)]
    max_it = len(chunks)
    it = 0
    for chunk in chunks:
        it += 1
        print('==============================')
        print('Iteration %03d of %03d' % (it, max_it))
        print('==============================')
        print()
    
    
def variable_batch_size_comparison(data):
    batch_sizes = [i.astype(int) for i in np.linspace(data.shape[0] // 10,
                                                      data.shape[0], num=10)]
    
    
text = fetch_20newsgroups(subset='train').data
    
        xx = np.arange(start_dim, start_dim + n * step, step)
    plt.subplot(212)
    plt.title('Learning in high dimensional spaces')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of dimensions')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
        class_name = info['fullname'].split('.')[0]
    if type(class_name) != str:
        # Python 2 only
        class_name = class_name.encode('utf-8')
    module = __import__(info['module'], fromlist=[class_name])
    obj = attrgetter(info['fullname'])(module)
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
DATA_FOLDER = 'txt_sentoken'
    
    PROJ_METADATA = '%s.json' % PROJ_NAME
    
                elif opt in ('-V', '--version'):
                # Display version.
                log.println('you-get:', log.BOLD)
                log.println('    version:  {}'.format(__version__))
                if head is not None:
                    log.println('    branch:   {}\n    commit:   {}'.format(*head))
                else:
                    log.println('    branch:   {}\n    commit:   {}'.format('(stable)', '(tag v{})'.format(__version__)))
    
        def p_playlist(self, stream_id=None):
        maybe_print('site:                %s' % self.__class__.name)
        print('playlist:            %s' % self.title)
        print('videos:')
    
            link_list = self.get_streams_by_id(account_number, video_id)
    
    
def get_loop_file_path(title, output_dir):
    return os.path.join(output_dir, get_output_filename([], title, 'txt', None, False))
    
        vids = matchall(content, youku_embed_patterns)
    for vid in set(vids):
        found = True
        youku_download_by_vid(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    from ..common import *
from hashlib import md5
from urllib.parse import urlparse
import re