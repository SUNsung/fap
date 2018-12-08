
        
            module = AnsibleModule(argument_spec=argument_spec,
                           supports_check_mode=True,
                           required_if=[
                               ('routing', 'dynamic', ['bgp_asn'])
                           ]
                           )
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import (ansible_dict_to_boto3_filter_list,
                                      boto3_tag_list_to_ansible_dict,
                                      camel_dict_to_snake_dict)
try:
    from botocore.exceptions import (BotoCoreError, ClientError)
except ImportError:
    pass  # caught by imported AnsibleAWSModule
    
    # Create a snapshot only if the most recent one is older than 1 hour
- local_action:
    module: ec2_snapshot
    volume_id: vol-abcdef12
    last_snapshot_min_age: 60
'''
    
    
DOCUMENTATION = '''
---
module: iam_role_facts
short_description: Gather information on IAM roles
description:
    - Gathers information about IAM roles
version_added: '2.5'
requirements: [ boto3 ]
author:
    - 'Will Thames (@willthames)'
options:
    name:
        description:
            - Name of a role to search for
            - Mutually exclusive with C(prefix)
        aliases:
            - role_name
    path_prefix:
        description:
            - Prefix of role I(path) to restrict IAM role search for
            - Mutually exclusive with C(name)
extends_documentation_fragment:
  - aws
  - ec2
'''
    
    
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
    
        if region:
        client_connection = boto3_conn(module, conn_type='client', resource='s3', region=region, endpoint=ec2_url, **aws_connect_params)
        resource_connection = boto3_conn(module, conn_type='resource', resource='s3', region=region, endpoint=ec2_url, **aws_connect_params)
    else:
        module.fail_json(msg='region must be specified')
    
            return self.results