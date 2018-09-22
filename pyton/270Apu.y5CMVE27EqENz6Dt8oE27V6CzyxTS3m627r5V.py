
        
        
init_zshrc = u'''echo '
export SHELL=/usr/bin/zsh
export HISTFILE=~/.zsh_history
echo > $HISTFILE
export SAVEHIST=100
export HISTSIZE=100
eval $(thefuck --alias {})
setopt INC_APPEND_HISTORY
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.zshrc'''
    
     update - update list of available packages
    
    
def ensure_web_acl_present(client, module):
    changed = False
    result = None
    name = module.params['name']
    web_acl_id = get_web_acl_by_name(client, module, name)
    if web_acl_id:
        (changed, result) = find_and_update_web_acl(client, module, web_acl_id)
    else:
        metric_name = module.params['metric_name']
        if not metric_name:
            metric_name = re.sub(r'[^A-Za-z0-9]', '', module.params['name'])
        default_action = module.params['default_action'].upper()
        try:
            params = {'Name': name, 'MetricName': metric_name, 'DefaultAction': {'Type': default_action}}
            new_web_acl = run_func_with_change_token_backoff(client, module, params, client.create_web_acl)
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Could not create Web ACL')
        (changed, result) = find_and_update_web_acl(client, module, new_web_acl['WebACL']['WebACLId'])
    return changed, result
    
            # The rule matches AWS only if all rule data fields are equal
        # to their corresponding local value defined in the task
        return all([
            getattr(self.rule, field) == aws_rule_data.get(field, None)
            for field in self.RULE_FIELDS
        ])
    
    RETURN = '''
gateway.customer_gateways:
    description: details about the gateway that was created.
    returned: success
    type: complex
    contains:
        bgp_asn:
            description: The Border Gateway Autonomous System Number.
            returned: when exists and gateway is available.
            sample: 65123
            type: string
        customer_gateway_id:
            description: gateway id assigned by amazon.
            returned: when exists and gateway is available.
            sample: cgw-cb6386a2
            type: string
        ip_address:
            description: ip address of your gateway device.
            returned: when exists and gateway is available.
            sample: 1.2.3.4
            type: string
        state:
            description: state of gateway.
            returned: when gateway exists and is available.
            state: available
            type: string
        tags:
            description: any tags on the gateway.
            returned: when gateway exists and is available, and when tags exist.
            state: available
            type: string
        type:
            description: encryption type.
            returned: when gateway exists and is available.
            sample: ipsec.1
            type: string
'''
    
            if domain == 'vpc':
            unassociated_addresses = [a for a in all_addresses
                                      if not a.association_id]
        else:
            unassociated_addresses = [a for a in all_addresses
                                      if not a.instance_id]
        if unassociated_addresses:
            return unassociated_addresses[0], False
    
    '''
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True, type='str'),
            metric=dict(type='str'),
            namespace=dict(type='str'),
            statistic=dict(type='str', choices=['SampleCount', 'Average', 'Sum', 'Minimum', 'Maximum']),
            comparison=dict(type='str', choices=['<=', '<', '>', '>=']),
            threshold=dict(type='float'),
            period=dict(type='int'),
            unit=dict(type='str', choices=['Seconds', 'Microseconds', 'Milliseconds', 'Bytes', 'Kilobytes', 'Megabytes', 'Gigabytes', 'Terabytes',
                                           'Bits', 'Kilobits', 'Megabits', 'Gigabits', 'Terabits', 'Percent', 'Count', 'Bytes/Second', 'Kilobytes/Second',
                                           'Megabytes/Second', 'Gigabytes/Second', 'Terabytes/Second', 'Bits/Second', 'Kilobits/Second', 'Megabits/Second',
                                           'Gigabits/Second', 'Terabits/Second', 'Count/Second', 'None']),
            evaluation_periods=dict(type='int'),
            description=dict(type='str'),
            dimensions=dict(type='dict', default={}),
            alarm_actions=dict(type='list'),
            insufficient_data_actions=dict(type='list'),
            ok_actions=dict(type='list'),
            state=dict(default='present', choices=['present', 'absent']),
        )
    )
    
    
@AWSRetry.exponential_backoff()
def get_placement_group_details(connection, module):
    name = module.params.get('name')
    try:
        response = connection.describe_placement_groups(
            Filters=[{
                'Name': 'group-name',
                'Values': [name]
            }])
    except (BotoCoreError, ClientError) as e:
        module.fail_json_aws(
            e,
            msg='Couldn't find placement group named [%s]' % name)
    
        cmd.crawler_process = CrawlerProcess(settings)
    _run_print_help(parser, _run_command, cmd, args, opts)
    sys.exit(cmd.exitcode)
    
        def run(self, args, opts):
        # load contracts
        contracts = build_component_list(self.settings.getwithbase('SPIDER_CONTRACTS'))
        conman = ContractsManager(load_object(c) for c in contracts)
        runner = TextTestRunner(verbosity=2 if opts.verbose else 1)
        result = TextTestResult(runner.stream, runner.descriptions, runner.verbosity)
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.utils.template import render_templatefile, string_camelcase
from scrapy.exceptions import UsageError
    
                # backward-compatible SSL/TLS method:
            #
            # * this will respect `method` attribute in often recommended
            #   `ScrapyClientContextFactory` subclass
            #   (https://github.com/scrapy/scrapy/issues/1429#issuecomment-131782133)
            #
            # * getattr() for `_ssl_method` attribute for context factories
            #   not calling super(..., self).__init__
            return CertificateOptions(verify=False,
                        method=getattr(self, 'method',
                                       getattr(self, '_ssl_method', None)),
                        fixBrokenPeers=True,
                        acceptableCiphers=DEFAULT_CIPHERS)
    
        def download_request(self, request, spider):
        scheme = urlparse_cached(request).scheme
        handler = self._get_handler(scheme)
        if not handler:
            raise NotSupported('Unsupported URL scheme '%s': %s' %
                               (scheme, self._notconfigured[scheme]))
        return handler.download_request(request, spider)
    
        def gotClient(self, client, request, filepath):
        self.client = client
        protocol = ReceivedDataProtocol(request.meta.get('ftp_local_filename'))
        return client.retrieveFile(filepath, protocol)\
                .addCallbacks(callback=self._build_response,
                        callbackArgs=(request, protocol),
                        errback=self._failed,
                        errbackArgs=(request,))
    
        @unittest.skipIf(sys.platform == 'darwin',
                     'poll may fail on macOS; see issue #28087')
    @unittest.skipUnless(hasattr(select, 'poll'), 'need select.poll')
    def test_poll(self):
        poller = select.poll()
    
    _EXTRA_FIELD_STRUCT = struct.Struct('<HH')
    
        def assert_raise_on_new_sys_type(self, sys_attr):
        # Users are intentionally prevented from creating new instances of
        # sys.flags, sys.version_info, and sys.getwindowsversion.
        attr_type = type(sys_attr)
        with self.assertRaises(TypeError):
            attr_type()
        with self.assertRaises(TypeError):
            attr_type.__new__(attr_type)
    
            out = self.get_output('-X', 'utf8', '-c', code)
        self.assertEqual(out, '1')
    
        @unittest.skipUnless(_socket is not None, 'need _socket module')
    def test_csocket_repr(self):
        s = _socket.socket(_socket.AF_INET, _socket.SOCK_STREAM)
        try:
            expected = ('<socket object, fd=%s, family=%s, type=%s, proto=%s>'
                        % (s.fileno(), s.family, s.type, s.proto))
            self.assertEqual(repr(s), expected)
        finally:
            s.close()
        expected = ('<socket object, fd=-1, family=%s, type=%s, proto=%s>'
                    % (s.family, s.type, s.proto))
        self.assertEqual(repr(s), expected)
    
        if (has_actual_code and not has_question_marks):
        linebuffer = clean_trailing_newlines(linebuffer)
        write_with_harness(codefile, sourcefile, start_linenum, linebuffer)
    return (line, linenum)
    
    
if __name__ == '__main__':
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    
  def Start( self ):
    request_data = BuildRequestData( self._buffer_number )
    if self._extra_data:
      request_data.update( self._extra_data )
    request_data[ 'event_name' ] = self._event_name
    
    
  def Start( self ):
    self._results = self._omni_completer.ComputeCandidates( self.request_data )
    
      def FilterLevel( diagnostic ):
    return diagnostic[ 'kind' ] == expected_kind
    
    
def _ExtractKeywordsFromGroup( group ):
  keywords = []
  for line in group.lines:
    keywords.extend( _ExtractKeywordsFromLine( line ) )
  return keywords

    
    
def WaitUntilReady( timeout = 5 ):
  expiration = time.time() + timeout
  while True:
    try:
      if time.time() > expiration:
        raise RuntimeError( 'Waited for the server to be ready '
                            'for {0} seconds, aborting.'.format( timeout ) )
      if _IsReady():
        return
    except requests.exceptions.ConnectionError:
      pass
    finally:
      time.sleep( 0.1 )
    
    from hamcrest import assert_that, equal_to
from mock import patch, call
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        def render(self):
        for graphic in self.graphics:
            graphic.render()
    
        @classmethod
    def setUpClass(self):
        self.radio = Radio()
    
            # dictionary that will be used to determine which static method is
        # to be executed but that will be also used to store possible param
        # value
        self._static_method_choices = {'param_value_1': self._static_method_1, 'param_value_2': self._static_method_2}
    
        @Transactional will rollback to entry-state upon exceptions.
    '''
    
        fftv.publish('cartoon')
    fftv.publish('music')
    fftv.publish('ads')
    fftv.publish('movie')
    fftv.publish('cartoon')
    fftv.publish('cartoon')
    fftv.publish('movie')
    fftv.publish('blank')
    
    from abc import abstractmethod
    
        def scan(self):
        '''Scan the dial to the next station'''
        self.pos += 1
        if self.pos == len(self.stations):
            self.pos = 0
        print(u'Scanning... Station is %s %s' % (self.stations[self.pos], self.name))
    
    
class lazy_property(object):
    def __init__(self, function):
        self.function = function
        functools.update_wrapper(self, function)
    
        sample_queue.put('yam')
    with ObjectPool(sample_queue) as obj:
        print('Inside with: {}'.format(obj))
    print('Outside with: {}'.format(sample_queue.get()))
    
        d = prototype.clone()
    a = prototype.clone(value='a-value', category='a')
    b = prototype.clone(value='b-value', is_checked=True)
    dispatcher.register_object('objecta', a)
    dispatcher.register_object('objectb', b)
    dispatcher.register_object('default', d)
    print([{n: p.value} for n, p in dispatcher.get_objects().items()])
    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight

    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment