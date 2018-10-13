
        
        # build the model
model = Sequential()
model.add(layers.Dense(256, input_shape=(784,)))
model.add(Antirectifier())
model.add(layers.Dropout(0.1))
model.add(layers.Dense(256))
model.add(Antirectifier())
model.add(layers.Dropout(0.1))
model.add(layers.Dense(num_classes))
model.add(layers.Activation('softmax'))
    
    The test data is embedded using the weights of the final dense layer, just
before the classification head. This embedding can then be visualized using
TensorBoard's Embedding Projector.
'''
    
        Output will always be a list of tensors
    (potentially with 1 element).
    
            if not self.built:
            # Model is not compilable because
            # it does not know its number of inputs
            # and outputs, nor their shapes and names.
            # We will compile after the first
            # time the model gets called on training data.
            return
        self._is_compiled = True
    
        # Returns
        A normalized copy of the array.
    '''
    l2 = np.atleast_1d(np.linalg.norm(x, order, axis))
    l2[l2 == 0] = 1
    return x / np.expand_dims(l2, axis)

    
        @property
    def dropout(self):
        return self.cell.dropout
    
            self.bias = self.add_weight(shape=(self.units * 6,),
                                    name='bias',
                                    initializer=self.bias_initializer,
                                    regularizer=self.bias_regularizer,
                                    constraint=self.bias_constraint)
    
            # Arguments
            weights: A list of Numpy arrays with shapes and types matching
                the output of `model.get_weights()`.
        '''
        tuples = []
        for cell in self.cells:
            if isinstance(cell, Layer):
                num_param = len(cell.weights)
                weights = weights[:num_param]
                for sw, w in zip(cell.weights, weights):
                    tuples.append((sw, w))
                weights = weights[num_param:]
        K.batch_set_value(tuples)
    
        existing_conditions = dict((condition_type, dict()) for condition_type in MATCH_LOOKUP)
    desired_conditions = dict((condition_type, dict()) for condition_type in MATCH_LOOKUP)
    all_conditions = dict()
    
        desc_log_group = describe_log_group(client=logs,
                                        log_group_name=module.params['log_group_name'],
                                        module=module)
    final_log_group_snake = []
    
        if region:
        ec2_client = boto3_conn(module, conn_type='client', resource='ec2', region=region, endpoint=ec2_url, **aws_connect_params)
    else:
        module.fail_json(msg='region must be specified')
    
        launch_config_name = module.params.get('name')
    sort = module.params.get('sort')
    sort_order = module.params.get('sort_order')
    sort_start = module.params.get('sort_start')
    sort_end = module.params.get('sort_end')
    
    RETURN = '''
image_id:
    description: AMI id
    returned: when Launch Configuration was found
    type: string
    sample: 'ami-0d75df7e'
user_data:
    description: User data used to start instance
    returned: when Launch Configuration was found
    type: string
    sample: 'ZXhwb3J0IENMT1VE'
name:
    description: Name of the Launch Configuration
    returned: when Launch Configuration was found
    type: string
    sample: 'myapp-v123'
arn:
    description: Name of the AMI
    returned: when Launch Configuration was found
    type: string
    sample: 'arn:aws:autoscaling:eu-west-1:12345:launchConfiguration:d82f050e-e315:launchConfigurationName/yourproject'
instance_type:
    description: Type of ec2 instance
    returned: when Launch Configuration was found
    type: string
    sample: 't2.small'
created_time:
    description: When it was created
    returned: when Launch Configuration was found
    type: string
    sample: '2016-06-29T14:59:22.222000+00:00'
ebs_optimized:
    description: Launch Configuration EBS optimized property
    returned: when Launch Configuration was found
    type: boolean
    sample: False
instance_monitoring:
    description: Launch Configuration instance monitoring property
    returned: when Launch Configuration was found
    type: string
    sample: {'Enabled': false}
classic_link_vpc_security_groups:
    description: Launch Configuration classic link vpc security groups property
    returned: when Launch Configuration was found
    type: list
    sample: []
block_device_mappings:
    description: Launch Configuration block device mappings property
    returned: when Launch Configuration was found
    type: list
    sample: []
keyname:
    description: Launch Configuration ssh key
    returned: when Launch Configuration was found
    type: string
    sample: mykey
security_groups:
    description: Launch Configuration security groups
    returned: when Launch Configuration was found
    type: list
    sample: []
kernel_id:
    description: Launch Configuration kernel to use
    returned: when Launch Configuration was found
    type: string
    sample: ''
ram_disk_id:
    description: Launch Configuration ram disk property
    returned: when Launch Configuration was found
    type: string
    sample: ''
associate_public_address:
    description: Assign public address or not
    returned: when Launch Configuration was found
    type: boolean
    sample: True
...
'''
import re
    
        module = AnsibleAWSModule(
        argument_spec=argument_spec,
        supports_check_mode=True
    )
    
        def get_repository_policy(self, registry_id, name):
        try:
            res = self.ecr.get_repository_policy(
                repositoryName=name, **build_kwargs(registry_id))
            text = res.get('policyText')
            return text and json.loads(text)
        except ClientError as err:
            code = err.response['Error'].get('Code', 'Unknown')
            if code == 'RepositoryPolicyNotFoundException':
                return None
            raise
    
    requirements: [ json, botocore, boto3 ]
options:
    state:
        description:
          - The desired state of the service
        required: true
        choices: ['present', 'absent', 'deleting']
    name:
        description:
          - The name of the service
        required: true
    cluster:
        description:
          - The name of the cluster in which the service exists
        required: false
    task_definition:
        description:
          - The task definition the service will run. This parameter is required when state=present
        required: false
    load_balancers:
        description:
          - The list of ELBs defined for this service
        required: false
    desired_count:
        description:
          - The count of how many instances of the service. This parameter is required when state=present
        required: false
    client_token:
        description:
          - Unique, case-sensitive identifier you provide to ensure the idempotency of the request. Up to 32 ASCII characters are allowed.
        required: false
    role:
        description:
          - The name or full Amazon Resource Name (ARN) of the IAM role that allows your Amazon ECS container agent to make calls to your load balancer
            on your behalf. This parameter is only required if you are using a load balancer with your service, in a network mode other than `awsvpc`.
        required: false
    delay:
        description:
          - The time to wait before checking that the service is available
        required: false
        default: 10
    repeat:
        description:
          - The number of times to check that the service is available
        required: false
        default: 10
    deployment_configuration:
        description:
          - Optional parameters that control the deployment_configuration; format is '{'maximum_percent':<integer>, 'minimum_healthy_percent':<integer>}
        required: false
        version_added: 2.3
    placement_constraints:
        description:
          - The placement constraints for the tasks in the service
        required: false
        version_added: 2.4
    placement_strategy:
        description:
          - The placement strategy objects to use for tasks in your service. You can specify a maximum of 5 strategy rules per service
        required: false
        version_added: 2.4
    network_configuration:
        description:
          - network configuration of the service. Only applicable for task definitions created with C(awsvpc) I(network_mode).
          - assign_public_ip requires botocore >= 1.8.4
        suboptions:
          subnets:
            description:
              - A list of subnet IDs to associate with the task
            version_added: 2.6
          security_groups:
            description:
              - A list of security group names or group IDs to associate with the task
            version_added: 2.6
          assign_public_ip:
            description:
              - Whether the task's elastic network interface receives a public IP address. This option requires botocore >= 1.8.4.
            type: bool
            version_added: 2.7
    launch_type:
        description:
          - The launch type on which to run your service
        required: false
        version_added: 2.7
        choices: ['EC2', 'FARGATE']
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        '''Get an elasticache connection'''
    try:
        conn = connect_to_region(region_name=region, **aws_connect_kwargs)
    except boto.exception.NoAuthHandlerFound as e:
        module.fail_json(msg=e.message)
    
    '''
import os
import pkg_resources
import unittest
    
        def backwards(self, orm):
        # Removing unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.delete_unique('sentry_commitauthor', ['organization_id', 'external_id'])
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    import os
import sys
import vim
import re
    
    from ycm.client.messages_request import _HandlePollResponse
from ycm.tests.test_utils import ExtendedMock
    
    from ycm.tests.test_utils import ( CurrentWorkingDirectory, ExtendedMock,
                                   MockVimModule, MockVimBuffers, VimBuffer )
MockVimModule()
    
      assert_that( test_utils.VIM_MATCHES_FOR_WINDOW,
               has_entries( { 1: empty() } ) )