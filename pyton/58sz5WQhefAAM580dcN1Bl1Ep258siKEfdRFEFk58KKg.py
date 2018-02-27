
        
        
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
    
def test_unicode_raw_json_item(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
        finally:
        if downloader and not downloader.finished:
            downloader.failed()
    
    
def get_nodes(data):
    return [node['hostname'] for node in data]
    
        def test_get_gcp_resource_from_methodId(self):
        input_data = 'compute.urlMaps.list'
        actual = GCPUtils.get_gcp_resource_from_methodId(input_data)
        self.assertEqual('urlMaps', actual)
        input_data = None
        actual = GCPUtils.get_gcp_resource_from_methodId(input_data)
        self.assertFalse(actual)
        input_data = 666
        actual = GCPUtils.get_gcp_resource_from_methodId(input_data)
        self.assertFalse(actual)
    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
    
class Call(object):
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
        def __init__(self):
        self.lookup = {}  # key: person_id, value: person_server
    
        def setUp(cls):
        ''' Function/test case scope setup. '''
        cls.output = StringIO()
        cls.saved_stdout = sys.stdout
        sys.stdout = cls.output
    
        def subscribe(self, msg):
        self.provider.subscribe(msg, self)
    
        @classmethod
    def get_registry(cls):
        return dict(cls.REGISTRY)
    
        @classmethod
    def setUpClass(self):
        self.radio = Radio()
    
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
    
        def test_display_current_time_at_midnight(self):
        '''
        Will almost always fail (despite of right at/after midnight).
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
    '''
http://code.activestate.com/recipes/413838-memento-closure/