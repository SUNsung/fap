
        
        A second approach implemented relies on a list of porn domains, to activate it
pass the list filename as the only argument
'''
    
    with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
    # We must be able to import youtube_dl
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
        if not releases:
        break
    
        template = template.replace('{{fileopts}}', '|'.join(fileopts))
    template = template.replace('{{diropts}}', '|'.join(diropts))
    template = template.replace('{{flags}}', ' '.join(flags))
    
    py2exe_console = [{
    'script': './youtube_dl/__main__.py',
    'dest_base': 'youtube-dl',
    'version': __version__,
    'description': DESCRIPTION,
    'comments': LONG_DESCRIPTION,
    'product_name': 'youtube-dl',
    'product_version': __version__,
}]
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
        data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
    
def _plot(results, metrics, formats, title, x_ticks, x_label,
          format_markers=('x', '|', 'o', '+'),
          metric_colors=('c', 'm', 'y', 'k', 'g', 'r', 'b')):
    '''
    Plot the results by metric, format and some other variable given by
    x_label
    '''
    fig = plt.figure('scikit-learn multilabel metrics benchmarks')
    plt.title(title)
    ax = fig.add_subplot(111)
    for i, metric in enumerate(metrics):
        for j, format in enumerate(formats):
            ax.plot(x_ticks, results[i, j].flat,
                    label='{}, {}'.format(metric, format),
                    marker=format_markers[j],
                    color=metric_colors[i % len(metric_colors)])
    ax.set_xlabel(x_label)
    ax.set_ylabel('Time (s)')
    ax.legend()
    plt.show()
    
                gc.collect()
            print('- benchmarking RidgeRegression')
            clf = Ridge(alpha=alpha, fit_intercept=False)
            tstart = time()
            clf.fit(X_train, y_train)
            ridge_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                        y_test)
            ridge_results[i, j, 1] = time() - tstart
    
    
def setup_platform(hass, config, add_entities, discovery_info=None):
    '''Set up the flic platform.'''
    import pyflic
    
        hass.services.register(DOMAIN, 'demo', observe)
    
            # doing a request
        try:
            res = requests.get(self._url, timeout=10, cookies={
                'userid': self._userid
            })
        except requests.exceptions.Timeout:
            _LOGGER.error(
                'Connection to the router timed out at URL %s', self._url)
            return False
        if res.status_code != 200:
            _LOGGER.error(
                'Connection failed with http code %s', res.status_code)
            return False
        try:
            result = res.json()
        except ValueError:
            # If json decoder could not parse the response
            _LOGGER.error('Failed to parse response from router')
            return False
    
        def scan_devices(self):
        '''Scan for new devices and return a list with found device IDs.'''
        self._update_info()
        return [client['mac'] for client in self.last_results]
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if self.mac2name is None:
            result = self._retrieve_list_with_retry()
            if result:
                hosts = [x for x in result
                         if 'mac' in x and 'name' in x]
                mac2name_list = [
                    (x['mac'].upper(), x['name']) for x in hosts]
                self.mac2name = dict(mac2name_list)
            else:
                # Error, handled in the _retrieve_list_with_retry
                return
        return self.mac2name.get(device.upper(), None)
    
                try:
                payload_dict[entity_id] = state_helper.state_as_number(state)
            except ValueError:
                continue
    
        def shutdown(self, event):
        '''Shutdown the watcher.'''
        self._observer.stop()
        self._observer.join()
