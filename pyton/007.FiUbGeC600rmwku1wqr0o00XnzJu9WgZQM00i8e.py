
        
          if FLAGS.noise_type == 'poisson':
    noisy_data = spikify_data(rates, rng, rnn['dt'], rnn['max_firing_rate'])
  elif FLAGS.noise_type == 'gaussian':
    noisy_data = gaussify_data(rates, rng, rnn['dt'], rnn['max_firing_rate'])
  else:
    raise ValueError('Only noise types supported are poisson or gaussian')
    
    rng = np.random.RandomState(seed=FLAGS.synth_data_seed)
rnn_rngs = [np.random.RandomState(seed=FLAGS.synth_data_seed+1),
            np.random.RandomState(seed=FLAGS.synth_data_seed+2)]
T = FLAGS.T
C = FLAGS.C
N = FLAGS.N
nreplications = FLAGS.nreplications
E = nreplications * C
train_percentage = FLAGS.train_percentage
ntimesteps = int(T / FLAGS.dt)
    
      Returns:
    loss_matrix:  Loss matrix of shape [batch_size, sequence_length].
  '''
  cross_entropy_loss = tf.nn.sparse_softmax_cross_entropy_with_logits(
      labels=gen_labels, logits=gen_logits)
  return cross_entropy_loss
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
      The `attention_decoder_fn_inference` is called with user arguments
  and returns the `decoder_fn`, which can be passed to the
  `dynamic_rnn_decoder`, such that
    
        state = module.params.get('state')
    group_name = module.params.get('name').lower()
    group_description = module.params.get('description')
    group_subnets = module.params.get('subnets') or {}
    
        module = AnsibleModule(argument_spec=argument_spec,)
    
        if module.params.get('max_items'):
        params['MaxItems'] = module.params.get('max_items')
    
    
DOCUMENTATION = '''
---
module: gcpubsub_facts
version_added: '2.3'
short_description: List Topics/Subscriptions and Messages from Google PubSub.
description:
    - List Topics/Subscriptions from Google PubSub.  Use the gcpubsub module for
      topic/subscription management.
      See U(https://cloud.google.com/pubsub/docs) for an overview.
requirements:
  - 'python >= 2.6'
  - 'google-auth >= 0.5.0'
  - 'google-cloud-pubsub >= 0.22.0'
notes:
  - list state enables user to list topics or subscriptions in the project.  See examples for details.
author:
  - 'Tom Melendez (@supertom) <tom@supertom.com>'
options:
  topic:
    description:
       - GCP pubsub topic name.  Only the name, not the full path, is required.
    required: False
  view:
    description:
       - Choices are 'topics' or 'subscriptions'
    required: True
  state:
    description:
       - list is the only valid option.
    required: False
'''
    
            if add_rules:
            firewall_policy = _add_firewall_rules(module,
                                                  oneandone_conn,
                                                  firewall_policy['id'],
                                                  add_rules)
            _check_mode(module, firewall_policy)
            changed = True
    
    # Copyright: (c) 2015, VMware, Inc. All Rights Reserved.
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
        for rule in desired_rules:
        if rule not in current_rules:
            additions += 1
            if not module.check_mode:
                gateway.add_nat_rule(**rule)
            result['changed'] = True
    result['rules_added'] = additions
    
        module_hbacrule = get_hbacrule_dict(description=module.params['description'],
                                        hostcategory=hostcategory,
                                        ipaenabledflag=ipaenabledflag,
                                        servicecategory=servicecategory,
                                        sourcehostcategory=sourcehostcategory,
                                        usercategory=usercategory)
    ipa_hbacrule = client.hbacrule_find(name=name)
    
    
DOCUMENTATION = '''
---
module: spectrum_device
short_description: Creates/deletes devices in CA Spectrum.
description:
   - This module allows you to create and delete devices in CA Spectrum U(https://www.ca.com/us/products/ca-spectrum.html).
   - Tested on CA Spectrum 9.4.2, 10.1.1 and 10.2.1
version_added: '2.6'
author: 'Renato Orgito (@orgito)'
options:
    device:
        aliases: [ host, name ]
        required: true
        description:
            - IP address of the device.
            - If a hostname is given, it will be resolved to the IP address.
    community:
        description:
            - SNMP community used for device discovery.
            - Required when C(state=present).
    landscape:
        required: true
        description:
            - Landscape handle of the SpectroServer to which add or remove the device.
    state:
        required: false
        description:
            - On C(present) creates the device when it does not exist.
            - On C(absent) removes the device when it exists.
        choices: ['present', 'absent']
        default: 'present'
    url:
        aliases: [ oneclick_url ]
        required: true
        description:
            - HTTP, HTTPS URL of the Oneclick server in the form (http|https)://host.domain[:port]
    url_username:
        aliases: [ oneclick_user ]
        required: true
        description:
            - Oneclick user name.
    url_password:
        aliases: [ oneclick_password ]
        required: true
        description:
            - Oneclick user password.
    use_proxy:
        required: false
        description:
            - if C(no), it will not use a proxy, even if one is defined in an environment
                variable on the target hosts.
        default: 'yes'
        type: bool
    validate_certs:
        required: false
        description:
            - If C(no), SSL certificates will not be validated. This should only be used
                on personally controlled sites using self-signed certificates.
        default: 'yes'
        type: bool
    agentport:
        required: false
        description:
            - UDP port used for SNMP discovery.
        default: 161
notes:
   -  The devices will be created inside the I(Universe) container of the specified landscape.
   -  All the operations will be performed only on the specified landscape.
'''
    
        from sklearn.tree import DecisionTreeClassifier
    
    The data is generated with the ``make_checkerboard`` function, then
shuffled and passed to the Spectral Biclustering algorithm. The rows
and columns of the shuffled matrix are rearranged to show the
biclusters found by the algorithm.
    
    plt.legend(loc='best')
    
    # Part 1: Quantitative evaluation of various init methods