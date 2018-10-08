
        
            def __init__(self, results):
        self.results = results
        self.next = next
    
    
class DefaultCategories(Enum):
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
      # Print rows
  for i, label1 in enumerate(short_labels):
    row = '%{0}s '.format(columnwidth) % label1[:10]
    for j in range(len(short_labels)):
      value = int(cm[i, j]) if not np.isnan(cm[i, j]) else 0
      cell = ' %{0}d '.format(10) % value
      row += cell + ' '
    print(row)
    
    # Write out the datasets.
write_datasets(FLAGS.save_dir, FLAGS.datafile_name, datasets)

    
    # add train_ext_input and valid_ext input
data = {'train_truth': rates_train,
        'valid_truth': rates_valid,
        'train_data' : spikes_train,
        'valid_data' : spikes_valid,
        'train_ext_input' : np.array(ext_input_train),
        'valid_ext_input': np.array(ext_input_valid),
        'train_percentage' : train_percentage,
        'nreplications' : nreplications,
        'dt' : FLAGS.dt,
        'P_sxn' : P_nxn,
        'condition_labels_train' : condition_labels_train,
        'condition_labels_valid' : condition_labels_valid,
        'conversion_factor': 1.0 / rnn_a['conversion_factor']}
    
    
def generate_rnn(rng, N, g, tau, dt, max_firing_rate):
  '''Create a (vanilla) RNN with a bunch of hyper parameters for generating
chaotic data.
  Args:
    rng: numpy random number generator
    N: number of hidden units
    g: scaling of recurrent weight matrix in g W, with W ~ N(0,1/N)
    tau: time scale of individual unit dynamics
    dt: time step for equation updates
    max_firing_rate: how to resecale the -1,1 firing rates
  Returns:
    the dictionary of these parameters, plus some others.
'''
  rnn = {}
  rnn['N'] = N
  rnn['W'] = rng.randn(N,N)/np.sqrt(N)
  rnn['Bin'] = rng.randn(N)/np.sqrt(1.0)
  rnn['Bin2'] = rng.randn(N)/np.sqrt(1.0)
  rnn['b'] = np.zeros(N)
  rnn['g'] = g
  rnn['tau'] = tau
  rnn['dt'] = dt
  rnn['max_firing_rate'] = max_firing_rate
  mfr = rnn['max_firing_rate']                   # spikes / sec
  nbins_per_sec = 1.0/rnn['dt']                  # bins / sec
  # Used for plotting in LFADS
  rnn['conversion_factor'] = mfr / nbins_per_sec # spikes / bin
  return rnn
    
          scorings.append(dict(
          correctness=correctness,
          sentence=sentence,
          joint_prob=joint_prob,
          word_probs=word_probs))
    scoring_mode = 'full' if self.test_data_name == 'pdp60' else 'partial'
    return utils.compare_substitutions(
        self.question_ids, scorings, scoring_mode)
    
      Raises:
    ValueError: if batch_size or num_steps are too high.
  '''
  raw_data = np.array(raw_data, dtype=np.int32)
    
    
def print_and_log(log, id_to_word, sequence_eval, max_num_to_print=5):
  '''Helper function for printing and logging evaluated sequences.'''
  indices_eval = convert_to_indices(sequence_eval)
  indices_arr = np.asarray(indices_eval)
  samples = convert_to_human_readable(id_to_word, indices_arr, max_num_to_print)
    
      Args:
    encoder_state: The encoded state to initialize the `dynamic_rnn_decoder`.
    attention_keys: to be compared with target states.
    attention_values: to be used to construct context vectors.
    attention_score_fn: to compute similarity between key and target states.
    attention_construct_fn: to build attention states.
    name: (default: `None`) NameScope for the decoder function;
      defaults to 'simple_decoder_fn_train'
    
        '''
    req_h = OUT_REQ_HEAD in output_options
    req_b = OUT_REQ_BODY in output_options
    resp_h = OUT_RESP_HEAD in output_options
    resp_b = OUT_RESP_BODY in output_options
    req = req_h or req_b
    resp = resp_h or resp_b
    
    from httpie import ExitStatus
from utils import http, HTTP_OK
    
        paths = []
    for fname in files:
        paths.append(get_file(fname,
                              origin=base + fname,
                              cache_subdir=dirname))
    
    
def convert_dense_weights_data_format(dense,
                                      previous_feature_map_shape,
                                      target_data_format='channels_first'):
    '''Utility useful when changing a convnet's `data_format`.
    
    
def test_preprocess_input():
    # Test image batch with float and int image input
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int32')
    assert utils.preprocess_input(x).shape == x.shape
    assert utils.preprocess_input(xint).shape == xint.shape
    
            To enable statefulness:
            - specify `stateful=True` in the layer constructor.
            - specify a fixed batch size for your model, by passing
                if sequential model:
                  `batch_input_shape=(...)` to the first layer in your model.
                else for functional model with 1 or more Input layers:
                  `batch_shape=(...)` to all the first layers in your model.
                This is the expected shape of your inputs
                *including the batch size*.
                It should be a tuple of integers, e.g. `(32, 10, 100)`.
            - specify `shuffle=False` when calling fit().
    
        nones = _get_dynamic_axis_num(x)
    for _ in sorted(_axis, reverse=True):
        del shape[_]
    
        out = T.batched_tensordot(x, y, axes=axes)
    if ndim(out) == 1:
        out = expand_dims(out, 1)
    
    
def is_setting_index(node):
    if node.tagname == 'index':
        # index entries for setting directives look like:
        # [(u'pair', u'SETTING_NAME; setting', u'std:setting-SETTING_NAME', '')]
        entry_type, info, refid = node['entries'][0][:3]
        return entry_type == 'pair' and info.endswith('; setting')
    return False
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
        def update_vars(self, vars):
        '''You can use this function to update the Scrapy objects that will be
        available in the shell
        '''
        pass
    
                # backward-compatible SSL/TLS method:
            #
            # * this will respect `method` attribute in often recommended
            #   `ScrapyClientContextFactory` subclass
            #   (https://github.com/scrapy/scrapy/issues/1429#issuecomment-131782133)
            #
            # * getattr() for `_ssl_method` attribute for context factories
            #   not calling super(..., self).__init__
            return CertificateOptions(verify=False,
                        method=getattr(self, 'method',
                                       getattr(self, '_ssl_method', None)),
                        fixBrokenPeers=True,
                        acceptableCiphers=DEFAULT_CIPHERS)
    
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
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
            self.title = match1(html, r'<meta property='og:title' content='([^']*)'')
    
    __all__ = ['cbs_download']
    
        def prepare(self, **kwargs):
        self.api_data = json.loads(get_content(self.__class__.ep.format(self.vid)))
        self.title = self.api_data['title']
        for s in self.api_data['video']:
            for st in self.__class__.stream_types:
                if st['map_to'] == s:
                    urls = self.api_data['video'][s]
                    src = [u['url'] for u in urls]
                    stream_data = dict(src=src, size=0, container='mp4', video_profile=st['video_profile'])
                    self.streams[st['id']] = stream_data
    
        # Try harder, check all iframes
    if 'recur_lv' not in kwargs or kwargs['recur_lv'] < recur_limit:
        r = kwargs.get('recur_lv')
        if r is None:
            r = 1
        else:
            r += 1
        iframes = matchall(content, [r'<iframe.+?src=(?:\'|\')(.+?)(?:\'|\')'])
        for iframe in iframes:
            if not iframe.startswith('http'):
                src = urllib.parse.urljoin(url, iframe)
            else:
                src = iframe
            found = embed_download(src, output_dir=output_dir, merge=merge, info_only=info_only, recur_lv=r, **kwargs)
            if found:
                return True
    
        sd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'sd_src_no_ratelimit:'([^']*)'', html)
    ]))
    hd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'hd_src_no_ratelimit:'([^']*)'', html)
    ]))
    urls = hd_urls if hd_urls else sd_urls
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
    def get_url_of_largest(info, api_key, size):
    if info['media'] == 'photo':
        sizes = size_suffixes
        if size in sizes:
            sizes = sizes[sizes.index(size):]
        for suffix in sizes:
            if 'url_' + suffix in info:
                return info['url_' + suffix].replace('\\', '')
        return None
    else:
        return get_orig_video_source(api_key, info['id'], info['secret'])
    
    
def _raw_face_locations(img, number_of_times_to_upsample=1, model='hog'):
    '''
    Returns an array of bounding boxes of human faces in a image
    
            name = 'Unknown'
    
        # Scale down image if it's giant so things run a little faster
    if max(unknown_image.shape) > 1600:
        pil_img = PIL.Image.fromarray(unknown_image)
        pil_img.thumbnail((1600, 1600), PIL.Image.LANCZOS)
        unknown_image = np.array(pil_img)