
        
            total_cost_ph = tf.placeholder(tf.float32, shape=[], name='total_cost_ph')
    self.cost_t_summ = tf.summary.scalar('Total cost (train)', total_cost_ph,
                                         collections=['train_summaries'])
    self.cost_v_summ = tf.summary.scalar('Total cost (valid)', total_cost_ph,
                                         collections=['valid_summaries'])
    
    from utils import write_datasets
from synthetic_data_utils import normalize_rates
from synthetic_data_utils import get_train_n_valid_inds, nparray_and_transpose
from synthetic_data_utils import spikify_data, split_list_by_inds
    
      if identity_if_possible and in_size == out_size:
    return (tf.constant(np.eye(in_size).astype(np.float32)),
            tf.zeros(in_size))
    
          softmax = sess.run(t['softmax_out'],
                         feed_dict={t['char_inputs_in']: char_ids_inputs,
                                    t['inputs_in']: inputs,
                                    t['targets_in']: targets,
                                    t['target_weights_in']: weights})
    
      def _score_patches(self, word_patches):
    '''Score a 2D matrix of word_patches and stitch results together.'''
    batch_size, num_timesteps = self.shape
    nrow, ncol = len(word_patches), len(word_patches[0])
    max_len = num_timesteps * ncol
    probs = np.zeros([0, max_len])  # accumulate results into this.
    
    
def print_and_log(log, id_to_word, sequence_eval, max_num_to_print=5):
  '''Helper function for printing and logging evaluated sequences.'''
  indices_eval = convert_to_indices(sequence_eval)
  indices_arr = np.asarray(indices_eval)
  samples = convert_to_human_readable(id_to_word, indices_arr, max_num_to_print)
    
      # The unique ngrams in the training set.
  unique_ngrams_in_train = 0.
    
      # Common elements to Generator and Discriminator.
  if not FLAGS.dis_share_embedding or model != 'dis':
    embedding = [
        v for v in tf.trainable_variables()
        if v.op.name == str(model) + '/rnn/embedding'
    ][0]
  lstm_w_0 = [
      v for v in tf.trainable_variables() if v.op.name == str(model) +
      '/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  lstm_b_0 = [
      v for v in tf.trainable_variables() if v.op.name == str(model) +
      '/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  lstm_w_1 = [
      v for v in tf.trainable_variables() if v.op.name == str(model) +
      '/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  lstm_b_1 = [
      v for v in tf.trainable_variables() if v.op.name == str(model) +
      '/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
    
      with tf.variable_scope('dis', reuse=reuse):
    cell_fwd = tf.contrib.rnn.LayerNormBasicLSTMCell(
        hparams.dis_rnn_size, forget_bias=1.0, reuse=reuse)
    cell_bwd = tf.contrib.rnn.LayerNormBasicLSTMCell(
        hparams.dis_rnn_size, forget_bias=1.0, reuse=reuse)
    if FLAGS.zoneout_drop_prob > 0.0:
      cell_fwd = zoneout.ZoneoutWrapper(
          cell_fwd,
          zoneout_drop_prob=FLAGS.zoneout_drop_prob,
          is_training=is_training)
      cell_bwd = zoneout.ZoneoutWrapper(
          cell_bwd,
          zoneout_drop_prob=FLAGS.zoneout_drop_prob,
          is_training=is_training)
    
    from flask import Flask
    
        Validates that the username is not already taken. Hashes the
    password for security.
    '''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
    
    
@bp.route('/<int:id>/delete', methods=('POST',))
@login_required
def delete(id):
    '''Delete a post.
    
        assert 'closed' in str(e)
    
        def before_request(self, f):
        '''Like :meth:`Flask.before_request` but for a blueprint.  This function
        is only executed before each request that is handled by a function of
        that blueprint.
        '''
        self.record_once(lambda s: s.app.before_request_funcs
            .setdefault(self.name, []).append(f))
        return f
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
                for key in http_method_funcs:
                if hasattr(cls, key):
                    methods.add(key.upper())
    
        monkeypatch.setattr(pkgutil, 'get_loader', get_loader)
    
    # List all EIP addresses for a VM.
- ec2_eip_facts:
    filters:
       instance-id: i-123456789
  register: my_vm_eips
    
            if state == 'absent' and user in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.remove_collaborator(user)
            affected_apps += [app]
            result_state = True
        elif state == 'present' and user not in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.add_collaborator(user_id_or_email=user, silent=module.params['suppress_invitation'])
            affected_apps += [app]
            result_state = True
    
            for rule in rules:
            firewall_rule = oneandone.client.FirewallPolicyRule(
                protocol=rule['protocol'],
                port_from=rule['port_from'],
                port_to=rule['port_to'],
                source=rule['source'])
            firewall_rules.append(firewall_rule)
    
    DOCUMENTATION = '''
---
module: vca_fw
short_description: add remove firewall rules in a gateway  in a vca
description:
  - Adds or removes firewall rules from a gateway in a vca environment
version_added: '2.0'
author:
- Peter Sprygada (@privateip)
options:
    fw_rules:
      description:
        - A list of firewall rules to be added to the gateway, Please see examples on valid entries
      required: True
      default: false
extends_documentation_fragment: vca.documentation
'''
    
            if servicegroup is not None:
            changed = client.modify_if_diff(name, ipa_hbacrule.get('memberservice_hbacsvcgroup', []),
                                            servicegroup,
                                            client.hbacrule_add_service,
                                            client.hbacrule_remove_service, 'hbacsvcgroup') or changed
    
            if module.check_mode:
            module.exit_json(changed=True)
    
            return ''
    
        xml = '''<?xml version='1.0' encoding='UTF-8'?>
        <rs:model-request throttlesize='5'
        xmlns:rs='http://www.ca.com/spectrum/restful/schema/request'
        xmlns:xsi='http://www.w3.org/2001/XMLSchema-instance'
        xsi:schemaLocation='http://www.ca.com/spectrum/restful/schema/request ../../../xsd/Request.xsd'>
            <rs:target-models>
            <rs:models-search>
                <rs:search-criteria xmlns='http://www.ca.com/spectrum/restful/schema/filter'>
                    <action-models>
                        <filtered-models>
                            <and>
                                <equals>
                                    <model-type>SearchManager</model-type>
                                </equals>
                                <greater-than>
                                    <attribute id='0x129fa'>
                                        <value>{mh_min}</value>
                                    </attribute>
                                </greater-than>
                                <less-than>
                                    <attribute id='0x129fa'>
                                        <value>{mh_max}</value>
                                    </attribute>
                                </less-than>
                            </and>
                        </filtered-models>
                        <action>FIND_DEV_MODELS_BY_IP</action>
                        <attribute id='AttributeID.NETWORK_ADDRESS'>
                            <value>{search_ip}</value>
                        </attribute>
                    </action-models>
                </rs:search-criteria>
            </rs:models-search>
            </rs:target-models>
            <rs:requested-attribute id='0x12d7f' /> <!--Network Address-->
        </rs:model-request>
        '''.format(search_ip=device_ip, mh_min=landscape_min, mh_max=landscape_max)
    
    CLI_DEFAULTS = dict(
    server_root=server_root_tmp,
    ctl='nginx',
)
'''CLI defaults.'''
    
        def setUp(self):
        from acme.errors import MissingNonce
        self.response = mock.MagicMock(headers={})
        self.response.request.method = 'FOO'
        self.error = MissingNonce(self.response)
    
    
class Fixed(jose.Field):
    '''Fixed field.'''
    
    
class JWS(jose.JWS):
    '''ACME-specific JWS. Includes none, url, and kid in protected header.'''
    signature_cls = Signature
    __slots__ = jose.JWS._orig_slots  # pylint: disable=no-member
    
    # If false, no index is generated.
#html_use_index = True
    
            self.assertEqual(self.vhosts[5], self._call(self.vhosts))
    
        def test_same_server(self):
        from certbot_apache.obj import VirtualHost
        no_name1 = VirtualHost(
            'fp', 'vhp', set([self.addr1]), False, False, None)
        no_name2 = VirtualHost(
            'fp', 'vhp', set([self.addr2]), False, False, None)
        no_name3 = VirtualHost(
            'fp', 'vhp', set([self.addr_default]),
            False, False, None)
        no_name4 = VirtualHost(
            'fp', 'vhp', set([self.addr2, self.addr_default]),
            False, False, None)