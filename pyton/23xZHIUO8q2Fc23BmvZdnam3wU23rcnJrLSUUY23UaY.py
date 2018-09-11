
        
        from __future__ import print_function
import keras
from keras.layers import Dense, Conv2D, BatchNormalization, Activation
from keras.layers import AveragePooling2D, Input, Flatten
from keras.optimizers import Adam
from keras.callbacks import ModelCheckpoint, LearningRateScheduler
from keras.callbacks import ReduceLROnPlateau
from keras.preprocessing.image import ImageDataGenerator
from keras.regularizers import l2
from keras import backend as K
from keras.models import Model
from keras.datasets import cifar10
import numpy as np
import os
    
            if self.stateful or self.return_state:
            h = h[0]
            c = c[0]
        if self.return_sequences:
            output = tf.transpose(outputs, (1, 0, 2))
        else:
            output = outputs[-1]
        return output, [h, c]
    
        def get_config(self):
        return {'l1': float(self.l1),
                'l2': float(self.l2)}
    
        print_fn(
        'Total params: {:,}'.format(trainable_count + non_trainable_count))
    print_fn('Trainable params: {:,}'.format(trainable_count))
    print_fn('Non-trainable params: {:,}'.format(non_trainable_count))
    print_fn('_' * line_length)
    
    
def test_preprocess_input():
    # Test image batch with float and int image input
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int32')
    assert utils.preprocess_input(x).shape == x.shape
    assert utils.preprocess_input(xint).shape == xint.shape
    
        # a more explicit example
    norm_instance = constraints.max_norm(2.0)
    x = np.array([[0, 0, 0], [1.0, 0, 0], [3, 0, 0], [3, 3, 3]]).T
    x_normed_target = np.array([[0, 0, 0], [1.0, 0, 0],
                                [2.0, 0, 0],
                                [2. / np.sqrt(3),
                                 2. / np.sqrt(3),
                                 2. / np.sqrt(3)]]).T
    x_normed_actual = K.eval(norm_instance(K.variable(x)))
    assert_allclose(x_normed_actual, x_normed_target, rtol=1e-05)
    
        for strides in [(1, 1), (2, 2)]:
        layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': 3,
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_last'},
                   input_shape=(num_samples, num_row, num_col, stack_size))
    
    
def ensure_web_acl_present(client, module):
    changed = False
    result = None
    name = module.params['name']
    web_acl_id = get_web_acl_by_name(client, module, name)
    if web_acl_id:
        (changed, result) = find_and_update_web_acl(client, module, web_acl_id)
    else:
        metric_name = module.params['metric_name']
        if not metric_name:
            metric_name = re.sub(r'[^A-Za-z0-9]', '', module.params['name'])
        default_action = module.params['default_action'].upper()
        try:
            params = {'Name': name, 'MetricName': metric_name, 'DefaultAction': {'Type': default_action}}
            new_web_acl = run_func_with_change_token_backoff(client, module, params, client.create_web_acl)
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Could not create Web ACL')
        (changed, result) = find_and_update_web_acl(client, module, new_web_acl['WebACL']['WebACLId'])
    return changed, result
    
        caller_reference = module.params.get('caller_reference')
    distribution_id = module.params.get('distribution_id')
    alias = module.params.get('alias')
    target_paths = module.params.get('target_paths')
    
        def fetch_aws_state(self):
        '''Retrieves rule and target state from AWS'''
        aws_state = {
            'rule': {},
            'targets': [],
            'changed': self.rule.changed
        }
        rule_description = self.rule.describe()
        if not rule_description:
            return aws_state
    
    
def describe_log_group(client, log_group_name, module):
    params = {}
    if log_group_name:
        params['logGroupNamePrefix'] = log_group_name
    try:
        desc_log_group = client.describe_log_groups(**params)
        return desc_log_group
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Unable to describe log group {0}: {1}'.format(log_group_name, to_native(e)),
                         exception=traceback.format_exc(), **camel_dict_to_snake_dict(e.response))
    except botocore.exceptions.BotoCoreError as e:
        module.fail_json(msg='Unable to describe log group {0}: {1}'.format(log_group_name, to_native(e)),
                         exception=traceback.format_exc())
    
        data_pipeline = get_result(client, dp_id)
    result = {'data_pipeline': data_pipeline,
              'msg': 'Data Pipeline {0} activated.'.format(dp_name)}
    
            elif index['type'] == 'include':
            indexes.append(IncludeIndex(name, parts=schema, includes=index['includes']))
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import (boto3_conn, ec2_argument_spec, get_aws_connection_info, ansible_dict_to_boto3_filter_list,
                                      camel_dict_to_snake_dict, boto3_tag_list_to_ansible_dict)
    
    DOCUMENTATION = '''
---
module: ec2_asg_lifecycle_hook
short_description: Create, delete or update AWS ASG Lifecycle Hooks.
description:
  - When no given Hook found, will create one.
  - In case Hook found, but provided parameters are differes, will update existing Hook.
  - In case state=absent and Hook exists, will delete it.
version_added: '2.5'
author: 'Igor (Tsigankov) Eyrich (@tsiganenok) <tsiganenok@gmail.com>'
options:
  state:
    description:
      - Create or delete Lifecycle Hook. Present updates existing one or creates if not found.
    required: false
    choices: ['present', 'absent']
    default: present
  lifecycle_hook_name:
    description:
      - The name of the lifecycle hook.
    required: true
  autoscaling_group_name:
    description:
      - The name of the Auto Scaling group to which you want to assign the lifecycle hook.
    required: true
  transition:
    description:
      - The instance state to which you want to attach the lifecycle hook.
    required: true
    choices: ['autoscaling:EC2_INSTANCE_TERMINATING', 'autoscaling:EC2_INSTANCE_LAUNCHING']
  role_arn:
    description:
      - The ARN of the IAM role that allows the Auto Scaling group to publish to the specified notification target.
    required: false
  notification_target_arn:
    description:
      - The ARN of the notification target that Auto Scaling will use to notify you when an
        instance is in the transition state for the lifecycle hook.
        This target can be either an SQS queue or an SNS topic. If you specify an empty string,
        this overrides the current ARN.
    required: false
  notification_meta_data:
    description:
      - Contains additional information that you want to include any time Auto Scaling sends a message to the notification target.
    required: false
  heartbeat_timeout:
    description:
      - The amount of time, in seconds, that can elapse before the lifecycle hook times out.
        When the lifecycle hook times out, Auto Scaling performs the default action.
        You can prevent the lifecycle hook from timing out by calling RecordLifecycleActionHeartbeat.
    required: false
    default: 3600 (1 hour)
  default_result:
    description:
      - Defines the action the Auto Scaling group should take when the lifecycle hook timeout
        elapses or if an unexpected failure occurs. This parameter can be either CONTINUE or ABANDON.
    required: false
    choices: ['ABANDON', 'CONTINUE']
    default: ABANDON
extends_documentation_fragment:
    - aws
    - ec2
requirements: [ boto3>=1.4.4 ]
    
            try:
            region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
            if not region:
                module.fail_json(msg='Region must be specified as a parameter, in EC2_REGION or AWS_REGION environment variables or in boto configuration file')
            self.ec2 = boto3_conn(module, conn_type='client', resource='ec2', region=region, endpoint=ec2_url, **aws_connect_kwargs)
        except ClientError as e:
            module.fail_json(msg=e.message)
    
        # If we're in check mode, nothing else to do
    if not check_mode:
        if address.domain == 'vpc':
            res = ec2.disassociate_address(
                association_id=address.association_id)
        else:
            res = ec2.disassociate_address(public_ip=address.public_ip)
    
        if 'volume_type' in volume:
        return_object['Ebs']['VolumeType'] = volume.get('volume_type')
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import (HAS_BOTO3, boto3_conn, camel_dict_to_snake_dict, ec2_argument_spec,
                                      get_aws_connection_info)
    
    
RETURN = '''
placement_groups:
  description: Placement group attributes
  returned: always
  type: complex
  contains:
    name:
      description: PG name
      type: string
      sample: my-cluster
    state:
      description: PG state
      type: string
      sample: 'available'
    strategy:
      description: PG strategy
      type: string
      sample: 'cluster'
    
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
    
    import numpy as np
import gc
from datetime import datetime
from sklearn.isotonic import isotonic_regression
from sklearn.utils.bench import total_seconds
import matplotlib.pyplot as plt
import argparse
    
                gc.collect()
            print('- benchmarking LassoLars')
            clf = LassoLars(alpha=alpha, fit_intercept=False,
                            normalize=False, precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lars_lasso_results.append(time() - tstart)
    
    
def _tabulate(results, metrics, formats):
    '''Prints results by metric and format
    
    faces = fetch_lfw_people(resize=.2, min_faces_per_person=5)
# limit dataset to 5000 people (don't care who they are!)
X = faces.data[:5000]
n_samples, h, w = faces.images.shape
n_features = X.shape[1]
    
        return results
    
    # Split data in train set and test set
n_samples = X.shape[0]
X_train, y_train = X[:n_samples // 2], y[:n_samples // 2]
X_test, y_test = X[n_samples // 2:], y[n_samples // 2:]
print('test data sparsity: %f' % sparsity_ratio(X_test))
    
    
def _get_git_revision():
    try:
        revision = subprocess.check_output(REVISION_CMD.split()).strip()
    except (subprocess.CalledProcessError, OSError):
        print('Failed to execute git to get revision')
        return None
    return revision.decode('utf-8')
    
        def execute(self):
        self.rename(self.src, self.dest)
    
        def __init__(self):
        self._tm = None
    
        def subscribe(self, msg, subscriber):
        self.subscribers.setdefault(msg, []).append(subscriber)
    
    '''
Implementation of the state pattern
    
    *What does this example do?
The code shows a way to localize words in two languages: English and
Greek. 'getLocalizer' is the factory method that constructs a
localizer depending on the language chosen. The localizer object will
be an instance from a different class according to the language
localized. However, the main code does not have to worry about which
localizer will be instantiated, since the method 'get' will be called
in the same way independently of the language.
    
    ### OUTPUT ###
# [{'objectb': 'b-value'}, {'default': 'default'}, {'objecta': 'a-value'}]

    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
    
class Cat(object):
    
    
def main():
    shapes = (
        CircleShape(1, 2, 3, DrawingAPI1()),
        CircleShape(5, 7, 11, DrawingAPI2())
    )