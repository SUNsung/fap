
        
        
@pytest.fixture(autouse=True)
def usage_tracker_io(usage_tracker):
    io = StringIO()
    usage_tracker.return_value \
                 .open.return_value \
                 .__enter__.return_value = io
    return io
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
    X -= X.mean(axis=0)
X /= X.std(axis=0)
    
            start = time.time()
        func(X, n_jobs=-1)
        multi_core.append(time.time() - start)
    
    File: sparsity_benchmark.py
Function: benchmark_dense_predict at line 51
Total time: 0.532979 s
    
        This is called by sphinx.ext.linkcode
    
    # Plot the results (= shape of the data points cloud)
plt.figure(1)  # two clusters
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X1[:, 0], X1[:, 1], color='black')
bbox_args = dict(boxstyle='round', fc='0.8')
arrow_args = dict(arrowstyle='->')
plt.annotate('several confounded points', xy=(24, 19),
             xycoords='data', textcoords='data',
             xytext=(13, 10), bbox=bbox_args, arrowprops=arrow_args)
plt.xlim((xx1.min(), xx1.max()))
plt.ylim((yy1.min(), yy1.max()))
plt.legend((legend1_values_list[0].collections[0],
            legend1_values_list[1].collections[0],
            legend1_values_list[2].collections[0]),
           (legend1_keys_list[0], legend1_keys_list[1], legend1_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('accessibility to radial highways')
plt.xlabel('pupil-teacher ratio by town')
    
    The dataset is generated using the ``make_biclusters`` function, which
creates a matrix of small values and implants bicluster with large
values. The rows and columns are then shuffled and passed to the
Spectral Co-Clustering algorithm. Rearranging the shuffled matrix to
make biclusters contiguous shows how accurately the algorithm found
the biclusters.
    
    
#----------------------------------------------------------------------
# Visualize the clustering
def plot_clustering(X_red, labels, title=None):
    x_min, x_max = np.min(X_red, axis=0), np.max(X_red, axis=0)
    X_red = (X_red - x_min) / (x_max - x_min)
    
    Dorin Comaniciu and Peter Meer, 'Mean Shift: A robust approach toward
feature space analysis'. IEEE Transactions on Pattern Analysis and
Machine Intelligence. 2002. pp. 603-619.
    
        @classmethod
    def marshal(cls, input_data):
        return pickle.dumps(input_data)
    
        def draw_landmarks(self, color_id=3, radius=1):
        ''' Draw the facial landmarks '''
        color = self.colors[color_id]
        for alignment in self.alignments:
            landmarks = alignment['landmarksXY']
            logger.trace('Drawing Landmarks: (landmarks: %s, color: %s, radius: %s)',
                         landmarks, color, radius)
            for (pos_x, pos_y) in landmarks:
                cv2.circle(self.image,  # pylint: disable=no-member
                           (pos_x, pos_y),
                           radius,
                           color,
                           -1)
    
        def __init__(self):
        gpu_stats = GPUStats(log=False)
    
            folder:     folder alignments file is stored in
        filename:   Filename of alignments file excluding extension. If a
                    valid extension is provided, then it will be used to
                    decide the serializer, and the serializer argument will
                    be ignored.
        serializer: If provided, this will be the format that the data is
                    saved in (if data is to be saved). Can be 'json', 'pickle'
                    or 'yaml'
    '''
    # pylint: disable=too-many-public-methods
    def __init__(self, folder, filename='alignments', serializer='json'):
        logger.debug('Initializing %s: (folder: '%s', filename: '%s', serializer: '%s')',
                     self.__class__.__name__, folder, filename, serializer)
        self.serializer = self.get_serializer(filename, serializer)
        self.file = self.get_location(folder, filename)