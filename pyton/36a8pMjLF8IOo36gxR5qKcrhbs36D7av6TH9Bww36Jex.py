
        
        
DOCUMENTATION = '''
---
module: ec2_snapshot
short_description: creates a snapshot from an existing volume
description:
    - creates an EC2 snapshot from an existing EBS volume
version_added: '1.5'
options:
  volume_id:
    description:
      - volume from which to take the snapshot
    required: false
  description:
    description:
      - description to be applied to the snapshot
    required: false
  instance_id:
    description:
    - instance that has the required volume to snapshot mounted
    required: false
  device_name:
    description:
    - device name of a mounted volume to be snapshotted
    required: false
  snapshot_tags:
    description:
      - a hash/dictionary of tags to add to the snapshot
    required: false
    version_added: '1.6'
  wait:
    description:
      - wait for the snapshot to be ready
    type: bool
    required: false
    default: yes
    version_added: '1.5.1'
  wait_timeout:
    description:
      - how long before wait gives up, in seconds
      - specify 0 to wait forever
    required: false
    default: 0
    version_added: '1.5.1'
  state:
    description:
      - whether to add or create a snapshot
    required: false
    default: present
    choices: ['absent', 'present']
    version_added: '1.9'
  snapshot_id:
    description:
      - snapshot id to remove
    required: false
    version_added: '1.9'
  last_snapshot_min_age:
    description:
      - If the volume's most recent snapshot has started less than `last_snapshot_min_age' minutes ago, a new snapshot will not be created.
    required: false
    default: 0
    version_added: '2.0'
    
        try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        iam = boto3_conn(module, conn_type='client', resource='iam', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Boto3 Client Error - ' + str(e.msg))
    
    - oneandone_moitoring_policy:
    auth_token: oneandone_private_api_key
    monitoring_policy: ansible monitoring policy
    name: ansible monitoring policy updated
    description: Testing creation of a monitoring policy with ansible updated
    email: another@emailaddress.com
    thresholds:
     -
       cpu:
         warning:
           value: 70
           alert: false
         critical:
           value: 90
           alert: false
     -
       ram:
         warning:
           value: 70
           alert: false
         critical:
           value: 80
           alert: false
     -
       disk:
         warning:
           value: 70
           alert: false
         critical:
           value: 80
           alert: false
     -
       internal_ping:
         warning:
           value: 60
           alert: false
         critical:
           value: 90
           alert: false
     -
       transfer:
         warning:
           value: 900
           alert: false
         critical:
           value: 1900
           alert: false
    wait: true
    state: update
    
                if self.requires_template_update(host.TEMPLATE, desired_template_changes):
                # setup the root element so that pyone will generate XML instead of attribute vector
                desired_template_changes = {'TEMPLATE': desired_template_changes}
                if one.host.update(host.ID, desired_template_changes, 1):  # merge the template
                    result['changed'] = True
                else:
                    self.fail(msg='failed to update the host template')
    
    # Ensure that dns zone is removed
- ipa_dnszone:
    zone_name: example.com
    ipa_host: localhost
    ipa_user: admin
    ipa_pass: topsecret
    state: absent
'''
    
        host = module.params['host']
    hostcategory = module.params['hostcategory']
    hostgroup = module.params['hostgroup']
    service = module.params['service']
    servicecategory = module.params['servicecategory']
    servicegroup = module.params['servicegroup']
    sourcehost = module.params['sourcehost']
    sourcehostcategory = module.params['sourcehostcategory']
    sourcehostgroup = module.params['sourcehostgroup']
    user = module.params['user']
    usercategory = module.params['usercategory']
    usergroup = module.params['usergroup']
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            name=dict(type='str', required=True),
            state=dict(type='str', choices=['present', 'absent'], default='present')
        ),
        supports_check_mode=True
    )
    
    
DOCUMENTATION = '''
---
module: logentries
author: 'Ivan Vanderbyl (@ivanvanderbyl)'
short_description: Module for tracking logs via logentries.com
description:
    - Sends logs to LogEntries in realtime
version_added: '1.6'
options:
    path:
        description:
            - path to a log file
        required: true
    state:
        description:
            - following state of the log
        choices: [ 'present', 'absent' ]
        required: false
        default: present
    name:
        description:
            - name of the log
        required: false
    logtype:
        description:
            - type of the log
        required: false