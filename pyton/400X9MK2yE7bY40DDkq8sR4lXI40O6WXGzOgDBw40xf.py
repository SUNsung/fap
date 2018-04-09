
        
        print('Populating sources directory with templates.')
for subdir, dirs, fnames in os.walk('templates'):
    for fname in fnames:
        new_subdir = subdir.replace('templates', 'sources')
        if not os.path.exists(new_subdir):
            os.makedirs(new_subdir)
        if fname[-3:] == '.md':
            fpath = os.path.join(subdir, fname)
            new_fpath = fpath.replace('templates', 'sources')
            shutil.copy(fpath, new_fpath)
    
            pool = multiprocessing.pool.ThreadPool()
        function_partial = partial(_count_valid_files_in_directory,
                                   white_list_formats=white_list_formats,
                                   follow_links=follow_links,
                                   split=split)
        self.samples = sum(pool.map(function_partial,
                                    (os.path.join(directory, subdir)
                                     for subdir in classes)))
    
    
@keras_test
@pytest.mark.skipif((K.backend() != 'tensorflow'),
                    reason='Requires TensorFlow backend')
def test_TensorBoard_histogram_freq_must_have_validation_data(tmpdir):
    np.random.seed(np.random.randint(1, 1e7))
    filepath = str(tmpdir / 'logs')
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_glorot_uniform(tensor_shape):
    fan_in, fan_out = initializers._compute_fans(tensor_shape)
    scale = np.sqrt(6. / (fan_in + fan_out))
    _runner(initializers.glorot_uniform(), tensor_shape,
            target_mean=0., target_max=scale, target_min=-scale)
    
        @abc.abstractmethod
    def contribute(self):
        raise NotImplementedError('Must provide implementation in subclass.')
    
    
class TestData(unittest.TestCase):
    
        def subscribe(self, msg, subscriber):
        self.subscribers.setdefault(msg, []).append(subscriber)
    
    
class RegistryHolder(type):
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def _handle(self, request):
        if 10 < request <= 20:
            print('request {} handled in handler 2'.format(request))
            return True