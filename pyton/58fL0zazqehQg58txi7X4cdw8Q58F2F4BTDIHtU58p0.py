
        
        
def main():
    import os
    import re
    import shutil
    import sys
    dests = sys.argv[1:] or ['.']
    filename = re.sub('\.pyc$', '.py', __file__)
    
    
@pytest.fixture(autouse=True)
def shell_config(mocker):
    path_mock = mocker.patch('thefuck.entrypoints.not_configured.Path',
                             new_callable=MagicMock)
    return path_mock.return_value \
        .expanduser.return_value \
        .open.return_value \
        .__enter__.return_value
    
            Did you mean `build`?
'''
    
        def find_and_update_condition(self, condition_set_id):
        current_condition = self.get_condition_by_id(condition_set_id)
        update = self.format_for_update(condition_set_id)
        missing = self.find_missing(update, current_condition)
        if self.module.params.get('purge_filters'):
            extra = [{'Action': 'DELETE', self.conditiontuple: current_tuple}
                     for current_tuple in current_condition[self.conditiontuples]
                     if current_tuple not in [desired[self.conditiontuple] for desired in update['Updates']]]
        else:
            extra = []
        changed = bool(missing or extra)
        if changed:
            update['Updates'] = missing + extra
            func = getattr(self.client, 'update_' + self.method_suffix)
            try:
                result = run_func_with_change_token_backoff(self.client, self.module, update, func, wait=True)
            except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
                self.module.fail_json_aws(e, msg='Could not update condition')
        return changed, self.get_condition_by_id(condition_set_id)
    
        service_mgr = CloudFormationServiceManager(module)
    
        def ensure_absent(self):
        '''Ensures the rule and targets are absent'''
        rule_description = self.rule.describe()
        if not rule_description:
            # Rule doesn't exist so don't need to delete
            return
        self.rule.delete()
    
    
DOCUMENTATION = '''
---
module: ec2_asg_facts
short_description: Gather facts about ec2 Auto Scaling Groups (ASGs) in AWS
description:
  - Gather facts about ec2 Auto Scaling Groups (ASGs) in AWS
version_added: '2.2'
requirements: [ boto3 ]
author: 'Rob White (@wimnat)'
options:
  name:
    description:
      - The prefix or name of the auto scaling group(s) you are searching for.
      - 'Note: This is a regular expression match with implicit '^' (beginning of string). Append '$' for a complete name match.'
    required: false
  tags:
    description:
      - >
        A dictionary/hash of tags in the format { tag1_name: 'tag1_value', tag2_name: 'tag2_value' } to match against the auto scaling
        group(s) you are searching for.
    required: false
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    
DOCUMENTATION = '''
---
module: ec2_customer_gateway
short_description: Manage an AWS customer gateway
description:
    - Manage an AWS customer gateway
version_added: '2.2'
author: Michael Baydoun (@MichaelBaydoun)
requirements: [ botocore, boto3 ]
notes:
    - You cannot create more than one customer gateway with the same IP address. If you run an identical request more than one time, the
      first request creates the customer gateway, and subsequent requests return information about the existing customer gateway. The subsequent
      requests do not create new customer gateway resources.
    - Return values contain customer_gateway and customer_gateways keys which are identical dicts. You should use
      customer_gateway. See U(https://github.com/ansible/ansible-modules-extras/issues/2773) for details.
options:
  bgp_asn:
    description:
      - Border Gateway Protocol (BGP) Autonomous System Number (ASN), required when state=present.
  ip_address:
    description:
      - Internet-routable IP address for customers gateway, must be a static address.
    required: true
  name:
    description:
      - Name of the customer gateway.
    required: true
  routing:
    description:
      - The type of routing.
    choices: ['static', 'dynamic']
    default: dynamic
    version_added: '2.4'
  state:
    description:
      - Create or terminate the Customer Gateway.
    default: present
    choices: [ 'present', 'absent' ]
extends_documentation_fragment:
    - aws
    - ec2
'''
    
                    if release_on_disassociation and disassociated['changed']:
                    released = release_address(ec2, address, module.check_mode)
                    result = {'changed': True, 'disassociated': disassociated, 'released': released}
                else:
                    result = {'changed': disassociated['changed'], 'disassociated': disassociated, 'released': {'changed': False}}
            else:
                released = release_address(ec2, address, module.check_mode)
                result = {'changed': released['changed'], 'disassociated': {'changed': False}, 'released': released}
    
        if module.params.get('filters') is None:
        filters = []
    else:
        filters = ansible_dict_to_boto3_filter_list(module.params.get('filters'))
    
    
DOCUMENTATION = '''
module: ec2_metric_alarm
short_description: 'Create/update or delete AWS Cloudwatch 'metric alarms''
description:
 - Can create or delete AWS metric alarms.
 - Metrics you wish to alarm on must already exist.
version_added: '1.6'
author: 'Zacharie Eakin (@zeekin)'
options:
    state:
        description:
          - register or deregister the alarm
        required: true
        choices: ['present', 'absent']
    name:
        description:
          - Unique name for the alarm
        required: true
    metric:
        description:
          - Name of the monitored metric (e.g. CPUUtilization)
          - Metric must already exist
        required: false
    namespace:
        description:
          - Name of the appropriate namespace ('AWS/EC2', 'System/Linux', etc.), which determines the category it will appear under in cloudwatch
        required: false
    statistic:
        description:
          - Operation applied to the metric
          - Works in conjunction with period and evaluation_periods to determine the comparison value
        required: false
        choices: ['SampleCount','Average','Sum','Minimum','Maximum']
    comparison:
        description:
          - Determines how the threshold value is compared
        required: false
        choices: ['<=','<','>','>=']
    threshold:
        description:
          - Sets the min/max bound for triggering the alarm
        required: false
    period:
        description:
          - The time (in seconds) between metric evaluations
        required: false
    evaluation_periods:
        description:
          - The number of times in which the metric is evaluated before final calculation
        required: false
    unit:
        description:
          - The threshold's unit of measurement
        required: false
        choices:
            - 'Seconds'
            - 'Microseconds'
            - 'Milliseconds'
            - 'Bytes'
            - 'Kilobytes'
            - 'Megabytes'
            - 'Gigabytes'
            - 'Terabytes'
            - 'Bits'
            - 'Kilobits'
            - 'Megabits'
            - 'Gigabits'
            - 'Terabits'
            - 'Percent'
            - 'Count'
            - 'Bytes/Second'
            - 'Kilobytes/Second'
            - 'Megabytes/Second'
            - 'Gigabytes/Second'
            - 'Terabytes/Second'
            - 'Bits/Second'
            - 'Kilobits/Second'
            - 'Megabits/Second'
            - 'Gigabits/Second'
            - 'Terabits/Second'
            - 'Count/Second'
            - 'None'
    description:
        description:
          - A longer description of the alarm
        required: false
    dimensions:
        description:
          - Describes to what the alarm is applied
        required: false
    alarm_actions:
        description:
          - A list of the names action(s) taken when the alarm is in the 'alarm' status
        required: false
    insufficient_data_actions:
        description:
          - A list of the names of action(s) to take when the alarm is in the 'insufficient_data' status
        required: false
    ok_actions:
        description:
          - A list of the names of action(s) to take when the alarm is in the 'ok' status
        required: false
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    
def get_placement_groups_details(connection, module):
    names = module.params.get('names')
    try:
        if len(names) > 0:
            response = connection.describe_placement_groups(
                Filters=[{
                    'Name': 'group-name',
                    'Values': names
                }])
        else:
            response = connection.describe_placement_groups()
    except (BotoCoreError, ClientError) as e:
        module.fail_json_aws(
            e,
            msg='Couldn't find placement groups named [%s]' % names)
    
        vid = r1('data-vid='(\d+)'', html)
    up = r1('data-name='([^']+)'', html)
    p_title = r1('active'>([^<]+)', html)
    title = '%s (%s)' % (title, up)
    if p_title: title = '%s - %s' % (title, p_title)
    acfun_download_by_vid(vid, title,
                          output_dir=output_dir,
                          merge=merge,
                          info_only=info_only,
                          **kwargs)
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
    #----------------------------------------------------------------------
def ckplayer_download_by_xml(ckinfo, output_dir = '.', merge = False, info_only = False, **kwargs):
    #Info XML
    video_info = ckplayer_get_info_by_xml(ckinfo)
    
    try:
        title = kwargs['title']
    except:
        title = ''
    type_ = ''
    size = 0
    
    if len(video_info['links']) > 0:  #has link
        type_, _ext, size = url_info(video_info['links'][0])  #use 1st to determine type, ext
    
    if 'size' in video_info:
        size = int(video_info['size'])
    else:
        for i in video_info['links'][1:]:  #save 1st one
            size += url_info(i)[2]
    
    print_info(site_info, title, type_, size)
    if not info_only:
        download_urls(video_info['links'], title, _ext, size, output_dir=output_dir, merge=merge)
    
        vids = matchall(content, youku_embed_patterns)
    for vid in set(vids):
        found = True
        youku_download_by_vid(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
        def test_3rd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1510'
        self.assertEqual(station, expected_station)
    
    ### OUTPUT ###
# rm1: Running
# rm2: Running
# rm1: Zombie
# rm2: Zombie
# rm1 id: 140732837899224
# rm2 id: 140732837899296
# rm1: Init
# rm2: Init
# rm3: Init

    
        move = Action('move')
    person = Person('Jack', move)
    person.do_action().amount('5m').stop()
    
    Below provides an example of such Dispatcher, which contains three
copies of the prototype: 'default', 'objecta' and 'objectb'.
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
        '''
    
        @abc.abstractmethod
    def contribute(self):
        raise NotImplementedError('Must provide implementation in subclass.')
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    
@asyncio.coroutine
def async_setup(hass, config):
    '''Activate Alexa component.'''
    config = config.get(DOMAIN, {})
    flash_briefings_config = config.get(CONF_FLASH_BRIEFINGS)
    
        @callback
    def call_action():
        '''Call action with right context.'''
        hass.async_run_job(action, {
            'trigger': {
                CONF_PLATFORM: 'litejet',
                CONF_NUMBER: number,
                CONF_HELD_MORE_THAN: held_more_than,
                CONF_HELD_LESS_THAN: held_less_than
            },
        })
    
        scan_wizard.on_completed = scan_completed_callback
    client.add_scan_wizard(scan_wizard)
    
    SERVICE_BROWSE_URL_SCHEMA = vol.Schema({
    # pylint: disable=no-value-for-parameter
    vol.Required(ATTR_URL, default=ATTR_URL_DEFAULT): vol.Url(),
})
    
            # We cover all current fields above, but just in case we start
        # supporting more fields in the future.
        updated_value.update(cur_value)
        updated_value.update(new_value)
        data[index] = updated_value

    
        return True
    
        def __init__(self, test_mode):
        '''Initialize suite view.'''
        self._test_mode = test_mode
    
            # Check if the access point is accessible
        response = self._make_request()
        if not response.status_code == 200:
            raise ConnectionError('Cannot connect to Linksys Access Point')
    
    
async def async_setup_scanner(hass, config, async_see, discovery_info=None):
    '''Set up the MySensors device scanner.'''
    new_devices = mysensors.setup_mysensors_platform(
        hass, DOMAIN, discovery_info, MySensorsDeviceScanner,
        device_args=(async_see, ))
    if not new_devices:
        return False