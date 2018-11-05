
        
        errors = []
title_links = []
previous_links = []
anchor_re = re.compile(anchor + '\s(.+)')
section_title_re = re.compile('\*\s\[(.*)\]')
link_re = re.compile('\[(.+)\]\((http.*)\)')
    
        data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
        timings = []
    for exponent in range(args.log_min_problem_size,
                          args.log_max_problem_size):
        n = 10 ** exponent
        Y = DATASET_GENERATORS[args.dataset](n)
        time_per_iteration = \
            [bench_isotonic_regression(Y) for i in range(args.iterations)]
        timing = (n, np.mean(time_per_iteration))
        timings.append(timing)
    
    
if __name__ == '__main__':
    samples_range = np.linspace(1000, 5000, 5).astype(np.int)
    features_range = np.linspace(1000, 5000, 5).astype(np.int)
    results = compute_bench(samples_range, features_range)
    max_time = max(np.max(t) for t in results.values())
    
            start = time.time()
        func(X, n_jobs=-1)
        multi_core.append(time.time() - start)
    
    input data sparsity: 0.050000
true coef sparsity: 0.000100
test data sparsity: 0.027400
model sparsity: 0.000024
r^2 on test data (dense model) : 0.233651
r^2 on test data (sparse model) : 0.233651
Wrote profile results to sparsity_benchmark.py.lprof
Timer unit: 1e-06 s
    
    import json
import re
import sys
    
                    xlog.info('clean old site certs in XX-Net cert dir')
                any(os.remove(x) for x in glob.glob(os.path.join(CertUtil.ca_certdir, '*.crt')) + glob.glob(os.path.join(CertUtil.ca_certdir, '.*.crt')))
    
        def report_ok(self):
        self.network_stat = 'OK'
        self.last_check_time = time.time()
        self.continue_fail_count = 0
    
    
def best_server(probe_nat=False):
    best_server = None
    prober = new_pteredor(probe_nat=probe_nat)
    prober.qualified = True
    if not probe_nat:
        prober.nat_type = 'unknown'
        prober.rs_cone_flag = 0
    
            p = random.choice(self.plus)
    
    
try:
    from Crypto.Cipher.ARC4 import new as _Crypto_Cipher_ARC4_new
except ImportError:
    logging.warn('Load Crypto.Cipher.ARC4 Failed, Use Pure Python Instead.')
    class _Crypto_Cipher_ARC4_new(object):
        def __init__(self, key):
            x = 0
            box = range(256)
            for i, y in enumerate(box):
                x = (x + y + ord(key[i % len(key)])) & 0xff
                box[i], box[x] = box[x], y
            self.__box = box
            self.__x = 0
            self.__y = 0
        def encrypt(self, data):
            out = []
            out_append = out.append
            x = self.__x
            y = self.__y
            box = self.__box
            for char in data:
                x = (x + 1) & 0xff
                y = (y + box[x]) & 0xff
                box[x], box[y] = box[y], box[x]
                out_append(chr(ord(char) ^ box[(box[x] + box[y]) & 0xff]))
            self.__x = x
            self.__y = y
            return ''.join(out)
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
    if platform.system() in ('FreeBSD', 'Darwin'):
    server_root_tmp = FREEBSD_DARWIN_SERVER_ROOT
else:
    server_root_tmp = LINUX_SERVER_ROOT
    
        def decode(self, value):
        if value != self.resource_type:
            raise jose.DeserializationError(
                'Wrong resource type: {0} instead of {1}'.format(
                    value, self.resource_type))
        return value

    
        def setUp(self):
        self.decoded = datetime.datetime(2015, 3, 27, tzinfo=pytz.utc)
        self.encoded = '2015-03-27T00:00:00Z'
    
    # How to display URL addresses: 'footnote', 'no', or 'inline'.
#texinfo_show_urls = 'footnote'
    
    import os, json, imp
here = os.path.abspath(os.path.dirname(__file__))
proj_info = json.loads(open(os.path.join(here, PROJ_METADATA), encoding='utf-8').read())
try:
    README = open(os.path.join(here, 'README.rst'), encoding='utf-8').read()
except:
    README = ''
CHANGELOG = open(os.path.join(here, 'CHANGELOG.rst'), encoding='utf-8').read()
VERSION = imp.load_source('version', os.path.join(here, 'src/%s/version.py' % PACKAGE_NAME)).__version__
    
        #call extractor decided by sourceId
    if sourceType == 'sina':
        sina_download_by_vid(sourceId, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'youku':
        youku_download_by_vid(sourceId, title=title, output_dir=output_dir, merge=merge, info_only=info_only, **kwargs)
    elif sourceType == 'tudou':
        tudou_download_by_iid(sourceId, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'qq':
        qq_download_by_vid(sourceId, title, True, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'letv':
        letvcloud_download_by_vu(sourceId, '2d8c027396', title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'zhuzhan':
        #As in Jul.28.2016, Acfun is using embsig to anti hotlink so we need to pass this
#In Mar. 2017 there is a dedicated ``acfun_proxy'' in youku cloud player
#old code removed
        url = 'http://www.acfun.cn/v/ac' + vid
        yk_streams = youku_acfun_proxy(info['sourceId'], info['encode'], url)
        seq = ['mp4hd3', 'mp4hd2', 'mp4hd', 'flvhd']
        for t in seq:
            if yk_streams.get(t):
                preferred = yk_streams[t]
                break
#total_size in the json could be incorrect(F.I. 0)
        size = 0
        for url in preferred[0]:
            _, _, seg_size = url_info(url)
            size += seg_size
#fallback to flvhd is not quite possible
        print_info(site_info, title, 'mp4', size)
        if not info_only:
            download_urls(preferred[0], title, 'mp4', size, output_dir=output_dir, merge=merge)
    else:
        raise NotImplementedError(sourceType)
    
    
    def download_by_id(self, vid = '', title = None, output_dir='.', merge=True, info_only=False,**kwargs):
        '''self, str->None
        
        Keyword arguments:
        self: self
        vid: The video ID for BokeCC cloud, something like
        FE3BB999594978049C33DC5901307461
        
        Calls the prepare() to download the video.
        
        If no title is provided, this method shall try to find a proper title
        with the information providin within the
        returned content of the API.'''
    
    headers = {
    'DNT': '1',
    'Accept-Encoding': 'gzip, deflate, sdch, br',
    'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/49.0.2623.75 Safari/537.36',
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
    'Cache-Control': 'max-age=0',
    'Referer': 'http://www.dilidili.com/',
    'Connection': 'keep-alive',
    'Save-Data': 'on',
}
    
    	title = video.attributes['title'].value
	assert title 
    
        vids = matchall(content, tudou_embed_patterns)
    for vid in set(vids):
        found = True
        tudou_download_by_id(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    def get_api_key(page):
    match = match1(page, pattern_inline_api_key)
    # this happens only when the url points to a gallery page
    # that contains no inline api_key(and never makes xhr api calls)
    # in fact this might be a better approch for getting a temporary api key
    # since there's no place for a user to add custom infomation that may
    # misguide the regex in the homepage
    if not match:
        return match1(get_html('https://flickr.com'), pattern_inline_api_key)
    return match