
        
        from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        def _get_servers_from_clc(self, server_ids, message):
        '''
        Gets list of servers form CLC api
        '''
        try:
            return self.clc.v2.Servers(server_ids).servers
        except CLCException as exception:
            self.module.fail_json(msg=message + ': %s' % exception)
    
    
DOCUMENTATION = '''
---
module: apache2_mod_proxy
author: Olivier Boukili (@oboukili)
version_added: '2.2'
short_description: Set and/or get members' attributes of an Apache httpd 2.4 mod_proxy balancer pool
description:
  - Set and/or get members' attributes of an Apache httpd 2.4 mod_proxy balancer
    pool, using HTTP POST and GET requests. The httpd mod_proxy balancer-member
    status page has to be enabled and accessible, as this module relies on parsing
    this page. This module supports ansible check_mode, and requires BeautifulSoup
    python module.
options:
  balancer_url_suffix:
    description:
      - Suffix of the balancer pool url required to access the balancer pool
        status page (e.g. balancer_vhost[:port]/balancer_url_suffix).
    default: /balancer-manager/
  balancer_vhost:
    description:
      - (ipv4|ipv6|fqdn):port of the Apache httpd 2.4 mod_proxy balancer pool.
    required: true
  member_host:
    description:
      - (ipv4|ipv6|fqdn) of the balancer member to get or to set attributes to.
        Port number is autodetected and should not be specified here.
        If undefined, apache2_mod_proxy module will return a members list of
        dictionaries of all the current balancer pool members' attributes.
  state:
    description:
      - Desired state of the member host.
        (absent|disabled),drained,hot_standby,ignore_errors can be
        simultaneously invoked by separating them with a comma (e.g. state=drained,ignore_errors).
    choices: ['present', 'absent', 'enabled', 'disabled', 'drained', 'hot_standby', 'ignore_errors']
  tls:
    description:
      - Use https to access balancer management page.
    type: bool
    default: 'no'
  validate_certs:
    description:
      - Validate ssl/tls certificates.
    type: bool
    default: 'yes'
'''
    
    
DOCUMENTATION = '''
---
module: jenkins_job
short_description: Manage jenkins jobs
description:
    - Manage Jenkins jobs by using Jenkins REST API.
requirements:
  - 'python-jenkins >= 0.4.12'
  - 'lxml >= 3.3.3'
version_added: '2.2'
author: 'Sergio Millan Rodriguez (@sermilrod)'
options:
  config:
    description:
      - config in XML format.
      - Required if job does not yet exist.
      - Mutually exclusive with C(enabled).
      - Considered if C(state=present).
    required: false
  enabled:
    description:
      - Whether the job should be enabled or disabled.
      - Mutually exclusive with C(config).
      - Considered if C(state=present).
    type: bool
    required: false
  name:
    description:
      - Name of the Jenkins job.
    required: true
  password:
    description:
      - Password to authenticate with the Jenkins server.
    required: false
  state:
    description:
      - Attribute that specifies if the job has to be created or deleted.
    required: false
    default: present
    choices: ['present', 'absent']
  token:
    description:
      - API token used to authenticate alternatively to password.
    required: false
  url:
    description:
      - URL where the Jenkins server is accessible.
    required: false
    default: http://localhost:8080
  user:
    description:
       - User to authenticate with the Jenkins server.
    required: false
'''
    
            severity_list = filter(lambda x: x.name == issue_severity, project.list_severities())
        if len(severity_list) != 1:
            return (False, changed, 'Unable to find severity %s for project %s' % (issue_severity, project_name), {})
        severity_id = severity_list[0].id
    
    
def main():
    module = AnsibleModule(
        argument_spec=gen_specs(
            attributes=dict(default={}, type='dict'),
            objectClass=dict(type='raw'),
            params=dict(type='dict'),
            state=dict(default='present', choices=['present', 'absent']),
        ),
        supports_check_mode=True,
    )
    
                if state == 'present':
                if solo:
                    obsolete_records = [r for r in all_records if
                                        r.hostname == record.hostname
                                        and r.type == record.type
                                        and not r.destination == record.destination]
    
    - name: Send matrix notification with user_id and password
  matrix:
    msg_plain: '**hello world**'
    msg_html: '<b>hello world</b>'
    room_id: '!12345678:server.tld'
    hs_url: 'https://matrix.org'
    user_id: 'ansible_notification_bot'
    password: '{{ matrix_auth_password }}'
'''
    
        # Send push notification
    try:
        if push_type == 'link':
            target.push_link(title, url, body)
        else:
            target.push_note(title, body)
        module.exit_json(changed=False, msg='OK')
    except PushError as e:
        module.fail_json(msg='An error occurred, Pushbullet's response: %s' % str(e))
    
            current = ipmi_cmd.get_power()
        if current['powerstate'] != state:
            response = {'powerstate': state} if module.check_mode else ipmi_cmd.set_power(state, wait=timeout)
            changed = True
        else:
            response = current
            changed = False
    
    latest_release:
    description: Version of the latest release
    type: str
    returned: success
    sample: 1.1.0
'''