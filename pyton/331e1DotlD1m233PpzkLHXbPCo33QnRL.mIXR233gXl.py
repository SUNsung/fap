
        
            def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.SUPERVISOR)
    
        def remove_user(self, user):
        pass
    
    
class Person(object):
    
    
EXIT_STATUS_LABELS = {
    value: key
    for key, value in ExitStatus.__dict__.items()
    if key.isupper()
}

    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME + SEP_CREDENTIALS + PASSWORD,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    
class AuthBase(object):
    '''Base class that all auth implementations derive from'''
    
    import sys
    
    requests.utils imports from here, so be careful with imports.
'''
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
    #   __
#  /__)  _  _     _   _ _/   _
# / (   (- (/ (/ (- _)  /  _)
#          /
    
    
def test_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
    
def test_cce_one_hot():
    y_a = K.variable(np.random.randint(0, 7, (5, 6)))
    y_b = K.variable(np.random.random((5, 6, 7)))
    objective_output = losses.sparse_categorical_crossentropy(y_a, y_b)
    assert K.eval(objective_output).shape == (5, 6)
    
        model.history = cbks.History()
    _callbacks = [cbks.BaseLogger(
        stateful_metrics=model.stateful_metric_names)]
    if verbose:
        if steps_per_epoch is not None:
            count_mode = 'steps'
        else:
            count_mode = 'samples'
        _callbacks.append(
            cbks.ProgbarLogger(
                count_mode,
                stateful_metrics=model.stateful_metric_names))
    _callbacks += (callbacks or []) + [model.history]
    callbacks = cbks.CallbackList(_callbacks)
    out_labels = out_labels or []
    
    - name: obtain all facts for a single WAF
  aws_waf_facts:
    name: test_waf
'''
    
    '''
    
    RETURN = '''
web_acl:
  description: contents of the Web ACL
  returned: always
  type: complex
  contains:
    default_action:
      description: Default action taken by the Web ACL if no rules match
      returned: always
      type: dict
      sample:
        type: BLOCK
    metric_name:
      description: Metric name used as an identifier
      returned: always
      type: string
      sample: mywebacl
    name:
      description: Friendly name of the Web ACL
      returned: always
      type: string
      sample: my web acl
    rules:
      description: List of rules
      returned: always
      type: complex
      contains:
        action:
          description: Action taken by the WAF when the rule matches
          returned: always
          type: complex
          sample:
            type: ALLOW
        priority:
          description: priority number of the rule (lower numbers are run first)
          returned: always
          type: int
          sample: 2
        rule_id:
          description: Rule ID
          returned: always
          type: string
          sample: a6fc7ab5-287b-479f-8004-7fd0399daf75
        type:
          description: Type of rule (either REGULAR or RATE_BASED)
          returned: always
          type: string
          sample: REGULAR
    web_acl_id:
      description: Unique identifier of Web ACL
      returned: always
      type: string
      sample: 10fff965-4b6b-46e2-9d78-24f6d2e2d21c
'''
    
        argument_spec.update(dict(
        state=dict(choices=['present', 'absent'], default='present'),
        origin_access_identity_id=dict(),
        caller_reference=dict(),
        comment=dict(),
    ))
    
    - cloudwatchevent_rule:
    name: MyDisabledCronTask
    schedule_expression: 'rate(5 minutes)'
    description: Run my disabled scheduled task
    state: disabled
    targets:
      - id: MyOtherTargetId
        arn: arn:aws:lambda:us-east-1:123456789012:function:MyFunction
        input: '{'foo': 'bar'}'
    
        module = AnsibleModule(argument_spec=argument_spec,
                           supports_check_mode=True,
                           required_if=[
                               ('routing', 'dynamic', ['bgp_asn'])
                           ]
                           )
    
    
def create_block_device_meta(module, volume):
    # device_type has been used historically to represent volume_type,
    # however ec2_vol uses volume_type, as does the BlockDeviceType, so
    # we add handling for either/or but not both
    if 'device_type' in volume:
        if 'volume_type' in volume:
            module.fail_json(msg='device_type is a deprecated name for volume_type. '
                             'Do not use both device_type and volume_type')
        else:
            module.deprecate('device_type is deprecated for block devices - use volume_type instead',
                             version=2.9)
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import (connect_to_aws,
                                      boto3_conn,
                                      ec2_argument_spec,
                                      get_aws_connection_info)
try:
    from botocore.exceptions import (BotoCoreError, ClientError)
except ImportError:
    pass  # caught by imported HAS_BOTO3
    
        region, ec2_url, aws_connect_params = get_aws_connection_info(module)
    
        if instance_id:
        try:
            volumes = ec2.get_all_volumes(filters={'attachment.instance-id': instance_id, 'attachment.device': device_name})
        except boto.exception.BotoServerError as e:
            module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
    
def get_title_and_urls(json_data):
    title = legitimize(re.sub('[\s*]', '_', json_data['title']))
    video_info = json_data['file_versions']['html5']['video']
    if 'high' not in video_info:
        if 'med' not in video_info:
            video_url = video_info['low']['url']
        else:
            video_url = video_info['med']['url']
    else:
        video_url = video_info['high']['url']
    audio_info = json_data['file_versions']['html5']['audio']
    if 'high' not in audio_info:
        if 'med' not in audio_info:
            audio_url = audio_info['low']['url']
        else:
            audio_url = audio_info['med']['url']
    else:
        audio_url = audio_info['high']['url']
    return title, video_url, audio_url
    
    #----------------------------------------------------------------------
def dilidili_download(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    global headers
    re_str = r'http://www.dilidili.com/watch\S+'
    if re.match(r'http://www.dilidili.wang', url):
        re_str = r'http://www.dilidili.wang/watch\S+'
        headers['Referer'] = 'http://www.dilidili.wang/'
    elif re.match(r'http://www.dilidili.mobi', url):
        re_str = r'http://www.dilidili.mobi/watch\S+'
        headers['Referer'] = 'http://www.dilidili.mobi/'
    
    from ..common import *
import json
    
    def get_gallery_id(url, page):
    return match1(url, pattern_url_gallery)
    
    
# Are two open files really referencing the same file?
# (Not necessarily the same file descriptor!)
def sameopenfile(fp1, fp2):
    '''Test whether two open file objects reference the same file'''
    s1 = os.fstat(fp1)
    s2 = os.fstat(fp2)
    return samestat(s1, s2)
    
        The 'optimization' parameter controls the presumed optimization level of
    the bytecode file. If 'optimization' is not None, the string representation
    of the argument is taken and verified to be alphanumeric (else ValueError
    is raised).
    
    '''
Reference: https://en.wikipedia.org/wiki/Delegation_pattern
Author: https://github.com/IuryAlves
    
        jim = Subscriber('jim', message_center)
    jim.subscribe('cartoon')
    jack = Subscriber('jack', message_center)
    jack.subscribe('music')
    gee = Subscriber('gee', message_center)
    gee.subscribe('movie')
    vani = Subscriber('vani', message_center)
    vani.subscribe('movie')
    vani.unsubscribe('movie')
    
    
class OrSpecification(CompositeSpecification):
    _one = Specification()
    _other = Specification()
    
    
if __name__ == '__main__':
    main()
    
        sample_queue.put('sam')
    test_object(sample_queue)
    print('Outside func: {}'.format(sample_queue.get()))