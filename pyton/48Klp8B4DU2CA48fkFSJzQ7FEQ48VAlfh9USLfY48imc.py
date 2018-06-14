
        
            def test_request_recovery_with_bigger_timeout(self):
        '''a biggest timeout can be specified'''
        server = Server.basic_response_server(request_timeout=3)
        data = b'bananadine'
    
        return {
        'platform': platform_info,
        'implementation': implementation_info,
        'system_ssl': system_ssl_info,
        'using_pyopenssl': pyopenssl is not None,
        'pyOpenSSL': pyopenssl_info,
        'urllib3': urllib3_info,
        'chardet': chardet_info,
        'cryptography': cryptography_info,
        'idna': idna_info,
        'requests': {
            'version': requests_version,
        },
    }
    
        :param url: URL for the new :class:`Request` object.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        return d
    
                gc.collect()
            print('- benchmarking LassoLars')
            clf = LassoLars(alpha=alpha, fit_intercept=False,
                            normalize=False, precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lars_lasso_results.append(time() - tstart)
    
    
def plot_feature_errors(all_errors, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_errors['pca'], label='PCA')
    plot_results(all_components, all_errors['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plot_results(all_components, all_errors['rpca'], label='RandomizedPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. n_components\n'
                 'LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Mean absolute error')
    
        #------------------------------------------------------------
    # varying D
    D_results_build = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    D_results_query = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
        ###########################################################################
    # List sampling algorithm
    ###########################################################################
    # We assume that sampling algorithm has the following signature:
    #   sample(n_population, n_sample)
    #
    sampling_algorithm = {}
    
    
if not os.path.exists(DATA_FOLDER):
    
    
if not os.path.exists(TRAIN_FOLDER) or not os.path.exists(TEST_FOLDER):
    
            self.canvas.draw()
    
    print('Log-loss of')
print(' * uncalibrated classifier trained on 800 datapoints: %.3f '
      % score)
print(' * classifier trained on 600 datapoints and calibrated on '
      '200 datapoint: %.3f' % sig_score)
    
    [1] 'Shrinkage Algorithms for MMSE Covariance Estimation'
Chen et al., IEEE Trans. on Sign. Proc., Volume 58, Issue 10, October 2010.
    
        def discard(self, key):
        '''If the keyed message exists, remove it.'''
        try:
            self.remove(key)
        except KeyError:
            pass
    
    subsystem_details = {
    # -s flag        : (C entry point template), (is it __main__?), (is it a DLL?)
    'console'        : (None,                    1,                 0),
    'windows'        : (WINMAINTEMPLATE,         1,                 0),
    'service'        : (SERVICETEMPLATE,         0,                 0),
    'com_dll'        : ('',                      0,                 1),
}
    
        def test_varargs11_kw(self):
        msg = r'^pack\(\) takes no keyword arguments$'
        self.assertRaisesRegex(TypeError, msg, struct.Struct.pack, struct.Struct(''), x=2)
    
        allow_reuse_address = True
    
        def test_release(self):
        res = platform.release()
    
        'modules':  A dictionary mapping module names to their source code as a
                string. The dictionary MUST include one module named
                'test_module' with a main() function.
    'set_list': A list of set_type tuples to be run on the module.
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.helpers.entity import Entity
from homeassistant.components.sensor import PLATFORM_SCHEMA
from homeassistant.components.sensor.rest import RestData
from homeassistant.const import (
    ATTR_TEMPERATURE, CONF_API_KEY, CONF_NAME, ATTR_DATE, ATTR_TIME,
    ATTR_VOLTAGE)
    
    import os
import warnings
    
    DEFAULT_ON_STATE = 'high'
DEPENDENCIES = ['zigbee']
    
        # pylint: disable=no-self-use
    def test_from_event(self):
        '''Test converting event to db event.'''
        event = ha.Event('test_event', {
            'some_data': 15
        })
        assert event == Events.from_event(event).to_native()