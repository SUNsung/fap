
        
        
class Antirectifier(layers.Layer):
    '''This is the combination of a sample-wise
    L2 normalization with the concatenation of the
    positive part of the input with the negative part
    of the input. The result is a tensor of samples that are
    twice as large as the input samples.
    
        return (x_train, y_train), (x_test, y_test)

    
    
def deserialize(config, custom_objects=None):
    return deserialize_keras_object(config,
                                    module_objects=globals(),
                                    custom_objects=custom_objects,
                                    printable_module_name='regularizer')
    
    
def test_kernel_regularization():
    x_train, y_train = get_data()
    for reg in [regularizers.l1(),
                regularizers.l2(),
                regularizers.l1_l2()]:
        model = create_model(kernel_regularizer=reg)
        model.compile(loss='categorical_crossentropy', optimizer='sgd')
        assert len(model.losses) == 1
        model.train_on_batch(x_train, y_train)
    
    
def _get_available_devices():
    return [x.name for x in K.get_session().list_devices()]
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
y_train = np.array(y_train)
y_test = np.array(y_test)
    
    import pytest
    
            # because special names such as Name.Class, Name.Function, etc.
        # are not recognized as such later in the parsing, we choose them
        # to look the same as ordinary variables.
        Name:                      '#000000',        # class: 'n'
        Name.Attribute:            '#c4a000',        # class: 'na' - to be revised
        Name.Builtin:              '#004461',        # class: 'nb'
        Name.Builtin.Pseudo:       '#3465a4',        # class: 'bp'
        Name.Class:                '#000000',        # class: 'nc' - to be revised
        Name.Constant:             '#000000',        # class: 'no' - to be revised
        Name.Decorator:            '#888',           # class: 'nd' - to be revised
        Name.Entity:               '#ce5c00',        # class: 'ni'
        Name.Exception:            'bold #cc0000',   # class: 'ne'
        Name.Function:             '#000000',        # class: 'nf'
        Name.Property:             '#000000',        # class: 'py'
        Name.Label:                '#f57900',        # class: 'nl'
        Name.Namespace:            '#000000',        # class: 'nn' - to be revised
        Name.Other:                '#000000',        # class: 'nx'
        Name.Tag:                  'bold #004461',   # class: 'nt' - like a keyword
        Name.Variable:             '#000000',        # class: 'nv' - to be revised
        Name.Variable.Class:       '#000000',        # class: 'vc' - to be revised
        Name.Variable.Global:      '#000000',        # class: 'vg' - to be revised
        Name.Variable.Instance:    '#000000',        # class: 'vi' - to be revised
    
        By default, the pair of `name` and `value` will be set for the domain ''
    and sent on every request (this is sometimes called a 'supercookie').
    '''
    result = {
        'version': 0,
        'name': name,
        'value': value,
        'port': None,
        'domain': '',
        'path': '/',
        'secure': False,
        'expires': None,
        'discard': True,
        'comment': None,
        'comment_url': None,
        'rest': {'HttpOnly': None},
        'rfc2109': False,
    }
    
    
def main():
    '''Pretty-print the bug information as JSON.'''
    print(json.dumps(info(), sort_keys=True, indent=2))
    
    
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
        def digest_response_handler(sock):
        # Respond to initial GET with a challenge.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert request_content.startswith(b'GET / HTTP/1.1')
        sock.send(text_401)
    
            return result, changed
    
        try:
        response = conn.delete_egress_only_internet_gateway(DryRun=module.check_mode, EgressOnlyInternetGatewayId=eigw_id)
    except botocore.exceptions.ClientError as e:
        # When boto3 method is run with DryRun=True it returns an error on success
        # We need to catch the error and return something valid
        if e.response.get('Error', {}).get('Code') == 'DryRunOperation':
            changed = True
        else:
            module.fail_json_aws(e, msg='Could not delete Egress-Only Internet Gateway {0} from VPC {1}'.format(eigw_id, module.vpc_id))
    except botocore.exceptions.BotoCoreError as e:
        module.fail_json_aws(e, msg='Could not delete Egress-Only Internet Gateway {0} from VPC {1}'.format(eigw_id, module.vpc_id))
    
        @AWSRetry.backoff(tries=5, delay=5, backoff=2.0)
    def list_services_with_backoff(self, **kwargs):
        paginator = self.ecs.get_paginator('list_services')
        try:
            return paginator.paginate(**kwargs).build_full_result()
        except botocore.exceptions.ClientError as e:
            if e.response['Error']['Code'] == 'ClusterNotFoundException':
                self.module.fail_json_aws(e, 'Could not find cluster to list services')
            else:
                raise
    
        if zone_in in [z['Name'] for z in matching_zones]:
        if hosted_zone_id:
            changed, result = delete_hosted_id(module, client, hosted_zone_id, matching_zones)
        else:
            if private_zone:
                changed, result = delete_private(module, client, matching_zones, vpc_id, vpc_region)
            else:
                changed, result = delete_public(module, client, matching_zones)
    else:
        changed = False
        result = 'No zone to delete.'
    
    
DOCUMENTATION = '''
---
module: azure_rm_functionapp_facts
version_added: '2.4'
short_description: Get Azure Function App facts
description:
    - Get facts for one Azure Function App or all Function Apps within a resource group
options:
    name:
        description:
            - Only show results for a specific Function App
    resource_group:
        description:
            - Limit results to a resource group. Required when filtering by name
        aliases:
            - resource_group_name
    tags:
        description:
            - Limit results by providing a list of tags. Format tags as 'key' or 'key:value'.
    
    
def plot_feature_errors(all_errors, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_errors['pca'], label='PCA')
    plot_results(all_components, all_errors['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. n_components\n'
                 'LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Mean absolute error')
    
    File: sparsity_benchmark.py
Function: benchmark_dense_predict at line 51
Total time: 0.532979 s
    
     * scikit-learn
 * pandas
 * memory_profiler
 * psutil (optional, but recommended)
    
        def run(self, args, opts):
        '''
        Entry point for running commands
        '''
        raise NotImplementedError

    
            if self.crawler_process.bootstrap_failed:
            self.exitcode = 1

    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
            # The crawler is created this way since the Shell manually handles the
        # crawling engine, so the set up in the crawl method won't work
        crawler = self.crawler_process._create_crawler(spidercls)
        # The Shell class needs a persistent engine in the crawler
        crawler.engine = crawler._create_engine()
        crawler.engine.start()
    
        def __init__(self):
        super().__init__()
        self.api_data = None
    
                if new_key is None:
                break
    
        def __solveDP(self, x, y):
        if (x==-1):
            return y+1
        elif (y==-1):
            return x+1
        elif (self.dp[x][y]>-1):
            return self.dp[x][y]
        else:
            if (self.A[x]==self.B[y]):
                self.dp[x][y] = self.__solveDP(x-1,y-1)
            else:
                self.dp[x][y] = 1+min(self.__solveDP(x,y-1), self.__solveDP(x-1,y), self.__solveDP(x-1,y-1))
    
    try:
	raw_input		#Python 2
except NameError:
	raw_input = input	#Python 3
    
    def anagram(myword):
    return word_bysig[signature(myword)]