
        
            required = [volume_id, snapshot_id, instance_id]
    if required.count(None) != len(required) - 1:  # only 1 must be set
        module.fail_json(msg='One and only one of volume_id or instance_id or snapshot_id must be specified')
    if instance_id and not device_name or device_name and not instance_id:
        module.fail_json(msg='Instance ID and device name must both be specified')
    
    
DOCUMENTATION = '''
---
module: iam_server_certificate_facts
short_description: Retrieve the facts of a server certificate
description:
  - Retrieve the attributes of a server certificate
version_added: '2.2'
author: 'Allen Sanabria (@linuxdynasty)'
requirements: [boto3, botocore]
options:
  name:
    description:
      - The name of the server certificate you are retrieving attributes for.
    required: true
extends_documentation_fragment:
    - aws
    - ec2
'''
    
            heroku_collaborator_list = [collaborator.user.email for collaborator in heroku_app.collaborators()]
    
            if sourcehostgroup is not None:
            changed = client.modify_if_diff(name, ipa_hbacrule.get('sourcehost_group', []), sourcehostgroup,
                                            client.hbacrule_add_sourcehost,
                                            client.hbacrule_remove_sourcehost, 'hostgroup') or changed
    
        def role_remove_user(self, name, item):
        return self.role_remove_member(name=name, item={'user': item})
    
    EXAMPLES = '''
# Create groups based on the machine architecture
- group_by:
    key: machine_{{ ansible_machine }}
    
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