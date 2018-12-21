
        
        # This sets a value, above which, the gradients will be clipped.  This hp
# is extremely useful to avoid an infrequent, but highly pathological
# problem whereby the gradient is so large that it destroys the
# optimziation by setting parameters too large, leading to a vicious cycle
# that ends in NaNs.  If it's too large, it's useless, if it's too small,
# it essentially becomes the learning rate.  It's pretty insensitive, though.
flags.DEFINE_float('max_grad_norm', MAX_GRAD_NORM,
                   'Max norm of gradient before clipping.')
    
    
def nparray_and_transpose(data_a_b_c):
  '''Convert the list of items in data to a numpy array, and transpose it
  Args:
    data: data_asbsc: a nested, nested list of length a, with sublist length
      b, with sublist length c.
  Returns:
    a numpy 3-tensor with dimensions a x c x b
'''
  data_axbxc = np.array([datum_b_c for datum_b_c in data_a_b_c])
  data_axcxb = np.transpose(data_axbxc, axes=[0,2,1])
  return data_axcxb
    
    
def cut_to_patches(sentences, batch_size, num_timesteps):
  '''Cut sentences into patches of shape (batch_size, num_timesteps).
    
      Args:
    variables: List of tf.Variable weights.
    c_lower: Lower bound for weights.
    c_upper: Upper bound for weights.
  '''
  clip_ops = []
    
      ## Decoder.
  decoder_lstm_w_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/decoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  decoder_lstm_b_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/decoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  decoder_lstm_w_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/decoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  decoder_lstm_b_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/decoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
    
      def construct_fn(attention_query, attention_keys, attention_values):
    with tf.variable_scope(name, reuse=reuse) as scope:
      context = attention_score_fn(attention_query, attention_keys,
                                   attention_values)
      concat_input = tf.concat([attention_query, context], 1)
      attention = tf.contrib.layers.linear(
          concat_input, num_units, biases_initializer=None, scope=scope)
      return attention
    
        def _sync_rule(self, enabled=True):
        '''Syncs local rule state with AWS'''
        if not self._rule_matches_aws():
            self.rule.put(enabled)
    
    # Remove a snapshot
- local_action:
    module: ec2_snapshot
    snapshot_id: snap-abcd1234
    state: absent
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True, type='str'),
            state=dict(required=True, type='str', choices=['present', 'absent', 'copy']),
            replication_id=dict(type='str'),
            cluster_id=dict(type='str'),
            target=dict(type='str'),
            bucket=dict(type='str'),
        )
    )
    
    - oneandone_moitoring_policy:
    auth_token: oneandone_private_api_key
    monitoring_policy: ansible monitoring policy updated
    update_processes:
     -
       id: process_id
       process: test_1
       alert_if: NOT_RUNNING
       email_notification: false
     -
       id: process_id
       process: test_3
       alert_if: NOT_RUNNING
       email_notification: false
    wait: true
    state: update
    
        if not module.check_mode and result['changed'] is True:
        task = gateway.save_services_configuration()
        if task:
            vca.block_until_completed(task)
    
    '''
    
    
def get_role_facts(cursor, role=''):
    facts = {}
    cursor.execute('''
        select r.name, r.assigned_roles
        from roles r
        where (? = '' or r.name ilike ?)
    ''', role, role)
    while True:
        rows = cursor.fetchmany(100)
        if not rows:
            break
        for row in rows:
            role_key = row.name.lower()
            facts[role_key] = {
                'name': row.name,
                'assigned_roles': []}
            if row.assigned_roles:
                facts[role_key]['assigned_roles'] = row.assigned_roles.replace(' ', '').split(',')
    return facts
    
    
def check(role_facts, role, assigned_roles):
    role_key = role.lower()
    if role_key not in role_facts:
        return False
    if assigned_roles and sorted(assigned_roles) != sorted(role_facts[role_key]['assigned_roles']):
        return False
    return True
    
        changed = False
    if state in ['present', 'enabled', 'disabled']:
        if not ipa_hbacrule:
            changed = True
            if not module.check_mode:
                ipa_hbacrule = client.hbacrule_add(name=name, item=module_hbacrule)
        else:
            diff = get_hbcarule_diff(client, ipa_hbacrule, module_hbacrule)
            if len(diff) > 0:
                changed = True
                if not module.check_mode:
                    data = {}
                    for key in diff:
                        data[key] = module_hbacrule.get(key)
                    client.hbacrule_mod(name=name, item=data)
    
    EXAMPLES = '''
# Ensure role is present
- ipa_role:
    name: dba
    description: Database Administrators
    state: present
    user:
    - pinky
    - brain
    ipa_host: ipa.example.com
    ipa_user: admin
    ipa_pass: topsecret
    
    import traceback
    
    
ALL_SSL_OPTIONS_HASHES = [
    '0f81093a1465e3d4eaa8b0c14e77b2a2e93568b0fc1351c2b87893a95f0de87c',
    '9a7b32c49001fed4cff8ad24353329472a50e86ade1ef9b2b9e43566a619612e',
    'a6d9f1c7d6b36749b52ba061fff1421f9a0a3d2cfdafbd63c05d06f65b990937',
    '7f95624dd95cf5afc708b9f967ee83a24b8025dc7c8d9df2b556bbc64256b3ff',
    '394732f2bbe3e5e637c3fb5c6e980a1f1b90b01e2e8d6b7cff41dde16e2a756d',
    '4b16fec2bcbcd8a2f3296d886f17f9953ffdcc0af54582452ca1e52f5f776f16',
]
'''SHA256 hashes of the contents of all versions of MOD_SSL_CONF_SRC'''
    
            self.assertEqual(jws, JWS.from_json(jws.to_json()))
    
    # For 'manual' documents, if this is true, then toplevel headings are parts,
# not chapters.
#latex_use_parts = False
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)