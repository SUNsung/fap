
        
            if test_config is None:
        # load the instance config, if it exists, when not testing
        app.config.from_pyfile('config.py', silent=True)
    else:
        # load the test config if passed in
        app.config.update(test_config)
    
    
def login_required(view):
    '''View decorator that redirects anonymous users to the login page.'''
    @functools.wraps(view)
    def wrapped_view(**kwargs):
        if g.user is None:
            return redirect(url_for('auth.login'))
    
        assert 'closed' in str(e)
    
                class MyFlask(flask.Flask):
                def get_send_file_max_age(self, name):
                    if name.lower().endswith('.js'):
                        return 60
                    return flask.Flask.get_send_file_max_age(self, name)
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
    version_added: '2.5'
    
    
RETURN = '''
addresses:
  description: Properties of all Elastic IP addresses matching the provided filters. Each element is a dict with all the information related to an EIP.
  returned: on success
  type: list
  sample: [{
        'allocation_id': 'eipalloc-64de1b01',
        'association_id': 'eipassoc-0fe9ce90d6e983e97',
        'domain': 'vpc',
        'instance_id': 'i-01020cfeb25b0c84f',
        'network_interface_id': 'eni-02fdeadfd4beef9323b',
        'network_interface_owner_id': '0123456789',
        'private_ip_address': '10.0.0.1',
        'public_ip': '54.81.104.1',
        'tags': {
            'Name': 'test-vm-54.81.104.1'
        }
    }]
    
    
DOCUMENTATION = '''
---
module: ec2_key
version_added: '1.5'
short_description: create or delete an ec2 key pair
description:
    - create or delete an ec2 key pair.
options:
  name:
    description:
      - Name of the key pair.
    required: true
  key_material:
    description:
      - Public key material.
    required: false
  force:
    description:
      - Force overwrite of already existing key pair if key has changed.
    required: false
    default: true
    version_added: '2.3'
  state:
    description:
      - create or delete keypair
    required: false
    choices: [ present, absent ]
    default: 'present'
  wait:
    description:
      - Wait for the specified action to complete before returning. This option has no effect since version 2.5.
    required: false
    default: false
    version_added: '1.6'
  wait_timeout:
    description:
      - How long before wait gives up, in seconds. This option has no effect since version 2.5.
    required: false
    default: 300
    version_added: '1.6'
    
        if ebs_optimized is not None:
        launch_config['EbsOptimized'] = ebs_optimized
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        region=dict(required=True, aliases=['aws_region', 'ec2_region']),
        name_regex=dict(required=True),
        sort_order=dict(required=False, default='ascending', choices=['ascending', 'descending']),
        limit=dict(required=False, type='int'),
    )
    )
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/alexa/
'''
import asyncio
import logging
    
            self._is_down = click_type == pyflic.ClickType.ButtonDown
        self.schedule_update_ha_state()
    
        def _get_value(self, hass, data, config_key):
        '''Get value.'''
        customize = hass.data.get(DATA_CUSTOMIZE, {}).get(config_key) or {}
        return {'global': customize, 'local': data.get(config_key, {})}