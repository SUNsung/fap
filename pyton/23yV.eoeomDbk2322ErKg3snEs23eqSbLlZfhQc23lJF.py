
        
        
def test_app_tearing_down_with_handled_exception_by_except_block(app):
    cleanup_stuff = []
    
        proc.sendline(u'ehco test')
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    history_not_changed(proc, TIMEOUT)
    
     update - update list of available packages
    
    no_match_output = '''
Listing... Done
'''
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_get_new_command(brew_no_available_formula):
    assert get_new_command(Command('brew install elsticsearch',
                                   brew_no_available_formula))\
        == 'brew install elasticsearch'
    
    \tDid you mean `build`?
'''
    
        try:
        oids, array_oids = get_hstore_oids(connection.alias)
        register_hstore(connection.connection, globally=True, oid=oids, array_oid=array_oids)
    except ProgrammingError:
        # Hstore is not available on the database.
        #
        # If someone tries to create an hstore field it will error there.
        # This is necessary as someone may be using PSQL without extensions
        # installed but be using other features of contrib.postgres.
        #
        # This is also needed in order to create the connection in order to
        # install the hstore extension.
        pass
    
        def delete(self, session_key=None):
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        self._cache.delete(self.cache_key_prefix + session_key)
    
    
class AbstractBaseSession(models.Model):
    session_key = models.CharField(_('session key'), max_length=40, primary_key=True)
    session_data = models.TextField(_('session data'))
    expire_date = models.DateTimeField(_('expire date'), db_index=True)
    
        lastmod = None
    all_sites_lastmod = True
    urls = []
    for site in maps:
        try:
            if callable(site):
                site = site()
            urls.extend(site.get_urls(page=page, site=req_site,
                                      protocol=req_protocol))
            if all_sites_lastmod:
                site_lastmod = getattr(site, 'latest_lastmod', None)
                if site_lastmod is not None:
                    site_lastmod = (
                        site_lastmod.utctimetuple() if isinstance(site_lastmod, datetime.datetime)
                        else site_lastmod.timetuple()
                    )
                    lastmod = site_lastmod if lastmod is None else max(lastmod, site_lastmod)
                else:
                    all_sites_lastmod = False
        except EmptyPage:
            raise Http404('Page %s empty' % page)
        except PageNotAnInteger:
            raise Http404('No page '%s'' % page)
    response = TemplateResponse(request, template_name, {'urlset': urls},
                                content_type=content_type)
    if all_sites_lastmod and lastmod is not None:
        # if lastmod is defined for all sites, set header so as
        # ConditionalGetMiddleware is able to send 304 NOT MODIFIED
        response['Last-Modified'] = http_date(timegm(lastmod))
    return response

    
    :copyright: (c) 2017 by Kenneth Reitz.
:license: Apache 2.0, see LICENSE for more details.
'''
    
    import sys
    
    
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
            with Server.basic_response_server(wait_to_close_event=block_server) as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
            sock.sendall(b'send something')
            time.sleep(2.5)
            sock.sendall(b'still alive')
            block_server.set()  # release server block
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
        def describe(self):
        '''Returns the existing details of the rule in AWS'''
        try:
            rule_info = self.client.describe_rule(Name=self.name)
        except botocore.exceptions.ClientError as e:
            error_code = e.response.get('Error', {}).get('Code')
            if error_code == 'ResourceNotFoundException':
                return {}
            self.module.fail_json_aws(e, msg='Could not describe rule %s' % self.name)
        except botocore.exceptions.BotoCoreError as e:
            self.module.fail_json_aws(e, msg='Could not describe rule %s' % self.name)
        return self._snakify(rule_info)
    
    EXAMPLES = '''
# Simple snapshot of volume using volume_id
- ec2_snapshot:
    volume_id: vol-abcdef12
    description: snapshot of /data from DB123 taken 2013/11/28 12:18:32
    
        if not region:
        module.fail_json(msg=str('Either region or AWS_REGION or EC2_REGION environment variable or boto config aws_region or ec2_region must be set.'))
    
    RETURN = '''
server_certificate_id:
    description: The 21 character certificate id
    returned: success
    type: str
    sample: 'ADWAJXWTZAXIPIMQHMJPO'
certificate_body:
    description: The asn1der encoded PEM string
    returned: success
    type: str
    sample: '-----BEGIN CERTIFICATE-----\nbunch of random data\n-----END CERTIFICATE-----'
server_certificate_name:
    description: The name of the server certificate
    returned: success
    type: str
    sample: 'server-cert-name'
arn:
    description: The Amazon resource name of the server certificate
    returned: success
    type: str
    sample: 'arn:aws:iam::911277865346:server-certificate/server-cert-name'
path:
    description: The path of the server certificate
    returned: success
    type: str
    sample: '/'
expiration:
    description: The date and time this server certificate will expire, in ISO 8601 format.
    returned: success
    type: str
    sample: '2017-06-15T12:00:00+00:00'
upload_date:
    description: The date and time this server certificate was uploaded, in ISO 8601 format.
    returned: success
    type: str
    sample: '2015-04-25T00:36:40+00:00'
'''
    
    RETURN = '''
state:
    description: The state of the instance or database. Value will be either 'absent' or 'present'.
    returned: Always
    type: str
    sample: 'present'
    
    - oneandone_firewall_policy:
    auth_token: oneandone_private_api_key
    name: ansible-firewall-policy
    description: Testing creation of firewall policies with ansible
    rules:
     -
       protocol: TCP
       port_from: 80
       port_to: 80
       source: 0.0.0.0
    wait: true
    wait_timeout: 500
    
            elif desired_state == 'enabled':
            if current_state == HOST_ABSENT:
                self.allocate_host()
                host = self.get_host_by_name(host_name)
                self.wait_for_host_state(host, [HOST_STATES.MONITORED])
            elif current_state in [HOST_STATES.DISABLED, HOST_STATES.OFFLINE]:
                if one.host.status(host.ID, HOST_STATUS.ENABLED):
                    self.wait_for_host_state(host, [HOST_STATES.MONITORED])
                    result['changed'] = True
                else:
                    self.fail(msg='could not enable host')
            elif current_state in [HOST_STATES.MONITORED]:
                pass
            else:
                self.fail(msg='unknown host state %s, cowardly refusing to change state to enable' % current_state_name)
    
        # Build the deployment object we return
    deployment = dict(token=token, url=url)
    deployment.update(body)
    if 'errorMessage' in deployment:
        message = deployment.pop('errorMessage')
        deployment['message'] = message
    
        try:
        data = urlencode(params)
        response, info = fetch_url(module, url, data=data)
    except Exception as e:
        module.fail_json(msg='Unable to notify Honeybadger: %s' % to_native(e), exception=traceback.format_exc())
    else:
        if info['status'] == 201:
            module.exit_json(changed=True)
        else:
            module.fail_json(msg='HTTP result code: %d connecting to %s' % (info['status'], url))
    
    
ANSIBLE_METADATA = {
    'metadata_version': '1.1',
    'status': ['preview'],
    'supported_by': 'community'
}
    
    # (c) 2013, Darryl Stoflet <stoflet@gmail.com>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
    
    class ScrapyClientTLSOptions(ClientTLSOptions):
        '''
        SSL Client connection creator ignoring certificate verification errors
        (for genuinely invalid certificates or bugs in verification code).
    
    
def _split_aug_path(vhost_path):
    '''Splits an Augeas path into a file path and an internal path.
    
    HEADER_ARGS = {'Strict-Transport-Security': HSTS_ARGS,
               'Upgrade-Insecure-Requests': UIR_ARGS}