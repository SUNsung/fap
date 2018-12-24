
        
        
# noinspection PyAbstractClass
class BuiltinAuthPlugin(AuthPlugin):
    
    
class PyTest(TestCommand):
    # `$ python setup.py test' simply installs minimal requirements
    # and runs the tests with no fancy stuff like parallel execution.
    def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = [
            '--doctest-modules', '--verbose',
            './httpie', './tests'
        ]
        self.test_suite = True
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
        def test_non_existent_file_raises_parse_error(self, httpbin):
        with pytest.raises(ParseError):
            http('--form',
                 'POST', httpbin.url + '/post', 'foo@/__does_not_exist__')
    
    import traceback
    
        if not check_min_pkg_version(CLOUD_CLIENT, CLOUD_CLIENT_MINIMUM_VERSION):
        module.fail_json(msg='Please install %s client version %s' %
                         (CLOUD_CLIENT, CLOUD_CLIENT_MINIMUM_VERSION))
    
        module : AnsibleModule object
    oneandone_conn: authenticated oneandone object
    '''
    try:
        firewall_policy_id = module.params.get('firewall_policy')
        name = module.params.get('name')
        description = module.params.get('description')
        add_server_ips = module.params.get('add_server_ips')
        remove_server_ips = module.params.get('remove_server_ips')
        add_rules = module.params.get('add_rules')
        remove_rules = module.params.get('remove_rules')
    
            elif desired_state == 'enabled':
            if current_state == HOST_ABSENT:
                self.allocate_host()
                host = self.get_host_by_name(host_name)
                self.wait_for_host_state(host, [HOST_STATES.MONITORED])
            elif current_state in [HOST_STATES.DISABLED, HOST_STATES.OFFLINE]:
                if one.host.status(host.ID, HOST_STATUS.ENABLED):
                    self.wait_for_host_state(host, [HOST_STATES.MONITORED])
                    result['changed'] = True
                else:
                    self.fail(msg='could not enable host')
            elif current_state in [HOST_STATES.MONITORED]:
                pass
            else:
                self.fail(msg='unknown host state %s, cowardly refusing to change state to enable' % current_state_name)
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        module = AnsibleModule(
        argument_spec=dict(
            token=dict(required=True, no_log=True),
            environment=dict(required=True),
            user=dict(required=False),
            repo=dict(required=False),
            revision=dict(required=False),
            url=dict(required=False, default='https://api.airbrake.io/deploys.txt'),
            validate_certs=dict(default='yes', type='bool'),
        ),
        supports_check_mode=True
    )
    
        # String is special -- it is a non-templatized type in STL.
    matched = _RE_PATTERN_STRING.search(line)
    if matched:
      # Don't warn about strings in non-STL namespaces:
      # (We check only the first match per line; good enough.)
      prefix = line[:matched.start()]
      if prefix.endswith('std::') or not prefix.endswith('::'):
        required['<string>'] = (linenum, 'string')
    
            # Adding field 'ApiToken.expires_at'
        db.add_column(
            'sentry_apitoken',
            'expires_at',
            self.gf('django.db.models.fields.DateTimeField')(null=True),
            keep_default=False
        )
    
        def backwards(self, orm):
        # Removing unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.delete_unique('sentry_commitauthor', ['organization_id', 'external_id'])
    
    ### OUTPUT ###
# dog σκύλος
# parrot parrot
# cat γάτα
# bear bear

    
        def test_3rd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1510'
        self.assertEqual(station, expected_station)
    
    
class Delegate(object):
    def __init__(self):
        self.p1 = 123
    
    from __future__ import print_function
    
    print()
    
        REGISTRY = {}
    
        def __init__(self):
        '''We have an AM state and an FM state'''
        self.amstate = AmState(self)
        self.fmstate = FmState(self)
        self.state = self.amstate
    
    Having the algorithms as an integral part of the client can cause the
client to be larger and harder to maintain. This is more evident when
supporting multiple algorithms. The separation of client and algorithm
allows us to easily replace and vary the algorithm.
    
    ### OUTPUT ###
# generic_visit A
# visit_B B
# visit_B C

    
    *References:
bottle
https://github.com/bottlepy/bottle/blob/cafc15419cbb4a6cb748e6ecdccf92893bb25ce5/bottle.py#L270
django
https://github.com/django/django/blob/ffd18732f3ee9e6f0374aff9ccf350d85187fac2/django/utils/functional.py#L19
pip
https://github.com/pypa/pip/blob/cb75cca785629e15efb46c35903827b3eae13481/pip/utils/__init__.py#L821
pyramimd
https://github.com/Pylons/pyramid/blob/7909e9503cdfc6f6e84d2c7ace1d3c03ca1d8b73/pyramid/decorator.py#L4
werkzeug
https://github.com/pallets/werkzeug/blob/5a2bf35441006d832ab1ed5a31963cbc366c99ac/werkzeug/utils.py#L35
    
    *References:
http://stackoverflow.com/questions/1514120/python-implementation-of-the-object-pool-design-pattern
https://sourcemaking.com/design_patterns/object_pool
    
    '''
Port of the Java example of 'Constructor Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050)
    
        def __init__(self):
        self.time_provider = datetime.datetime