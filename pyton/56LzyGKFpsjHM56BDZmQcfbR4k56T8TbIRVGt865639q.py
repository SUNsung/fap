
        
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
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    entries = []
for v in versions:
    fields = v.split('.')
    year, month, day = map(int, fields[:3])
    faked = 0
    patchlevel = 0
    while True:
        try:
            datetime.date(year, month, day)
        except ValueError:
            day -= 1
            faked += 1
            assert day > 0
            continue
        break
    if len(fields) >= 4:
        try:
            patchlevel = int(fields[3])
        except ValueError:
            patchlevel = 1
    timestamp = '%04d-%02d-%02dT00:%02d:%02dZ' % (year, month, day, faked, patchlevel)
    
        # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        _ALL_CLASSES = [
        klass
        for name, klass in globals().items()
        if name.endswith('IE') and name != 'GenericIE'
    ]
    _ALL_CLASSES.append(GenericIE)
    
            webpage = self._download_webpage(url, video_id)
        key = self._search_regex(
            r'src=['\']https?://[^/]+/embed/([A-Za-z0-9_-]+)', webpage, 'key')
    
            title = self._html_search_regex(r'<title>(.*?)</title>', webpage, 'title')
        description = self._html_search_regex(
            r'<div class='description'[^>]*>([^<]+)</div>', webpage, 'description', fatal=False)
        thumbnail = self._html_search_regex(
            r'preview_url\s*:\s*\'(.*?)\'', webpage, 'thumbnail', fatal=False)
    
    
class AudiMediaIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?audi-mediacenter\.com/(?:en|de)/audimediatv/(?P<id>[^/?#]+)'
    _TEST = {
        'url': 'https://www.audi-mediacenter.com/en/audimediatv/60-seconds-of-audi-sport-104-2015-wec-bahrain-rookie-test-1467',
        'md5': '79a8b71c46d49042609795ab59779b66',
        'info_dict': {
            'id': '1565',
            'ext': 'mp4',
            'title': '60 Seconds of Audi Sport 104/2015 - WEC Bahrain, Rookie Test',
            'description': 'md5:60e5d30a78ced725f7b8d34370762941',
            'upload_date': '20151124',
            'timestamp': 1448354940,
            'duration': 74022,
            'view_count': int,
        }
    }
    # extracted from https://audimedia.tv/assets/embed/embedded-player.js (dataSourceAuthToken)
    _AUTH_TOKEN = 'e25b42847dba18c6c8816d5d8ce94c326e06823ebf0859ed164b3ba169be97f2'
    
    import itertools
import time
    
            # Video URL construction algorithm is reverse-engineered from cwhplayer.swf
        rtmp_url = 'rtmp://camwithher.tv/clipshare/%s' % (
            ('mp4:%s.mp4' % flv_id) if int(flv_id) > 2010 else flv_id)
    
        def to_python(self, value):
        return parse_date(value)
    
            :param obj: an import name or object
        '''
        if isinstance(obj, string_types):
            obj = import_string(obj)
        for key in dir(obj):
            if key.isupper():
                self[key] = getattr(obj, key)
    
        logger.propagate = False
    assert not has_level_handler(logger)
    logger.propagate = True
    
    
def build_feature_placeholders(config):
  '''Builds tf.Placeholder ops for feeding model features and labels.
    
      if not os.path.exists(filepath):
    def _progress(count, block_size, total_size):
      sys.stdout.write('\r>> Downloading %s %.1f%%' % (
          filename, 100.0 * count * block_size / total_size))
      sys.stdout.flush()
    
      Print the performance on the validation set, and update the saved model if
  its performance is better on the previous ones. If the performance dropped,
  tell the training to stop.
    
    '''Trains the LexNET path-based model.'''
from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      # Print the confusion matrix
  print('%s confusion matrix:' % set_name)
  cm = metrics.confusion_matrix(labels, pred, labels=range(len(classes)))
  cm = cm.astype('float') / cm.sum(axis=1)[:, np.newaxis] * 100
  print_cm(cm, labels=classes)
  return pred
    
      Args:
    data_path: The path to the save directory.
    data_fname_stem: The filename stem of the file in which to write the data.
    dataset_dict:  The dictionary of datasets. The keys are strings
      and the values data dictionaries (str -> numpy arrays) associations.
    compression (optional): The compression to use for h5py (disabled by
      default because the library borks on scalars, otherwise try 'gzip').
  '''
    
        def current_loid_obj(self):
        return self.stacked_proxy_safe_get(c, 'loid')
    
    api('modaction', ModActionTemplate)
    
        @csrf_exempt
    @json_validate(
        signature=VSigned(),
        user=VThrottledLogin(['user', 'passwd']),
    )
    def POST_login(self, responder, user, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            user=user,
        ))
        return handle_login(**kwargs)
    
        @validate(VAdmin())
    def GET_index(self):
        res = AdminPage(content = AdminAwards(),
                        title = 'awards').render()
        return res
    
    from reddit_base import RedditController
import StringIO
import r2.lib.captcha as captcha
from pylons import response