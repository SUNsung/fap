
        
              self.path_dim = self.path_embeddings.shape[1]
    
    # add train_ext_input and valid_ext input
data = {'train_truth': rates_train,
        'valid_truth': rates_valid,
        'train_data' : spikes_train,
        'valid_data' : spikes_valid,
        'train_ext_input' : np.array(ext_input_train),
        'valid_ext_input': np.array(ext_input_valid),
        'train_percentage' : train_percentage,
        'nreplications' : nreplications,
        'dt' : FLAGS.dt,
        'P_sxn' : P_nxn,
        'condition_labels_train' : condition_labels_train,
        'condition_labels_valid' : condition_labels_valid,
        'conversion_factor': 1.0 / rnn_a['conversion_factor']}
    
      def _score(self, word_patch):
    '''Score a matrix of shape (batch_size, num_timesteps+1) str tokens.'''
    word_ids = np.array(
        [[self.vocab.word_to_id(word) for word in row]
         for row in word_patch])
    char_ids = np.array(
        [[self.vocab.word_to_char_ids(word) for word in row]
         for row in word_patch])
    print('Probs for \n{}\n='.format(np.array(word_patch)[:, 1:]))
    
    
def create_gen_train_op(hparams, learning_rate, gen_loss, global_step, mode):
  '''Create Generator train op.'''
  del hparams
  with tf.name_scope('train_generator'):
    if FLAGS.generator_optimizer == 'sgd':
      gen_optimizer = tf.train.GradientDescentOptimizer(learning_rate)
    elif FLAGS.generator_optimizer == 'adam':
      gen_optimizer = tf.train.AdamOptimizer(learning_rate)
    else:
      raise NotImplementedError
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    print('Optimizing Generator vars.')
    for v in gen_vars:
      print(v)
    if mode == 'MINIMIZE':
      gen_grads = tf.gradients(gen_loss, gen_vars)
    elif mode == 'MAXIMIZE':
      gen_grads = tf.gradients(-gen_loss, gen_vars)
    else:
      raise ValueError('Must be one of 'MINIMIZE' or 'MAXIMIZE'')
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    gen_train_op = gen_optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    return gen_train_op, gen_grads_clipped, gen_vars
    
    
def test_on_first_run(usage_tracker_io, usage_tracker_exists, shell_pid, logs):
    shell_pid.return_value = 12
    main()
    usage_tracker_exists.return_value = False
    _assert_tracker_updated(usage_tracker_io, 12)
    logs.how_to_configure_alias.assert_called_once()
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
    EXAMPLES = '''
# Note: These examples do not set authentication details, see the AWS Guide for details.
    
    - cloudwatchevent_rule:
    name: MyDisabledCronTask
    schedule_expression: 'rate(5 minutes)'
    description: Run my disabled scheduled task
    state: disabled
    targets:
      - id: MyOtherTargetId
        arn: arn:aws:lambda:us-east-1:123456789012:function:MyFunction
        input: '{'foo': 'bar'}'
    
        '''
    dp_description = pipeline_description(client, dp_id)
    for field_key in dp_description['pipelineDescriptionList'][0]['fields']:
        if field_key['key'] == field:
            return field_key['stringValue']
    raise KeyError('Field key {0} not found!'.format(field))
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            bgp_asn=dict(required=False, type='int'),
            ip_address=dict(required=True),
            name=dict(required=True),
            routing=dict(default='dynamic', choices=['dynamic', 'static']),
            state=dict(default='present', choices=['present', 'absent']),
        )
    )
    
    - name: Gather facts about a filtered list of customer gateways, based on tags
  ec2_customer_gateway_facts:
    region: ap-southeast-2
    filters:
      'tag:Name': test-customer-gateway
      'tag:AltName': test-customer-gateway-alt
  register: cust_gw_facts
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import (HAS_BOTO3, boto3_conn, camel_dict_to_snake_dict, ec2_argument_spec,
                                      get_aws_connection_info)
    
    
@AWSRetry.exponential_backoff()
def get_placement_group_details(connection, module):
    name = module.params.get('name')
    try:
        response = connection.describe_placement_groups(
            Filters=[{
                'Name': 'group-name',
                'Values': [name]
            }])
    except (BotoCoreError, ClientError) as e:
        module.fail_json_aws(
            e,
            msg='Couldn't find placement group named [%s]' % name)
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'GroupCommitResolution'
        db.create_table(
            'sentry_groupcommitresolution', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'group_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'commit_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'datetime', self.gf('django.db.models.fields.DateTimeField')(
                        db_index=True
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['GroupCommitResolution'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'ReleaseHeadCommit', fields ['repository_id', 'release']
        db.delete_unique('sentry_releaseheadcommit', ['repository_id', 'release_id'])