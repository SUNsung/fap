
        
            Returns:
      The test predictions.
    '''
    predictions, _ = zip(*self.predict_with_score(session, inputs))
    return np.array(predictions)
    
        distribution = session.run(p_distributions,
                               feed_dict={
                                   p_path_embedding: np.reshape(
                                       curr_path_vector,
                                       [1, model.lstm_output_dim])})
    
    import numpy as np
import tensorflow as tf
    
    _START_SPECIAL_CHARS = ['.', ',', '?', '!', ';', ':', '[', ']', '\'', '+', '/',
                        '\xc2\xa3', '$', '~', '*', '%', '{', '}', '#', '&', '-',
                        ''', '(', ')', '='] + list(_SPECIAL_CHAR_MAP.keys())
_SPECIAL_CHARS = _START_SPECIAL_CHARS + [
    '\'s', '\'m', '\'t', '\'re', '\'d', '\'ve', '\'ll']
    
          else:
        to_fill_in = num_steps - len(example)
        final_x = example + [EOS_INDEX] * to_fill_in
        final_y = final_x[1:] + [EOS_INDEX]
        w[i] = [1] * len(example) + [0] * to_fill_in
    
    import collections
import os
# Dependency imports
import numpy as np
    
      Returns:
    Tuple of the (sequence, logits, log_probs) of the Generator.   Sequence
      and logits have shape [batch_size, sequence_length, vocab_size].  The
      log_probs will have shape [batch_size, sequence_length].  Log_probs
      corresponds to the log probability of selecting the words.
  '''
  if FLAGS.generator_model == 'rnn':
    (sequence, logits, log_probs, initial_state, final_state) = rnn.generator(
        hparams,
        inputs,
        targets,
        present,
        is_training=is_training,
        is_validating=is_validating,
        reuse=reuse)
  elif FLAGS.generator_model == 'rnn_zaremba':
    (sequence, logits, log_probs, initial_state,
     final_state) = rnn_zaremba.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_zaremba':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq_zaremba.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'rnn_nas':
    (sequence, logits, log_probs, initial_state,
     final_state) = rnn_nas.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_nas':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq_nas.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_vd':
    (sequence, logits, log_probs, initial_state, final_state,
     encoder_states) = seq2seq_vd.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  else:
    raise NotImplementedError
  return (sequence, logits, log_probs, initial_state, final_state,
          encoder_states)
    
          # Now calculate the attention-weighted vector.
      alignments = tf.expand_dims(alignments, 2)
      context_vector = tf.reduce_sum(alignments * values, [1])
      context_vector.set_shape([None, num_units])
    
    RETURN = '''
wafs:
  description: The WAFs that match the passed arguments
  returned: success
  type: complex
  contains:
    name:
      description: A friendly name or description of the WebACL
      returned: always
      type: string
      sample: test_waf
    default_action:
      description: The action to perform if none of the Rules contained in the WebACL match.
      returned: always
      type: int
      sample: BLOCK
    metric_name:
      description: A friendly name or description for the metrics for this WebACL
      returned: always
      type: string
      sample: test_waf_metric
    rules:
      description: An array that contains the action for each Rule in a WebACL , the priority of the Rule
      returned: always
      type: complex
      contains:
        action:
          description: The action to perform if the Rule matches
          returned: always
          type: string
          sample: BLOCK
        metric_name:
          description: A friendly name or description for the metrics for this Rule
          returned: always
          type: string
          sample: ipblockrule
        name:
          description: A friendly name or description of the Rule
          returned: always
          type: string
          sample: ip_block_rule
        predicates:
          description: The Predicates list contains a Predicate for each
            ByteMatchSet, IPSet, SizeConstraintSet, SqlInjectionMatchSet or XssMatchSet
            object in a Rule
          returned: always
          type: list
          sample:
            [
              {
                'byte_match_set_id': '47b822b5-abcd-1234-faaf-1234567890',
                'byte_match_tuples': [
                  {
                    'field_to_match': {
                      'type': 'QUERY_STRING'
                    },
                    'positional_constraint': 'STARTS_WITH',
                    'target_string': 'bobbins',
                    'text_transformation': 'NONE'
                  }
                ],
                'name': 'bobbins',
                'negated': false,
                'type': 'ByteMatch'
              }
            ]
'''
    
        argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(type='str'),
            tags=dict(type='dict'),
        )
    )
    module = AnsibleModule(argument_spec=argument_spec)
    
    # Snapshot of volume mounted on device_name attached to instance_id
- ec2_snapshot:
    instance_id: i-12345678
    device_name: /dev/sdb1
    description: snapshot of /data from DB123 taken 2013/11/28 12:18:32
    
        try:
        response = conn.delete_egress_only_internet_gateway(DryRun=module.check_mode, EgressOnlyInternetGatewayId=eigw_id)
    except botocore.exceptions.ClientError as e:
        # When boto3 method is run with DryRun=True it returns an error on success
        # We need to catch the error and return something valid
        if e.response.get('Error', {}).get('Code') == 'DryRunOperation':
            changed = True
        else:
            module.fail_json_aws(e, msg='Could not delete Egress-Only Internet Gateway {0} from VPC {1}'.format(eigw_id, module.vpc_id))
    except botocore.exceptions.BotoCoreError as e:
        module.fail_json_aws(e, msg='Could not delete Egress-Only Internet Gateway {0} from VPC {1}'.format(eigw_id, module.vpc_id))
    
        orig_cert_names = [ctb['server_certificate_name'] for ctb in
                       iam.get_all_server_certs().list_server_certificates_result.server_certificate_metadata_list]
    orig_cert_bodies = [iam.get_server_certificate(thing).get_server_certificate_result.certificate_body
                        for thing in orig_cert_names]
    if new_name == name:
        new_name = None
    if new_path == path:
        new_path = None
    
    # Remove all managed policies from an existing user with an empty list
- iam_user:
    name: testuser1
    state: present
    purge_policy: true
    
        for param in module_params:
        module_param = module.params.get(param, None)
        if module_param:
            api_params[pc(param)] = module_param
    
        function_name = module.params.get('function_name')
    if function_name:
        lambda_facts[function_name] = {}
        lambda_facts[function_name].update(config_details(client, module)[function_name])
        lambda_facts[function_name].update(alias_details(client, module)[function_name])
        lambda_facts[function_name].update(policy_details(client, module)[function_name])
        lambda_facts[function_name].update(version_details(client, module)[function_name])
        lambda_facts[function_name].update(mapping_details(client, module)[function_name])
    else:
        lambda_facts.update(config_details(client, module))