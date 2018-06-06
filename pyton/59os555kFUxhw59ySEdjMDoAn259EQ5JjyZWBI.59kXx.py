        print('Training %s ... ' % name, end='')
        t0 = time()
        clf.fit(X_train, y_train)
        train_time[name] = time() - t0
        t0 = time()
        y_pred = clf.predict(X_test)
        test_time[name] = time() - t0
        accuracy[name] = accuracy_score(y_test, y_pred)
        print('done')
    
    html_folder = u'html'
text_folder = u'paragraphs'
short_text_folder = u'short_paragraphs'
n_words_per_short_text = 5
    
        def plot_kernels(self):
        self.ax.text(-50, -60, 'Linear: $u^T v$')
        self.ax.text(-20, -60, 'RBF: $\exp (-\gamma \| u-v \|^2)$')
        self.ax.text(10, -60, 'Poly: $(\gamma \, u^T v + r)^d$')
    
    from sklearn.datasets import make_checkerboard
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralBiclustering
from sklearn.metrics import consensus_score
    
    # Author: Alexandre Gramfort <alexandre.gramfort@inria.fr>
# License: BSD 3 clause
    
    from sklearn.datasets import make_blobs
from sklearn.discriminant_analysis import LinearDiscriminantAnalysis
    
    labels = ('Waveform 1', 'Waveform 2', 'Waveform 3')
    
    from setuptools import setup, find_packages
setup(
    name = proj_info['name'],
    version = VERSION,
    
    from ..common import *
from ..extractor import VideoExtractor
    
    	for video in tab.childNodes:
		if re.search(contentid, video.attributes['link'].value):
			url = video.attributes['flv'].value
			break
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
    
class HTTPClient(object):
    '''A blocking HTTP client.
    
            .. deprecated:: 5.0
    
        def _finish_request(self, future):
        self._clear_callbacks()
        if not self.is_client and self._disconnect_on_finish:
            self.close()
            return
        # Turn Nagle's algorithm back on, leaving the stream in its
        # default state for the next request.
        self.stream.set_nodelay(False)
        if not self._finish_future.done():
            future_set_result_unless_cancelled(self._finish_future, None)
    
    
class TwitterClientLoginHandlerLegacy(TwitterClientHandler):
    with ignore_deprecation():
        @asynchronous
        def get(self):
            if self.get_argument('oauth_token', None):
                self.get_authenticated_user(self.on_user)
                return
            self.authorize_redirect()
    
    
class Blackboard(object):
    
        def on_switchover(self):
        raise UnsupportedTransition
    
        def test_dog_adapter_shall_make_noise(self):
        dog = Dog()
        dog_adapter = Adapter(dog, make_noise=dog.bark)
        noise = dog_adapter.make_noise()
        expected_noise = 'woof!'
        self.assertEqual(noise, expected_noise)
    
    
class Action(object):
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        def test_cat_greek_localization(self):
        self.assertEqual(self.g.get('cat'), 'γάτα')