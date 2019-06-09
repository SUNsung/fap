
        
            return clean
    
            while self.values[new_key] is not None and self.values[new_key] != key:
            new_key = self.__hash_double_function(key, data, i) if \
                self.balanced_factor() >= self.lim_charge else None
            if new_key is None: break 
            else: i += 1
    
            if isinstance(B,bytes):
            B = B.decode('ascii')
    
        for i in range(1, s+1):
        dp[0][i] = False
    
    from matplotlib import pyplot as plt
def plot_heterogeneity(heterogeneity, k):
    plt.figure(figsize=(7,4))
    plt.plot(heterogeneity, linewidth=4)
    plt.xlabel('# Iterations')
    plt.ylabel('Heterogeneity')
    plt.title('Heterogeneity of clustering over time, K={0:d}'.format(k))
    plt.rcParams.update({'font.size': 16})
    plt.show()
    
    
def commit_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/commit/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'commit ' + text, refuri=ref, **options)
    return [node], []
    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
        def prepare_request(self, spider, request, opts):
        def callback(response):
            # memorize first request
            if not self.first_response:
                self.first_response = response
    
        name = 'url'
    
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
    
        if twisted_version < (17, 0, 0):
        from twisted.internet._sslverify import _maybeSetHostNameIndication
        set_tlsext_host_name = _maybeSetHostNameIndication
    else:
        def set_tlsext_host_name(connection, hostNameBytes):
            connection.set_tlsext_host_name(hostNameBytes)
    
    
class RC4FileObject(object):
    '''fileobj for rc4'''
    def __init__(self, stream, key):
        self.__stream = stream
        self.__cipher = _Crypto_Cipher_ARC4_new(key) if key else lambda x:x
    def __getattr__(self, attr):
        if attr not in ('__stream', '__cipher'):
            return getattr(self.__stream, attr)
    def read(self, size=-1):
        return self.__cipher.encrypt(self.__stream.read(size))
    
    ## Anything on different channel than DEFAULT_CHANNEL is not parsed
# by parser.
HIDDEN_CHANNEL = 99
    
            # 更新聚类中心
        log.info(centers)
        for i in range(k):
            data_i = data[ret[:, 0] == i]  # 标签为 i 的样本
            centers[i, :] = np.mean(data_i, axis=0)  # 按类别过滤样本
    
    
def clip_relu(x, max_value):
    '''截断 ReLU
    `o = min(max(0., x), max_value)`
    '''
    o = tf.nn.relu(x)
    o = tf.minimum(o, max_value)
    return o
    
                with tf.Session() as sess:
                tf.global_variables_initializer().run()
                o_val = o.eval()
            ```
    
    if word_vec.any():  #
    word_vec = word_vec / max(1, ngrams_found)
else:  # 如果一个 ngram 都没找到，gensim 会报错；个人认为把 0 向量传出来也可以
    raise KeyError('all ngrams for word %s absent from model' % word_unk)