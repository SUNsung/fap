
        
            # Slice the last *relevant* output for each instance ->
    # [num_batch_paths, output_dim]
    self.path_embeddings = _extract_last_relevant(self.lstm_outputs,
                                                  self.sequence_lengths)
    
    def _plot_item(W, name, full_name, nspaces):
  plt.figure()
  if W.shape == ():
    print(name, ': ', W)
  elif W.shape[0] == 1:
    plt.stem(W.T)
    plt.title(full_name)
  elif W.shape[1] == 1:
    plt.stem(W)
    plt.title(full_name)
  else:
    plt.imshow(np.abs(W), interpolation='nearest', cmap='jet');
    plt.colorbar()
    plt.title(full_name)
    
    # not the best way to do this but E is small enough
rates = []
spikes = []
for trial in xrange(E):
  if rnn_to_use[trial] == 0:
    rates.append(rates_a[trial])
    spikes.append(spikes_a[trial])
  else:
    rates.append(rates_b[trial])
    spikes.append(spikes_b[trial])
    
      def evaluate(self):
    '''Evaluate the current ensemble.'''
    # Attach word probabilities and correctness label to each substitution
    ensembled_probs = sum(self.all_probs) / len(self.all_probs)
    scorings = []
    for i, sentence in enumerate(self.sentences):
      correctness = self.labels[i]
      word_probs = ensembled_probs[i, :len(sentence)]
      joint_prob = np.prod(word_probs, dtype=np.float64)
    
      if epoch_size_override:
    epoch_size = epoch_size_override
  else:
    epoch_size = (batch_len - 1) // num_steps
    
      present = tf.cast(is_real_input, tf.float32)
  missing = tf.cast(1 - present, tf.float32)
    
    import numpy as np
from six.moves import xrange
import tensorflow as tf
    
    '''Model construction.'''
    
        elif FLAGS.discriminator_model == 'seq2seq_vd':
      # Encoder.
      dis_encoder_variable_maps = variable_mapping.dis_encoder_seq2seq(hparams)
      dis_encoder_init_saver = tf.train.Saver(
          var_list=dis_encoder_variable_maps)
      # Decoder.
      dis_decoder_variable_maps = variable_mapping.dis_decoder_seq2seq(hparams)
      dis_decoder_init_saver = tf.train.Saver(
          var_list=dis_decoder_variable_maps)
      init_savers['dis_encoder_init_saver'] = dis_encoder_init_saver
      init_savers['dis_decoder_init_saver'] = dis_decoder_init_saver
    
        if n == 1:
        return '1 B'
    
    '''
from httpie.client import JSON_ACCEPT
from utils import MockEnvironment, http, HTTP_OK
from fixtures import FILE_PATH
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
        def validate_invalidation_batch(self, invalidation_batch, caller_reference):
        try:
            if caller_reference is not None:
                valid_caller_reference = caller_reference
            else:
                valid_caller_reference = datetime.datetime.now().isoformat()
            valid_invalidation_batch = {
                'paths': self.create_aws_list(invalidation_batch),
                'caller_reference': valid_caller_reference
            }
            return valid_invalidation_batch
        except (ClientError, BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Error validating invalidation batch.')
    
    RETURN = '''
cloud_front_origin_access_identity:
  description: The origin access identity's information.
  returned: always
  type: complex
  contains:
    cloud_front_origin_access_identity_config:
      description: describes a url specifying the origin access identity.
      returned: always
      type: complex
      contains:
        caller_reference:
          description: a caller reference for the oai
          returned: always
          type: string
        comment:
          description: a comment describing the oai
          returned: always
          type: string
    id:
      description: a unique identifier of the oai
      returned: always
      type: string
    s3_canonical_user_id:
      description: the cannonical user id of the user who created the oai
      returned: always
      type: string
e_tag:
  description: The current version of the origin access identity created.
  returned: always
  type: string
location:
  description: The fully qualified URI of the new origin access identity just created.
  returned: when initially created
  type: string
    
        def remove_targets(self, target_ids):
        '''Removes the provided targets from the rule in AWS'''
        if not target_ids:
            return
        request = {
            'Rule': self.name,
            'Ids': target_ids
        }
        try:
            response = self.client.remove_targets(**request)
        except (botocore.exceptions.BotoCoreError, botocore.exceptions.ClientError) as e:
            self.module.fail_json_aws(e, msg='Could not remove rule targets from rule %s' % self.name)
        self.changed = True
        return response
    
    RETURN = '''
elasticache_clusters:
  description: List of elasticache clusters
  returned: always
  type: complex
  contains:
    auto_minor_version_upgrade:
      description: Whether to automatically upgrade to minor versions
      returned: always
      type: bool
      sample: true
    cache_cluster_create_time:
      description: Date and time cluster was created
      returned: always
      type: string
      sample: '2017-09-15T05:43:46.038000+00:00'
    cache_cluster_id:
      description: ID of the cache cluster
      returned: always
      type: string
      sample: abcd-1234-001
    cache_cluster_status:
      description: Status of Elasticache cluster
      returned: always
      type: string
      sample: available
    cache_node_type:
      description: Instance type of Elasticache nodes
      returned: always
      type: string
      sample: cache.t2.micro
    cache_nodes:
      description: List of Elasticache nodes in the cluster
      returned: always
      type: complex
      contains:
        cache_node_create_time:
          description: Date and time node was created
          returned: always
          type: string
          sample: '2017-09-15T05:43:46.038000+00:00'
        cache_node_id:
          description: ID of the cache node
          returned: always
          type: string
          sample: '0001'
        cache_node_status:
          description: Status of the cache node
          returned: always
          type: string
          sample: available
        customer_availability_zone:
          description: Availability Zone in which the cache node was created
          returned: always
          type: string
          sample: ap-southeast-2b
        endpoint:
          description: Connection details for the cache node
          returned: always
          type: complex
          contains:
            address:
              description: URL of the cache node endpoint
              returned: always
              type: string
              sample: abcd-1234-001.bgiz2p.0001.apse2.cache.amazonaws.com
            port:
              description: Port of the cache node endpoint
              returned: always
              type: int
              sample: 6379
        parameter_grou_status:
          description: Status of the Cache Parameter Group
          returned: always
          type: string
          sample: in-sync
    cache_parameter_group:
      description: Contents of the Cache Parameter GGroup
      returned: always
      type: complex
      contains:
        cache_node_ids_to_reboot:
          description: Cache nodes which need to be rebooted for parameter changes to be applied
          returned: always
          type: list
          sample: []
        cache_parameter_group_name:
          description: Name of the cache parameter group
          returned: always
          type: string
          sample: default.redis3.2
        parameter_apply_status:
          description: Status of parameter updates
          returned: always
          type: string
          sample: in-sync
    cache_security_groups:
      description: Security Groups used by the cache
      returned: always
      type: list
      sample:
        - 'sg-abcd1234'
    cache_subnet_group_name:
      description: Elasticache Subnet Group used by the cache
      returned: always
      type: string
      sample: abcd-subnet-group
    client_download_landing_page:
      description: URL of client download web page
      returned: always
      type: string
      sample: 'https://console.aws.amazon.com/elasticache/home#client-download:'
    engine:
      description: Engine used by elasticache
      returned: always
      type: string
      sample: redis
    engine_version:
      description: Version of elasticache engine
      returned: always
      type: string
      sample: 3.2.4
    notification_configuration:
      description: Configuration of notifications
      returned: if notifications are enabled
      type: complex
      contains:
        topic_arn:
          description: ARN of notification destination topic
          returned: if notifications are enabled
          type: string
          sample: arn:aws:sns:*:123456789012:my_topic
        topic_name:
          description: Name of notification destination topic
          returned: if notifications are enabled
          type: string
          sample: MyTopic
    num_cache_nodes:
      description: Number of Cache Nodes
      returned: always
      type: int
      sample: 1
    pending_modified_values:
      description: Values that are pending modification
      returned: always
      type: complex
      contains: {}
    preferred_availability_zone:
      description: Preferred Availability Zone
      returned: always
      type: string
      sample: ap-southeast-2b
    preferred_maintenance_window:
      description: Time slot for preferred maintenance window
      returned: always
      type: string
      sample: sat:12:00-sat:13:00
    replication_group_id:
      description: Replication Group Id
      returned: always
      type: string
      sample: replication-001
    security_groups:
      description: List of Security Groups associated with Elasticache
      returned: always
      type: complex
      contains:
        security_group_id:
          description: Security Group ID
          returned: always
          type: string
          sample: sg-abcd1234
        status:
          description: Status of Security Group
          returned: always
          type: string
          sample: active
    tags:
      description: Tags applied to the elasticache cluster
      returned: always
      type: complex
      sample:
        Application: web
        Environment: test
'''
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        state=dict(required=True, choices=['present', 'absent']),
        name=dict(required=True),
        description=dict(required=False),
        subnets=dict(required=False, type='list'),
    )
    )
    module = AnsibleModule(argument_spec=argument_spec)
    
    
def main():
    '''
     Module action handler
    '''
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        name=dict(aliases=['role_name']),
        path_prefix=dict(),
    ))
    
        try:
        resource = redshift.describe_clusters(identifier)['DescribeClustersResponse']['DescribeClustersResult']['Clusters'][0]
    except boto.exception.JSONResponseError as e:
        module.fail_json(msg=str(e))
    
    EXAMPLES = '''
- name: Create Minimum GLOBAL Forwarding_Rule
  gcp_forwarding_rule:
    service_account_email: '{{ service_account_email }}'
    credentials_file: '{{ credentials_file }}'
    project_id: '{{ project_id }}'
    forwarding_rule_name: my-forwarding_rule
    protocol: TCP
    port_range: 80
    region: global
    target: my-target-proxy
    state: present
    
        def test_default_encoder(self):
        from acme.fields import RFC3339Field
        self.assertEqual(
            self.encoded, RFC3339Field.default_encoder(self.decoded))
    
    _LOGGER = logging.getLogger(__name__)
    
    
class DescriptionXmlView(HomeAssistantView):
    '''Handles requests for the description.xml file.'''
    
    
class Watcher():
    '''Class for starting Watchdog.'''
    
        def __init__(self, name, cfg):
        '''Initialize the graph.'''
        self._name = name
        self._hours = cfg[CONF_HOURS_TO_SHOW]
        self._refresh = cfg[CONF_REFRESH]
        self._entities = cfg[CONF_ENTITIES]