
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
    
class AuthActions(object):
    def __init__(self, client):
        self._client = client
    
                def default(self, o):
                try:
                    iterable = iter(o)
                except TypeError:
                    pass
                else:
                    return list(iterable)
                return JSONEncoder.default(self, o)
        '''
        if isinstance(o, datetime):
            return http_date(o.utctimetuple())
        if isinstance(o, date):
            return http_date(o.timetuple())
        if isinstance(o, uuid.UUID):
            return str(o)
        if hasattr(o, '__html__'):
            return text_type(o.__html__())
        return _json.JSONEncoder.default(self, o)
    
    from .globals import _request_ctx_stack, _app_ctx_stack
from .signals import template_rendered, before_render_template
    
        def __exit__(self, exc_type, exc_value, tb):
        self.preserve_context = False
    
        #: The canonical way to decorate class-based views is to decorate the
    #: return value of as_view().  However since this moves parts of the
    #: logic from the class declaration to the place where it's hooked
    #: into the routing system.
    #:
    #: You can place one or more decorators in this list and whenever the
    #: view function is created the result is automatically decorated.
    #:
    #: .. versionadded:: 0.8
    decorators = ()
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
        proc.sendline(u'ehco test')
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
    
python_3 = ('thefuck/python3-zsh',
            u'''FROM python:3
                RUN apt-get update
                RUN apt-get install -yy zsh''',
            u'sh')
    
    
@pytest.fixture
def set_help(mocker):
    mock = mocker.patch('subprocess.Popen')
    
    
@pytest.mark.parametrize('command', [
    Command('apt list --upgradable', no_match_output),
    Command('sudo apt list --upgradable', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
    
# bdist_wheel
extras_require = {
    # http://wheel.readthedocs.io/en/latest/#defining-conditional-dependencies
    'python_version == '3.0' or python_version == '3.1'': ['argparse>=1.2.1'],
    ':sys_platform == 'win32'': ['colorama>=0.2.4'],
}
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
    from httpie import ExitStatus
from utils import http, HTTP_OK
    
    
def test_unicode_headers_verbose(httpbin):
    # httpbin doesn't interpret utf8 headers
    r = http('--verbose', httpbin.url + '/headers', u'Test:%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
        def _get_path(self):
        return os.path.join(self.directory, self.name + '.json')
    
    '''
    
            if state == 'absent':
            if exists:
                conn.delete_cache_subnet_group(group_name)
                changed = True
        else:
            if not exists:
                new_group = conn.create_cache_subnet_group(group_name, cache_subnet_group_description=group_description, subnet_ids=group_subnets)
                changed = True
            else:
                changed_group = conn.modify_cache_subnet_group(group_name, cache_subnet_group_description=group_description, subnet_ids=group_subnets)
                changed = True
    
        if not module.params.get('auth_token'):
        module.fail_json(
            msg='The 'auth_token' parameter or ' +
            'ONEANDONE_AUTH_TOKEN environment variable is required.')
    
        for rule in desired_rules:
        if rule not in current_rules:
            additions += 1
            if not module.check_mode:
                gateway.add_nat_rule(**rule)
            result['changed'] = True
    result['rules_added'] = additions
    
    
def get_schema_facts(cursor, schema=''):
    facts = {}
    cursor.execute('''
        select schema_name, schema_owner, create_time
        from schemata
        where not is_system_schema and schema_name not in ('public', 'TxtIndex')
        and (? = '' or schema_name ilike ?)
    ''', schema, schema)
    while True:
        rows = cursor.fetchmany(100)
        if not rows:
            break
        for row in rows:
            facts[row.schema_name.lower()] = {
                'name': row.schema_name,
                'owner': row.schema_owner,
                'create_time': str(row.create_time),
                'usage_roles': [],
                'create_roles': []}
    cursor.execute('''
        select g.object_name as schema_name, r.name as role_name,
        lower(g.privileges_description) privileges_description
        from roles r join grants g
        on g.grantee_id = r.role_id and g.object_type='SCHEMA'
        and g.privileges_description like '%USAGE%'
        and g.grantee not in ('public', 'dbadmin')
        and (? = '' or g.object_name ilike ?)
    ''', schema, schema)
    while True:
        rows = cursor.fetchmany(100)
        if not rows:
            break
        for row in rows:
            schema_key = row.schema_name.lower()
            if 'create' in row.privileges_description:
                facts[schema_key]['create_roles'].append(row.role_name)
            else:
                facts[schema_key]['usage_roles'].append(row.role_name)
    return facts
    
    
class DNSZoneIPAClient(IPAClient):
    def __init__(self, module, host, port, protocol):
        super(DNSZoneIPAClient, self).__init__(module, host, port, protocol)
    
    '''
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            path=dict(required=True),
            state=dict(default='present', choices=['present', 'followed', 'absent', 'unfollowed']),
            name=dict(required=False, default=None, type='str'),
            logtype=dict(required=False, default=None, type='str', aliases=['type'])
        ),
        supports_check_mode=True
    )
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
    	# The current Token when an error occurred.  Since not all streams
	# can retrieve the ith Token, we have to track the Token object.
	# For parsers.  Even when it's a tree parser, token might be set.
        self.token = None
    
    
MOD_SSL_CONF_DEST = 'options-ssl-nginx.conf'
'''Name of the mod_ssl config file as saved in `IConfig.config_dir`.'''
    
        def test_decode_wrong(self):
        self.assertRaises(jose.DeserializationError, self.field.decode, 'y')
    
        def __hash__(self):
        return hash((self.filep, self.path,
                     tuple(self.addrs), tuple(self.get_names()),
                     self.ssl, self.enabled, self.modmacro))
    
        def test_nonexistent_generic(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                mock_like.return_value = ['unknonwn']
                self.assertEqual(entrypoint.get_configurator(),
                                 configurator.ApacheConfigurator)