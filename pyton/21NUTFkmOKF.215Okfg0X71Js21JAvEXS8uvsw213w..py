
        
        
def login_required(view):
    '''View decorator that redirects anonymous users to the login page.'''
    @functools.wraps(view)
    def wrapped_view(**kwargs):
        if g.user is None:
            return redirect(url_for('auth.login'))
    
        if appctx is None:
        raise RuntimeError(
            'Attempted to generate a URL without the application context being'
            ' pushed. This has to be executed when application context is'
            ' available.'
        )
    
    
@classmethod
def get_args(cls, dist, header=None):
    '''
    Yield write_script() argument tuples for a distribution's
    console_scripts and gui_scripts entry points.
    '''
    if header is None:
        header = cls.get_header()
    spec = str(dist.as_requirement())
    for type_ in 'console', 'gui':
        group = type_ + '_scripts'
        for name, ep in dist.get_entry_map(group).items():
            # ensure_safe_name
            if re.search(r'[\\/]', name):
                raise ValueError('Path separators not allowed in script names')
            script_text = TEMPLATE.format(
                          ep.module_name, ep.attrs[0], '.'.join(ep.attrs),
                          spec, group, name)
            args = cls._get_script_args(type_, name, header, script_text)
            for res in args:
                yield res
    
    version = sys.version_info[:2]
if version < (2, 7):
    print('thefuck requires Python version 2.7 or later' +
          ' ({}.{} detected).'.format(*version))
    sys.exit(-1)
elif (3, 0) < version < (3, 4):
    print('thefuck requires Python version 3.4 or later' +
          ' ({}.{} detected).'.format(*version))
    sys.exit(-1)
    
        assert proc.expect([TIMEOUT, u'Aborted'])
    
    no_match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Get:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease [89.2 kB]
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Get:4 http://security.ubuntu.com/ubuntu zesty-security InRelease [89.2 kB]
Hit:5 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Hit:6 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:7 https://download.docker.com/linux/ubuntu zesty InRelease
Get:8 http://us.archive.ubuntu.com/ubuntu zesty-updates/main i386 Packages [232 kB]
Get:9 http://us.archive.ubuntu.com/ubuntu zesty-updates/main amd64 Packages [235 kB]
Get:10 http://us.archive.ubuntu.com/ubuntu zesty-updates/main amd64 DEP-11 Metadata [55.2 kB]
Get:11 http://us.archive.ubuntu.com/ubuntu zesty-updates/main DEP-11 64x64 Icons [32.3 kB]
Get:12 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe amd64 Packages [156 kB]
Get:13 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe i386 Packages [156 kB]
Get:14 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe amd64 DEP-11 Metadata [175 kB]
Get:15 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe DEP-11 64x64 Icons [253 kB]
Get:16 http://us.archive.ubuntu.com/ubuntu zesty-updates/multiverse amd64 DEP-11 Metadata [5,840 B]
Get:17 http://us.archive.ubuntu.com/ubuntu zesty-backports/universe amd64 DEP-11 Metadata [4,588 B]
Get:18 http://security.ubuntu.com/ubuntu zesty-security/main amd64 DEP-11 Metadata [12.7 kB]
Get:19 http://security.ubuntu.com/ubuntu zesty-security/main DEP-11 64x64 Icons [17.6 kB]
Get:20 http://security.ubuntu.com/ubuntu zesty-security/universe amd64 DEP-11 Metadata [21.6 kB]
Get:21 http://security.ubuntu.com/ubuntu zesty-security/universe DEP-11 64x64 Icons [47.7 kB]
Get:22 http://security.ubuntu.com/ubuntu zesty-security/multiverse amd64 DEP-11 Metadata [208 B]
Fetched 1,673 kB in 0s (1,716 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
All packages are up to date.
'''
    
        assert get_new_command(Command('brew install aa',
                                   brew_no_available_formula))\
        != 'brew install aha'

    
    RETURN = '''
rule:
  description: WAF rule contents
  returned: always
  type: complex
  contains:
    metric_name:
      description: Metric name for the rule
      returned: always
      type: string
      sample: ansibletest1234rule
    name:
      description: Friendly name for the rule
      returned: always
      type: string
      sample: ansible-test-1234_rule
    predicates:
      description: List of conditions used in the rule
      returned: always
      type: complex
      contains:
        data_id:
          description: ID of the condition
          returned: always
          type: string
          sample: 8251acdb-526c-42a8-92bc-d3d13e584166
        negated:
          description: Whether the sense of the condition is negated
          returned: always
          type: bool
          sample: false
        type:
          description: type of the condition
          returned: always
          type: string
          sample: ByteMatch
    rule_id:
      description: ID of the WAF rule
      returned: always
      type: string
      sample: 15de0cbc-9204-4e1f-90e6-69b2f415c261
'''
    
        module.exit_json(changed=changed, **camel_dict_to_snake_dict(result))
    
            try:
            region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
            if not region:
                module.fail_json(msg='Region must be specified as a parameter, in EC2_REGION or AWS_REGION environment variables or in boto configuration file')
            self.ec2 = boto3_conn(module, conn_type='client', resource='ec2', region=region, endpoint=ec2_url, **aws_connect_kwargs)
        except ClientError as e:
            module.fail_json(msg=e.message)
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import (connect_to_aws,
                                      boto3_conn,
                                      ec2_argument_spec,
                                      get_aws_connection_info)
try:
    from botocore.exceptions import (BotoCoreError, ClientError)
except ImportError:
    pass  # caught by imported HAS_BOTO3
    
        if instance_id:
        try:
            volumes = ec2.get_all_volumes(filters={'attachment.instance-id': instance_id, 'attachment.device': device_name})
        except boto.exception.BotoServerError as e:
            module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
        try:
        response = conn.delete_egress_only_internet_gateway(DryRun=module.check_mode, EgressOnlyInternetGatewayId=eigw_id)
    except botocore.exceptions.ClientError as e:
        # When boto3 method is run with DryRun=True it returns an error on success
        # We need to catch the error and return something valid
        if e.response.get('Error', {}).get('Code') == 'DryRunOperation':
            changed = True
        else:
            module.fail_json_aws(e, msg='Could not delete Egress-Only Internet Gateway {0} from VPC {1}'.format(eigw_id, module.vpc_id))
    except botocore.exceptions.BotoCoreError as e:
        module.fail_json_aws(e, msg='Could not delete Egress-Only Internet Gateway {0} from VPC {1}'.format(eigw_id, module.vpc_id))
    
                    if verbosity >= 3:
                    result['original_policy'] = original_policy
    
    RETURN = '''
---
lambda_facts:
    description: lambda facts
    returned: success
    type: dict
lambda_facts.function:
    description: lambda function list
    returned: success
    type: dict
lambda_facts.function.TheName:
    description: lambda function information, including event, mapping, and version information
    returned: success
    type: dict
'''
    
        def test_samestat(self):
        test_fn1 = support.TESTFN
        test_fn2 = support.TESTFN + '2'
        self.addCleanup(support.unlink, test_fn1)
        self.addCleanup(support.unlink, test_fn2)
    
                # test that the path returns unchanged
            p1 = P('~/My Documents')
            p2 = P('~alice/My Documents')
            p3 = P('~bob/My Documents')
            p4 = P('/~/My Documents')
            p5 = P('d:~/My Documents')
            p6 = P('')
            self.assertRaises(RuntimeError, p1.expanduser)
            self.assertRaises(RuntimeError, p2.expanduser)
            self.assertRaises(RuntimeError, p3.expanduser)
            self.assertEqual(p4.expanduser(), p4)
            self.assertEqual(p5.expanduser(), p5)
            self.assertEqual(p6.expanduser(), p6)
    
        def test_large_PYTHONPATH(self):
        path1 = 'ABCDE' * 100
        path2 = 'FGHIJ' * 100
        path = path1 + os.pathsep + path2
    
        def testOpenBytesFilename(self):
        str_filename = self.filename
        try:
            bytes_filename = str_filename.encode('ascii')
        except UnicodeEncodeError:
            self.skipTest('Temporary file name needs to be ASCII')
        with BZ2File(bytes_filename, 'wb') as f:
            f.write(self.DATA)
        with BZ2File(bytes_filename, 'rb') as f:
            self.assertEqual(f.read(), self.DATA)
        # Sanity check that we are actually operating on the right file.
        with BZ2File(str_filename, 'rb') as f:
            self.assertEqual(f.read(), self.DATA)
    
    # If we want to print a preview of the message content, we can extract whatever
# the least formatted payload is and print the first three lines.  Of course,
# if the message has no plain text part printing the first three lines of html
# is probably useless, but this is just a conceptual example.
simplest = msg.get_body(preferencelist=('plain', 'html'))
print()
print(''.join(simplest.get_content().splitlines(keepends=True)[:3]))
    
            TASKS = [(mul, (i, 7)) for i in range(10)] + \
                [(plus, (i, 8)) for i in range(10)]
    
    buffer = ''
    
        url = FLASH_BRIEFINGS_API_ENDPOINT
    name = 'api:alexa:flash_briefings'
    
            self._is_down = click_type == pyflic.ClickType.ButtonDown
        self.schedule_update_ha_state()
    
    import requests
import voluptuous as vol
    
            json_body[state.attributes.get('friendly_name')] = _state
    
                send_data(conf.get(CONF_URL), conf.get(CONF_API_KEY),
                      str(conf.get(CONF_INPUTNODE)), payload)
    
            resp_text = xml_template.format(
            self.config.advertise_ip, self.config.advertise_port)
    
        for object_id, cfg in config[DOMAIN].items():
        name = cfg.get(CONF_NAME, object_id)
        graph = HistoryGraphEntity(name, cfg)
        graphs.append(graph)
    
    print()
    
        def notify(self, msg):
        self.msg_queue.append(msg)
    
    
class Visitor(object):
    def visit(self, node, *args, **kwargs):
        meth = None
        for cls in node.__class__.__mro__:
            meth_name = 'visit_' + cls.__name__
            meth = getattr(self, meth_name, None)
            if meth:
                break
    
    ### OUTPUT ###
# Name: Jhon    Occupation: Coder
# Before we access `relatives`:
# {'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Jhon's relatives: Many relatives.
# After we've accessed `relatives`:
# {'relatives': 'Many relatives.', 'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Father and mother
# {'_lazy__parents': 'Father and mother', 'relatives': 'Many relatives.', 'call_count2': 1, 'name': 'Jhon', 'occupation': 'Coder'}  # noqa flake8
# Father and mother
# 1

    
        sample_queue.put('sam')
    test_object(sample_queue)
    print('Outside func: {}'.format(sample_queue.get()))
    
        value = 'default'
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
    
class ProductionCodeTimeProvider(object):
    '''
    Production code version of the time provider (just a wrapper for formatting
    datetime for this example).
    '''
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(10, 20)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 30)
    
        def on_diagnostics_passed(self):
        super(Suspect, self).send_diagnostics_pass_report()
        super(Suspect, self).clear_alarm()  # loss of redundancy alarm
        super(Suspect, self).next_state('standby')