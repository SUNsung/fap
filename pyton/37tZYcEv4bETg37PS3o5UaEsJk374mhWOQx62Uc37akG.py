
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
        if options.action == 'install':
        fn = os.path.abspath(__file__).replace('v:', '\\\\vboxsrv\\vbox')
        cmdline = '%s %s -s -b %s' % (sys.executable, fn, options.bind)
        win_install_service(SVCNAME, cmdline)
        return
    
    entry_template = textwrap.dedent('''
    <entry>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed/youtube-dl-@VERSION@</id>
        <title>New version @VERSION@</title>
        <link href='http://rg3.github.io/youtube-dl' />
        <content type='xhtml'>
            <div xmlns='http://www.w3.org/1999/xhtml'>
                Downloads available at <a href='https://yt-dl.org/downloads/@VERSION@/'>https://yt-dl.org/downloads/@VERSION@/</a>
            </div>
        </content>
        <author>
            <name>The youtube-dl maintainers</name>
        </author>
        <updated>@TIMESTAMP@</updated>
    </entry>
    ''')
    
        ie_htmls = []
    for ie in youtube_dl.list_extractors(age_limit=None):
        ie_html = '<b>{}</b>'.format(ie.IE_NAME)
        ie_desc = getattr(ie, 'IE_DESC', None)
        if ie_desc is False:
            continue
        elif ie_desc is not None:
            ie_html += ': {}'.format(ie.IE_DESC)
        if not ie.working():
            ie_html += ' (Currently broken)'
        ie_htmls.append('<li>{}</li>'.format(ie_html))
    
        out = bug_text + dev_text
    
    if __name__ == '__main__':
    main()

    
        def initialize_options(self):
        pass
    
        def test_opengraph(self):
        ie = self.ie
        html = '''
            <meta name='og:title' content='Foo'/>
            <meta content='Some video's description ' name='og:description'/>
            <meta property='og:image' content='http://domain.com/pic.jpg?key1=val1&amp;key2=val2'/>
            <meta content='application/x-shockwave-flash' property='og:video:type'>
            <meta content='Foo' property=og:foobar>
            <meta name='og:test1' content='foo > < bar'/>
            <meta name='og:test2' content='foo >//< bar'/>
            '''
        self.assertEqual(ie._og_search_title(html), 'Foo')
        self.assertEqual(ie._og_search_description(html), 'Some video\'s description ')
        self.assertEqual(ie._og_search_thumbnail(html), 'http://domain.com/pic.jpg?key1=val1&key2=val2')
        self.assertEqual(ie._og_search_video_url(html, default=None), None)
        self.assertEqual(ie._og_search_property('foobar', html), 'Foo')
        self.assertEqual(ie._og_search_property('test1', html), 'foo > < bar')
        self.assertEqual(ie._og_search_property('test2', html), 'foo >//< bar')
        self.assertEqual(ie._og_search_property(('test0', 'test1'), html), 'foo > < bar')
        self.assertRaises(RegexNotFoundError, ie._og_search_property, 'test0', html, None, fatal=True)
        self.assertRaises(RegexNotFoundError, ie._og_search_property, ('test0', 'test00'), html, None, fatal=True)
    
        # Purge rules before adding new ones in case a deletion shares the same
    # priority as an insertion.
    params = {
        'WebACLId': acl['WebACLId'],
        'DefaultAction': acl['DefaultAction']
    }
    change_tokens = []
    if deletions:
        try:
            params['Updates'] = deletions
            result = run_func_with_change_token_backoff(client, module, params, client.update_web_acl)
            change_tokens.append(result['ChangeToken'])
            get_waiter(
                client, 'change_token_in_sync',
            ).wait(
                ChangeToken=result['ChangeToken']
            )
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Could not update Web ACL')
    if insertions:
        try:
            params['Updates'] = insertions
            result = run_func_with_change_token_backoff(client, module, params, client.update_web_acl)
            change_tokens.append(result['ChangeToken'])
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Could not update Web ACL')
    if change_tokens:
        for token in change_tokens:
            get_waiter(
                client, 'change_token_in_sync',
            ).wait(
                ChangeToken=token
            )
    if changed:
        acl = get_web_acl(client, module, web_acl_id)
    return changed, acl
    
        def create_invalidation(self, distribution_id, invalidation_batch):
        current_invalidation_response = self.get_invalidation(distribution_id, invalidation_batch['CallerReference'])
        try:
            response = self.client.create_invalidation(DistributionId=distribution_id, InvalidationBatch=invalidation_batch)
            response.pop('ResponseMetadata', None)
            if current_invalidation_response:
                return response, False
            else:
                return response, True
        except BotoCoreError as e:
            self.module.fail_json_aws(e, msg='Error creating CloudFront invalidations.')
        except ClientError as e:
            if ('Your request contains a caller reference that was used for a previous invalidation batch '
                    'for the same distribution.' in e.response['Error']['Message']):
                self.module.warn('InvalidationBatch target paths are not modifiable. '
                                 'To make a new invalidation please update caller_reference.')
                return current_invalidation_response, False
            else:
                self.module.fail_json_aws(e, msg='Error creating CloudFront invalidations.')
    
        def validate_origin_access_identity_id_from_caller_reference(
            self, caller_reference):
        try:
            origin_access_identities = self.__cloudfront_facts_mgr.list_origin_access_identities()
            origin_origin_access_identity_ids = [oai.get('Id') for oai in origin_access_identities]
            for origin_access_identity_id in origin_origin_access_identity_ids:
                oai_config = (self.__cloudfront_facts_mgr.get_origin_access_identity_config(origin_access_identity_id))
                temp_caller_reference = oai_config.get('CloudFrontOriginAccessIdentityConfig').get('CallerReference')
                if temp_caller_reference == caller_reference:
                    return origin_access_identity_id
        except (ClientError, BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Error getting Origin Access Identity from caller_reference.')
    
        results = dict(changed=False)
    if module.params['state'] == 'present':
        if existing['CustomerGateways']:
            existing['CustomerGateway'] = existing['CustomerGateways'][0]
            results['gateway'] = existing
            if existing['CustomerGateway']['Tags']:
                tag_array = existing['CustomerGateway']['Tags']
                for key, value in enumerate(tag_array):
                    if value['Key'] == 'Name':
                        current_name = value['Value']
                        if current_name != name:
                            results['name'] = gw_mgr.tag_cgw_name(
                                results['gateway']['CustomerGateway']['CustomerGatewayId'],
                                module.params['name'],
                            )
                            results['changed'] = True
        else:
            if not module.check_mode:
                results['gateway'] = gw_mgr.ensure_cgw_present(
                    module.params['bgp_asn'],
                    module.params['ip_address'],
                )
                results['name'] = gw_mgr.tag_cgw_name(
                    results['gateway']['CustomerGateway']['CustomerGatewayId'],
                    module.params['name'],
                )
            results['changed'] = True
    
    RETURN = '''
network_interfaces:
  description: List of matching elastic network interfaces
  returned: always
  type: complex
  contains:
    association:
      description: Info of associated elastic IP (EIP)
      returned: always, empty dict if no association exists
      type: dict
      sample: {
          allocation_id: 'eipalloc-5sdf123',
          association_id: 'eipassoc-8sdf123',
          ip_owner_id: '4415120123456',
          public_dns_name: 'ec2-52-1-0-63.compute-1.amazonaws.com',
          public_ip: '52.1.0.63'
        }
    attachment:
      description: Infor about attached ec2 instance
      returned: always, empty dict if ENI is not attached
      type: dict
      sample: {
        attach_time: '2017-08-05T15:25:47+00:00',
        attachment_id: 'eni-attach-149d21234',
        delete_on_termination: false,
        device_index: 1,
        instance_id: 'i-15b8d3cadbafa1234',
        instance_owner_id: '4415120123456',
        status: 'attached'
      }
    availability_zone:
      description: Availability zone of ENI
      returned: always
      type: string
      sample: 'us-east-1b'
    description:
      description: Description text for ENI
      returned: always
      type: string
      sample: 'My favourite network interface'
    groups:
      description: List of attached security groups
      returned: always
      type: list
      sample: [
        {
          group_id: 'sg-26d0f1234',
          group_name: 'my_ec2_security_group'
        }
      ]
    id:
      description: The id of the ENI (alias for network_interface_id)
      returned: always
      type: string
      sample: 'eni-392fsdf'
    interface_type:
      description: Type of the network interface
      returned: always
      type: string
      sample: 'interface'
    ipv6_addresses:
      description: List of IPv6 addresses for this interface
      returned: always
      type: list
      sample: []
    mac_address:
      description: MAC address of the network interface
      returned: always
      type: string
      sample: '0a:f8:10:2f:ab:a1'
    network_interface_id:
      description: The id of the ENI
      returned: always
      type: string
      sample: 'eni-392fsdf'
    owner_id:
      description: AWS account id of the owner of the ENI
      returned: always
      type: string
      sample: '4415120123456'
    private_dns_name:
      description: Private DNS name for the ENI
      returned: always
      type: string
      sample: 'ip-172-16-1-180.ec2.internal'
    private_ip_address:
      description: Private IP address for the ENI
      returned: always
      type: string
      sample: '172.16.1.180'
    private_ip_addresses:
      description: List of private IP addresses attached to the ENI
      returned: always
      type: list
      sample: []
    requester_id:
      description: The ID of the entity that launched the ENI
      returned: always
      type: string
      sample: 'AIDAIONYVJQNIAZFT3ABC'
    requester_managed:
      description:  Indicates whether the network interface is being managed by an AWS service.
      returned: always
      type: bool
      sample: false
    source_dest_check:
      description: Indicates whether the network interface performs source/destination checking.
      returned: always
      type: bool
      sample: false
    status:
      description: Indicates if the network interface is attached to an instance or not
      returned: always
      type: string
      sample: 'in-use'
    subnet_id:
      description: Subnet ID the ENI is in
      returned: always
      type: string
      sample: 'subnet-7bbf01234'
    tag_set:
      description: Dictionary of tags added to the ENI
      returned: always
      type: dict
      sample: {}
    vpc_id:
      description: ID of the VPC the network interface it part of
      returned: always
      type: string
      sample: 'vpc-b3f1f123'
'''
    
    
def create_metric_alarm(connection, module):
    
        def test_resolve_false(self):
        # Issue #23008: pydoc enum.{,Int}Enum failed
        # because bool(enum.Enum) is False.
        with captured_stdout() as help_io:
            pydoc.help('enum.Enum')
        helptext = help_io.getvalue()
        self.assertIn('class Enum', helptext)
    
    Cela ressemble à un excellent recipie[1] déjeuner.
    
            print('Ordered results using pool.imap():')
        for x in imap_it:
            print('\t', x)
        print()
    
        failures = []
    while point is not None:
        if point.name:
            if re.search('h[1-2]', point.name):
                if point.name == 'h1':
                    h1_directory = os.path.join(output_directory, clean_text(point.text))
                    current_directory = h1_directory
                elif point.name == 'h2':
                    current_directory = os.path.join(h1_directory, clean_text(point.text))  
                if not os.path.exists(current_directory):
                    os.makedirs(current_directory)
                print_title(point.text)
    
    
class TestManager:
    
        def now(self):
        current_time = datetime.datetime.now()
        current_time_formatted = '{}:{}'.format(current_time.hour,
                                                current_time.minute)
        return current_time_formatted
    
        def __getattr__(self, name):
        def wrapper(*args, **kwargs):
            if hasattr(self.delegate, name):
                attr = getattr(self.delegate, name)
                if callable(attr):
                    return attr(*args, **kwargs)
        return wrapper
    
    
# ConcreteImplementor 1/2
class DrawingAPI1(object):