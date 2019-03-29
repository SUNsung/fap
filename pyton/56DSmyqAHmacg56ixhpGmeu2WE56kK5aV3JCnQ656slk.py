
        
            def current_year_month(self):
        '''Return the current year and month.'''
        ...
    
    
class LookupService(object):
    
        def remove_from_tail(self):
        ...
    
    '''
requests._internal_utils
~~~~~~~~~~~~~~
    
            self.host = host
        self.port = port
        self.requests_to_handle = requests_to_handle
    
        builtin_str = str
    str = str
    bytes = bytes
    basestring = (str, bytes)
    numeric_types = (int, float)
    integer_types = (int,)

    
    try:
    from urllib3.contrib import pyopenssl
except ImportError:
    pyopenssl = None
    OpenSSL = None
    cryptography = None
else:
    import OpenSSL
    import cryptography
    
    
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
        def redirect_resp_handler(sock):
        consume_socket_content(sock, timeout=0.5)
        location = u'//{}:{}/{}'.format(host, port, path)
        sock.send(
            b'HTTP/1.1 301 Moved Permanently\r\n'
            b'Content-Length: 0\r\n'
            b'Location: ' + location.encode('utf8') + b'\r\n'
            b'\r\n'
        )
        redirect_request.append(consume_socket_content(sock, timeout=0.5))
        sock.send(b'HTTP/1.1 200 OK\r\n\r\n')
    
        def test_server_closes(self):
        '''the server closes when leaving the context manager'''
        with Server.basic_response_server() as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
    
    
@pytest.mark.parametrize(
    'url, expected', (
        ('http://u:p@example.com/path?a=1#test', 'http://example.com/path?a=1'),
        ('http://example.com/path', 'http://example.com/path'),
        ('//u:p@example.com/path', '//example.com/path'),
        ('//example.com/path', '//example.com/path'),
        ('example.com/path', '//example.com/path'),
        ('scheme:u:p@example.com/path', 'scheme://example.com/path'),
    ))
def test_urldefragauth(url, expected):
    assert urldefragauth(url) == expected
    
    
def delete(module, connection, name):
    ''' Delete an Elasticache backup. '''
    try:
        response = connection.delete_snapshot(SnapshotName=name)
        changed = True
    except botocore.exceptions.ClientError as e:
        if e.response['Error']['Code'] == 'SnapshotNotFoundFault':
            response = {}
            changed = False
        elif e.response['Error']['Code'] == 'InvalidSnapshotState':
            module.fail_json(msg='Error: InvalidSnapshotState. The snapshot is not in an available state or failed state to allow deletion.'
                             'You may need to wait a few minutes.')
        else:
            module.fail_json(msg='Unable to delete the snapshot.', exception=traceback.format_exc())
    return response, changed
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import boto3_conn, ec2_argument_spec, get_aws_connection_info
    
        mod_params = {}
    mod_params['state'] = module.params.get('state')
    mod_params['topic'] = module.params.get('topic')
    mod_params['view'] = module.params.get('view')
    
        client = HerokuHelper(module).get_heroku_client()
    
        def hbacrule_del(self, name):
        return self._post_json(method='hbacrule_del', name=name)
    
    - bigpanda:
    component: myapp
    version: '1.3'
    token: '{{ bigpanda_token }}'
    state: finished
    
    from homeassistant.core import CoreState
from homeassistant.setup import async_setup_component
import homeassistant.components.automation as automation