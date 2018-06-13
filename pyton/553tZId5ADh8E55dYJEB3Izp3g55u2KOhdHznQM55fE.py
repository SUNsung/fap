
        
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
    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
    # Allow direct execution
import os
import sys
import unittest
import collections
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
    
if __name__ == '__main__':
    unittest.main()

    
    
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
    
    py_test(
    name = 'mst_units_test',
    size = 'small',
    srcs = ['mst_units_test.py'],
    deps = [
        ':mst_units',
        ':network_units',
        '//dragnn/protos:spec_pb2_py',
        '@org_tensorflow//tensorflow:tensorflow_py',
    ],
)

    
        tf.logging.info('Loading params...')
    session.run('save/restore_all', {'save/Const:0': params_path})
    
        try:
      with open(FLAGS.expected_file) as expected:
        content_expected = expected.read()
    except IOError as e:
      self.fail('Error opening '%s': %s' % (FLAGS.expected_file, e.strerror))
    
      def testTaggerParser(self):
    self.RunFullTrainingAndInference(
        'tagger-parser',
        'tagger_parser_master_spec.textproto',
        component_weights=[0., 1., 1.],
        unroll_using_oracle=[False, True, True],
        expected_num_actions=12,
        expected=_TAGGER_PARSER_EXPECTED_SENTENCES)
    
      Args:
    num_nodes: [B] vector of graph sizes per batch item.
    scores: [B,M,M] tensor of padded batched arc and root scores, in the format
      used by the maximum_spanning_tree() op.  Padding values must be finite.
    forest: If true, sum over spanning forests instead of trees.
    max_dynamic_range: If specified, incoming scores for each node are clipped
      to at most this far from the maximum such score (in the log domain).
    
        cmd = cmd.split()
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    '''
import hashlib
import requests
    
            request_line = '{method} {path}{query} HTTP/1.1'.format(
            method=self._orig.method,
            path=url.path or '/',
            query='?' + url.query if url.query else ''
        )
    
    from httpie.plugins import plugin_manager
from httpie.context import Environment
    
                if args.check_status or downloader:
                exit_status = get_exit_status(
                    http_status=response.status_code,
                    follow=args.follow
                )
                if not env.stdout_isatty and exit_status != ExitStatus.OK:
                    log_error(
                        'HTTP %s %s', response.raw.status, response.raw.reason,
                        level='warning'
                    )
    
            :param mime: E.g., 'application/atom+xml'.
        :param content: The body content as text
    
        def load(self):
        super(Config, self).load()
        self._migrate_implicit_content_type()
    
        ERROR_TIMEOUT = 2
    ERROR_TOO_MANY_REDIRECTS = 6
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
        print('')
    print('')

    
    plt.show()

    
    plt.title('Clustering measures for random uniform labeling\n'
          'against reference assignment with %d classes' % n_classes)
plt.xlabel('Number of clusters (Number of samples is fixed to %d)' % n_samples)
plt.ylabel('Score value')
plt.ylim(ymin=-0.05, ymax=1.05)
plt.legend(plots, names)
plt.show()

    
    X = list()
y = list()
for i, (phi, a) in enumerate([(.5, .15), (.5, .6), (.3, .2)]):
    for _ in range(30):
        phase_noise = .01 * np.random.normal()
        amplitude_noise = .04 * np.random.normal()
        additional_noise = 1 - 2 * np.random.rand(n_features)
        # Make the noise sparse
        additional_noise[np.abs(additional_noise) < .997] = 0
    
    [1] 'Shrinkage Algorithms for MMSE Covariance Estimation'
Chen et al., IEEE Trans. on Sign. Proc., Volume 58, Issue 10, October 2010.
    
        def set_flags(self, flags):
        '''Set the given flags and unset all others.'''
        self._info = '2,' + ''.join(sorted(flags))
    
    int WINAPI WinMain(
    HINSTANCE hInstance,      // handle to current instance
    HINSTANCE hPrevInstance,  // handle to previous instance
    LPSTR lpCmdLine,          // pointer to command line
    int nCmdShow              // show state of window
    )
{
    extern int Py_FrozenMain(int, char **);
    PyImport_FrozenModules = _PyImport_FrozenModules;
    return Py_FrozenMain(__argc, __argv);
}
'''
    
        ''' Returns the machine type, e.g. 'i386'
    
        def close(self, close_when_done=None):
        if self.after_id:
            after_id = self.after_id
            self.after_id = None
            if DEBUG: print('cancel scheduled recolorizer')
            self.after_cancel(after_id)
        self.allow_colorizing = False
        self.stop_colorizing = True
        if close_when_done:
            if not self.colorizing:
                close_when_done.destroy()
            else:
                self.close_when_done = close_when_done
    
    @dataclasses.dataclass
class CV:
    T_CV4 = typing.ClassVar
    cv0: typing.ClassVar[int] = 20
    cv1: typing.ClassVar = 30
    cv2: T_CV2
    cv3: T_CV3
    not_cv4: T_CV4  # When using string annotations, this field is not recognized as a ClassVar.
    
    @dataclass
class IV:
    T_IV4 = InitVar
    iv0: InitVar[int]
    iv1: InitVar
    iv2: T_IV2
    iv3: T_IV3
    not_iv4: T_IV4  # When using string annotations, this field is not recognized as an InitVar.
