
        
        
DOCUMENTATION = '''
---
module: elasticache_subnet_group
version_added: '2.0'
short_description: manage Elasticache subnet groups
description:
     - Creates, modifies, and deletes Elasticache subnet groups. This module has a dependency on python-boto >= 2.5.
options:
  state:
    description:
      - Specifies whether the subnet should be present or absent.
    required: true
    default: present
    choices: [ 'present' , 'absent' ]
  name:
    description:
      - Database subnet group identifier.
    required: true
  description:
    description:
      - Elasticache subnet group description. Only set when a new group is added.
  subnets:
    description:
      - List of subnet IDs that make up the Elasticache subnet group.
author: 'Tim Mahoney (@timmahoney)'
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        creds, params = get_google_cloud_credentials(module)
    pubsub_client = pubsub.Client(project=params['project_id'], credentials=creds, use_gax=False)
    pubsub_client.user_agent = 'ansible-pubsub-0.1'
    
        for (index, rule) in enumerate(desired_rules):
        try:
            if rule != current_rules[index]:
                updates.append((index, rule))
        except IndexError:
            additions.append(rule)
    
    
DOCUMENTATION = '''
---
module: ipa_dnszone
author: Fran Fitzpatrick (@fxfitz)
short_description: Manage FreeIPA DNS Zones
description:
- Add and delete an IPA DNS Zones using IPA API
options:
  zone_name:
    description:
    - The DNS zone name to which needs to be managed.
    required: true
  state:
    description: State to ensure
    required: false
    default: present
    choices: ['present', 'absent']
extends_documentation_fragment: ipa.documentation
version_added: '2.5'
'''
    
        elif not running and state == 'started':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('start')
        if status in ['initializing', 'running'] or 'start pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not started' % name, status=status)