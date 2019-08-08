
        
                #: as blueprints can be registered multiple times with the
        #: application and not everything wants to be registered
        #: multiple times on it, this attribute can be used to figure
        #: out if the blueprint was registered in the past already.
        self.first_registration = first_registration
    
        :copyright: 2010 Pallets
    :license: BSD-3-Clause
'''
import hashlib
import warnings
from datetime import datetime
    
    
class Environment(BaseEnvironment):
    '''Works like a regular Jinja2 environment but has some additional
    knowledge of how Flask's blueprint works so that it can prepend the
    name of the blueprint to referenced templates if necessary.
    '''
    
    
@pytest.fixture(autouse=True)
def leak_detector():
    yield
    
        if module.params['backup']:
        if not module.check_mode:
            result['__backup__'] = get_config(module)
    commands = list()
    
        result = {'changed': False}
    
            if self._play_context.connection == 'network_cli':
            provider = self._task.args.get('provider', {})
            if any(provider.values()):
                display.warning(''provider' is unnecessary when using 'network_cli' and will be ignored')
        elif self._play_context.connection == 'local':
            provider = load_provider(f5_provider_spec, self._task.args)
            transport = provider['transport'] or transport
    
                self.module.add_cleanup_file(sudo_askpass_file.name)
    
    - name: Configure interface in access and trunk mode using aggregate
  junos_l2_interface:
    aggregate:
    - name: ge-0/0/1
      description: test-interface-access
      mode: access
      access_vlan: red
    - name: ge-0/0/2
      description: test-interface-trunk
      mode: trunk
      trunk_vlans:
      - blue
      - green
      native_vlan: 100
    active: True
    state: present
'''