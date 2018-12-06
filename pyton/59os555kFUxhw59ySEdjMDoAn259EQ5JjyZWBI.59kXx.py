
        
            # Then we call the sorting method
    sort_blocks()
    
      # also store down the dimensionality of the data
  # - just pull from one set, required to be same for all sets
  hps.num_steps = datasets.values()[0]['num_steps']
  hps.ndatasets = len(hps.dataset_names)
    
      # Split the data, inputs, labels and times into train vs. validation.
  rates_train, rates_valid = \
      split_list_by_inds(rates, train_inds, valid_inds)
  noisy_data_train, noisy_data_valid = \
      split_list_by_inds(noisy_data, train_inds, valid_inds)
  input_train, inputs_valid = \
      split_list_by_inds(inputs, train_inds, valid_inds)
  condition_labels_train, condition_labels_valid = \
      split_list_by_inds(condition_labels, train_inds, valid_inds)
  input_times_train, input_times_valid = \
      split_list_by_inds(input_times, train_inds, valid_inds)
    
        softmax = self.sess.run(self.tensors['softmax_out'], feed_dict={
        self.tensors['inputs_in']: input_ids,
        self.tensors['char_inputs_in']: input_char_ids
    })
    
    
def create_discriminator(hparams,
                         sequence,
                         is_training,
                         reuse=None,
                         initial_state=None,
                         inputs=None,
                         present=None):
  '''Create the Discriminator model specified by the FLAGS and hparams.
    
        # Unstack to lists.
    rewards_list = tf.unstack(rewards_half, axis=1)
    log_probs_list = tf.unstack(log_probs_half, axis=1)
    reward_missing = 1. - tf.cast(reward_present_half, tf.float32)
    reward_missing_list = tf.unstack(reward_missing, axis=1)
    
      return init_savers
    
        Args:
      time: positive integer constant reflecting the current timestep.
      cell_state: state of RNNCell.
      cell_input: input provided by `dynamic_rnn_decoder`.
      cell_output: output of RNNCell.
      context_state: context state provided by `dynamic_rnn_decoder`.
    
        argument_spec.update(dict(
        caller_reference=dict(),
        distribution_id=dict(),
        alias=dict(),
        target_paths=dict(required=True, type='list')
    ))
    
            if new_config != current_config:
            changed = True
    
    
class CloudWatchEventRule(object):
    def __init__(self, module, name, client, schedule_expression=None,
                 event_pattern=None, description=None, role_arn=None):
        self.name = name
        self.client = client
        self.changed = False
        self.schedule_expression = schedule_expression
        self.event_pattern = event_pattern
        self.description = description
        self.role_arn = role_arn
        self.module = module
    
    RETURN = '''
block_device_mapping:
    description: Block device mapping for the instances of launch configuration
    type: list
    returned: always
    sample: '[{
        'device_name': '/dev/xvda':,
        'ebs': {
            'delete_on_termination': true,
            'volume_size': 8,
            'volume_type': 'gp2'
    }]'
classic_link_vpc_security_groups:
    description: IDs of one or more security groups for the VPC specified in classic_link_vpc_id
    type: string
    returned: always
    sample:
created_time:
    description: The creation date and time for the launch configuration
    type: string
    returned: always
    sample: '2016-05-27T13:47:44.216000+00:00'
ebs_optimized:
    description: EBS I/O optimized (true ) or not (false )
    type: bool
    returned: always
    sample: true,
image_id:
    description: ID of the Amazon Machine Image (AMI)
    type: string
    returned: always
    sample: 'ami-12345678'
instance_monitoring:
    description: Launched with detailed monitoring or not
    type: dict
    returned: always
    sample: '{
        'enabled': true
    }'
instance_type:
    description: Instance type
    type: string
    returned: always
    sample: 't2.micro'
kernel_id:
    description: ID of the kernel associated with the AMI
    type: string
    returned: always
    sample:
key_name:
    description: Name of the key pair
    type: string
    returned: always
    sample: 'user_app'
launch_configuration_arn:
    description: Amazon Resource Name (ARN) of the launch configuration
    type: string
    returned: always
    sample: 'arn:aws:autoscaling:us-east-1:666612345678:launchConfiguration:ba785e3a-dd42-6f02-4585-ea1a2b458b3d:launchConfigurationName/lc-app'
launch_configuration_name:
    description: Name of the launch configuration
    type: string
    returned: always
    sample: 'lc-app'
ramdisk_id:
    description: ID of the RAM disk associated with the AMI
    type: string
    returned: always
    sample:
security_groups:
    description: Security groups to associated
    type: list
    returned: always
    sample: '[
        'web'
    ]'
user_data:
    description: User data available
    type: string
    returned: always
    sample:
'''
    }
    
        client = boto3_conn(module=module, conn_type='client', resource='autoscaling', region=region, **aws_connect_params)
    find_launch_configs(client, module)
    
        except (ClientError, ParamValidationError, MissingParametersError) as e:
        if e.response['Error']['Code'] == 'ResourceNotFoundException':
            results = None
        else:
            module.fail_json(msg='Error retrieving function alias: {0}'.format(e))
    
        conn = module.client('rds', retry_decorator=AWSRetry.jittered_backoff(retries=10))
    results = dict()
    if not module.params['db_cluster_identifier'] and not module.params['db_cluster_snapshot_identifier']:
        results['snapshots'] = standalone_snapshot_facts(module, conn)
    if not module.params['db_snapshot_identifier'] and not module.params['db_instance_identifier']:
        results['cluster_snapshots'] = cluster_snapshot_facts(module, conn)
    
    EXAMPLES = '''
# Basic cluster provisioning example
- redshift: >
    command=create
    node_type=ds1.xlarge
    identifier=new_cluster
    username=cluster_admin
    password=1nsecure
    
            try:
            matching_groups = conn.describe_cluster_subnet_groups(group_name, max_records=100)
            exists = len(matching_groups) > 0
        except boto.exception.JSONResponseError as e:
            if e.body['Error']['Code'] != 'ClusterSubnetGroupNotFoundFault':
                # if e.code != 'ClusterSubnetGroupNotFoundFault':
                module.fail_json(msg=str(e))
    
        return changed, record
    
    
DOCUMENTATION = '''
---
module: gcp_forwarding_rule
version_added: '2.4'
short_description: Create, Update or Destroy a Forwarding_Rule.
description:
    - Create, Update or Destroy a Forwarding_Rule. See
      U(https://cloud.google.com/compute/docs/load-balancing/http/target-proxies) for an overview.
      More details on the Global Forwarding_Rule API can be found at
      U(https://cloud.google.com/compute/docs/reference/latest/globalForwardingRules)
      More details on the Forwarding Rules API can be found at
      U(https://cloud.google.com/compute/docs/reference/latest/forwardingRules)
requirements:
  - 'python >= 2.6'
  - 'google-api-python-client >= 1.6.2'
  - 'google-auth >= 0.9.0'
  - 'google-auth-httplib2 >= 0.0.2'
notes:
  - Currently only supports global forwarding rules.
    As such, Load Balancing Scheme is always EXTERNAL.
author:
  - 'Tom Melendez (@supertom) <tom@supertom.com>'
options:
  address:
    description:
       - IPv4 or named IP address. Must be of the same scope (regional, global).
         Reserved addresses can (and probably should) be used for global
         forwarding rules. You may reserve IPs from the console or
         via the gce_eip module.
    required: false
  forwarding_rule_name:
    description:
       - Name of the Forwarding_Rule.
    required: true
  port_range:
    description:
       - For global forwarding rules, must be set to 80 or 8080 for TargetHttpProxy, and
         443 for TargetHttpsProxy or TargetSslProxy.
    required: false
  protocol:
    description:
       - For global forwarding rules, TCP, UDP, ESP, AH, SCTP or ICMP. Default is TCP.
    required: false
  region:
    description:
       - The region for this forwarding rule. Currently, only 'global' is supported.
    required: false
  state:
    description:
       - The state of the Forwarding Rule. 'present' or 'absent'
    required: true
    choices: ['present', 'absent']
  target:
    description:
       - Target resource for forwarding rule. For global proxy, this is a Global
         TargetProxy resource. Required for external load balancing (including Global load balancing)
    required: false
'''
    
        it = 0
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
        ###########################################################################
    # List sampling algorithm
    ###########################################################################
    # We assume that sampling algorithm has the following signature:
    #   sample(n_population, n_sample)
    #
    sampling_algorithm = {}
    
    print(__doc__)
    
    
# Symlinks should have same data as target
for src, dst in symlinks.items():
    if dst in dirs:
        dirs[src] = dirs[dst]
    
    import os
import tarfile
from contextlib import closing
try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
    
__licence__ = 'BSD (3 clause)'
    
    
def setup(hass, config):
    '''Listen for browse_url events.'''
    import webbrowser
    
    
def setup_scanner(hass, config, see, discovery_info=None):
    '''Set up the demo tracker.'''
    def offset():
        '''Return random offset.'''
        return (random.randrange(500, 2000)) / 2e5 * random.choice((-1, 1))
    
        async def async_get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        filter_named = [result.name for result in self.last_results
                        if result.mac == device]
    
    
def _retrieve_list(host, token, **kwargs):
    '''Get device list for the given host.'''
    url = 'http://{}/cgi-bin/luci/;stok={}/api/misystem/devicelist'
    url = url.format(host, token)
    try:
        res = requests.get(url, timeout=5, **kwargs)
    except requests.exceptions.Timeout:
        _LOGGER.exception(
            'Connection to the router timed out at URL %s', url)
        return
    if res.status_code != 200:
        _LOGGER.exception(
            'Connection failed with http code %s', res.status_code)
        return
    try:
        result = res.json()
    except ValueError:
        # If json decoder could not parse the response
        _LOGGER.exception('Failed to parse response from mi router')
        return
    try:
        xiaomi_code = result['code']
    except KeyError:
        _LOGGER.exception(
            'No field code in response from mi router. %s', result)
        return
    if xiaomi_code == 0:
        try:
            return result['list']
        except KeyError:
            _LOGGER.exception('No list in response from mi router. %s', result)
            return
    else:
        _LOGGER.info(
            'Receive wrong Xiaomi code %s, expected 0 in response %s',
            xiaomi_code, result)
        return
    
            else:
            if req.status_code != 200:
                _LOGGER.error(
                    'Error saving data %s to %s (http status code = %d)',
                    payload, fullurl, req.status_code)
    
        def __init__(self, path, patterns, hass):
        '''Initialise the watchdog observer.'''
        from watchdog.observers import Observer
        self._observer = Observer()
        self._observer.schedule(
            create_event_handler(patterns, hass),
            path,
            recursive=True)
        hass.bus.listen_once(EVENT_HOMEASSISTANT_START, self.startup)
        hass.bus.listen_once(EVENT_HOMEASSISTANT_STOP, self.shutdown)
    
    
class HiveSession:
    '''Initiate Hive Session Class.'''
    
    
def FormatDebugInfoResponse( response ):
  if not response:
    return 'Server errored, no debug info from server\n'
  message = _FormatYcmdDebugInfo( response )
  completer = response[ 'completer' ]
  if completer:
    message += _FormatCompleterDebugInfo( completer )
  return message
    
    
  def Start( self ):
    self._keepalive_thread.start()
    
    
GENERIC_RESPONSE = {
  'clang': {
    'has_support': True,
    'version': 'Clang version'
  },
  'completer': {
    'items': [
      {
        'key': 'key',
        'value': 'value'
      }
    ],
    'name': 'Completer name',
    'servers': [
      {
        'address': '127.0.0.1',
        'executable': '/path/to/executable',
        'extras': [
          {
            'key': 'key',
            'value': 'value'
          }
        ],
        'is_running': True,
        'logfiles': [
          '/path/to/stdout/logfile',
          '/path/to/stderr/logfile'
        ],
        'name': 'Server name',
        'pid': 12345,
        'port': 1234
      }
    ]
  },
  'extra_conf': {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  },
  'python': {
    'executable': '/path/to/python/interpreter',
    'version': 'Python version'
  }
}
    
        try:
      result = self.fn( *self.args, **self.kwargs )
    except BaseException:
      e = sys.exc_info()[ 1 ]
      self.future.set_exception( e )
    else:
      self.future.set_result( result )
    
            fs = [self.submit(fn, *args) for args in zip(*iterables)]
    
        # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
    URLS = ['http://www.google.com/',
        'http://www.apple.com/',
        'http://www.ibm.com',
        'http://www.thisurlprobablydoesnotexist.com',
        'http://www.slashdot.org/',
        'http://www.python.org/',
        'http://www.bing.com/',
        'http://www.facebook.com/',
        'http://www.yahoo.com/',
        'http://www.youtube.com/',
        'http://www.blogger.com/']