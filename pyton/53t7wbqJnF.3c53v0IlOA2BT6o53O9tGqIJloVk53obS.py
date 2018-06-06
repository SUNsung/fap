
        
        filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
            webpage = self._download_webpage(url, video_id)
        key = self._search_regex(
            r'src=['\']https?://[^/]+/embed/([A-Za-z0-9_-]+)', webpage, 'key')
    
    import re
    
            return {
            'id': audio_id,
            'title': title,
            'description': description,
            'duration': duration,
            'timestamp': timestamp,
            'formats': formats,
        }

    
        def save_session(self, app, session, response):
        '''This is called for actual sessions returned by :meth:`open_session`
        at the end of the request.  This is still called during a request
        context so if you absolutely need access to the request you can do
        that.
        '''
        raise NotImplementedError()
    
    # The namespace for code signals.  If you are not Flask code, do
# not put signals in here.  Create your own namespace instead.
_signals = Namespace()
    
        Tests the request context.
    
        rv = client.get('/')
    assert rv.data == b'dcba'
    
    containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
    
class HTTPRequest(HTTPMessage):
    '''A :class:`requests.models.Request` wrapper.'''
    
    import pytest
    
    from httpie.plugins.base import AuthPlugin
    
        def test_verify_no_OK(self, httpbin_secure):
        r = http(httpbin_secure.url + '/get', '--verify=no')
        assert HTTP_OK in r
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
                else:
                # Set the URL correctly
                self.args.url = self.args.method
                # Infer the method
                has_data = (
                    (not self.args.ignore_stdin and
                     not self.env.stdin_isatty) or
                    any(item.sep in SEP_GROUP_DATA_ITEMS
                        for item in self.args.items)
                )
                self.args.method = HTTP_POST if has_data else HTTP_GET
    
            credentials = {'username': None, 'password': None}
        try:
            # New style
            plugin.raw_auth = auth['raw_auth']
        except KeyError:
            # Old style
            credentials = {
                'username': auth['username'],
                'password': auth['password'],
            }
        else:
            if plugin.auth_parse:
                from httpie.input import parse_auth
                parsed = parse_auth(plugin.raw_auth)
                credentials = {
                    'username': parsed.key,
                    'password': parsed.value,
                }
    
    In both cases, only 10% of the features are informative.
'''
import gc
from time import time
import numpy as np
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
        ratio = n_samples / opts.n_population
    
      * scikit-learn
    
    
# The training data folder must be passed as first argument
languages_data_folder = sys.argv[1]
dataset = load_files(languages_data_folder)
    
    plt.figure(2)  # 'banana' shape
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X2[:, 0], X2[:, 1], color='black')
plt.xlim((xx2.min(), xx2.max()))
plt.ylim((yy2.min(), yy2.max()))
plt.legend((legend2_values_list[0].collections[0],
            legend2_values_list[1].collections[0],
            legend2_values_list[2].collections[0]),
           (legend2_keys_list[0], legend2_keys_list[1], legend2_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('% lower status of the population')
plt.xlabel('average number of rooms per dwelling')
    
    from sklearn.cluster import AgglomerativeClustering
from sklearn.metrics import pairwise_distances
    
        keyboard = pykeyboard.PyKeyboard()
    keyboard.special_key_assignment()
    
        if unit_2 == LENGTH_MILES:
        result = __meters_to_miles(meters)
    elif unit_2 == LENGTH_FEET:
        result = __meters_to_feet(meters)
    elif unit_2 == LENGTH_KILOMETERS:
        result = __meters_to_kilometers(meters)
    
        # pylint: disable=no-self-use
    def test_from_event(self):
        '''Test converting event to db event.'''
        event = ha.Event('test_event', {
            'some_data': 15
        })
        assert event == Events.from_event(event).to_native()