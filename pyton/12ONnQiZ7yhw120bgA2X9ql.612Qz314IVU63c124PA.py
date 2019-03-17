
        
                if not title:
            error = 'Title is required.'
    
    
@pytest.mark.parametrize(('username', 'password', 'message'), (
    ('a', 'test', b'Incorrect username.'),
    ('test', 'a', b'Incorrect password.'),
))
def test_login_validate_input(auth, username, password, message):
    response = auth.login(username, password)
    assert message in response.data
    
        while current:
        if any(handler.level <= level for handler in current.handlers):
            return True
    
    
@pytest.fixture(scope='session', autouse=True)
def _standard_os_environ():
    '''Set up ``os.environ`` at the start of the test session to have
    standard values. Returns a list of operations that is used by
    :func:`._reset_os_environ` after each test.
    '''
    mp = monkeypatch.MonkeyPatch()
    out = (
        (os.environ, 'FLASK_APP', monkeypatch.notset),
        (os.environ, 'FLASK_ENV', monkeypatch.notset),
        (os.environ, 'FLASK_DEBUG', monkeypatch.notset),
        (os.environ, 'FLASK_RUN_FROM_CLI', monkeypatch.notset),
        (os.environ, 'WERKZEUG_RUN_MAIN', monkeypatch.notset),
    )
    
        centers = rand_center(data, 3)
    print(centers)
    
        Args:
        x(tf.Tensor):
        kernel_size(int or list of int):
        out_channels(int):
        act_fn(function):
        strides(int or list of int):
        padding(str):
        name(str):
        reuse(bool):
    
    word_unk = 'aam'
ngrams = compute_ngrams(word_unk, min_ngrams, max_ngrams)  # min_ngrams, max_ngrams = 2, 4
word_vec = np.zeros(model.vector_size, dtype=np.float32)
ngrams_found = 0
for ngram in ngrams:
    ngram_hash = ft_hash(ngram) % model.bucket
    if ngram_hash in model.wv.hash2index:
        word_vec += model.wv.vectors_ngrams[model.wv.hash2index[ngram_hash]]
        ngrams_found += 1
    
        def __init__(self):
        self.graph = defaultdict(list)
    
        def __lt__(self, other):
        return self.word < other.word
    
    file_name = args[0]
    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
    
    
    jieba.enable_parallel(4)
    
            main_file = '%s/%s' % (lambda_cwd, handler_file)
        if os.path.isfile(main_file):
            # make sure the file is actually readable, then read contents
            ensure_readable(main_file)
            with open(main_file, 'rb') as file_obj:
                zip_file_content = file_obj.read()
        else:
            # Raise an error if (1) this is not a local mount lambda, or (2) we're
            # running Lambdas locally (not in Docker), or (3) we're using remote Docker.
            # -> We do *not* want to raise an error if we're using local mount in non-remote Docker
            if not is_local_mount or not use_docker() or config.LAMBDA_REMOTE_DOCKER:
                file_list = run('ls -la %s' % lambda_cwd)
                LOG.debug('Lambda archive content:\n%s' % file_list)
                return error_response(
                    'Unable to find handler script in Lambda archive.', 400,
                    error_type='ValidationError')
    
    
def create_lambda_function(func_name, zip_file, event_source_arn=None, handler=LAMBDA_DEFAULT_HANDLER,
        starting_position=LAMBDA_DEFAULT_STARTING_POSITION, runtime=LAMBDA_DEFAULT_RUNTIME,
        envvars={}):
    '''Utility method to create a new function via the Lambda API'''
    
        def test_kinesis_lambda_forward_chain(self):
        kinesis = aws_stack.connect_to_service('kinesis')
        s3 = aws_stack.connect_to_service('s3')
    
            zip_file = testutil.create_lambda_archive(
            load_file(TEST_LAMBDA_PYTHON),
            get_content=True,
            libs=TEST_LAMBDA_LIBS,
            runtime=LAMBDA_RUNTIME_PYTHON27
        )
        testutil.create_lambda_function(
            func_name=TEST_LAMBDA_NAME_PY,
            zip_file=zip_file,
            runtime=LAMBDA_RUNTIME_PYTHON27
        )
    
                    # Replace Kinesis ShardIDs with ones that mimic actual
                # DynamoDBStream ShardIDs.
                stream_shards = stream_details['StreamDescription']['Shards']
                for shard in stream_shards:
                    shard['ShardId'] = shard_id(stream_name, shard['ShardId'])
                stream['Shards'] = stream_shards
                break
        if not result:
            return error_response('Requested resource not found', error_type='ResourceNotFoundException')
    elif action == '%s.GetShardIterator' % ACTION_HEADER_PREFIX:
        # forward request to Kinesis API
        stream_name = stream_name_from_stream_arn(data['StreamArn'])
        stream_shard_id = kinesis_shard_id(data['ShardId'])
        result = kinesis.get_shard_iterator(StreamName=stream_name,
            ShardId=stream_shard_id, ShardIteratorType=data['ShardIteratorType'])
    elif action == '%s.GetRecords' % ACTION_HEADER_PREFIX:
        kinesis_records = kinesis.get_records(**data)
        result = {'Records': []}
        for record in kinesis_records['Records']:
            result['Records'].append(json.loads(to_str(record['Data'])))
    else:
        print('WARNING: Unknown operation '%s'' % action)
    return jsonify(result)
    
        def test_put_parameters(self):
        ssm_client = aws_stack.connect_to_service('ssm')