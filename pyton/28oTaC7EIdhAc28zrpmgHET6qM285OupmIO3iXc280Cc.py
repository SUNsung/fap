
        
            def _remote_state(self):
        '''Returns the remote state from AWS'''
        description = self.rule.describe()
        if not description:
            return
        return description['state']
    
        module.exit_json(changed=changed,
                     snapshot_id=snapshot.id,
                     volume_id=snapshot.volume_id,
                     volume_size=snapshot.volume_size,
                     tags=snapshot.tags.copy())
    
        state = module.params.get('state')
    group_name = module.params.get('name').lower()
    group_description = module.params.get('description')
    group_subnets = module.params.get('subnets') or {}
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.gcp import check_min_pkg_version, get_google_cloud_credentials
    
            # manage host state
        desired_state = self.get_parameter('state')
        if bool(host):
            current_state = host.STATE
            current_state_name = HOST_STATES(host.STATE).name
        else:
            current_state = HOST_ABSENT
            current_state_name = 'ABSENT'
    
            rule['original_port'] = str(rule.get('original_port', 'any')).lower()
        rule['original_ip'] = rule.get('original_ip', 'any').lower()
        rule['translated_ip'] = rule.get('translated_ip', 'any').lower()
        rule['translated_port'] = str(rule.get('translated_port', 'any')).lower()
        rule['protocol'] = rule.get('protocol', 'any').lower()
        rule['rule_type'] = rule.get('rule_type', 'DNAT').lower()
    
        def role_add_privilege(self, name, item):
        return self._post_json(method='role_add_privilege', name=name, item={'privilege': item})
    
    short_description: Manage Icinga2 feature
description:
    - This module can be used to enable or disable an Icinga2 feature.
version_added: '2.3'
author: 'Loic Blot (@nerzhul)'
options:
    name:
      description:
      - This is the feature name to enable or disable.
      required: True
    state:
      description:
      - If set to C(present) and feature is disabled, then feature is enabled.
      - If set to C(present) and feature is already enabled, then nothing is changed.
      - If set to C(absent) and feature is enabled, then feature is disabled.
      - If set to C(absent) and feature is already disabled, then nothing is changed.
      choices: [ 'present', 'absent' ]
      default: present
'''
    
    from ansible.module_utils.basic import AnsibleModule
    
        params = {}
    params['message'] = msg
    if annotated_by:
        params['annotated_by'] = annotated_by
    if level:
        params['level'] = level
    if instance_id:
        params['instance_id'] = instance_id
    if event_epoch:
        params['event_epoch'] = event_epoch
    
    EXAMPLES = '''
# Note: examples below use the following provider dict to handle
#       transport and authentication to the node.
---
vars:
  cli:
    host: '{{ inventory_hostname }}'
    port: 22
    username: admin
    password: admin
    timeout: 30
    
            return (await handler(request))
    
    
class PackException(Exception):
    pass
    
    
def test_1():
    for o in [None, True, False, 0, 1, (1 << 6), (1 << 7) - 1, -1,
              -((1 << 5) - 1), -(1 << 5)]:
        check(1, o)
    
    
def testMap():
    check(b'\x96'
          b'\xde\x00\x00'
          b'\xde\x00\x01\xc0\xc2'
          b'\xde\x00\x02\xc0\xc2\xc3\xc2'
          b'\xdf\x00\x00\x00\x00'
          b'\xdf\x00\x00\x00\x01\xc0\xc2'
          b'\xdf\x00\x00\x00\x02\xc0\xc2\xc3\xc2', ({}, {None: False},
                                                    {True: False,
                                                     None: False}, {},
                                                    {None: False},
                                                    {True: False,
                                                     None: False}))

    
        N = len(files)
    
        result = s[lambda x: [True, False, True, True]]
    tm.assert_series_equal(result, s.iloc[[0, 2, 3]])
    
        with pytest.raises(ValueError, match=msg):
        df.groupby('key').rank(method=ties_method,
                               ascending=ascending,
                               na_option=na_option, pct=pct)
    
    
def assert_same_resolution(css1, css2, inherited=None):
    resolve = CSSResolver()
    resolved1 = resolve(css1, inherited=inherited)
    resolved2 = resolve(css2, inherited=inherited)
    assert resolved1 == resolved2
    
    import pytest
    
        with tm.ensure_clean() as path:
        df = pd.read_json('{'a': [1, 2, 3], 'b': [4, 5, 6]}')
        df.to_json(path, orient='records', lines=True,
                   compression=compression)
        roundtripped_df = pd.read_json(path, lines=True,
                                       compression=compression)
        assert_frame_equal(df, roundtripped_df)
    
    
def test_incorrect_type_array():
    unpacker = Unpacker()
    unpacker.feed(packb(1))
    try:
        unpacker.read_array_header()
        assert 0, 'should raise exception'
    except UnexpectedTypeException:
        assert 1, 'okay'