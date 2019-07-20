
        
        REWRITE_HTTPS_ARGS_WITH_END = [
    '^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[END,NE,R=permanent]']
'''Apache version >= 2.3.9 rewrite rule arguments used for redirections to
    https vhost'''
    
    
class PyTest(TestCommand):
    user_options = []
    
        def test_perform(self):
        self.auth.perform([self.achall])
    
    
@app.route('/swagger.json')
def spec():
    swag = swagger(app)
    swag['info']['version'] = VERSION
    swag['info']['title'] = 'AWS Resources Dashboard'
    return jsonify(swag)
    
        def test_create_sns_message_body_json_structure_without_default_key(self):
        action = {
            'Message': ['{'message': 'abc'}'],
            'MessageStructure': ['json']
        }
        with assert_raises(Exception) as exc:
            sns_listener.create_sns_message_body(self.subscriber, action)
        self.assertEqual(str(exc.exception), 'Unable to find 'default' key in message payload')
    
    
def deserialize_event(event):
    # Deserialize into Python dictionary and extract the 'NewImage' (the new version of the full ddb document)
    ddb = event.get('dynamodb')
    if ddb:
        result = {
            '__action_type': event.get('eventName'),
        }
    
        def do_download(param):
        tmp_file = tmp_file_pattern % param
        TMP_FILES.append(tmp_file)
        download('http://localhost:%s/%s' % (test_port, param), tmp_file)
    
        return jsonify({})
    
    
def receive_assert_delete(queue_url, assertions, sqs_client=None, required_subject=None):
    if not sqs_client:
        sqs_client = aws_stack.connect_to_service('sqs')
    
        def test_s3_put_object_on_presigned_url(self):
        bucket_name = 'test-bucket-%s' % short_uid()
        self.s3_client.create_bucket(Bucket=bucket_name)
        body = 'something body'
        # get presigned URL
        object_key = 'test-presigned-key'
        url = self.s3_client.generate_presigned_url(
            'put_object', Params={'Bucket': bucket_name, 'Key': object_key}
        )
        # put object
        response = requests.put(url, data=body, verify=False)
        self.assertEqual(to_str(response.content), '')
        # get object and compare results
        downloaded_object = self.s3_client.get_object(Bucket=bucket_name, Key=object_key)
        download_object = downloaded_object['Body'].read()
        self.assertEqual(to_str(body), to_str(download_object))
        # clean up
        self._delete_bucket(bucket_name, [object_key])
    
        def RestAPI_get_cfn_attribute(self, attribute_name):
        if attribute_name == 'Id':
            return self.id
        if attribute_name == 'Region':
            return self.region_name
        if attribute_name == 'Name':
            return self.name
        if attribute_name == 'Description':
            return self.description
        if attribute_name == 'RootResourceId':
            for id, resource in self.resources.items():
                if resource.parent_id is None:
                    return resource.id
            return None
        raise UnformattedGetAttTemplateException()
    
    TEST_STREAM_NAME = 'firehose_test_' + short_uid()
TEST_TAG_1 = {'Key': 'MyTag', 'Value': 'TestValue'}
TEST_TAG_2 = {'Key': 'AnotherTag', 'Value': 'AnotherValue'}
TEST_TAGS = [TEST_TAG_1, TEST_TAG_2]
    
    
class TestInsertionSort(object):
    
            print('Two or more elements')
        data = [5, 1, 7, 2, 6, -3, 5, 7, -10]
        assert_equal(func(data), sorted(data))
    
            print('Test: Pop on a stack to destroy it')
        assert_equal(stacks.pop(), 'a')
    
    		print('Test: insert checking with post order traversal')
		expectVal = [7, 25, 10, 38, 40, 30, 60, 80, 70, 50]
		assert_equal(myTree.printPostOrder(), expectVal)
		expectVal = [91, 81, 71, 61, 51, 41, 31, 21, 11, 1]
		assert_equal(myTree2.printPostOrder(), expectVal)
    
        After each step the agent is provided with one of four possible observations
    which indicate where the guess is in relation to the randomly chosen number
    
            self.action_space = spaces.Box(low=np.array([-self.bounds]), high=np.array([self.bounds]),
                                       dtype=np.float32)
        self.observation_space = spaces.Discrete(4)
    
            # Raises KeyError because the new envs have extra info
        with self.assertRaises(KeyError):
            verify_environments_match('Humanoid-v3', 'Humanoid-v2')
    
        def to_jsonable(self, sample_n):
        return np.array(sample_n).tolist()
    
    # Unit test environment for CNNs and CNN+RNN algorithms.
# Looks like this (RGB observations):
#
#  ---------------------------
# |                           |
# |                           |
# |                           |
# |          **               |
# |          **               |
# |                           |
# |                           |
# |                           |
# |                           |
# |                           |
#  ========     ==============
#
# Goal is to go through the hole at the bottom. Agent controls square using Left-Nop-Right actions.
# It falls down automatically, episode length is a bit less than FIELD_H
#
# CubeCrash-v0                    # shaped reward
# CubeCrashSparse-v0              # reward 0 or 1 at the end
# CubeCrashScreenBecomesBlack-v0  # for RNNs
#
# To see how it works, run:
#
# python examples/agents/keyboard_agent.py CubeCrashScreen-v0
    
    class ContactDetector(contactListener):
    def __init__(self, env):
        contactListener.__init__(self)
        self.env = env
    def BeginContact(self, contact):
        if self.env.lander==contact.fixtureA.body or self.env.lander==contact.fixtureB.body:
            self.env.game_over = True
        for i in range(2):
            if self.env.legs[i] in [contact.fixtureA.body, contact.fixtureB.body]:
                self.env.legs[i].ground_contact = True
    def EndContact(self, contact):
        for i in range(2):
            if self.env.legs[i] in [contact.fixtureA.body, contact.fixtureB.body]:
                self.env.legs[i].ground_contact = False