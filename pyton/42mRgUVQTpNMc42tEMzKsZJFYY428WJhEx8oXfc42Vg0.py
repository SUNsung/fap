
class Formatting(object):
    '''A delegate class that invokes the actual processors.'''
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
        def __init__(self, output_file=None,
                 resume=False, progress_file=sys.stderr):
        '''
        :param resume: Should the download resume if partial download
                       already exists.
        :type resume: bool
    
        '''
    BASE03 = '#1c1c1c'
    BASE02 = '#262626'
    BASE01 = '#4e4e4e'
    BASE00 = '#585858'
    BASE0 = '#808080'
    BASE1 = '#8a8a8a'
    BASE2 = '#d7d7af'
    BASE3 = '#ffffd7'
    YELLOW = '#af8700'
    ORANGE = '#d75f00'
    RED = '#af0000'
    MAGENTA = '#af005f'
    VIOLET = '#5f5faf'
    BLUE = '#0087ff'
    CYAN = '#00afaf'
    GREEN = '#5f8700'
    
        print('Classifier Training')
    print('===================')
    accuracy, train_time, test_time = {}, {}, {}
    for name in sorted(args['estimators']):
        clf = ESTIMATORS[name]
        try:
            clf.set_params(random_state=0)
        except (TypeError, ValueError):
            pass
    
    
if __name__ == '__main__':
    from glmnet.elastic_net import Lasso as GlmnetLasso
    from sklearn.linear_model import Lasso as ScikitLasso
    # Delayed import of matplotlib.pyplot
    import matplotlib.pyplot as plt
    
        n_samples = 2000
    list_n_features = np.linspace(500, 3000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, [n_samples],
                                           list_n_features, precompute=False)
    plt.subplot(212)
    plt.plot(list_n_features, lasso_results, 'b-', label='Lasso')
    plt.plot(list_n_features, lars_lasso_results, 'r-', label='LassoLars')
    plt.title('%d samples, alpha=%s' % (n_samples, alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    import numpy as np
import gc
from time import time
from collections import defaultdict
import matplotlib.pyplot as plt
from sklearn.datasets import fetch_lfw_people
from sklearn.decomposition import IncrementalPCA, RandomizedPCA, PCA
    
        return results
    
    # Print the classification report
print(metrics.classification_report(y_test, y_predicted,
                                    target_names=dataset.target_names))
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
    
def plot_calibration_curve(est, name, fig_index):
    '''Plot calibration curve for est w/o and with calibration. '''
    # Calibrated with isotonic calibration
    isotonic = CalibratedClassifierCV(est, cv=2, method='isotonic')
    
    The logistic regression is not a multiclass classifier out of the box. As
a result it can identify only the first class.
'''
print(__doc__)
    
        def __init__(self, a, b, input):
        RecognitionException.__init__(self, input)
    
    
    def getType(self):
        return self.type 
    
    	for video in tab.childNodes:
		if re.search(contentid, video.attributes['link'].value):
			url = video.attributes['flv'].value
			break
    
    
def huaban_download(url, output_dir='.', **kwargs):
    if re.match(r'http://huaban\.com/boards/\d+/', url):
        huaban_download_board(url, output_dir, **kwargs)
    else:
        print('Only board (画板) pages are supported currently')
        print('ex: http://huaban.com/boards/12345678/')
    
        def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
    def kugou_download_by_hash(title,hash_val,output_dir = '.', merge = True, info_only = False):
    #sample
    #url_sample:http://www.kugou.com/yy/album/single/536957.html
    #hash ->key  md5(hash+kgcloud')->key  decompile swf
    #cmd 4 for mp3 cmd 3 for m4a
    key=hashlib.new('md5',(hash_val+'kgcloud').encode('utf-8')).hexdigest()
    html=get_html('http://trackercdn.kugou.com/i/?pid=6&key=%s&acceptMp3=1&cmd=4&hash=%s'%(key,hash_val))
    j=loads(html)
    url=j['url']
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
    
    
    #----------------------------------------------------------------------
def sina_xml_to_url_list(xml_data):
    '''str->list
    Convert XML to URL List.
    From Biligrab.
    '''
    rawurl = []
    dom = parseString(xml_data)
    for node in dom.getElementsByTagName('durl'):
        url = node.getElementsByTagName('url')[0]
        rawurl.append(url.childNodes[0].data)
    return rawurl
    
    __all__ = ['mtv81_download']
    
            # construct available streams
        if orig_img: self.streams['original'] = {'url': orig_img}
        if twit_img: self.streams['small'] = {'url': twit_img}
    
            def mako_module_path(filename, uri):
            filename = filename.lstrip('/').replace('/', '-')
            path = os.path.join(module_directory, filename + '.py')
            return os.path.abspath(path)
    else:
        # disable caching templates since we don't know where they should go.
        module_directory = mako_module_path = None
    
            Always succeeds, even if the proxy has not yet been initialized.
        Normally, if the proxy hasn't been initialized, a `TypeError` is
        raised to indicate a programming error. To avoid crashing on feature
        checks that are done too early (e.g., during initial DB set-up of
        the pylons environment), this function will instead return `default`
        for an uninitialized proxy.
    
    
class DomainMiddleware(object):
    
        @require_oauth2_scope('creddits')
    @validate(
        VUser(),
        user=VAccountByName('username'),
        months=VInt('months', min=1, max=36),
        timeout=VNotInTimeout(),
    )
    @api_doc(
        api_section.gold,
        uri='/api/v1/gold/give/{username}',
    )
    def POST_give(self, user, months, timeout):
        self._gift_using_creddits(
            recipient=user,
            months=months,
            proxying_for=request.POST.get('proxying_for'),
        )

    
            # See if the target is already an existing friend.
        # If not, create the friend relationship.
        friend_rel = Account.get_friend(c.user, friend)
        rel_exists = bool(friend_rel)
        if not friend_rel:
            friend_rel = c.user.add_friend(friend)
            response.status = 201
    
    class CaptchaController(RedditController):
    @allow_oauth2_access
    @api_doc(api_section.captcha, uri='/captcha/{iden}')
    def GET_captchaimg(self, iden):
        '''
        Request a CAPTCHA image given an `iden`.