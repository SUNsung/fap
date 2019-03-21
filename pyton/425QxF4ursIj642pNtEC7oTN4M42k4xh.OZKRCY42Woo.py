
        
        from flask import (
    Blueprint, flash, g, redirect, render_template, request, session, url_for
)
from werkzeug.security import check_password_hash, generate_password_hash
    
    
@pytest.mark.parametrize(('username', 'password', 'message'), (
    ('a', 'test', b'Incorrect username.'),
    ('test', 'a', b'Incorrect password.'),
))
def test_login_validate_input(auth, username, password, message):
    response = auth.login(username, password)
    assert message in response.data
    
        assert 'closed' in str(e)
    
    
class TaggedJSONSerializer(object):
    '''Serializer that uses a tag system to compactly represent objects that
    are not JSON types. Passed as the intermediate serializer to
    :class:`itsdangerous.Serializer`.
    
            if not current.propagate:
            break
    
            :param cli: Command object to invoke. Default is the app's
            :attr:`~flask.app.Flask.cli` group.
        :param args: List of strings to invoke the command with.
    
    
class MethodView(with_metaclass(MethodViewType, View)):
    '''A class-based view that dispatches request methods to the corresponding
    class methods. For example, if you implement a ``get`` method, it will be
    used to handle ``GET`` requests. ::
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
        return out
    
        def __init__(self, data=None, **kwargs):
        self._store = OrderedDict()
        if data is None:
            data = {}
        self.update(data, **kwargs)
    
        @possible_keys
    def test_getitem(self, key):
        assert self.case_insensitive_dict[key] == 'application/json'
    
        def get_connection(self, url, proxies=None):
        '''Returns a urllib3 connection for the given URL. This should not be
        called from user code, and is only exposed for use when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
    
class TestGuessFilename:
    
        def put_targets(self, targets):
        '''Creates or updates the provided targets on the rule in AWS'''
        if not targets:
            return
        request = {
            'Rule': self.name,
            'Targets': self._targets_request(targets),
        }
        try:
            response = self.client.put_targets(**request)
        except (botocore.exceptions.BotoCoreError, botocore.exceptions.ClientError) as e:
            self.module.fail_json_aws(e, msg='Could not create/update rule targets for rule %s' % self.name)
        self.changed = True
        return response
    
        cert_name = module.params.get('name')
    results = get_server_certs(iam, cert_name)
    module.exit_json(results=results)
    
            elif desired_state == 'offline':
            if current_state == HOST_ABSENT:
                self.fail(msg='absent host cannot be placed in offline state')
            elif current_state in [HOST_STATES.MONITORED, HOST_STATES.DISABLED]:
                if one.host.status(host.ID, HOST_STATUS.OFFLINE):
                    self.wait_for_host_state(host, [HOST_STATES.OFFLINE])
                    result['changed'] = True
                else:
                    self.fail(msg='could not set host offline')
            elif current_state in [HOST_STATES.OFFLINE]:
                pass
            else:
                self.fail(msg='unknown host state %s, cowardly refusing to change state to offline' % current_state_name)
    
    # Copyright: (c) 2015, VMware, Inc. All Rights Reserved.
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    
def nat_rules_to_dict(nat_rules):
    result = []
    for rule in nat_rules:
        gw_rule = rule.get_GatewayNatRule()
        result.append(
            dict(
                rule_type=rule.get_RuleType().lower(),
                original_ip=gw_rule.get_OriginalIp().lower(),
                original_port=(gw_rule.get_OriginalPort().lower() or 'any'),
                translated_ip=gw_rule.get_TranslatedIp().lower(),
                translated_port=(gw_rule.get_TranslatedPort().lower() or 'any'),
                protocol=(gw_rule.get_Protocol().lower() or 'any')
            )
        )
    return result
    
        try:
        client.login(
            username=module.params['ipa_user'],
            password=module.params['ipa_pass']
        )
        changed, zone = ensure(module, client)
        module.exit_json(changed=changed, zone=zone)
    except Exception as e:
        module.fail_json(msg=to_native(e))
    
        # Send the data to airbrake
    data = urlencode(params)
    response, info = fetch_url(module, url, data=data)
    if info['status'] == 200:
        module.exit_json(changed=True)
    else:
        module.fail_json(msg='HTTP result code: %d connecting to %s' % (info['status'], url))
    
            # If feature is already in good state, just exit
        if (re.search('Disabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'absent') or \
                (re.search('Enabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'present'):
            self.module.exit_json(changed=False)