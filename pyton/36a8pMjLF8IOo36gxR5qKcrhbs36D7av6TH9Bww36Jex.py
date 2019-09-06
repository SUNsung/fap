
        
        
class CBSNewsIE(CBSIE):
    IE_NAME = 'cbsnews'
    IE_DESC = 'CBS News'
    _VALID_URL = r'https?://(?:www\.)?cbsnews\.com/(?:news|video)/(?P<id>[\da-z_-]+)'
    
                return d
    
    
class CBSBaseIE(ThePlatformFeedIE):
    def _parse_smil_subtitles(self, smil, namespace=None, subtitles_lang='en'):
        subtitles = {}
        for k, ext in [('sMPTE-TTCCURL', 'tt'), ('ClosedCaptionURL', 'ttml'), ('webVTTCaptionURL', 'vtt')]:
            cc_e = find_xpath_attr(smil, self._xpath_ns('.//param', namespace), 'name', k)
            if cc_e is not None:
                cc_url = cc_e.get('value')
                if cc_url:
                    subtitles.setdefault(subtitles_lang, []).append({
                        'ext': ext,
                        'url': cc_url,
                    })
        return subtitles
    
            thumbnails = []
        formats = []
        subtitles = {}
        for asset in video_data.get('assets'):
            if asset.get('id') == main_video_asset:
                for source in asset.get('sources', []):
                    source_location = source.get('location')
                    if not source_location:
                        continue
                    source_type = source.get('type')
                    if source_type == 'hls':
                        m3u8_formats = self._extract_m3u8_formats(
                            source_location, video_id, 'mp4',
                            'm3u8_native', m3u8_id='hls', fatal=False)
                        for f in m3u8_formats:
                            mobj = re.search(r'/hls-(\d+)-(\d+)K', f['url'])
                            if mobj:
                                height, tbr = mobj.groups()
                                height = int_or_none(height)
                                f.update({
                                    'height': f.get('height') or height,
                                    'width': f.get('width') or int_or_none(height / 9.0 * 16.0 if height else None),
                                    'tbr': f.get('tbr') or int_or_none(tbr),
                                })
                        formats.extend(m3u8_formats)
                    elif source_type == 'dash':
                        formats.extend(self._extract_mpd_formats(
                            source_location, video_id, mpd_id='dash', fatal=False))
                    else:
                        formats.append({
                            'format_id': source.get('name'),
                            'url': source_location,
                            'width': int_or_none(source.get('width')),
                            'height': int_or_none(source.get('height')),
                            'tbr': int_or_none(source.get('bitrate')),
                        })
    
    import os
import sys
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    
def main():
    with open('supportedsites.html.in', 'r', encoding='utf-8') as tmplf:
        template = tmplf.read()
    
    lazy_extractors_filename = sys.argv[1]
if os.path.exists(lazy_extractors_filename):
    os.remove(lazy_extractors_filename)
    
    # The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'
    
    
if __name__ == '__main__':
    unittest.main()

    
        def __iter__(self):
        fk = getattr(self.formset, 'fk', None)
        for field in self.fields:
            if not fk or fk.name != field:
                yield Fieldline(self.form, field, self.readonly_fields, model_admin=self.model_admin)
    
            response = self.client.get(reverse('admin:admin_inlines_binarytree_change', args=(bt_head.id,)))
        self.assertInHTML(max_forms_input % 2, response.rendered_content)
        self.assertInHTML(total_forms_hidden, response.rendered_content)
    
    
class FixDecimalInputMixin:
    
        def test_filtered_numerical_aggregates(self):
        for aggregate, expected_result in (
            (Avg, Approximate(66.7, 1)),
            (StdDev, Approximate(24.9, 1)),
            (Variance, Approximate(622.2, 1)),
        ):
            with self.subTest(aggregate=aggregate.__name__):
                agg = aggregate('age', filter=Q(name__startswith='test'))
                self.assertEqual(Author.objects.aggregate(age=agg)['age'], expected_result)
    
    
def register_converter(converter, type_name):
    REGISTERED_CONVERTERS[type_name] = converter()
    get_converters.cache_clear()
    
    
# For more information, see the OGR C API source code:
#  https://www.gdal.org/ogr__api_8h.html
#
# The OGR_F_* routines are relevant here.
class Feature(GDALBase):
    '''
    This class that wraps an OGR Feature, needs to be instantiated
    from a Layer object.
    '''
    destructor = capi.destroy_feature
    
            Number:                    '#990000',        # class: 'm'
    
    import idna
import urllib3
import chardet
    
        def test_generic_cookiejar_works(self, httpbin):
        cj = cookielib.CookieJar()
        cookiejar_from_dict({'foo': 'bar'}, cj)
        s = requests.session()
        s.cookies = cj
        r = s.get(httpbin('cookies'))
        # Make sure the cookie was sent
        assert r.json()['cookies']['foo'] == 'bar'
        # Make sure the session cj is still the custom one
        assert s.cookies is cj
    
        See https://github.com/kennethreitz/requests/issues/4965
    '''
    
        Usage::
    
    from codecs import open
    
    
class TestGetEnvironProxies:
    '''Ensures that IP addresses are correctly matches with ranges
    in no_proxy variable.
    '''
    
            # Create flat baselines to compare the variation over batch size
        all_times['pca'].extend([results_dict['pca']['time']] *
                                len(batch_sizes))
        all_errors['pca'].extend([results_dict['pca']['error']] *
                                 len(batch_sizes))
        all_times['rpca'].extend([results_dict['rpca']['time']] *
                                 len(batch_sizes))
        all_errors['rpca'].extend([results_dict['rpca']['error']] *
                                  len(batch_sizes))
        for batch_size in batch_sizes:
            ipca = IncrementalPCA(n_components=n_components,
                                  batch_size=batch_size)
            results_dict = {k: benchmark(est, data) for k, est in [('ipca',
                                                                   ipca)]}
            all_times['ipca'].append(results_dict['ipca']['time'])
            all_errors['ipca'].append(results_dict['ipca']['error'])
    
    REVISION_CMD = 'git rev-parse --short HEAD'
    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    data, row_idx, col_idx = sg._shuffle(data, random_state=0)
plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Shuffled dataset')
    
    data, row_idx, col_idx = sg._shuffle(data, random_state=0)
plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Shuffled dataset')
    
    We generate data from three groups of waveforms. Two of the waveforms
(waveform 1 and waveform 2) are proportional one to the other. The cosine
distance is invariant to a scaling of the data, as a result, it cannot
distinguish these two waveforms. Thus even with no noise, clustering
using this distance will not separate out waveform 1 and 2.
    
    The plots display firstly what a K-means algorithm would yield
using three clusters. It is then shown what the effect of a bad
initialization is on the classification process:
By setting n_init to only 1 (default is 10), the amount of
times that the algorithm will be run with different centroid
seeds is reduced.
The next plot displays what using eight clusters would deliver
and finally the ground truth.
    
    plt.figure()
for k in range(n_clusters):
    my_members = km.labels_ == k
    color = cm.nipy_spectral(float(k) / n_clusters, 1)
    plt.plot(X[my_members, 0], X[my_members, 1], 'o', marker='.', c=color)
    cluster_center = km.cluster_centers_[k]
    plt.plot(cluster_center[0], cluster_center[1], 'o',
             markerfacecolor=color, markeredgecolor='k', markersize=6)
    plt.title('Example cluster allocation with a single random init\n'
              'with MiniBatchKMeans')
    
    labels_unique = np.unique(labels)
n_clusters_ = len(labels_unique)
    
    import time as time
import numpy as np
import matplotlib.pyplot as plt
import mpl_toolkits.mplot3d.axes3d as p3
from sklearn.cluster import AgglomerativeClustering
from sklearn.datasets.samples_generator import make_swiss_roll
    
    The usual covariance maximum likelihood estimate can be regularized
using shrinkage. Ledoit and Wolf proposed a close formula to compute
the asymptotically optimal shrinkage parameter (minimizing a MSE
criterion), yielding the Ledoit-Wolf covariance estimate.
    
    plt.show()

    
            for detected_faces in batched_detected_faces:
            self.assertEqual(len(detected_faces), 1)
            self.assertEqual(detected_faces[0].rect.top(), 154)
            self.assertEqual(detected_faces[0].rect.bottom(), 390)
    
    print('I found {} face(s) in this photograph.'.format(len(face_landmarks_list)))
    
            # Some error-handling code
        self.check_roundtrip('try: import somemodule\n'
                             'except ImportError: # comment\n'
                             '    print('Can not import' # comment2\n)'
                             'else:   print('Loaded')\n')
    
            f = asyncio.ensure_future(outer(), loop=self.one_loop)
        test_utils.run_briefly(self.one_loop)
        self.assertTrue(f.cancel())
        with self.assertRaises(asyncio.CancelledError):
            self.one_loop.run_until_complete(f)
        self.assertFalse(gatherer.cancel())
        self.assertTrue(waiter.cancelled())
        self.assertTrue(child1.cancelled())
        self.assertTrue(child2.cancelled())
        test_utils.run_briefly(self.one_loop)
        self.assertEqual(proof, 0)
    
            expected_calls = [
            ('key', 'H'), ('value', 'W'),
            ('key', 'e'), ('value', 'o'),
            ('key', 'l'), ('value', 'r'),
            ('key', 'l'), ('value', 'l'),
            ('key', 'o'), ('value', 'd'),
        ]
    
        elif system == 'IRIX64':
        # IRIX reports IRIX64 on platforms with 64-bit support; yet it
        # is really a version and not a different platform, since 32-bit
        # apps are also supported..
        system = 'IRIX'
        if version:
            version = version + ' (64bit)'
        else:
            version = '64bit'
    
        print('== %s %s (%s) ==' % (
        platform.python_implementation(),
        platform.python_version(),
        platform.python_build()[0],
    ))
    # Processor identification often has repeated spaces
    cpu = ' '.join(platform.processor().split())
    print('== %s %s on '%s' ==' % (
        platform.machine(),
        platform.system(),
        cpu,
    ))
    print()
    
        # Initialize the queue representation
    def _init(self, maxsize):
        self.queue = deque()
    
        def test_weakref_clearing(self):
        brw = self.tp(self.MockRawIO(), self.MockRawIO())
        ref = weakref.ref(brw)
        brw = None
        ref = None # Shouldn't segfault.
    
        # Setting O_TEMPORARY in the flags causes the OS to delete
    # the file when it is closed.  This is only supported by Windows.
    if _os.name == 'nt' and delete:
        flags |= _os.O_TEMPORARY
    
        def open(self, url, new=0, autoraise=True):
        sys.audit('webbrowser.open', url)
        if new == 0:
            action = self.remote_action
        elif new == 1:
            action = self.remote_action_newwin
        elif new == 2:
            if self.remote_action_newtab is None:
                action = self.remote_action_newwin
            else:
                action = self.remote_action_newtab
        else:
            raise Error('Bad 'new' parameter to open(); ' +
                        'expected 0, 1, or 2, got %s' % new)
    
    if sys.platform == 'darwin':
    _cfg_target = None
    _cfg_target_split = None
    
        def test_facebook_login(self):
        response = self.fetch('/facebook/client/login', follow_redirects=False)
        self.assertEqual(response.code, 302)
        self.assertTrue('/facebook/server/authorize?' in response.headers['Location'])
        response = self.fetch(
            '/facebook/client/login?code=1234', follow_redirects=False
        )
        self.assertEqual(response.code, 200)
        user = json_decode(response.body)
        self.assertEqual(user['access_token'], 'asdf')
        self.assertEqual(user['session_expires'], '3600')
    
                @run_on_executor(executor='_Object__executor')
            def f(self):
                return 42
    
    
if __name__ == '__main__':
    main()
    
            print('Two or more elements')
        data = [5, 1, 7, 2, 6, -3, 5, 7, -1]
        assert_equal(merge_sort.sort(data), sorted(data))
    
    
class TestStack(object):
    
    def main():
    testing = TestBinaryTree()
    testing.test_insert_traversals()
    testing.test_max_min_nodes()
    testing.test_delete()
    
if __name__=='__main__':
    main()
    
    
if __name__ == '__main__':
    main()
    
        def extract_min(self):
        if not self.array:
            return None
        minimum = sys.maxsize
        for index, node in enumerate(self.array):
            if node.key < minimum:
                minimum = node.key
                minimum_index = index
        return self.array.pop(minimum_index)
    
            self.action_space = spaces.Discrete(int(max_wealth * 100))  # betting in penny
        # increments
        self.observation_space = spaces.Tuple((
            spaces.Box(0, max_wealth, [1], dtype=np.float32),  # (w,b)
            spaces.Discrete(max_rounds + 1)))
        self.reward_range = (0, max_wealth)
        self.edge = edge
        self.wealth = initial_wealth
        self.initial_wealth = initial_wealth
        self.max_rounds = max_rounds
        self.max_wealth = max_wealth
        self.np_random = None
        self.rounds = None
        self.seed()
        self.reset()
    
        def _get_obs(self):
        data = self.sim.data
        return np.concatenate([data.qpos.flat[2:],
                               data.qvel.flat,
                               data.cinert.flat,
                               data.cvel.flat,
                               data.qfrc_actuator.flat,
                               data.cfrc_ext.flat])
    
            # Calculate initial state distribution
        # We always start in state (3, 0)
        isd = np.zeros(nS)
        isd[self.start_state_index] = 1.0
    
    def warn(msg, *args):
    if MIN_LEVEL <= WARN:
        warnings.warn(colorize('%s: %s'%('WARN', msg % args), 'yellow'))
    
            k1 = np.asarray(derivs(y0, thist, *args, **kwargs))
        k2 = np.asarray(derivs(y0 + dt2 * k1, thist + dt2, *args, **kwargs))
        k3 = np.asarray(derivs(y0 + dt2 * k2, thist + dt2, *args, **kwargs))
        k4 = np.asarray(derivs(y0 + dt * k3, thist + dt, *args, **kwargs))
        yout[i + 1] = y0 + dt / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4)
    return yout

    
          feature = InputFeatures(
          unique_id=unique_id,
          example_index=example_index,
          doc_span_index=doc_span_index,
          tokens=tokens,
          token_to_orig_map=token_to_orig_map,
          token_is_max_context=token_is_max_context,
          input_ids=input_ids,
          input_mask=input_mask,
          segment_ids=segment_ids,
          start_position=start_position,
          end_position=end_position,
          is_impossible=example.is_impossible)
    
    
def create_training_instances(input_files, tokenizer, max_seq_length,
                              dupe_factor, short_seq_prob, masked_lm_prob,
                              max_predictions_per_seq, rng):
  '''Create `TrainingInstance`s from raw text.'''
  all_documents = [[]]
    
          output_spec = tf.contrib.tpu.TPUEstimatorSpec(
          mode=mode,
          loss=total_loss,
          train_op=train_op,
          scaffold_fn=scaffold_fn)
    elif mode == tf.estimator.ModeKeys.EVAL:
    
        eval_drop_remainder = True if FLAGS.use_tpu else False
    eval_input_fn = run_classifier.input_fn_builder(
        features=eval_features,
        seq_length=FLAGS.max_seq_length,
        is_training=False,
        drop_remainder=eval_drop_remainder)
    
      # The casing has to be passed in by the user and there is no explicit check
  # as to whether it matches the checkpoint. The casing information probably
  # should have been stored in the bert_config.json file, but it's not, so
  # we have to heuristically detect it to validate.