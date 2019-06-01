
        
        
class Formatting(object):
    '''A delegate class that invokes the actual processors.'''
    
            super(EncodedStream, self).__init__(**kwargs)
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
        def test_GET_explicit_JSON_explicit_headers(self, httpbin):
        r = http('--json', 'GET', httpbin.url + '/headers',
                 'Accept:application/xml',
                 'Content-Type:application/xml')
        assert HTTP_OK in r
        assert ''Accept': 'application/xml'' in r
        assert ''Content-Type': 'application/xml'' in r
    
    from utils import TESTS_ROOT
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        return last_byte_pos + 1
    
        if not HAS_BOTO:
        module.fail_json(msg='boto required for this module')
    
        changed = False
    if state == 'present':
        if not ipa_dnszone:
            changed = True
            if not module.check_mode:
                client.dnszone_add(zone_name=zone_name)
        else:
            changed = False
    else:
        if ipa_dnszone:
            changed = True
            if not module.check_mode:
                client.dnszone_del(zone_name=zone_name)
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    
- name: Remove device from CA Spectrum
  local_action:
    module: spectrum_device
    device: '{{ ansible_host }}'
    landscape: '{{ landscape_handle }}'
    oneclick_url: http://oneclick.example.com:8080
    oneclick_user: username
    oneclick_password: password
    use_proxy: no
    state: absent
'''