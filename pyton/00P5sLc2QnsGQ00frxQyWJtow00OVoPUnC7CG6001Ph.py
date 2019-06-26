
        
        
def _get_most_recent_snapshot(snapshots, max_snapshot_age_secs=None, now=None):
    '''
    Gets the most recently created snapshot and optionally filters the result
    if the snapshot is too old
    :param snapshots: list of snapshots to search
    :param max_snapshot_age_secs: filter the result if its older than this
    :param now: simulate time -- used for unit testing
    :return:
    '''
    if len(snapshots) == 0:
        return None
    
    EXAMPLES = '''
# Add or change a subnet group
- elasticache_subnet_group:
    state: present
    name: norwegian-blue
    description: My Fancy Ex Parrot Subnet Group
    subnets:
      - subnet-aaaaaaaa
      - subnet-bbbbbbbb
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            auth_token=dict(
                type='str',
                default=os.environ.get('ONEANDONE_AUTH_TOKEN')),
            api_url=dict(
                type='str',
                default=os.environ.get('ONEANDONE_API_URL')),
            name=dict(type='str'),
            firewall_policy=dict(type='str'),
            description=dict(type='str'),
            rules=dict(type='list', default=[]),
            add_server_ips=dict(type='list', default=[]),
            remove_server_ips=dict(type='list', default=[]),
            add_rules=dict(type='list', default=[]),
            remove_rules=dict(type='list', default=[]),
            wait=dict(type='bool', default=True),
            wait_timeout=dict(type='int', default=600),
            wait_interval=dict(type='int', default=5),
            state=dict(type='str', default='present', choices=['present', 'absent', 'update']),
        ),
        supports_check_mode=True
    )
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        params = {}
    params['revision_id'] = revision_id
    params['deployed_by'] = deployed_by
    if deployed_to:
        params['deployed_to'] = deployed_to
    if repository:
        params['repository'] = repository
    
            if not conditionals:
            break