    # Are checkable fields missing from the test case definition?
    test_info_dict = dict((key, value if not isinstance(value, compat_str) or len(value) < 250 else 'md5:' + md5(value))
                          for key, value in got_dict.items()
                          if value and key in ('id', 'title', 'description', 'uploader', 'upload_date', 'timestamp', 'uploader_id', 'location', 'age_limit'))
    missing_keys = set(test_info_dict.keys()) - set(expected_dict.keys())
    if missing_keys:
        def _repr(v):
            if isinstance(v, compat_str):
                return ''%s'' % v.replace('\\', '\\\\').replace(''', '\\'').replace('\n', '\\n')
            else:
                return repr(v)
        info_dict_str = ''
        if len(missing_keys) != len(expected_dict):
            info_dict_str += ''.join(
                '    %s: %s,\n' % (_repr(k), _repr(v))
                for k, v in test_info_dict.items() if k not in missing_keys)
    
        def setUp(self):
        if self._SKIP_SOCKS_TEST:
            return
    
    
class TestUnicodeLiterals(unittest.TestCase):
    def test_all_files(self):
        for dirpath, dirnames, filenames in os.walk(rootDir):
            for ignore_dir in IGNORED_DIRS:
                if ignore_dir in dirnames:
                    # If we remove the directory from dirnames os.walk won't
                    # recurse into it
                    dirnames.remove(ignore_dir)
            for basename in filenames:
                if not basename.endswith('.py'):
                    continue
                if basename in IGNORED_FILES:
                    continue
    
    
class AcademicEarthCourseIE(InfoExtractor):
    _VALID_URL = r'^https?://(?:www\.)?academicearth\.org/playlists/(?P<id>[^?#/]+)'
    IE_NAME = 'AcademicEarth:Course'
    _TEST = {
        'url': 'http://academicearth.org/playlists/laws-of-nature/',
        'info_dict': {
            'id': 'laws-of-nature',
            'title': 'Laws of Nature',
            'description': 'Introduce yourself to the laws of nature with these free online college lectures from Yale, Harvard, and MIT.',
        },
        'playlist_count': 3,
    }
    
            return self._extract_nuevo(
            'http://www.anitube.se/nuevo/econfig.php?key=%s' % key, video_id)

    
            # TODO: handle s and e stage_mode (live streams and ended live streams)
        if stage_mode not in ('s', 'e'):
            request = sanitized_Request(
                'https://audimedia.tv/api/video/v1/videos/%s?embed[]=video_versions&embed[]=thumbnail_image&where[content_language_iso]=%s' % (video_id, lang),
                headers={'X-Auth-Token': self._AUTH_TOKEN})
            json_data = self._download_json(request, video_id)['results']
            formats = []
    
    
class AudiomackAlbumIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?audiomack\.com/album/(?P<id>[\w/-]+)'
    IE_NAME = 'audiomack:album'
    _TESTS = [
        # Standard album playlist
        {
            'url': 'http://www.audiomack.com/album/flytunezcom/tha-tour-part-2-mixtape',
            'playlist_count': 15,
            'info_dict':
            {
                'id': '812251',
                'title': 'Tha Tour: Part 2 (Official Mixtape)'
            }
        },
        # Album playlist ripped from fakeshoredrive with no metadata
        {
            'url': 'http://www.audiomack.com/album/fakeshoredrive/ppp-pistol-p-project',
            'info_dict': {
                'title': 'PPP (Pistol P Project)',
                'id': '837572',
            },
            'playlist': [{
                'info_dict': {
                    'title': 'PPP (Pistol P Project) - 9. Heaven or Hell (CHIMACA) ft Zuse (prod by DJ FU)',
                    'id': '837577',
                    'ext': 'mp3',
                    'uploader': 'Lil Herb a.k.a. G Herbo',
                }
            }],
            'params': {
                'playliststart': 9,
                'playlistend': 9,
            }
        }
    ]
    
        # TASK: Build a vectorizer / classifier pipeline that filters out tokens
    # that are too rare or too frequent
    pipeline = Pipeline([
        ('vect', TfidfVectorizer(min_df=3, max_df=0.95)),
        ('clf', LinearSVC(C=1000)),
    ])
    
    import numpy as np
from matplotlib import pyplot as plt
    
        ax1.plot([0, 1], [0, 1], 'k:', label='Perfectly calibrated')
    for clf, name in [(lr, 'Logistic'),
                      (est, name),
                      (isotonic, name + ' + Isotonic'),
                      (sigmoid, name + ' + Sigmoid')]:
        clf.fit(X_train, y_train)
        y_pred = clf.predict(X_test)
        if hasattr(clf, 'predict_proba'):
            prob_pos = clf.predict_proba(X_test)[:, 1]
        else:  # use decision function
            prob_pos = clf.decision_function(X_test)
            prob_pos = \
                (prob_pos - prob_pos.min()) / (prob_pos.max() - prob_pos.min())
    
    plt.grid('off')
for x in [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0]:
    plt.plot([0, x], [x, 0], 'k', alpha=0.2)
    plt.plot([0, 0 + (1-x)/2], [x, x + (1-x)/2], 'k', alpha=0.2)
    plt.plot([x, x + (1-x)/2], [0, 0 + (1-x)/2], 'k', alpha=0.2)
    
    plt.plot(features_samples_ratio, acc_clf1, linewidth=2,
         label='Linear Discriminant Analysis with shrinkage', color='navy')
plt.plot(features_samples_ratio, acc_clf2, linewidth=2,
         label='Linear Discriminant Analysis', color='gold')