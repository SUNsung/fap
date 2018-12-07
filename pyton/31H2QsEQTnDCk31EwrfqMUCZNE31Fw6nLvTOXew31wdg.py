
def diag_gaussian_log_likelihood(z, mu=0.0, logvar=0.0):
  '''Log-likelihood under a Gaussian distribution with diagonal covariance.
    Returns the log-likelihood for each dimension.  One should sum the
    results for the log-likelihood under the full multidimensional model.
    
    
def flatten(list_of_lists):
  '''Takes a list of lists and returns a list of the elements.
    
      for n in xrange(num_batches):
    indices_batch = indices[n]
    new_arr_batch = new_arr[n]
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
      Returns:
    final_gen_objective:  Final REINFORCE objective for the sequence.
    rewards:  tf.float32 Tensor of rewards for sequence of shape [batch_size,
      sequence_length]
    advantages: tf.float32 Tensor of advantages for sequence of shape
      [batch_size, sequence_length]
    baselines:  tf.float32 Tensor of baselines for sequence of shape
      [batch_size, sequence_length]
    maintain_averages_op:  ExponentialMovingAverage apply average op to
      maintain the baseline.
  '''
  # Final Generator objective.
  final_gen_objective = 0.
  gamma = hparams.rl_discount_rate
  eps = 1e-7
    
      Returns:
    gen_train_op: Generator training op.
  '''
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
    print('\nOptimizing Generator vars:')
    for v in gen_vars:
      print(v)
    
    from six.moves import xrange
    
    
def find_asgs(conn, module, name=None, tags=None):
    '''
    Args:
        conn (boto3.AutoScaling.Client): Valid Boto3 ASG client.
        name (str): Optional name of the ASG you are looking for.
        tags (dict): Optional dictionary of tags and values to search for.
    
        def extract_service_from(self, service):
        # some fields are datetime which is not JSON serializable
        # make them strings
        if 'deployments' in service:
            for d in service['deployments']:
                if 'createdAt' in d:
                    d['createdAt'] = str(d['createdAt'])
                if 'updatedAt' in d:
                    d['updatedAt'] = str(d['updatedAt'])
        if 'events' in service:
            if not self.module.params['events']:
                del service['events']
            else:
                for e in service['events']:
                    if 'createdAt' in e:
                        e['createdAt'] = str(e['createdAt'])
        return service
    
    EXAMPLES = '''
# Note: None of these examples set aws_access_key, aws_secret_key, or region.
# It is assumed that their matching environment variables are set.
---
- hosts: localhost
  connection: local
  tasks:
    - name: 'Create a snapshot'
      elasticache_snapshot:
        name: 'test-snapshot'
        state: 'present'
        cluster_id: '{{ cluster }}'
        replication_id: '{{ replication }}'
'''
    
    EXAMPLES = '''
# Add or change a subnet group
- elasticache_subnet_group:
    state: present
    name: norwegian-blue
    description: My Fancy Ex Parrot Subnet Group
    subnets:
      - subnet-aaaaaaaa
      - subnet-bbbbbbbb
    
    
@AWSRetry.exponential_backoff()
def list_iam_attached_role_policies_with_backoff(client, role_name):
    paginator = client.get_paginator('list_attached_role_policies')
    return paginator.paginate(RoleName=role_name).build_full_result()['AttachedPolicies']
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        :param client: AWS API client reference (boto3)
    :param module: Ansible module reference
    :return dict:
    '''
    
        def exec_module(self, **kwargs):
    
        def scan_devices(self):
        '''Scan for new devices and return a list with found device IDs.'''
        self._update_info()
        return [client['mac'] for client in self.last_results]
    
            result = self._retrieve_list_with_retry()
        if result:
            self._store_result(result)
            return True
        return False
    
                        else:
                        final_path = os.path.join(download_path, filename)
    
    from aiohttp import web
    
    CONF_FOLDER = 'folder'
CONF_PATTERNS = 'patterns'
DEFAULT_PATTERN = '*'
DOMAIN = 'folder_watcher'
    
        @property
    def state_attributes(self):
        '''Return the state attributes.'''
        attrs = {
            ATTR_HOURS_TO_SHOW: self._hours,
            ATTR_REFRESH: self._refresh,
            ATTR_ENTITY_ID: self._entities,
        }
        return attrs
