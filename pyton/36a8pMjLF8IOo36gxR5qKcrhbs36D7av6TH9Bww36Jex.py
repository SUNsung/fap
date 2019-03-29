
        
        from .cifar import load_batch
from ..utils.data_utils import get_file
from .. import backend as K
import numpy as np
import os
    
        with gzip.open(paths[2], 'rb') as lbpath:
        y_test = np.frombuffer(lbpath.read(), np.uint8, offset=8)
    
    
def test_decode_predictions():
    x = np.zeros((2, 1000))
    x[0, 372] = 1.0
    x[1, 549] = 1.0
    outs = utils.decode_predictions(x, top=1)
    scores = [out[0][2] for out in outs]
    assert scores[0] == scores[1]
    
            # helper function
        def get_tuple_shape(nb_channels):
            result = list(state_shape)
            if self.cell.data_format == 'channels_first':
                result[1] = nb_channels
            elif self.cell.data_format == 'channels_last':
                result[3] = nb_channels
            else:
                raise KeyError
            return tuple(result)
    
    x_train = x_train.reshape(x_train.shape[0], -1, 1)
x_test = x_test.reshape(x_test.shape[0], -1, 1)
x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    x_train = x_train.reshape(60000, 784)
x_test = x_test.reshape(10000, 784)
x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    # train model for 5-digit classification [0..4]
train_model(model,
            (x_train_lt5, y_train_lt5),
            (x_test_lt5, y_test_lt5), num_classes)
    
        def _targets_request(self, targets):
        '''Formats each target for the request'''
        targets_request = []
        for target in targets:
            target_request = {
                'Id': target['id'],
                'Arn': target['arn']
            }
            if 'input' in target:
                target_request['Input'] = target['input']
            if 'input_path' in target:
                target_request['InputPath'] = target['input_path']
            if 'role_arn' in target:
                target_request['RoleArn'] = target['role_arn']
            if 'ecs_parameters' in target:
                target_request['EcsParameters'] = {}
                ecs_parameters = target['ecs_parameters']
                if 'task_definition_arn' in target['ecs_parameters']:
                    target_request['EcsParameters']['TaskDefinitionArn'] = ecs_parameters['task_definition_arn']
                if 'task_count' in target['ecs_parameters']:
                    target_request['EcsParameters']['TaskCount'] = ecs_parameters['task_count']
            targets_request.append(target_request)
        return targets_request
    
    
def get_eips_details(module):
    connection = module.client('ec2')
    filters = module.params.get('filters')
    try:
        response = connection.describe_addresses(
            Filters=ansible_dict_to_boto3_filter_list(filters)
        )
    except (BotoCoreError, ClientError) as e:
        module.fail_json_aws(
            e,
            msg='Error retrieving EIPs')
    
    
def _create_with_wait(snapshot, wait_timeout_secs, sleep_func=time.sleep):
    '''
    Wait for the snapshot to be created
    :param snapshot:
    :param wait_timeout_secs: fail this step after this many seconds
    :param sleep_func:
    :return:
    '''
    time_waited = 0
    snapshot.update()
    while snapshot.status != 'completed':
        sleep_func(3)
        snapshot.update()
        time_waited += 3
        if wait_timeout_secs and time_waited > wait_timeout_secs:
            return False
    return True
    
    try:
    import boto
    from boto.elasticache import connect_to_region
    from boto.exception import BotoServerError
    HAS_BOTO = True
except ImportError:
    HAS_BOTO = False
    
    
if __name__ == '__main__':
    main()

    
        CLIENT_MINIMUM_VERSION = '0.22.0'
    if not check_min_pkg_version('google-cloud-pubsub', CLIENT_MINIMUM_VERSION):
        module.fail_json(msg='Please install google-cloud-pubsub library version %s' % CLIENT_MINIMUM_VERSION)
    
    
def add_or_delete_heroku_collaborator(module, client):
    user = module.params['user']
    state = module.params['state']
    affected_apps = []
    result_state = False
    
    notes:
    - Requires the LogEntries agent which can be installed following the instructions at logentries.com
'''
EXAMPLES = '''
# Track nginx logs
- logentries:
    path: /var/log/nginx/access.log
    state: present
    name: nginx-access-log
    
    '''
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    parameters = {
        'vect__ngram_range': [(1, 1), (1, 2)],
    }
    grid_search = GridSearchCV(pipeline, parameters, n_jobs=-1)
    grid_search.fit(docs_train, y_train)
    
    # Create a graph capturing local connectivity. Larger number of neighbors
# will give more homogeneous clusters to the cost of computation
# time. A very large number of neighbors gives more evenly distributed
# cluster sizes, but may not impose the local manifold structure of
# the data
knn_graph = kneighbors_graph(X, 30, include_self=False)
    
    labels = ('Waveform 1', 'Waveform 2', 'Waveform 3')
    
    import numpy as np
import scipy as sp
import matplotlib.pyplot as plt
    
    # The following bandwidth can be automatically detected using
bandwidth = estimate_bandwidth(X, quantile=0.2, n_samples=500)
    
        def report_out_of_quota(self, appid):
        self.logger.warn('report_out_of_quota:%s', appid)
        with self.lock:
            if appid not in self.out_of_quota_appids:
                self.out_of_quota_appids.append(appid)
            try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
    
def run(cmd):
    cmd = shlex.split(cmd)
    
    # tree.RewriteRuleElementStream
# tree.RewriteRuleSubtreeStream
# tree.RewriteRuleTokenStream
# CharStream
# DFA
# TokenSource
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
    
if __name__ == '__main__':
    main()
    
    
    import random
    
        def __hash_double_function(self, key, data, increment):
        return (increment * self.__hash_function_2(key, data)) % self.size_table
    
            while self.values[new_key] is not None \
                and self.values[new_key] != key:
            i += 1
            new_key = self.hash_function(key + i*i) if not \
                self.balanced_factor() >= self.lim_charge else None
    
            self.A = str(A)
        self.B = str(B)
    
    if __name__ == '__main__':
	import sys
    
        for i in range(1, n+1):
        for j in range(1, s+1):
            dp[i][j]= dp[i][j-1]
    
        return res
    
    if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
    
def print_params_number():
    ''''''
    print(SPLIT_LINE)
    print('params_number:', get_params_number())

    
        References:
        K.permute_dimensions()
    '''
    return tf.transpose(x, perm)