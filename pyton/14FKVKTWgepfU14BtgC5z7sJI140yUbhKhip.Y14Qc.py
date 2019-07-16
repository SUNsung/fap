
        
            def get(self):
        if len(self.config.GAE_APPIDS):
            if len(self.working_appid_list) == 0:
                time_to_reset = 600 - (time.time() - self.last_reset_time)
                if time_to_reset > 0:
                    self.logger.warn('all appid out of quota, wait %d seconds to reset', time_to_reset)
                    time.sleep(time_to_reset)
                    return None
                else:
                    self.logger.warn('reset appid')
                    self.reset_appid()
    
    
def get_cmd_out(cmd):
    proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out = proc.stdout
    lines = out.readlines()
    return lines
    
        def triger_check_network(self, fail=False, force=False):
        time_now = time.time()
        if not force:
            if self._checking_num > 0:
                return
    
            # mmmhhh,... perhaps look at the first argument
        # (f_locals[co_varnames[0]]?) and test if it's a (sub)class of
        # requested recognizer...
        
        rules = []
        for frame in reversed(inspect.stack()):
            code = frame[0].f_code
            codeMod = inspect.getmodule(code)
            if codeMod is None:
                continue
    
    
    
    
    def __str__(self):
        if self.type == EOF:
            return '<EOF>'
    
    
def test_astype_categorical():
    arr = period_array(['2000', '2001', '2001', None], freq='D')
    result = arr.astype('category')
    categories = pd.PeriodIndex(['2000', '2001'], freq='D')
    expected = pd.Categorical.from_codes([0, 1, 1, -1], categories=categories)
    tm.assert_categorical_equal(result, expected)
    
        def __init__(self, values, dtype=None, copy=False):
        for val in values:
            if not isinstance(val, self.dtype.type):
                raise TypeError('All values must be of type ' + str(self.dtype.type))
        self.data = values
    
            result = float_frame.cov(min_periods=len(float_frame) + 1)
        assert isna(result.values).all()
    
        def test_oauth10_request_parameters(self):
        response = self.fetch('/oauth10/client/request_params')
        response.rethrow()
        parsed = json_decode(response.body)
        self.assertEqual(parsed['oauth_consumer_key'], 'asdf')
        self.assertEqual(parsed['oauth_token'], 'uiop')
        self.assertTrue('oauth_nonce' in parsed)
        self.assertTrue('oauth_signature' in parsed)
    
    
def main():
    test = TestSelectionSort()
    selection_sort = SelectionSort()
    test.test_selection_sort(selection_sort.sort)
    try:
        test.test_selection_sort(selection_sort.sort_recursive)
        test.test_selection_sort(selection_sort.sor_iterative_alt)
    except NameError:
        # Alternate solutions are only defined
        # in the solutions file
        pass
    
            print('Test: Enqueue on empty stack')
        print('Test: Enqueue on non-empty stack')
        print('Test: Multiple enqueue in a row')
        num_items = 3
        for i in range(0, num_items):
            queue.enqueue(i)
    
    		def PreOrder (node):
			if node is not None:
				preOrder.append(node.data)
				PreOrder(node.leftChild)
				PreOrder(node.rightChild)
    
            print('Test: remove on a key that already exists')
        hash_table.remove(10)
        assert_equal(hash_table.get(0), 'foo')
        assert_raises(KeyError, hash_table.get, 10)
    
            if 'start_period' in service_dict['healthcheck']:
            service_dict['healthcheck']['start_period'] = serialize_ns_time_value(
                service_dict['healthcheck']['start_period']
            )
    
            return reduce(get_value, key.split('.'), self.dictionary)
    
    import codecs
import hashlib
import json.decoder
import logging
import ntpath
import random
    
    
def tls_config_from_options(options, environment=None):
    environment = environment or Environment()
    cert_path = environment.get('DOCKER_CERT_PATH') or None
    
            if config_path == self.config_file.filename:
            try:
                service_config = self.config_file.get_service(service_name)
            except KeyError:
                raise ConfigurationError(
                    'Cannot extend service '{}' in {}: Service not found'.format(
                        service_name, config_path)
                )
        else:
            extends_file = ConfigFile.from_filename(config_path)
            validate_config_version([self.config_file, extends_file])
            extended_file = process_config_file(
                extends_file, self.environment, service_name=service_name
            )
            service_config = extended_file.get_service(service_name)
    
        opts = parse_opts(args)
    
        def test_create_container_with_cpu_quota(self):
        service = self.create_service('db', cpu_quota=40000, cpu_period=150000)
        container = service.create_container()
        container.start()
        assert container.get('HostConfig.CpuQuota') == 40000
        assert container.get('HostConfig.CpuPeriod') == 150000