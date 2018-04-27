
        
          def replicate_states(self, state_coll_name):
    state_list = self._metagraph.collection_def[state_coll_name]
    num_states = len(state_list.node_list.value)
    for replica_id in range(1, FLAGS.num_gpus):
      for i in range(num_states):
        state_list.node_list.value.append(state_list.node_list.value[i])
    for replica_id in range(FLAGS.num_gpus):
      for i in range(num_states):
        index = replica_id * num_states + i
        state_list.node_list.value[index] = with_autoparallel_prefix(
            replica_id, state_list.node_list.value[index])
    
      def setUp(self):
    FLAGS.train_data = os.path.join(self.get_temp_dir() + 'test-text.txt')
    FLAGS.eval_data = os.path.join(self.get_temp_dir() + 'eval-text.txt')
    FLAGS.save_path = self.get_temp_dir()
    with open(FLAGS.train_data, 'w') as f:
      f.write(
          '''alice was beginning to get very tired of sitting by her sister on
          the bank, and of having nothing to do: once or twice she had peeped
          into the book her sister was reading, but it had no pictures or
          conversations in it, 'and what is the use of a book,' thought alice
          'without pictures or conversations?' So she was considering in her own
          mind (as well as she could, for the hot day made her feel very sleepy
          and stupid), whether the pleasure of making a daisy-chain would be
          worth the trouble of getting up and picking the daisies, when suddenly
          a White rabbit with pink eyes ran close by her.\n''')
      with open(FLAGS.eval_data, 'w') as f:
        f.write('alice she rabbit once\n')
    
    
def from_pygtp(board_size, pygtpc):
  '''Converts from a pygtp coordinate to a MiniGo coordinate.'''
  # GTP has a notion of both a Pass and a Resign, both of which are mapped to
  # None, so the conversion is not precisely bijective.
  if pygtpc in (gtp.PASS, gtp.RESIGN):
    return None
  return board_size - pygtpc[1], pygtpc[0] - 1
    
        self.assertEqual(coords.to_sgf((0, 8)), 'ia')
    self.assertEqual(coords.to_flat(utils_test.BOARD_SIZE, (0, 8)), 8)
    self.assertEqual(coords.to_kgs(utils_test.BOARD_SIZE, (0, 8)), 'J9')
    self.assertEqual(coords.to_pygtp(utils_test.BOARD_SIZE, (0, 8)), (9, 9))
    
      def is_done(self):
    return self.result != 0 or self.root.is_done()
    
        'ipv6': re.compile(
        r'''^
            (?:{0}:){{7}}{0}|           # uncompressed: 1:2:3:4:5:6:7:8
            (?:{0}:){{1,6}}:|           # compressed variants, which are all
            (?:{0}:)(?::{0}){{1,6}}|    # a::b for various lengths of a,b
            (?:{0}:){{2}}(?::{0}){{1,5}}|
            (?:{0}:){{3}}(?::{0}){{1,4}}|
            (?:{0}:){{4}}(?::{0}){{1,3}}|
            (?:{0}:){{5}}(?::{0}){{1,2}}|
            (?:{0}:){{6}}(?::{0})|      # ...all with 2 <= a+b <= 7
            :(?::{0}){{1,6}}|           # ::ffff(:ffff...)
            {0}?::|                     # ffff::, ::
                                        # ipv4-in-ipv6 variants
            (?:0:){{6}}(?:{0}\.){{3}}{0}|
            ::(?:ffff:)?(?:{0}\.){{3}}{0}|
            (?:0:){{5}}ffff:(?:{0}\.){{3}}{0}
            $
        '''.format(ipv6_component), re.X | re.I
    ),
    
            try:
            url = '%s/roles/%d/%s/?page_size=50' % (self.baseurl, int(role_id), related)
            data = self.__call_galaxy(url)
            results = data['results']
            done = (data.get('next_link', None) is None)
            while not done:
                url = '%s%s' % (self._api_server, data['next_link'])
                data = self.__call_galaxy(url)
                results += data['results']
                done = (data.get('next_link', None) is None)
            return results
        except:
            return None
    
            params1 = {'three': 3, 'two': 2, 'one': 1}
        params2 = {'one': 1, 'two': 2, 'three': 3}
        actual = GCPUtils.are_params_equal(params1, params2)
        self.assertTrue(actual)
    
        terminal_stdout_re = [
        re.compile(r'[\r\n]?<.+>(?:\s*)$'),
        re.compile(r'[\r\n]?\[.+\](?:\s*)$'),
    ]
    
        dimensions = 500 * np.arange(1, n_iter + 1)
    
        return delta.seconds + delta.microseconds / mu_second
    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')
    
    from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.linear_model import Perceptron
from sklearn.pipeline import Pipeline
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
        in_exercise_region = False
    
    Second example
--------------
The second example shows the ability of the Minimum Covariance Determinant
robust estimator of covariance to concentrate on the main mode of the data
distribution: the location seems to be well estimated, although the covariance
is hard to estimate due to the banana-shaped distribution. Anyway, we can
get rid of some outlying observations.
The One-Class SVM is able to capture the real data structure, but the
difficulty is to adjust its kernel bandwidth parameter so as to obtain
a good compromise between the shape of the data scatter matrix and the
risk of over-fitting the data.
    
            cmap_group = Tk.Frame(fm)
        Tk.Radiobutton(cmap_group, text='Hyperplanes',
                       variable=controller.surface_type, value=0,
                       command=controller.refit).pack(anchor=Tk.W)
        Tk.Radiobutton(cmap_group, text='Surface',
                       variable=controller.surface_type, value=1,
                       command=controller.refit).pack(anchor=Tk.W)
    
    The dataset is generated using the ``make_biclusters`` function, which
creates a matrix of small values and implants bicluster with large
values. The rows and columns are then shuffled and passed to the
Spectral Co-Clustering algorithm. Rearranging the shuffled matrix to
make biclusters contiguous shows how accurately the algorithm found
the biclusters.
    
    # Plot boundaries of unit simplex
plt.plot([0.0, 1.0, 0.0, 0.0], [0.0, 0.0, 1.0, 0.0], 'k', label='Simplex')
    
        print('n = %d\n' % n)
    
            def c_string(init):
            size = len(init) + 1
            return (c_char*size)(*init)
    
            pt = pointer(Table(1, 2, 3))
    
        # __set__ and __get__ should raise a TypeError in case their self
    # argument is not a ctype instance.
    def test___set__(self):
        class MyCStruct(Structure):
            _fields_ = (('field', c_int),)
        self.assertRaises(TypeError,
                          MyCStruct.field.__set__, 'wrong type self', 42)
    
        parser = argparse.ArgumentParser(description = 'Download all the PDF/HTML links into README.md')
    parser.add_argument('-d', action='store', dest='directory')
    parser.add_argument('--no-html', action='store_true', dest='nohtml', default = False)
    parser.add_argument('--overwrite', action='store_true', default = False)    
    results = parser.parse_args()