
        
                    handler_result = self.handler(sock)
    
    try:
    import simplejson as json
except ImportError:
    import json
    
        with server as (host, port):
        url = 'http://{}:{}/'.format(host, port)
        r = requests.get(url, auth=auth)
        # Verify server didn't receive auth from us.
        assert r.status_code == 200
        assert len(r.history) == 0
        close_server.set()
    
        # First check whether no_proxy is defined. If it is, check that the URL
    # we're getting isn't in the no_proxy list.
    no_proxy_arg = no_proxy
    if no_proxy is None:
        no_proxy = get_proxy('no_proxy')
    parsed = urlparse(url)
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import boto3_conn, camel_dict_to_snake_dict
from ansible.module_utils.ec2 import ec2_argument_spec, get_aws_connection_info
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import camel_dict_to_snake_dict, get_aws_connection_info, boto3_conn
import json
import datetime
import sys
import re
    
        elif state == 'present':
        for param in ('name', 'agent', 'email', 'thresholds', 'ports', 'processes'):
            if not module.params.get(param):
                module.fail_json(
                    msg='%s parameter is required for a new monitoring policy.' % param)
        try:
            (changed, monitoring_policy) = create_monitoring_policy(module, oneandone_conn)
        except Exception as ex:
            module.fail_json(msg=str(ex))
    
            # manage host state
        desired_state = self.get_parameter('state')
        if bool(host):
            current_state = host.STATE
            current_state_name = HOST_STATES(host.STATE).name
        else:
            current_state = HOST_ABSENT
            current_state_name = 'ABSENT'
    
        # Insert state-specific attributes to body
    if state == 'started':
        for k in ('source_system', 'env', 'owner', 'description'):
            v = module.params[k]
            if v is not None:
                body[k] = v
    
    import homeassistant.helpers.config_validation as cv
import homeassistant.util.dt as dt_util
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOST, CONF_PASSWORD, CONF_USERNAME
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.last_results = []
        host = config[CONF_HOST]
        self._url = 'http://{}/data/getConnectInfo.asp'.format(host)
        self._loginurl = 'http://{}/goform/login'.format(host)
    
    import voluptuous as vol
    
        def __init__(self, hass, filename, add_timestamp):
        '''Initialize the service.'''
        self.filepath = os.path.join(hass.config.config_dir, filename)
        self.add_timestamp = add_timestamp
    
    
def get_service(hass, config, discovery_info=None):
    '''Get the GNTP notification service.'''
    if config.get(CONF_APP_ICON) is None:
        icon_file = os.path.join(os.path.dirname(__file__), '..', 'frontend',
                                 'www_static', 'icons', 'favicon-192x192.png')
        with open(icon_file, 'rb') as file:
            app_icon = file.read()
    else:
        app_icon = config.get(CONF_APP_ICON)
    
                # Close socket
            sock.close()
        except socket.gaierror:
            _LOGGER.error('Unable to connect to host %s', self._host)
        except socket.error:
            _LOGGER.exception('Failed to send data to Lannnouncer')
