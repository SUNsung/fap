
        
        
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
    match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
    
class Antirectifier(layers.Layer):
    '''This is the combination of a sample-wise
    L2 normalization with the concatenation of the
    positive part of the input with the negative part
    of the input. The result is a tensor of samples that are
    twice as large as the input samples.
    
    The test data is embedded using the weights of the final dense layer, just
before the classification head. This embedding can then be visualized using
TensorBoard's Embedding Projector.
'''
    
    
def test_fashion_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
        # Arguments
        y: class vector to be converted into a matrix
            (integers from 0 to num_classes).
        num_classes: total number of classes.
        dtype: The data type expected by the input, as a string
            (`float32`, `float64`, `int32`...)
    
    seq.add(ConvLSTM2D(filters=40, kernel_size=(3, 3),
                   padding='same', return_sequences=True))
seq.add(BatchNormalization())
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.layers import Embedding
from keras.layers import LSTM
from keras.layers import Conv1D, MaxPooling1D
from keras.datasets import imdb
    
    decoder_inputs = model.input[1]   # input_2
decoder_state_input_h = Input(shape=(latent_dim,), name='input_3')
decoder_state_input_c = Input(shape=(latent_dim,), name='input_4')
decoder_states_inputs = [decoder_state_input_h, decoder_state_input_c]
decoder_lstm = model.layers[3]
decoder_outputs, state_h_dec, state_c_dec = decoder_lstm(
    decoder_inputs, initial_state=decoder_states_inputs)
decoder_states = [state_h_dec, state_c_dec]
decoder_dense = model.layers[4]
decoder_outputs = decoder_dense(decoder_outputs)
decoder_model = Model(
    [decoder_inputs] + decoder_states_inputs,
    [decoder_outputs] + decoder_states)
    
        x_train = x[:to_train]
    y_train = y[:to_train]
    x_test = x[to_train:]
    y_test = y[to_train:]
    
        def ensure_present(self, enabled=True):
        '''Ensures the rule and targets are present and synced'''
        rule_description = self.rule.describe()
        if rule_description:
            # Rule exists so update rule, targets and state
            self._sync_rule(enabled)
            self._sync_targets()
            self._sync_state(enabled)
        else:
            # Rule does not exist, so create new rule and targets
            self._create(enabled)
    
    EXAMPLES = '''
---
# Simple example of listing all info for a function
- name: List all for a specific function
  lambda_facts:
    query: all
    function_name: myFunction
  register: my_function_details
# List all versions of a function
- name: List function versions
  lambda_facts:
    query: versions
    function_name: myFunction
  register: my_function_versions
# List all lambda function versions
- name: List all function
  lambda_facts:
    query: all
    max_items: 20
- name: show Lambda facts
  debug:
    var: lambda_facts
'''
    
        CLIENT_MINIMUM_VERSION = '0.22.0'
    if not check_min_pkg_version('google-cloud-pubsub', CLIENT_MINIMUM_VERSION):
        module.fail_json(msg='Please install google-cloud-pubsub library version %s' % CLIENT_MINIMUM_VERSION)
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    EXAMPLES = '''
# Create groups based on the machine architecture
- group_by:
    key: machine_{{ ansible_machine }}
    
        @callback
    def get(self, request, briefing_id):
        '''Handle Alexa Flash Briefing request.'''
        _LOGGER.debug('Received Alexa flash briefing request for: %s',
                      briefing_id)
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return a Linksys AP scanner.'''
    try:
        return LinksysSmartWifiDeviceScanner(config[DOMAIN])
    except ConnectionError:
        return None
    
        def _update_info(self):
        '''Scan the network for devices.
    
                if 'M-SEARCH' in data.decode('utf-8', errors='ignore'):
                # SSDP M-SEARCH method received, respond to it with our info
                resp_socket = socket.socket(
                    socket.AF_INET, socket.SOCK_DGRAM)
    
        def feed(self, byte_str):
        byte_str = self.filter_with_english_letters(byte_str)
        for c in byte_str:
            char_class = Latin1_CharToClass[c]
            freq = Latin1ClassModel[(self._last_char_class * CLASS_NUM)
                                    + char_class]
            if freq == 0:
                self._state = ProbingState.NOT_ME
                break
            self._freq_counter[freq] += 1
            self._last_char_class = char_class
    
            self._last_char[0] = byte_str[-1]
    
    
class MultiByteCharSetProber(CharSetProber):
    '''
    MultiByteCharSetProber
    '''
    
    
class SingleByteCharSetProber(CharSetProber):
    SAMPLE_SIZE = 64
    SB_ENOUGH_REL_THRESHOLD = 1024  #  0.25 * SAMPLE_SIZE^2
    POSITIVE_SHORTCUT_THRESHOLD = 0.95
    NEGATIVE_SHORTCUT_THRESHOLD = 0.05
    
    
def kinesis_error_response(data):
    error_response = Response()
    error_response.status_code = 200
    content = {'FailedRecordCount': 1, 'Records': []}
    for record in data['Records']:
        content['Records'].append({
            'ErrorCode': 'ProvisionedThroughputExceededException',
            'ErrorMessage': 'Rate exceeded for shard X in stream Y under account Z.'
        })
    error_response._content = json.dumps(content)
    return error_response

    
            Content-Disposition is used as a header for a multipart body:
        https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Disposition
    '''
    try:
        parse_data = email.parser.BytesHeaderParser().parsebytes
    except AttributeError:
        # Fall back in case of Python 2.x
        parse_data = email.parser.HeaderParser().parsestr
    
    RESOURCE_TO_FUNCTION = {
    'S3::Bucket': {
        'create': {
            'boto_client': 'resource',
            'function': 'create_bucket',
            'parameters': {
                'Bucket': ['BucketName', PLACEHOLDER_RESOURCE_NAME],
                'ACL': lambda params: convert_acl_cf_to_s3(params.get('AccessControl', 'PublicRead'))
            }
        }
    },
    'SQS::Queue': {
        'create': {
            'boto_client': 'resource',
            'function': 'create_queue',
            'parameters': {
                'QueueName': PLACEHOLDER_RESOURCE_NAME
            }
        }
    },
    'SNS::Topic': {
        'create': {
            'boto_client': 'resource',
            'function': 'create_topic',
            'parameters': {
                'Name': 'TopicName'
            }
        }
    },
    'Logs::LogGroup': {
        # TODO implement
    },
    'Lambda::Function': {
        'create': {
            'boto_client': 'client',
            'function': 'create_function',
            'parameters': {
                'FunctionName': 'FunctionName',
                'Runtime': 'Runtime',
                'Role': 'Role',
                'Handler': 'Handler',
                'Code': 'Code',
                'Description': 'Description'
                # TODO add missing fields
            },
            'defaults': {
                'Role': 'test_role'
            }
        }
    },
    'Lambda::Version': {},
    'Lambda::Permission': {},
    'Lambda::EventSourceMapping': {
        'create': {
            'boto_client': 'client',
            'function': 'create_event_source_mapping',
            'parameters': {
                'FunctionName': 'FunctionName',
                'EventSourceArn': 'EventSourceArn',
                'StartingPosition': 'StartingPosition',
                'Enabled': 'Enabled',
                'BatchSize': 'BatchSize',
                'StartingPositionTimestamp': 'StartingPositionTimestamp'
            }
        }
    },
    'DynamoDB::Table': {
        'create': {
            'boto_client': 'client',
            'function': 'create_table',
            'parameters': {
                'TableName': 'TableName',
                'AttributeDefinitions': 'AttributeDefinitions',
                'KeySchema': 'KeySchema',
                'ProvisionedThroughput': 'ProvisionedThroughput',
                'LocalSecondaryIndexes': 'LocalSecondaryIndexes',
                'GlobalSecondaryIndexes': 'GlobalSecondaryIndexes',
                'StreamSpecification': 'StreamSpecification'
            },
            'defaults': {
                'ProvisionedThroughput': {
                    'ReadCapacityUnits': 5,
                    'WriteCapacityUnits': 5
                }
            }
        }
    },
    'IAM::Role': {
        # TODO implement
    },
    'ApiGateway::RestApi': {
        'create': {
            'boto_client': 'client',
            'function': 'create_rest_api',
            'parameters': {
                'name': 'Name',
                'description': 'Description'
            }
        }
    },
    'ApiGateway::Resource': {
        'create': {
            'boto_client': 'client',
            'function': 'create_resource',
            'parameters': {
                'restApiId': 'RestApiId',
                'pathPart': 'PathPart',
                'parentId': 'ParentId'
            }
        }
    },
    'ApiGateway::Method': {
        'create': {
            'boto_client': 'client',
            'function': 'put_method',
            'parameters': {
                'restApiId': 'RestApiId',
                'resourceId': 'ResourceId',
                'httpMethod': 'HttpMethod',
                'authorizationType': 'AuthorizationType',
                'requestParameters': 'RequestParameters'
            }
        }
    },
    'ApiGateway::Method::Integration': {
    },
    'ApiGateway::Deployment': {
        'create': {
            'boto_client': 'client',
            'function': 'create_deployment',
            'parameters': {
                'restApiId': 'RestApiId',
                'stageName': 'StageName',
                'stageDescription': 'StageDescription',
                'description': 'Description'
            }
        }
    },
    'Kinesis::Stream': {
        'create': {
            'boto_client': 'client',
            'function': 'create_stream',
            'parameters': {
                'StreamName': 'Name',
                'ShardCount': 'ShardCount'
            },
            'defaults': {
                'ShardCount': 1
            }
        }
    }
}
    
    
def should_record(api, method, path, data, headers):
    ''' Decide whether or not a given API call should be recorded (persisted to disk) '''
    if api == 's3':
        if method not in ['PUT', 'POST', 'DELETE']:
            return False
        return True
    return False
    
    
def delete_document(id):
    article_path = '{}/{}/employee/{}?pretty'.format(ES_URL, TEST_INDEX, id)
    resp = requests.delete(article_path, headers=COMMON_HEADERS)
    # Pause to allow the document to be indexed
    time.sleep(1)
    return resp
    
        def test_update_alias_on_non_existant_alias_returns_error(self):
        with self.app.test_request_context():
            self._create_function(self.FUNCTION_NAME)
            result = json.loads(lambda_api.update_alias(self.FUNCTION_NAME, self.ALIAS_NAME).get_data())
            alias_arn = lambda_api.func_arn(self.FUNCTION_NAME) + ':' + self.ALIAS_NAME
            self.assertEqual(self.ALIASNOTFOUND_EXCEPTION, result['__type'])
            self.assertEqual(self.ALIASNOTFOUND_MESSAGE % alias_arn, result['message'])