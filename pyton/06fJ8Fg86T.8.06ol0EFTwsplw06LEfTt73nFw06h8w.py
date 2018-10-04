
        
            from urllib3.packages.ordered_dict import OrderedDict
    
    This module contains the set of Requests' exceptions.
'''
from urllib3.exceptions import HTTPError as BaseHTTPError
    
        # OPENSSL_VERSION_NUMBER doesn't exist in the Python 2.6 ssl module.
    system_ssl = getattr(ssl, 'OPENSSL_VERSION_NUMBER', None)
    system_ssl_info = {
        'version': '%x' % system_ssl if system_ssl is not None else ''
    }
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''CaseInsensitiveDict instance with 'Accept' header.'''
        self.case_insensitive_dict = CaseInsensitiveDict()
        self.case_insensitive_dict['Accept'] = 'application/json'
    
            with Server(handler) as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
            sock.sendall(question)
            text = sock.recv(1000)
            assert text == answer
            sock.close()
    
            String:                    '#4e9a06',        # class: 's'
        String.Backtick:           '#4e9a06',        # class: 'sb'
        String.Char:               '#4e9a06',        # class: 'sc'
        String.Doc:                'italic #8f5902', # class: 'sd' - like a comment
        String.Double:             '#4e9a06',        # class: 's2'
        String.Escape:             '#4e9a06',        # class: 'se'
        String.Heredoc:            '#4e9a06',        # class: 'sh'
        String.Interpol:           '#4e9a06',        # class: 'si'
        String.Other:              '#4e9a06',        # class: 'sx'
        String.Regex:              '#4e9a06',        # class: 'sr'
        String.Single:             '#4e9a06',        # class: 's1'
        String.Symbol:             '#4e9a06',        # class: 'ss'
    
        See https://github.com/requests/requests/issues/1979.
    '''
    text_401 = (b'HTTP/1.1 401 UNAUTHORIZED\r\n'
                b'Content-Length: 0\r\n'
                b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                b', opaque='372825293d1c26955496c80ed6426e9e', '
                b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
    # Check imported dependencies for compatibility.
try:
    check_compatibility(urllib3.__version__, chardet.__version__)
except (AssertionError, ValueError):
    warnings.warn('urllib3 ({0}) or chardet ({1}) doesn't match a supported '
                  'version!'.format(urllib3.__version__, chardet.__version__),
                  RequestsDependencyWarning)
    
            Tests on MNIST show that Antirectifier allows to train networks
        with twice less parameters yet with comparable
        classification accuracy as an equivalent ReLU-based network.
    '''
    
        fpath = os.path.join(path, 'test_batch')
    x_test, y_test = load_batch(fpath)
    
    
def test_preprocess_input():
    # Test image batch with float and int image input
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int32')
    assert utils.preprocess_input(x).shape == x.shape
    assert utils.preprocess_input(xint).shape == xint.shape
    
        # Note on using statefulness in RNNs
        You can set RNN layers to be 'stateful', which means that the states
        computed for the samples in one batch will be reused as initial states
        for the samples in the next batch. This assumes a one-to-one mapping
        between samples in different successive batches.
    
        # Returns
      input data after augmentation, whose shape is the same as its original.
    '''
    if inputs.dtype != tf.float32:
        inputs = tf.image.convert_image_dtype(inputs, dtype=tf.float32)
    
    
# Artificial data generation:
# Generate movies with 3 to 7 moving squares inside.
# The squares are of shape 1x1 or 2x2 pixels,
# which move linearly over time.
# For convenience we first create movies with bigger width and height (80x80)
# and at the end we select a 40x40 window.
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
y_train = np.array(y_train)
y_test = np.array(y_test)
    
    - We start with input sequences from a domain (e.g. English sentences)
    and corresponding target sequences from another domain
    (e.g. French sentences).
- An encoder LSTM turns input sequences to 2 state vectors
    (we keep the last LSTM state and discard the outputs).
- A decoder LSTM is trained to turn the target sequences into
    the same sequence but offset by one timestep in the future,
    a training process called 'teacher forcing' in this context.
    Is uses as initial state the state vectors from the encoder.
    Effectively, the decoder learns to generate `targets[t+1...]`
    given `targets[...t]`, conditioned on the input sequence.
- In inference mode, when we want to decode unknown input sequences, we:
    - Encode the input sequence into state vectors
    - Start with a target sequence of size 1
        (just the start-of-sequence character)
    - Feed the state vectors and 1-char target sequence
        to the decoder to produce predictions for the next character
    - Sample the next character using these predictions
        (we simply use argmax).
    - Append the sampled character to the target sequence
    - Repeat until we generate the end-of-sequence character or we
        hit the character limit.
    
    if K.image_data_format() == 'channels_first':
    x_train = x_train.reshape(x_train.shape[0], 1, img_rows, img_cols)
    x_test = x_test.reshape(x_test.shape[0], 1, img_rows, img_cols)
    input_shape = (1, img_rows, img_cols)
else:
    x_train = x_train.reshape(x_train.shape[0], img_rows, img_cols, 1)
    x_test = x_test.reshape(x_test.shape[0], img_rows, img_cols, 1)
    input_shape = (img_rows, img_cols, 1)
    
                    condition_insert = dict(FieldToMatch=dict(Type=filtr.get('field_to_match').upper()),
                                        TextTransformation=filtr.get('transformation', 'none').upper())
    
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
    
    RETURN = '''
gateway.customer_gateways:
    description: details about the gateway that was created.
    returned: success
    type: complex
    contains:
        bgp_asn:
            description: The Border Gateway Autonomous System Number.
            returned: when exists and gateway is available.
            sample: 65123
            type: string
        customer_gateway_id:
            description: gateway id assigned by amazon.
            returned: when exists and gateway is available.
            sample: cgw-cb6386a2
            type: string
        ip_address:
            description: ip address of your gateway device.
            returned: when exists and gateway is available.
            sample: 1.2.3.4
            type: string
        state:
            description: state of gateway.
            returned: when gateway exists and is available.
            state: available
            type: string
        tags:
            description: any tags on the gateway.
            returned: when gateway exists and is available, and when tags exist.
            state: available
            type: string
        type:
            description: encryption type.
            returned: when gateway exists and is available.
            sample: ipsec.1
            type: string
'''
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        if state == 'present':
        placement_group = get_placement_group_details(connection, module)
        if placement_group is None:
            create_placement_group(connection, module)
        else:
            strategy = module.params.get('strategy')
            if placement_group['strategy'] == strategy:
                module.exit_json(
                    changed=False, placement_group=placement_group)
            else:
                name = module.params.get('name')
                module.fail_json(
                    msg=('Placement group '{}' exists, can't change strategy' +
                         ' from '{}' to '{}'').format(
                             name,
                             placement_group['strategy'],
                             strategy))
    
    
DOCUMENTATION = '''
module: ec2_scaling_policy
short_description: Create or delete AWS scaling policies for Autoscaling groups
description:
  - Can create or delete scaling policies for autoscaling groups
  - Referenced autoscaling groups must already exist
version_added: '1.6'
author: 'Zacharie Eakin (@zeekin)'
options:
  state:
    description:
      - register or deregister the policy
    required: true
    choices: ['present', 'absent']
  name:
    description:
      - Unique name for the scaling policy
    required: true
  asg_name:
    description:
      - Name of the associated autoscaling group
    required: true
  adjustment_type:
    description:
      - The type of change in capacity of the autoscaling group
    required: false
    choices: ['ChangeInCapacity','ExactCapacity','PercentChangeInCapacity']
  scaling_adjustment:
    description:
      - The amount by which the autoscaling group is adjusted by the policy
    required: false
  min_adjustment_step:
    description:
      - Minimum amount of adjustment when policy is triggered
    required: false
  cooldown:
    description:
      - The minimum period of time between which autoscaling actions can take place
    required: false
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    # Create a snapshot only if the most recent one is older than 1 hour
- local_action:
    module: ec2_snapshot
    volume_id: vol-abcdef12
    last_snapshot_min_age: 60
'''
    
    ESTIMATORS = {
    'dummy': DummyClassifier(),
    'random_forest': RandomForestClassifier(n_estimators=100,
                                            max_features='sqrt',
                                            min_samples_split=10),
    'extra_trees': ExtraTreesClassifier(n_estimators=100,
                                        max_features='sqrt',
                                        min_samples_split=10),
    'logistic_regression': LogisticRegression(),
    'naive_bayes': MultinomialNB(),
    'adaboost': AdaBoostClassifier(n_estimators=10),
}
    
    
def bench(factory, X, Y, X_test, Y_test, ref_coef):
    gc.collect()
    
    This allows the scaling of the algorithm with the problem size to be
visualized and understood.
'''
from __future__ import print_function
    
        if enable_spectral_norm:
        title = 'normalized spectral norm diff vs running time'
        scatter_time_vs_s(all_time, all_spectral, datasets, title)
    title = 'normalized Frobenius norm diff vs running time'
    scatter_time_vs_s(all_time, all_frobenius, datasets, title)
    
        label = 'scikit-learn singular value decomposition benchmark results'
    fig = plt.figure(label)
    ax = fig.gca(projection='3d')
    for c, (label, timings) in zip('rbg', sorted(six.iteritems(results))):
        X, Y = np.meshgrid(samples_range, features_range)
        Z = np.asarray(timings).reshape(samples_range.shape[0],
                                        features_range.shape[0])
        # plot the actual surface
        ax.plot_surface(X, Y, Z, rstride=8, cstride=8, alpha=0.3,
                        color=c)
        # dummy point plot to stick the legend to since surface plot do not
        # support legends (yet?)
        ax.plot([1], [1], [1], color=c, label=label)
    
        for name in selected_transformers:
        print('Perform benchmarks for %s...' % name)
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        return result