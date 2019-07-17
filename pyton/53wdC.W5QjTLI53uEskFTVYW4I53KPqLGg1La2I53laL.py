
        
            for category, entries in sections.items():
        if sorted(entries) != entries:
            add_error(section_line_num[category], '{} section is not in alphabetical order'.format(category))
    
            if aa_policy_id and aa_policy_id != current_aa_policy_id:
            self._modify_aa_policy(
                self.clc,
                self.module,
                acct_alias,
                server.id,
                aa_policy_id)
            changed = True
        return changed
    
    # balancer member attributes extraction regexp:
EXPRESSION = r'(b=([\w\.\-]+)&w=(https?|ajp|wss?|ftp|[sf]cgi)://([\w\.\-]+):?(\d*)([/\w\.\-]*)&?[\w\-\=]*)'
# Apache2 server version extraction regexp:
APACHE_VERSION_EXPRESSION = r'SERVER VERSION: APACHE/([\d.]+)'
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            config=dict(required=False),
            name=dict(required=True),
            password=dict(required=False, no_log=True),
            state=dict(required=False, choices=['present', 'absent'], default='present'),
            enabled=dict(required=False, type='bool'),
            token=dict(required=False, no_log=True),
            url=dict(required=False, default='http://localhost:8080'),
            user=dict(required=False)
        ),
        mutually_exclusive=[
            ['password', 'token'],
            ['config', 'enabled'],
        ],
        supports_check_mode=True,
    )
    
        merged_items = collections.OrderedDict()
    
    - name: Get rid of an old entry
  ldap_entry:
    dn: ou=stuff,dc=example,dc=com
    state: absent
    server_uri: ldap://localhost/
    bind_dn: cn=admin,dc=example,dc=com
    bind_pw: password
    
        # --- run command ---
    try:
        ipmi_cmd = command.Command(
            bmc=name, userid=user, password=password, port=port
        )
        module.debug('ipmi instantiated - name: '%s'' % name)
    
    
FILEPATH = os.path.join(
    os.path.abspath(os.path.dirname(os.path.dirname(__file__))), 'blns.txt')
'''Path to the file'''