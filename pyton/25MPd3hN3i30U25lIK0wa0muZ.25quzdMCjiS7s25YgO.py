
        
        
@functools.lru_cache()
def get_citext_oids(connection_alias):
    '''Return citext array OIDs.'''
    with connections[connection_alias].cursor() as cursor:
        cursor.execute('SELECT typarray FROM pg_type WHERE typname = 'citext'')
        return tuple(row[0] for row in cursor)
    
        def flush(self):
        '''
        Remove the current session data from the database and regenerate the
        key.
        '''
        self.clear()
        self.delete(self.session_key)
        self._session_key = None

    
    
class BaseSessionManager(models.Manager):
    def encode(self, session_dict):
        '''
        Return the given session dictionary serialized and encoded as a string.
        '''
        session_store_class = self.model.get_session_store_class()
        return session_store_class().encode(session_dict)
    
        # Output shape
        2D tensor of shape (samples, 2*n)
    
        dirname = 'cifar-100-python'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-100-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
    
allobj = [losses.mean_squared_error,
          losses.mean_absolute_error,
          losses.mean_absolute_percentage_error,
          losses.mean_squared_logarithmic_error,
          losses.squared_hinge,
          losses.hinge,
          losses.categorical_crossentropy,
          losses.binary_crossentropy,
          losses.kullback_leibler_divergence,
          losses.poisson,
          losses.cosine_proximity,
          losses.logcosh,
          losses.categorical_hinge]
    
    
def create_multi_input_model_from(layer1, layer2):
    input_1 = Input(shape=(data_dim,))
    input_2 = Input(shape=(data_dim,))
    out1 = layer1(input_1)
    out2 = layer2(input_2)
    out = Average()([out1, out2])
    model = Model([input_1, input_2], out)
    model.add_loss(K.mean(out2))
    model.add_loss(1)
    model.add_loss(1)
    return model
    
            if self.unit_forget_bias:
            def bias_initializer(shape, *args, **kwargs):
                return K.concatenate([
                    self.bias_initializer((self.units * 5,), *args, **kwargs),
                    initializers.Ones()((self.units,), *args, **kwargs),
                    self.bias_initializer((self.units * 2,), *args, **kwargs),
                ])
        else:
            bias_initializer = self.bias_initializer
        self.bias = self.add_weight(shape=(self.units * 8,),
                                    name='bias',
                                    initializer=bias_initializer,
                                    regularizer=self.bias_regularizer,
                                    constraint=self.bias_constraint)
    
    seq.add(Conv3D(filters=1, kernel_size=(3, 3, 3),
               activation='sigmoid',
               padding='same', data_format='channels_last'))
seq.compile(loss='binary_crossentropy', optimizer='adadelta')
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
y_train = np.array(y_train)
y_test = np.array(y_test)
    
    
def list_rules(client, module):
    try:
        return list_rules_with_backoff(client)
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Could not list WAF rules')
    
            # Create optional stack outputs
        all_facts = module.params.get('all_facts')
        if all_facts or module.params.get('stack_resources'):
            facts['stack_resource_list'] = service_mgr.list_stack_resources(stack_name)
            facts['stack_resources'] = to_dict(facts.get('stack_resource_list'), 'LogicalResourceId', 'PhysicalResourceId')
        if all_facts or module.params.get('stack_template'):
            facts['stack_template'] = service_mgr.get_template(stack_name)
        if all_facts or module.params.get('stack_policy'):
            facts['stack_policy'] = service_mgr.get_stack_policy(stack_name)
        if all_facts or module.params.get('stack_events'):
            facts['stack_events'] = service_mgr.describe_stack_events(stack_name)
    
        if state == 'absent':
        if not snapshot_id:
            module.fail_json(msg='snapshot_id must be set when state is absent')
        try:
            ec2.delete_snapshot(snapshot_id)
        except boto.exception.BotoServerError as e:
            # exception is raised if snapshot does not exist
            if e.error_code == 'InvalidSnapshot.NotFound':
                module.exit_json(changed=False)
            else:
                module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
        :param registry_id: Optional string containing the registryId.
    :return: kwargs dict with registryId, if given
    '''
    if not registry_id:
        return dict()
    else:
        return dict(registryId=registry_id)
    
    EXAMPLES = '''
- name: obtain all Elasticache facts
  elasticache_facts:
    
    
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
    
        noarch_lib = os.path.abspath( os.path.join(python_path, 'lib', 'noarch'))
    sys.path.append(noarch_lib)
    
    @section streams Streams
    
    class Token(object):
    '''@brief Abstract token baseclass.'''