
        
        from ..utils.data_utils import get_file
import numpy as np
    
        # Arguments
        model: target model for the conversion.
    '''
    # Note: SeparableConvolution not included
    # since only supported by TF.
    conv_classes = {
        'Conv1D',
        'Conv2D',
        'Conv3D',
        'Conv2DTranspose',
    }
    to_assign = []
    for layer in model.layers:
        if layer.__class__.__name__ in conv_classes:
            original_kernel = K.get_value(layer.kernel)
            converted_kernel = convert_kernel(original_kernel)
            to_assign.append((layer.kernel, converted_kernel))
    K.batch_set_value(to_assign)
    
            if K.is_keras_tensor(additional_inputs[0]):
            # Compute the full input spec, including state and constants
            full_input = [inputs] + additional_inputs
            full_input_spec = self.input_spec + additional_specs
            # Perform the call with temporarily replaced input_spec
            original_input_spec = self.input_spec
            self.input_spec = full_input_spec
            output = super(ConvRNN2D, self).__call__(full_input, **kwargs)
            self.input_spec = original_input_spec
            return output
        else:
            return super(ConvRNN2D, self).__call__(inputs, **kwargs)
    
    # The data, split between train and test sets:
(x_train, y_train), (x_test, y_test) = cifar10.load_data()
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    # Train the network
noisy_movies, shifted_movies = generate_movies(n_samples=1200)
seq.fit(noisy_movies[:1000], shifted_movies[:1000], batch_size=10,
        epochs=300, validation_split=0.05)
    
        # Retrieve any AWS settings from the environment.
    region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    if not region:
        module.fail_json(msg=str('Either region or AWS_REGION or EC2_REGION environment variable or boto config aws_region or ec2_region must be set.'))
    
        function_name = module.params.get('function_name')
    if function_name:
        try:
            # get_policy returns a JSON string so must convert to dict before reassigning to its key
            lambda_facts.update(policy=json.loads(client.get_policy(FunctionName=function_name)['Policy']))
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(policy={})
            else:
                module.fail_json_aws(e, msg='Trying to get {0} policy'.format(function_name))
    else:
        module.fail_json(msg='Parameter function_name required for query=policy.')
    
        if state == 'absent':
        if not module.params.get('name'):
            module.fail_json(
                msg=''name' parameter is required to delete a monitoring policy.')
        try:
            (changed, monitoring_policy) = remove_monitoring_policy(module, oneandone_conn)
        except Exception as ex:
            module.fail_json(msg=str(ex))
    elif state == 'update':
        if not module.params.get('monitoring_policy'):
            module.fail_json(
                msg=''monitoring_policy' parameter is required to update a monitoring policy.')
        try:
            (changed, monitoring_policy) = update_monitoring_policy(module, oneandone_conn)
        except Exception as ex:
            module.fail_json(msg=str(ex))
    
    
def get_schema_facts(cursor, schema=''):
    facts = {}
    cursor.execute('''
        select schema_name, schema_owner, create_time
        from schemata
        where not is_system_schema and schema_name not in ('public', 'TxtIndex')
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
        on g.grantee_id = r.role_id and g.object_type='SCHEMA'
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
    
        def role_add_member(self, name, item):
        return self._post_json(method='role_add_member', name=name, item=item)
    
    # Create nested groups
- group_by:
    key: el{{ ansible_distribution_major_version }}-{{ ansible_architecture }}
    parents:
      - el{{ ansible_distribution_major_version }}
    
    # Copyright 2013 Bruce Pennypacker <bruce@pennypacker.org>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    # If outside servers aren't reachable from your machine, use delegate_to and override hosts:
- bigpanda:
    component: myapp
    version: '1.3'
    token: '{{ bigpanda_token }}'
    hosts: '{{ ansible_hostname }}'
    state: started
  delegate_to: localhost
  register: deployment
    
    
def follow_log(module, le_path, logs, name=None, logtype=None):
    ''' Follows one or more logs if not already followed. '''
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
        :param str vhost_path: Augeas virtual host path
    
            Examples:
    
        def test_nonexistent_like(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                for like in entrypoint.OVERRIDE_CLASSES.keys():
                    mock_like.return_value = [like]
                    self.assertEqual(entrypoint.get_configurator(),
                                     entrypoint.OVERRIDE_CLASSES[like])
    
        def test_perform2(self):
        # Avoid load module
        self.sni.configurator.parser.modules.add('ssl_module')
        self.sni.configurator.parser.modules.add('socache_shmcb_module')
        acme_responses = []
        for achall in self.achalls:
            self.sni.add_chall(achall)
            acme_responses.append(achall.response(self.auth_key))
    
    # http://docs.readthedocs.org/en/latest/theme.html#how-do-i-use-this-locally-and-on-read-the-docs
# on_rtd is whether we are on readthedocs.org
on_rtd = os.environ.get('READTHEDOCS', None) == 'True'
if not on_rtd:  # only import and set the theme if we're building docs locally
    import sphinx_rtd_theme
    html_theme = 'sphinx_rtd_theme'
    html_theme_path = [sphinx_rtd_theme.get_html_theme_path()]
# otherwise, readthedocs.org uses their theme by default, so no need to specify it