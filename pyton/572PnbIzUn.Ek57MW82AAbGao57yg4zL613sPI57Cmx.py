
        
        
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
        density : array-like of ints (1d or 0d)
        The density of positive labels in the input.
    
                c_bar = plt.bar(xvals, build_time[alg] - bottom,
                            width, bottom, color='r')
            q_bar = plt.bar(xvals, query_time[alg],
                            width, build_time[alg], color='b')
    
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
    
    In this examples we will use a movie review dataset.
    
        # TASK: print the mean and std for each candidate along with the parameter
    # settings for all the candidates explored by grid search.
    n_candidates = len(grid_search.cv_results_['params'])
    for i in range(n_candidates):
        print(i, 'params - %s; mean - %0.2f; std - %0.2f'
                 % (grid_search.cv_results_['params'][i],
                    grid_search.cv_results_['mean_test_score'][i],
                    grid_search.cv_results_['std_test_score'][i]))
    
    import numpy as np
import matplotlib.pyplot as plt
    
    Chen et al. proposed an improvement of the Ledoit-Wolf shrinkage
parameter, the OAS coefficient, whose convergence is significantly
better under the assumption that the data are Gaussian.
    
        def test_car_adapter_shall_make_loud_noise(self):
        car = Car()
        car_adapter = Adapter(car, make_noise=car.make_noise)
        noise = car_adapter.make_noise(1)
        expected_noise = 'vroom!'
        self.assertEqual(noise, expected_noise)
    
        @classmethod
    def setUpClass(cls):
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
        cls.sub = Data('Data')
        # inherited behavior already tested with TestSubject
        cls.sub.attach(cls.dec_obs)
        cls.sub.attach(cls.hex_obs)
    
        @classmethod
    def setUpClass(cls):
        ''' Class scope setup. '''
        cls.p = Proxy()
    
    if __name__ == '__main__':
    
        # sample_queue.put('sam')
    # test_object(sample_queue)
    # print('Outside func: {}'.format(sample_queue.get()))
    
        def test_2nd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1380'
        self.assertEqual(station, expected_station)
    
        def setUp(self):
        self.tc1 = TC1()
        self.tc2 = TC2()
        self.tc3 = TC3()
        self.average_result_tc1 = '###### In Test 1 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc2 = '###### In Test 2 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc3 = '###### In Test 3 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.runner = TestRunner()
        self.out = StringIO()
        self.saved_stdout = sys.stdout
        sys.stdout = self.out
    
            depending on self.param value
        '''
        self._instance_method_choices[self.param].__get__(self)()
    
        def publishReport(self):
        self._db.update()
        self._reporter.report()