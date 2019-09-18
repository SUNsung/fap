
        
            def __init__(self, *args, **kwargs):
        '''Initialize RequestException with `request` and `response` objects.'''
        response = kwargs.pop('response', None)
        self.response = response
        self.request = kwargs.pop('request', None)
        if (response is not None and not self.request and
                hasattr(response, 'request')):
            self.request = self.response.request
        super(RequestException, self).__init__(*args, **kwargs)
    
    import pytest
from requests.compat import urljoin
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
        def __iter__(self):
        return (casedkey for casedkey, mappedvalue in self._store.values())
    
        def test_proxy_error_on_bad_url(self, httpbin, httpbin_secure):
        with pytest.raises(InvalidProxyURL):
            requests.get(httpbin_secure(), proxies={'https': 'http:/badproxyurl:3128'})
    
        def __setstate__(self, state):
        # Can't handle by adding 'proxy_manager' to self.__attrs__ because
        # self.poolmanager uses a lambda function, which isn't pickleable.
        self.proxy_manager = {}
        self.config = {}
    
            if isinstance(hook, Callable):
            self.hooks[event].append(hook)
        elif hasattr(hook, '__iter__'):
            self.hooks[event].extend(h for h in hook if isinstance(h, Callable))
    
            with server as address:
            sock1 = socket.socket()
            sock2 = socket.socket()
    
        def test_zipped_paths_extracted(self, tmpdir):
        zipped_py = tmpdir.join('test.zip')
        with zipfile.ZipFile(zipped_py.strpath, 'w') as f:
            f.write(__file__)
    
    When starting from the default values (alpha_init = 1.90, lambda_init = 1.),
the bias of the resulting curve is large, and the variance is small.
So, lambda_init should be relatively small (1.e-3) so as to reduce the bias.
    
    # Define datasets
blobs_params = dict(random_state=0, n_samples=n_inliers, n_features=2)
datasets = [
    make_blobs(centers=[[0, 0], [0, 0]], cluster_std=0.5,
               **blobs_params)[0],
    make_blobs(centers=[[2, 2], [-2, -2]], cluster_std=[0.5, 0.5],
               **blobs_params)[0],
    make_blobs(centers=[[2, 2], [-2, -2]], cluster_std=[1.5, .3],
               **blobs_params)[0],
    4. * (make_moons(n_samples=n_samples, noise=.05, random_state=0)[0] -
          np.array([0.5, 0.25])),
    14. * (np.random.RandomState(42).rand(n_samples, 2) - 0.5)]
    
        # The following swapping makes life easier since m is assumed to be the
    # smaller integer below.
    if m > n:
        m, n = n, m
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    We generate data from three groups of waveforms. Two of the waveforms
(waveform 1 and waveform 2) are proportional one to the other. The cosine
distance is invariant to a scaling of the data, as a result, it cannot
distinguish these two waveforms. Thus even with no noise, clustering
using this distance will not separate out waveform 1 and 2.
    
    
class Handler(object):
    __metaclass__ = abc.ABCMeta
    
        @staticmethod
    def check_range(request):
        if 0 <= request < 10:
            print('request {} handled in handler 0'.format(request))
            return True
    
    
def count_to(count):
    '''Counts by word numbers, up to a maximum of five'''
    numbers = ['one', 'two', 'three', 'four', 'five']
    for number in numbers[:count]:
        yield number
    
    *References:
https://sourcemaking.com/design_patterns/facade
https://fkromer.github.io/python-pattern-references/design/#facade
http://python-3-patterns-idioms-test.readthedocs.io/en/latest/ChangeInterface.html#facade
    
    
class DiscreteEnv(Env):
    
        def _viewer_setup(self):
        body_id = self.sim.model.body_name2id('robot0:palm')
        lookat = self.sim.data.body_xpos[body_id]
        for idx, value in enumerate(lookat):
            self.viewer.cam.lookat[idx] = value
        self.viewer.cam.distance = 0.5
        self.viewer.cam.azimuth = 55.
        self.viewer.cam.elevation = -25.
    
        def viewer_setup(self):
        self.viewer.cam.trackbodyid = 1
        self.viewer.cam.distance = self.model.stat.extent * 1.0
        self.viewer.cam.lookat[2] = 0.8925
        self.viewer.cam.elevation = -20

    
            1) Arrow Keys: Discrete 5  - NOOP[0], UP[1], RIGHT[2], DOWN[3], LEFT[4]  - params: min: 0, max: 4
        2) Button A:   Discrete 2  - NOOP[0], Pressed[1] - params: min: 0, max: 1
        3) Button B:   Discrete 2  - NOOP[0], Pressed[1] - params: min: 0, max: 1
    
            class LidarCallback(Box2D.b2.rayCastCallback):
            def ReportFixture(self, fixture, point, normal, fraction):
                if (fixture.filterData.categoryBits & 1) == 0:
                    return 1
                self.p2 = point
                self.fraction = fraction
                return 0
        self.lidar = [LidarCallback() for _ in range(10)]
    
        def reset(self):
        self.number = self.np_random.uniform(-self.range, self.range)
        self.guess_count = 0
        self.observation = 0
        return self.observation

    
        def _encode_ansi_frame(self, frame):
        if not self.encoder:
            self.encoder = TextEncoder(self.path, self.frames_per_sec)
            self.metadata['encoder_version'] = self.encoder.version_info
        self.encoder.capture_frame(frame)
        self.empty = False
    
            if self.cube_x-1 < 0 or self.cube_x+1 >= FIELD_W:
            done = True
            reward = -1
        elif self.cube_y+1 >= FIELD_H-5:
            if dist >= HOLE_WIDTH//2:
                done = True
                reward = -1
            elif self.cube_y == FIELD_H:
                done = True
                reward = +1
        self.last_obs = obs
        return obs, reward, done, {}
    
            self._tag(COMPOSE_TESTS_IMAGE_BASE_NAME, self.version, 'latest')
    
            return TLSConfig(
            client_cert=client_cert, verify=verify, ca_cert=ca_cert,
            assert_hostname=False if skip_hostname_check else None,
            ssl_version=tls_version
        )
    
        @pytest.mark.skipif(not hasattr(ssl, 'PROTOCOL_TLSv1_2'), reason='TLS v1.2 unsupported')
    def test_get_tls_version_upgrade(self):
        environment = {'COMPOSE_TLS_VERSION': 'TLSv1_2'}
        assert get_tls_version(environment) == ssl.PROTOCOL_TLSv1_2
    
    API_VERSION_TO_ENGINE_VERSION = {
    API_VERSIONS[COMPOSEFILE_V1]: '1.9.0',
    API_VERSIONS[COMPOSEFILE_V2_0]: '1.10.0',
    API_VERSIONS[COMPOSEFILE_V2_1]: '1.12.0',
    API_VERSIONS[COMPOSEFILE_V2_2]: '1.13.0',
    API_VERSIONS[COMPOSEFILE_V2_3]: '17.06.0',
    API_VERSIONS[COMPOSEFILE_V2_4]: '17.12.0',
    API_VERSIONS[COMPOSEFILE_V3_0]: '1.13.0',
    API_VERSIONS[COMPOSEFILE_V3_1]: '1.13.0',
    API_VERSIONS[COMPOSEFILE_V3_2]: '1.13.0',
    API_VERSIONS[COMPOSEFILE_V3_3]: '17.06.0',
    API_VERSIONS[COMPOSEFILE_V3_4]: '17.06.0',
    API_VERSIONS[COMPOSEFILE_V3_5]: '17.06.0',
    API_VERSIONS[COMPOSEFILE_V3_6]: '18.02.0',
    API_VERSIONS[COMPOSEFILE_V3_7]: '18.06.0',
}

    
    
class ComposeFileNotFound(ConfigurationError):
    def __init__(self, supported_filenames):
        super(ComposeFileNotFound, self).__init__('''
        Can't find a suitable configuration file in this directory or any
        parent. Are you in the right directory?
    
        if not (config['pypi'].get('username') and config['pypi'].get('password')):
        raise ScriptError('Missing login/password pair for pypi repo')

    
    NAMES = [
    'grey',
    'red',
    'green',
    'yellow',
    'blue',
    'magenta',
    'cyan',
    'white'
]
    
            if command is None:
            raise SystemExit(command_help)