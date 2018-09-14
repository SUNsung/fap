
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
    
def with_metaclass(meta, *bases):
    '''Create a base class with a metaclass.'''
    # This requires a bit of explanation: the basic idea is to make a
    # dummy metaclass for one level of class instantiation that replaces
    # itself with the actual metaclass.
    class metaclass(type):
        def __new__(cls, name, this_bases, d):
            return meta(name, bases, d)
    return type.__new__(metaclass, 'temporary_class', (), {})
    
    
class _AppCtxGlobals(object):
    '''A plain object. Used as a namespace for storing data during an
    application context.
    
    
def create_logger(app):
    '''Get the ``'flask.app'`` logger and configure it if needed.
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
        def __init__(self, ssl_version=None, **kwargs):
        self._ssl_version = ssl_version
        super(HTTPieHTTPAdapter, self).__init__(**kwargs)
    
        '''
    is_windows = is_windows
    config_dir = DEFAULT_CONFIG_DIR
    stdin = sys.stdin
    stdin_isatty = stdin.isatty()
    stdin_encoding = None
    stdout = sys.stdout
    stdout_isatty = stdout.isatty()
    stdout_encoding = None
    stderr = sys.stderr
    stderr_isatty = stderr.isatty()
    colors = 256
    if not is_windows:
        if curses:
            try:
                curses.setupterm()
                colors = curses.tigetnum('colors')
            except curses.error:
                pass
    else:
        # noinspection PyUnresolvedReferences
        import colorama.initialise
        stdout = colorama.initialise.wrap_stream(
            stdout, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        stderr = colorama.initialise.wrap_stream(
            stderr, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        del colorama
    
            headers = [
            '%s: %s' % (
                name,
                value if isinstance(value, str) else value.decode('utf8')
            )
            for name, value in headers.items()
        ]
    
        def get_lexer(self, mime, body):
        return get_lexer(
            mime=mime,
            explicit_json=self.explicit_json,
            body=body,
        )
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        # Output processing
    def get_formatters(self):
        return [plugin for plugin in self
                if issubclass(plugin, FormatterPlugin)]
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
        try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)

    
        def test_format_option(self, httpbin):
        env = MockEnvironment(colors=256)
        r = http('--print=B', '--pretty=format',
                 'GET', httpbin.url + '/get', 'a=b',
                 env=env)
        # Tests that the JSON data is formatted.
        assert r.strip().count('\n') == 2
        assert COLOR not in r
    
    This is better.
    
        assert not match(command)
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_match(brew_no_available_formula, brew_already_installed,
               brew_install_no_argument):
    assert match(Command('brew install elsticsearch',
                         brew_no_available_formula))
    assert not match(Command('brew install git',
                             brew_already_installed))
    assert not match(Command('brew install', brew_install_no_argument))
    
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
    
        cwe_rule = CloudWatchEventRule(module,
                                   client=get_cloudwatchevents_client(module),
                                   **rule_data)
    cwe_rule_manager = CloudWatchEventRuleManager(cwe_rule, targets)
    
    import traceback
from ansible.module_utils._text import to_native
from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import HAS_BOTO3, camel_dict_to_snake_dict, boto3_conn, ec2_argument_spec, get_aws_connection_info
    
    
def pipeline_field(client, dp_id, field):
    '''Return a pipeline field from the pipeline description.
    
    
if __name__ == '__main__':
    main()

    
    
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
    
        try:
        result = json.loads(json.dumps(connection.describe_customer_gateways(**params), default=date_handler))
    except (ClientError, BotoCoreError) as e:
        module.fail_json_aws(e, msg='Could not describe customer gateways')
    snaked_customer_gateways = [camel_dict_to_snake_dict(gateway) for gateway in result['CustomerGateways']]
    if snaked_customer_gateways:
        for customer_gateway in snaked_customer_gateways:
            customer_gateway['tags'] = boto3_tag_list_to_ansible_dict(customer_gateway.get('tags', []))
            customer_gateway_name = customer_gateway['tags'].get('Name')
            if customer_gateway_name:
                customer_gateway['customer_gateway_name'] = customer_gateway_name
    module.exit_json(changed=False, customer_gateways=snaked_customer_gateways)
    
    
DOCUMENTATION = '''
---
module: ec2_eip_facts
short_description: List EC2 EIP details
description:
    - List details of EC2 Elastic IP addresses.
version_added: '2.6'
author: 'Brad Macpherson (@iiibrad)'
options:
  filters:
    description:
      - A set of filters to use. Each filter is a name:value pair. The value
        may be a list or a single element.
    required: false
    default: {}
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    EXAMPLES = '''
# Note: These examples do not set authentication details, see the AWS Guide for details.
    
    
RETURN = '''
placement_group:
  description: Placement group attributes
  returned: when state != absent
  type: complex
  contains:
    name:
      description: PG name
      type: string
      sample: my-cluster
    state:
      description: PG state
      type: string
      sample: 'available'
    strategy:
      description: PG strategy
      type: string
      sample: 'cluster'
    
        for filename in os.listdir(directory):
        path = os.path.join(directory, filename)
        if not os.path.isfile(path):
            continue
        # Guess the content type based on the file's extension.  Encoding
        # will be ignored, although we should check for simple things like
        # gzip'd or compressed files.
        ctype, encoding = mimetypes.guess_type(path)
        if ctype is None or encoding is not None:
            # No guess could be made, or the file is encoded (compressed), so
            # use a generic bag-of-bits type.
            ctype = 'application/octet-stream'
        maintype, subtype = ctype.split('/', 1)
        with open(path, 'rb') as fp:
            msg.add_attachment(fp.read(),
                               maintype=maintype,
                               subtype=subtype,
                               filename=filename)
    # Now send or store the message
    if args.output:
        with open(args.output, 'wb') as fp:
            fp.write(msg.as_bytes(policy=SMTP))
    else:
        with smtplib.SMTP('localhost') as s:
            s.send_message(msg)
    
    import os
import email
import mimetypes
    
            assert i == 9
        print('\tGot ZeroDivisionError as expected from IMapIterator.next()')
        print()