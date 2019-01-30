
        
            @value.setter
    def value(self, new_value):
        if 1 <= new_value <= 13:
            self._value = new_value
        else:
            raise ValueError('Invalid card value: {}'.format(new_value))
    
            (2016-01, shopping), 125
        (2016-01, gas), 50
        '''
        total = sum(values)
        self.handle_budget_notifications(key, total)
        yield key, sum(values)
    
            Emit key value pairs of the form:
    
    from mrjob.job import MRJob
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
      print('Number of distinct paths: %d' % len(path_index))
  return path_index, path_vectors
    
        # \tau, which is the autocorrelation time constant of the AR(1) process
    log_atau_inits_1xu = tf.expand_dims(tf.log(autocorrelation_taus), 0)
    self.logataus_1xu = logataus_1xu = \
        tf.Variable(log_atau_inits_1xu, name=name+'/logatau', dtype=tf.float32,
                    trainable=do_train_prior_ar_atau)
    
          if self.hps.ic_dim > 0:
        prior_g0_mean[es_idx,:] = model_values['prior_g0_mean']
        prior_g0_logvar[es_idx,:] = model_values['prior_g0_logvar']
        post_g0_mean[es_idx,:] = model_values['post_g0_mean']
        post_g0_logvar[es_idx,:] = model_values['post_g0_logvar']
      gen_ics[es_idx,:] = model_values['gen_ics']
    
    
flags.DEFINE_float('prior_ar_atau',  PRIOR_AR_AUTOCORRELATION,
                   'Initial autocorrelation of AR(1) priors.')
flags.DEFINE_float('prior_ar_nvar', PRIOR_AR_PROCESS_VAR,
                   'Initial noise variance for AR(1) priors.')
flags.DEFINE_boolean('do_train_prior_ar_atau', DO_TRAIN_PRIOR_AR_ATAU,
                     'Is the value for atau an init, or the constant value?')
flags.DEFINE_boolean('do_train_prior_ar_nvar', DO_TRAIN_PRIOR_AR_NVAR,
                     'Is the value for noise variance an init, or the constant \
                     value?')
    
      # Visualize this in the morning.
  all_data_nxtc = np.zeros([nchannels_all, ntime * nconditions_all])
  for name, dataset in datasets.items():
    cidx_s = channel_idxs[name][0]
    cidx_f = channel_idxs[name][1]
    for cname in conditions_all[name]:
      cidxs = np.argwhere(all_conditions_list == cname)
      if cidxs.shape[0] > 0:
        cidx = cidxs[0][0]
        all_tidxs = np.arange(0, ntime+1) + cidx*ntime
        all_data_nxtc[cidx_s:cidx_f, all_tidxs[0]:all_tidxs[-1]] = \
            avg_data_all[name][cname].T
    
    
def flatten(list_of_lists):
  '''Takes a list of lists and returns a list of the elements.
    
      def __init__(self, filename):
    '''Initialize vocabulary.
    
      Args:
    raw_data: one of the raw data outputs from imdb_raw_data.
    batch_size: int, the batch size.
    num_steps: int, the number of unrolls.
    
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
    
    
def create_gen_pretrain_op(hparams, cross_entropy_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.gen_pretrain_learning_rate)
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    gen_grads = tf.gradients(cross_entropy_loss, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    gen_pretrain_op = optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    return gen_pretrain_op
    
      return p
    
          # Compute alignment weights
      #   scores: [batch_size, length]
      #   alignments: [batch_size, length]
      # TODO(thangluong): not normalize over padding positions.
      alignments = tf.nn.softmax(scores)
    
    
init_zshrc = u'''echo '
export SHELL=/usr/bin/zsh
export HISTFILE=~/.zsh_history
echo > $HISTFILE
export SAVEHIST=100
export HISTSIZE=100
eval $(thefuck --alias {})
setopt INC_APPEND_HISTORY
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.zshrc'''
    
    
Invalid choice: 'dynamdb', maybe you meant:
    
            if isinstance(headers, bytes):
            # Python < 3
            headers = headers.decode('utf8')
        return headers
    
        '''
    return path.replace('\\', '\\\\\\')
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
    
class AbstractBaseSession(models.Model):
    session_key = models.CharField(_('session key'), max_length=40, primary_key=True)
    session_data = models.TextField(_('session data'))
    expire_date = models.DateTimeField(_('expire date'), db_index=True)
    
        def ensure_present(self, enabled=True):
        '''Ensures the rule and targets are present and synced'''
        rule_description = self.rule.describe()
        if rule_description:
            # Rule exists so update rule, targets and state
            self._sync_rule(enabled)
            self._sync_targets()
            self._sync_state(enabled)
        else:
            # Rule does not exist, so create new rule and targets
            self._create(enabled)
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import (ansible_dict_to_boto3_filter_list,
                                      boto3_tag_list_to_ansible_dict,
                                      camel_dict_to_snake_dict)
try:
    from botocore.exceptions import (BotoCoreError, ClientError)
except ImportError:
    pass  # caught by imported AnsibleAWSModule
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'core'}
    
    
def create(module, connection, replication_id, cluster_id, name):
    ''' Create an Elasticache backup. '''
    try:
        response = connection.create_snapshot(ReplicationGroupId=replication_id,
                                              CacheClusterId=cluster_id,
                                              SnapshotName=name)
        changed = True
    except botocore.exceptions.ClientError as e:
        if e.response['Error']['Code'] == 'SnapshotAlreadyExistsFault':
            response = {}
            changed = False
        else:
            module.fail_json(msg='Unable to create the snapshot.', exception=traceback.format_exc())
    return response, changed
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import boto3_conn, ec2_argument_spec, get_aws_connection_info
    
            try:
            lambda_facts.update(function_list=client.list_functions(**params)['Functions'])
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(function_list=[])
            else:
                module.fail_json_aws(e, msg='Trying to get function list')
    
        CLIENT_MINIMUM_VERSION = '0.22.0'
    if not check_min_pkg_version('google-cloud-pubsub', CLIENT_MINIMUM_VERSION):
        module.fail_json(msg='Please install google-cloud-pubsub library version %s' % CLIENT_MINIMUM_VERSION)
    
    
def get_schema_facts(cursor, schema=''):
    facts = {}
    cursor.execute('''
        select schema_name, schema_owner, create_time
        from schemata
        where not is_system_schema and schema_name not in ('public')
        and (? = '' or schema_name ilike ?)
    ''', schema, schema)
    while True:
        rows = cursor.fetchmany(100)
        if not rows:
            break
        for row in rows:
            facts[row.schema_name.lower()] = {
                'name': row.schema_name,
                'owner': row.schema_owner,
                'create_time': str(row.create_time),
                'usage_roles': [],
                'create_roles': []}
    cursor.execute('''
        select g.object_name as schema_name, r.name as role_name,
        lower(g.privileges_description) privileges_description
        from roles r join grants g
        on g.grantee = r.name and g.object_type='SCHEMA'
        and g.privileges_description like '%USAGE%'
        and g.grantee not in ('public', 'dbadmin')
        and (? = '' or g.object_name ilike ?)
    ''', schema, schema)
    while True:
        rows = cursor.fetchmany(100)
        if not rows:
            break
        for row in rows:
            schema_key = row.schema_name.lower()
            if 'create' in row.privileges_description:
                facts[schema_key]['create_roles'].append(row.role_name)
            else:
                facts[schema_key]['usage_roles'].append(row.role_name)
    return facts
    
    - bigpanda:
    component: '{{ deployment.component }}'
    version: '{{ deployment.version }}'
    token: '{{ deployment.token }}'
    state: finished
  delegate_to: localhost
'''
    
        if module.params['environment']:
        params['deploy[environment]'] = module.params['environment']
    
            if query_log_status(module, le_path, log):
            module.fail_json(msg='failed to remove '%s': %s' % (log, err.strip()))