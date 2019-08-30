
        
            def __init__(self, module):
        '''
        Construct module
        '''
        self.module = module
        self.policy_dict = {}
    
    #
# Copyright (c) 2015 CenturyLink
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    - name: Delete Public IP from Server
  hosts: localhost
  gather_facts: False
  connection: local
  tasks:
    - name: Create Public IP For Servers
      clc_publicip:
        server_ids:
          - UC1TEST-SVR01
          - UC1TEST-SVR02
        state: absent
      register: clc
    
        try:
        if state == 'present':
            (msg, changed) = present(path, username, password, crypt_scheme, create, check_mode)
        elif state == 'absent':
            if not os.path.exists(path):
                module.exit_json(msg='%s not present' % username,
                                 warnings='%s does not exist' % path, changed=False)
            (msg, changed) = absent(path, username, check_mode)
        else:
            module.fail_json(msg='Invalid state: %s' % state)
    
        :arg list original_list: original list.
    :arg list updated_list: list with changes.
    :arg str key: unique identifier.
    :arg list ignore_when_null: list with the keys from the updated items that should be ignored in the merge,
        if its values are null.
    :return: list: Lists merged.
    '''
    ignore_when_null = [] if ignore_when_null is None else ignore_when_null
    
        if not layman.is_installed(name):
        return False
    
    RETURN = '''
powerstate:
    description: The current power state of the machine.
    returned: success
    type: str
    sample: on
'''