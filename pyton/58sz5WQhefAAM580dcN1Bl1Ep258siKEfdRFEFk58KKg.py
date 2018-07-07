
        
            def test_youtube_playlist_matching(self):
        assertPlaylist = lambda url: self.assertMatch(url, ['youtube:playlist'])
        assertPlaylist('ECUl4u3cNGP61MdtwGTqZA0MreSaDybji8')
        assertPlaylist('UUBABnxM4Ar9ten8Mdjj1j0Q')  # 585
        assertPlaylist('PL63F0C78739B09958')
        assertPlaylist('https://www.youtube.com/playlist?list=UUBABnxM4Ar9ten8Mdjj1j0Q')
        assertPlaylist('https://www.youtube.com/course?list=ECUl4u3cNGP61MdtwGTqZA0MreSaDybji8')
        assertPlaylist('https://www.youtube.com/playlist?list=PLwP_SiAcdui0KVebT0mU9Apz359a4ubsC')
        assertPlaylist('https://www.youtube.com/watch?v=AV6J6_AeFEQ&playnext=1&list=PL4023E734DA416012')  # 668
        self.assertFalse('youtube:playlist' in self.matching_ies('PLtS2H6bU1M'))
        # Top tracks
        assertPlaylist('https://www.youtube.com/playlist?list=MCUS.20142101')
    
            self.port = random.randint(20000, 30000)
        self.server_process = subprocess.Popen([
            'srelay', '-f', '-i', '127.0.0.1:%d' % self.port],
            stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    
            webpage = self._download_webpage(url, video_id)
        key = self._search_regex(
            r'src=['\']https?://[^/]+/embed/([A-Za-z0-9_-]+)', webpage, 'key')
    
        @app.errorhandler(Foo)
    def handle_foo(e):
        return str(e.whatever)
    
        data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
        plt.figlegend((c_bar, q_bar), ('construction', 'N-point query'),
                  'upper right')
    
    
def rbf_kernels(X, n_jobs):
    return pairwise_kernels(X, metric='rbf', n_jobs=n_jobs, gamma=0.1)
    
        url_fmt is along the lines of ('https://github.com/USER/PROJECT/'
                                   'blob/{revision}/{package}/'
                                   '{path}#L{lineno}')
    '''
    revision = _get_git_revision()
    return partial(_linkcode_resolve, revision=revision, package=package,
                   url_fmt=url_fmt)

    
    
# TASK: Build a vectorizer that splits strings into sequence of 1 to 3
# characters instead of word tokens
    
    
def generate_data(n_samples, n_features):
    '''Generate random blob-ish data with noisy features.
    
    We generate data from three groups of waveforms. Two of the waveforms
(waveform 1 and waveform 2) are proportional one to the other. The cosine
distance is invariant to a scaling of the data, as a result, it cannot
distinguish these two waveforms. Thus even with no noise, clustering
using this distance will not separate out waveform 1 and 2.
    
        #print(len(urls))
    
    
class AbstractExpert(object):
    
            self.assertEqual(noise, expected_noise)

    
        def test_items_recoil(self):
        with ObjectPool(self.sample_queue, True) as pool:
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
        def test_bunch_launch(self):
        self.runner.runAll()
        output = self.out.getvalue().strip()
        self.assertEqual(output, str(self.average_result_tc1 + '\n\n' +
                         self.average_result_tc2 + '\n\n' +
                         self.average_result_tc3))

    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
    class ConstructorInjectionTest(unittest.TestCase):
    
        def __init__(self, param):