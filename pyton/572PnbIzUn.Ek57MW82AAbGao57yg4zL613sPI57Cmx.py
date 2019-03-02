
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
            Emit key value pairs of the form:
    
        def create_signature(self):
        # Create signature based on url and contents
        pass
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import boto3_conn, camel_dict_to_snake_dict
from ansible.module_utils.ec2 import ec2_argument_spec, get_aws_connection_info
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import (ansible_dict_to_boto3_filter_list,
                                      boto3_tag_list_to_ansible_dict,
                                      camel_dict_to_snake_dict)
try:
    from botocore.exceptions import (BotoCoreError, ClientError)
except ImportError:
    pass  # caught by imported AnsibleAWSModule
    
        lambda_facts = dict()
    
        :returns True on success, raises ValueError on type error.
    :rtype ``bool``
    '''
    errmsg = ''
    if not isinstance(instance.node_count, int):
        errmsg = 'node_count must be an integer %s (%s)' % (
            instance.node_count, type(instance.node_count))
    if instance.display_name and not isinstance(instance.display_name,
                                                string_types):
        errmsg = 'instance_display_name must be an string %s (%s)' % (
            instance.display_name, type(instance.display_name))
    if errmsg:
        raise ValueError(errmsg)
    
    DOCUMENTATION = '''
---
module: heroku_collaborator
short_description: 'Add or delete app collaborators on Heroku'
version_added: '2.6'
description:
  - Manages collaborators for Heroku apps.
  - If set to C(present) and heroku user is already collaborator, then do nothing.
  - If set to C(present) and heroku user is not collaborator, then add user to app.
  - If set to C(absent) and heroku user is collaborator, then delete user from app.
author:
  - Marcel Arns (@marns93)
requirements:
  - heroku3
options:
  api_key:
    description:
      - Heroku API key
  apps:
    description:
      - List of Heroku App names
    required: true
  suppress_invitation:
    description:
      - Suppress email invitation when creating collaborator
    type: bool
    default: 'no'
  user:
    description:
      - User ID or e-mail
    required: true
  state:
    description:
      - Create or remove the heroku collaborator
    choices: ['present', 'absent']
    default: 'present'
notes:
  - C(HEROKU_API_KEY) and C(TF_VAR_HEROKU_API_KEY) env variable can be used instead setting c(api_key).
  - If you use I(--check), you can also pass the I(-v) flag to see affected apps in C(msg), e.g. ['heroku-example-app'].
'''
    
            if remove_rules:
            chk_changed = False
            for rule_id in remove_rules:
                if module.check_mode:
                    chk_changed |= _remove_firewall_rule(module,
                                                         oneandone_conn,
                                                         firewall_policy['id'],
                                                         rule_id)
    
        if module.params['repo']:
        params['deploy[scm_repository]'] = module.params['repo']
    
        model_address = model.find('./*[@id='0x12d7f']').text
    
    
if __name__ == '__main__':
    main()

    
                    if self.eot[s] >= 0:
                    #print 'EOT to %d' % self.eot[s]
                    
                    s = self.eot[s]
                    input.consume()
                    continue
    
            self.expecting = expecting
        
    
        output_directory = 'pdfs' if results.directory is None else results.directory