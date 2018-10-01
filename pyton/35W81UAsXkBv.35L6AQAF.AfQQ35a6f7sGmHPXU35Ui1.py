
        
        password = key
new_key = aes_encrypt(password, key_expansion(password))
r = openssl_encode('aes-128-ctr', new_key, iv)
print('aes_decrypt_text 16')
print(repr(r))
    
        for release in releases:
        compat_print(release['name'])
        for asset in release['assets']:
            asset_name = asset['name']
            total_bytes += asset['download_count'] * asset['size']
            if all(not re.match(p, asset_name) for p in (
                    r'^youtube-dl$',
                    r'^youtube-dl-\d{4}\.\d{2}\.\d{2}(?:\.\d+)?\.tar\.gz$',
                    r'^youtube-dl\.exe$')):
                continue
            compat_print(
                ' %s size: %s downloads: %d'
                % (asset_name, format_size(asset['size']), asset['download_count']))
    
    # The master toctree document.
master_doc = 'index'
    
            for mpd_file, mpd_url, expected_formats in _TEST_CASES:
            with io.open('./test/testdata/mpd/%s.mpd' % mpd_file,
                         mode='r', encoding='utf-8') as f:
                formats = self.ie._parse_mpd_formats(
                    compat_etree_fromstring(f.read().encode('utf-8')),
                    mpd_url=mpd_url)
                self.ie._sort_formats(formats)
                expect_value(self, formats, expected_formats, None)
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
    DOCUMENTATION = '''
module: aws_waf_web_acl
short_description: create and delete WAF Web ACLs
description:
  - Read the AWS documentation for WAF
    U(https://aws.amazon.com/documentation/waf/)
version_added: '2.5'
    
        def create_client(self, resource):
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(self.module, boto3=True)
        self.client = boto3_conn(self.module, conn_type='client', resource=resource, region=region, endpoint=ec2_url, **aws_connect_kwargs)
    
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    logs = boto3_conn(module, conn_type='client', resource='logs', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    
    # Find all groups
- ec2_asg_facts:
  register: asgs
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import (boto3_conn, AWSRetry, camel_dict_to_snake_dict,
                                      ec2_argument_spec, get_aws_connection_info)
    
        if hasattr(interface, 'publicDnsName'):
        interface_info['association'] = {'public_ip_address': interface.publicIp,
                                         'public_dns_name': interface.publicDnsName,
                                         'ip_owner_id': interface.ipOwnerId
                                         }
    
    
def create_snapshot(module, ec2, state=None, description=None, wait=None,
                    wait_timeout=None, volume_id=None, instance_id=None,
                    snapshot_id=None, device_name=None, snapshot_tags=None,
                    last_snapshot_min_age=None):
    snapshot = None
    changed = False
    
                # some site need full name cert
            # like https://about.twitter.com in Google Chrome
            if not isip and not full_name and commonname.count('.') >= 2 and [len(x) for x in reversed(commonname.split('.'))] > [2, 4]:
                commonname = commonname.partition('.')[-1]
                certfile = CertUtil._get_old_cert(commonname)
                if certfile:
                    return certfile
    
        def get_stat(self):
        return self.network_stat
    
        '''
    
        def test_with_code(self):
        from acme.messages import Error, is_acme_error
        self.assertTrue(is_acme_error(Error.with_code('badCSR')))
        self.assertRaises(ValueError, Error.with_code, 'not an ACME error code')
    
        .. note:: This does not need to be accurate in order for the client to
        run.  This simply keeps things clean if the user decides to revert
        changes.
    .. warning:: If all deps are not included, it may cause incorrect parsing
        behavior, due to enable_mod's shortcut for updating the parser's
        currently defined modules (`.ApacheParser.add_mod`)
        This would only present a major problem in extremely atypical
        configs that use ifmod for the missing deps.
    
        @certbot_util.patch_get_utility()
    def test_noninteractive(self, mock_util):
        mock_util().menu.side_effect = errors.MissingCommandlineFlag('no vhost default')
        try:
            self._call(self.vhosts)
        except errors.MissingCommandlineFlag as e:
            self.assertTrue('vhost ambiguity' in str(e))
    
    import os
import logging
    
        '''catalog of multiple class methods that are executed depending on an init
    
    
class AndSpecification(CompositeSpecification):
    _one = Specification()
    _other = Specification()
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
            if serialnumber not in AXIS_DEVICES:
            config_file = load_json(hass.config.path(CONFIG_FILE))
            if serialnumber in config_file:
                # Device config previously saved to file
                try:
                    device_config = DEVICE_SCHEMA(config_file[serialnumber])
                    device_config[CONF_HOST] = host
                except vol.Invalid as err:
                    _LOGGER.error('Bad data from %s. %s', CONFIG_FILE, err)
                    return False
                if not setup_device(hass, config, device_config):
                    _LOGGER.error(
                        'Couldn't set up %s', device_config[CONF_NAME])
            else:
                # New device, create configuration request for UI
                request_configuration(hass, config, name, host, serialnumber)
        else:
            # Device already registered, but on a different IP
            device = AXIS_DEVICES[serialnumber]
            device.config.host = host
            dispatcher_send(hass, DOMAIN + '_' + device.name + '_new_ip', host)
    
        cognito = _cognito(cloud)
    # Workaround for bug in Warrant. PR with fix:
    # https://github.com/capless/warrant/pull/82
    cognito.add_base_attributes()
    try:
        cognito.register(email, password)
    except ClientError as err:
        raise _map_aws_exception(err)
    
    
def setup_scanner(hass, config, see, discovery_info=None):
    '''Set up the demo tracker.'''
    def offset():
        '''Return random offset.'''
        return (random.randrange(500, 2000)) / 2e5 * random.choice((-1, 1))
    
            return [device.mac for device in self.last_results]