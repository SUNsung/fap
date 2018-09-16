
        
            request.addfinalizer(_reset_settings)
    conf.settings.user_dir = Path('~/.thefuck')
    return conf.settings
    
    
def test_when_cant_configure_automatically(shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=False)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    apt-get is a simple command line interface for downloading and
installing packages. The most frequently used commands are update
and install.
    
    dynamodb                                 | dynamodbstreams
ec2                                      | ecr
    
        def get_invalidation(self, distribution_id, caller_reference):
        current_invalidation = {}
        # find all invalidations for the distribution
        try:
            paginator = self.client.get_paginator('list_invalidations')
            invalidations = paginator.paginate(DistributionId=distribution_id).build_full_result().get('InvalidationList', {}).get('Items', [])
            invalidation_ids = [inv['Id'] for inv in invalidations]
        except (BotoCoreError, ClientError) as e:
            self.module.fail_json_aws(e, msg='Error listing CloudFront invalidations.')
    
        if state == 'present':
        if origin_access_identity_id is not None and e_tag is not None:
            result, changed = service_mgr.update_origin_access_identity(caller_reference, comment, origin_access_identity_id, e_tag)
        else:
            result = service_mgr.create_origin_access_identity(caller_reference, comment)
            changed = True
    elif(state == 'absent' and origin_access_identity_id is not None and
         e_tag is not None):
        result = service_mgr.delete_origin_access_identity(origin_access_identity_id, e_tag)
        changed = True
    
    - cloudwatchevent_rule:
    name: MyCronTask
    state: absent
'''
    
    RETURN = '''
log_groups:
    description: Return the list of complex objetcs representing log groups
    returned: success
    type: complex
    contains:
        log_group_name:
            description: The name of the log group.
            returned: always
            type: string
        creation_time:
            description: The creation time of the log group.
            returned: always
            type: integer
        retention_in_days:
            description: The number of days to retain the log events in the specified log group.
            returned: always
            type: integer
        metric_filter_count:
            description: The number of metric filters.
            returned: always
            type: integer
        arn:
            description: The Amazon Resource Name (ARN) of the log group.
            returned: always
            type: string
        stored_bytes:
            description: The number of bytes stored.
            returned: always
            type: string
        kms_key_id:
            description: The Amazon Resource Name (ARN) of the CMK to use when encrypting log data.
            returned: always
            type: string
'''
    
        def ensure_cgw_present(self, bgp_asn, ip_address):
        if not bgp_asn:
            bgp_asn = 65000
        response = self.ec2.create_customer_gateway(
            DryRun=False,
            Type='ipsec.1',
            PublicIp=ip_address,
            BgpAsn=bgp_asn,
        )
        return response
    
    # List all EIP addresses for a VM.
- ec2_eip_facts:
    filters:
       instance-id: i-123456789
  register: my_vm_eips
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import (AnsibleAWSError, HAS_BOTO, connect_to_aws, ec2_argument_spec,
                                      get_aws_connection_info)
    
        if len(sys.argv) > 2:
        top_domain = sys.argv[2]
    else:
        top_domain = None
    
    from homeassistant.core import callback
from homeassistant.const import CONF_PLATFORM
import homeassistant.helpers.config_validation as cv
import homeassistant.util.dt as dt_util
from homeassistant.helpers.event import track_point_in_utc_time
    
    SERVICE_BROWSE_URL_SCHEMA = vol.Schema({
    # pylint: disable=no-value-for-parameter
    vol.Required(ATTR_URL, default=ATTR_URL_DEFAULT): vol.Url(),
})
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return an Actiontec scanner.'''
    scanner = ActiontecDeviceScanner(config[DOMAIN])
    return scanner if scanner.success_init else None
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Optional(CONF_HOST, default=CONF_DEFAULT_IP): cv.string,
    vol.Optional(CONF_PASSWORD, default='admin'): cv.string,
    vol.Optional(CONF_USERNAME, default=''): cv.string
})
    
            hass.async_add_job(self.async_see(
            dev_id=device,
            gps=gps_location, battery=battery,
            gps_accuracy=accuracy,
            attributes=attrs
        ))