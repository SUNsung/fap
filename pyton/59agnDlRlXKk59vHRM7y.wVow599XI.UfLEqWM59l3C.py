
        
        import os
    
        if len(result) != 1:
        raise Exception(
            'Received %d items instead of 1 looking for %s in:\n%s' % (
                len(result),
                args.project,
                json.dumps(result, indent=4, sort_keys=True)))
    
    try:
    import json
except ImportError:
    import simplejson as json
    
        @g_connect
    def fetch_role_related(self, related, role_id):
        '''
        Fetch the list of related items for the given role.
        The url comes from the 'related' field of the role.
        '''
    
    
def benchmark(estimator, data):
    gc.collect()
    print('Benching %s' % estimator)
    t0 = time()
    estimator.fit(data)
    training_time = time() - t0
    data_t = estimator.transform(data)
    data_r = estimator.inverse_transform(data_t)
    reconstruction_error = np.mean(np.abs(data - data_r))
    return {'time': training_time, 'error': reconstruction_error}
    
        results = defaultdict(lambda: [])
    
    
def barplot_neighbors(Nrange=2 ** np.arange(1, 11),
                      Drange=2 ** np.arange(7),
                      krange=2 ** np.arange(10),
                      N=1000,
                      D=64,
                      k=5,
                      leaf_size=30,
                      dataset='digits'):
    algorithms = ('kd_tree', 'brute', 'ball_tree')
    fiducial_values = {'N': N,
                       'D': D,
                       'k': k}
    
        ###########################################################################
    # Set transformer input
    ###########################################################################
    transformers = {}
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
        output_file.close()

    
    data, row_idx, col_idx = sg._shuffle(data, random_state=0)
plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Shuffled dataset')
    
        def __getattr__(self, name):
        '''Wraps the configurator methods'''
        if self._configurator is None:
            raise AttributeError()
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_hsts_malformed(self, mock_get_request):
        mock_get_request.return_value = create_response(
            headers={'strict-transport-security': 'sdfal'})
        self.assertFalse(self.validator.hsts('test.com'))
    
        def test_sequential_execution(self):
        self.command_stack[0].execute()
        output_after_first_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_execution[0], 'bar.txt')
        self.command_stack[1].execute()
        output_after_second_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_execution[0], 'baz.txt')
    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
        def tearDown(self):
        self.out.close()
        sys.stdout = self.saved_stdout
    
    
class Handler(object):
    __metaclass__ = abc.ABCMeta