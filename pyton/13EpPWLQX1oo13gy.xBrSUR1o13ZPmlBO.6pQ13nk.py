
        
            if test_config is None:
        # load the instance config, if it exists, when not testing
        app.config.from_pyfile('config.py', silent=True)
    else:
        # load the test config if passed in
        app.config.update(test_config)
    
        def add_app_template_test(self, f, name=None):
        '''Register a custom template test, available application wide.  Like
        :meth:`Flask.add_template_test` but for a blueprint.  Works exactly
        like the :meth:`app_template_test` decorator.
    
            This is often useful when configuration options map directly to
        keyword arguments in functions or class constructors.
    
        def to_python(self, value):
        key = next(iter(value))
        return {key[:-2]: value[key]}
    
        return inner

    
    
@need_dotenv
def test_dotenv_path(monkeypatch):
    for item in ('FOO', 'BAR', 'EGGS'):
        monkeypatch._setitem.append((os.environ, item, notset))
    
    
@pytest.mark.parametrize(
    'data',
    (
        {' t': (1, 2, 3)},
        {' t__': b'a'},
        {' di': ' di'},
        {'x': (1, 2, 3), 'y': 4},
        (1, 2, 3),
        [(1, 2, 3)],
        b'\xff',
        Markup('<html>'),
        uuid4(),
        datetime.utcnow().replace(microsecond=0),
    ),
)
def test_dump_load_unchanged(data):
    s = TaggedJSONSerializer()
    assert s.loads(s.dumps(data)) == data
    
        if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform.startswith('linux'):
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    elif sys.platform == 'darwin':
        darwin_lib = os.path.abspath( os.path.join(python_path, 'lib', 'darwin'))
        sys.path.append(darwin_lib)
        extra_lib = '/System/Library/Frameworks/Python.framework/Versions/2.7/Extras/lib/python'
        sys.path.append(extra_lib)
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
            elif isinstance(e, MismatchedTreeNodeException):
            tokenName = '<unknown>'
            if e.expecting == EOF:
                tokenName = 'EOF'
            else:
                tokenName = self.tokenNames[e.expecting]
    
            raise NotImplementedError
    
    
    def getCharPositionInLine(self):
        '''@brief Get the column of the tokens first character,
        
        Columns are numbered 0..n-1
        
        Using setter/getter methods is deprecated. Use o.charPositionInLine instead.'''
    
    site_info = 'Dailymotion.com'
download = dailymotion_download
download_playlist = playlist_not_supported('dailymotion')

    
        elif 'subject' in url:
        titles = re.findall(r'data-title='([^']*)'>', html)
        song_id = re.findall(r'<li class='song-item' id='([^']*)'', html)
        song_ssid = re.findall(r'data-ssid='([^']*)'', html)
        get_song_url = 'http://music.douban.com/j/songlist/get_song_url'
    
        if not info_only:
        download_url_ffmpeg(m3u8_url, title, 'm3u8', None, output_dir=output_dir, merge=merge)
    
        html = get_content(url)
    uuid_pattern = r''([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})''
    id = r1(r'var vid='([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})'', html)
    if id is None:
        video_pattern = r''vid'\s*:\s*' + uuid_pattern
        id = match1(html, video_pattern)
    assert id, 'can't find video info'
    return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)
    
        def build(self, input_shape):
        self.input_spec = [InputSpec(shape=input_shape)]
        shape = [1 for _ in input_shape]
        if self.data_format == 'channels_last':
            channel_axis = -1
            shape[channel_axis] = input_shape[channel_axis]
        elif self.data_format == 'channels_first':
            channel_axis = 1
            shape[channel_axis] = input_shape[channel_axis]
        # for i in self.axis:
        #    shape[i] = input_shape[i]
        self.gamma = self.add_weight(shape=shape,
                                     initializer=self.gamma_init,
                                     regularizer=self.gamma_regularizer,
                                     name='gamma')
        self.beta = self.add_weight(shape=shape,
                                    initializer=self.beta_init,
                                    regularizer=self.beta_regularizer,
                                    name='beta')
        self.built = True
    
    
def get_default_mask():
    ''' Set the default mask for cli '''
    masks = get_available_masks()
    default = 'dfl_full'
    default = default if default in masks else masks[0]
    logger.debug(default)
    return default
    
        def set_config(self, configfile, config):
        ''' Set the config to either global config or passed in config '''
        section = '.'.join(self.__module__.split('.')[-2:])
        if config is None:
            retval = get_config(section, configfile)
        else:
            config.section = section
            retval = config.config_dict
            config.section = None
        logger.debug('Config: %s', retval)
        return retval
    
            logger.trace('Blending box')
        mask = np.expand_dims(self.mask, axis=-1)
        new_face = np.clip(np.concatenate((new_face, mask), axis=-1), 0.0, 1.0)
        logger.trace('Blended box')
        return new_face

    
    import logging
import os
import sys
    
        Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the 'Software'), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:
    
        def process(self, new_face):
        ''' Sharpen using the requested technique '''
        amount = self.config['amount'] / 100.0
        kernel_center = self.get_kernel_size(new_face, self.config['radius'])
        new_face = getattr(self, self.config['method'])(new_face, kernel_center, amount)
        return new_face
    
    
class MissingNonceTest(unittest.TestCase):
    '''Tests for acme.errors.MissingNonce.'''
    
        config = configobj.ConfigObj()
    
    .. note::
   This configuration limits the scope of the TSIG key to just be able to
   add and remove TXT records for one specific host for the purpose of
   completing the ``dns-01`` challenge. If your version of BIND doesn't
   support the
   `update-policy <http://www.zytrax.com/books/dns/ch7/xfer.html#update-policy>`_
   directive then you can use the less-secure
   `allow-update <http://www.zytrax.com/books/dns/ch7/xfer.html#allow-update>`_
   directive instead.
    
    from certbot_integration_tests.certbot_tests import context as certbot_context
from certbot_integration_tests.utils import misc, certbot_call
from certbot_integration_tests.nginx_tests import nginx_config as config
    
        def append_upstream_connection(self, conn):
        '''
        Desc:
            添加此节点的上游节点的连接
        Args:
            conn ---- 当前节点的上游节点的连接的 list
        Returns:
            None
        '''
        # 使用 list 的 append 方法来将 conn 中的节点添加到 upstream 中
        self.upstream.append(conn)
    
    
if __name__ == '__main__':
    '''
    Desc:
        main 函数，训练我们的线性单元，并进行预测
    Args:
        None
    Returns:
        None
    '''
    # 首先训练我们的线性单元
    linear_unit = train_linear_unit()
    # 打印训练获得的权重 和 偏置
    print(linear_unit)
    # 测试
    print('Work 3.4 years, monthly salary = %.2f' % linear_unit.predict([3.4]))
    print('Work 15 years, monthly salary = %.2f' % linear_unit.predict([15]))
    print('Work 1.5 years, monthly salary = %.2f' % linear_unit.predict([1.5]))
    print('Work 6.3 years, monthly salary = %.2f' % linear_unit.predict([6.3]))
    plot(linear_unit)

    
        def backward(self, parent_delta):
        '''
        BPTS反向传播算法
        '''
        self.calc_delta(parent_delta, self.root)
        self.W_grad, self.b_grad = self.calc_gradient(self.root)
    
            # 构建FP-tree
        myCondTree, myHead = createTree(condPattBases, minSup)
        print('myHead=', myHead)
        # 挖掘条件 FP-tree, 如果myHead不为空，表示满足minSup {所有的元素+(value, treeNode)}
        if myHead is not None:
            myCondTree.disp(1)
            print('\n\n\n')
            # 递归 myHead 找出频繁项集
            mineTree(myCondTree, myHead, minSup, newFreqSet, freqItemList)
        print('\n\n\n')
    
    
def forward_event_to_target_stream(record, stream_name):
    kinesis = aws_stack.connect_to_service('kinesis')
    kinesis.put_record(StreamName=stream_name, Data=record['Data'], PartitionKey=record['PartitionKey'])

    
        def test_find_multipart_redirect_url(self):
        headers = {'Host': '10.0.1.19:4572', 'User-Agent': 'curl/7.51.0',
            'Accept': '*/*', 'Content-Length': '992', 'Expect': '100-continue',
            'Content-Type': 'multipart/form-data; boundary=------------------------3c48c744237517ac'}
    
        # put notification config with single event type
    event = 's3:ObjectCreated:*'
    s3_client.put_bucket_notification_configuration(Bucket=TEST_BUCKET_NAME_WITH_NOTIFICATIONS,
        NotificationConfiguration={
            'QueueConfigurations': [{
                'Id': 'id123456',
                'QueueArn': queue_arn,
                'Events': [event]
            }]
        }
    )
    config = s3_client.get_bucket_notification_configuration(Bucket=TEST_BUCKET_NAME_WITH_NOTIFICATIONS)
    config = config['QueueConfigurations'][0]
    assert config['Events'] == [event]
    
    
def replay_command(command):
    function = getattr(requests, command['m'].lower())
    data = command['d']
    if data:
        data = base64.b64decode(data)
    endpoint = aws_stack.get_local_service_url(command['a'])
    full_url = (endpoint[:-1] if endpoint.endswith('/') else endpoint) + command['p']
    result = function(full_url, data=data, headers=command['h'], verify=False)
    return result
    
            assert 'Parameters' in response
        assert len(response['Parameters']) > 0
        assert response['Parameters'][0]['Name'] == 'test_put'
        assert response['Parameters'][0]['Value'] == '1'

    
        def _reset_account_id(self, data):
        ''' Fix account ID in request payload. All external-facing responses contain our
            predefined account ID (defaults to 000000000000), whereas the backend endpoint
            from moto expects a different hardcoded account ID (123456789012). '''
        return aws_stack.fix_account_id_in_arns(
            data, colon_delimiter='%3A', existing=TEST_AWS_ACCOUNT_ID, replace=MOTO_ACCOUNT_ID)
    
        def test_attach_iam_role_to_new_iam_user(self):
        test_policy_document = {
            'Version': '2012-10-17',
            'Statement': {
                'Effect': 'Allow',
                'Action': 's3:ListBucket',
                'Resource': 'arn:aws:s3:::example_bucket'
            }
        }
        test_user_name = 'test-user'
    
    
# ---------------
# Helper methods
# ---------------
    
        def test_put_events(self):
        self.events_client.put_events(Entries=[{
            'Time': datetime(2019, 7, 29),
            'DetailType': TEST_DETAIL_TYPE,
            'Detail': 'some detail'
        }])

    
        # create final usage string
    additional_params = []
    additional_commands = ''
    for cmd in sorted(config.CLI_COMMANDS.keys()):
        cmd_details = config.CLI_COMMANDS[cmd]
        additional_commands += '\n  %s%s%s' % (cmd, (20 - len(cmd)) * ' ', cmd_details['description'])
        for param in cmd_details.get('parameters', []):
            additional_params.append(param)
    additional_params = '\n'.join(additional_params)
    doc_string = __doc__ % (additional_commands, additional_params)
    
        def get_allowed_errors(self):
        return super(GzipHTTPTest, self).get_allowed_errors() + [
            # TODO: The Etag is supposed to change when Content-Encoding is
            # used.  This should be fixed, but it's difficult to do with the
            # way GZipContentEncoding fits into the pipeline, and in practice
            # it doesn't seem likely to cause any problems as long as we're
            # using the correct Vary header.
            rs.VARY_ETAG_DOESNT_CHANGE,
        ]
    
        def callback(response):
        response.rethrow()
        assert len(response.body) == (options.num_chunks * options.chunk_size)
        logging.warning('fetch completed in %s seconds', response.request_time)
        IOLoop.current().stop()
    
                runpy.run_module(module, run_name='__main__', alter_sys=True)
        elif mode == 'script':
            with open(script) as f:
                # Execute the script in our namespace instead of creating
                # a new one so that something that tries to import __main__
                # (e.g. the unittest module) will see names defined in the
                # script instead of just those defined in this module.
                global __file__
                __file__ = script
                # If __package__ is defined, imports may be incorrectly
                # interpreted as relative to this module.
                global __package__
                del __package__
                exec_in(f.read(), globals(), globals())
    except SystemExit as e:
        logging.basicConfig()
        gen_log.info('Script exited with status %s', e.code)
    except Exception as e:
        logging.basicConfig()
        gen_log.warning('Script exited with uncaught exception', exc_info=True)
        # If an exception occurred at import time, the file with the error
        # never made it into sys.modules and so we won't know to watch it.
        # Just to make sure we've covered everything, walk the stack trace
        # from the exception and watch every file.
        for (filename, lineno, name, line) in traceback.extract_tb(sys.exc_info()[2]):
            watch(filename)
        if isinstance(e, SyntaxError):
            # SyntaxErrors are special:  their innermost stack frame is fake
            # so extract_tb won't see it and we have to get the filename
            # from the exception object.
            watch(e.filename)
    else:
        logging.basicConfig()
        gen_log.info('Script exited normally')
    # restore sys.argv so subsequent executions will include autoreload
    sys.argv = original_argv
    
        @gen_test
    def test_asyncio_future(self):
        # Test that we can yield an asyncio future from a tornado coroutine.
        # Without 'yield from', we must wrap coroutines in ensure_future,
        # which was introduced during Python 3.4, deprecating the prior 'async'.
        if hasattr(asyncio, 'ensure_future'):
            ensure_future = asyncio.ensure_future
        else:
            # async is a reserved word in Python 3.7
            ensure_future = getattr(asyncio, 'async')
    
        @gen.coroutine
    def get(self):
        if self.get_argument('code', None):
            user = yield self.get_authenticated_user(
                redirect_uri=self.request.full_url(),
                client_id=self.settings['facebook_api_key'],
                client_secret=self.settings['facebook_secret'],
                code=self.get_argument('code'),
            )
            self.write(user)
        else:
            yield self.authorize_redirect(
                redirect_uri=self.request.full_url(),
                client_id=self.settings['facebook_api_key'],
                extra_params={'scope': 'read_stream,offline_access'},
            )
    
            out = autoreload_proc.communicate()[0]
        self.assertEqual(out, 'Starting\n' * 2)

    
        @gen_test
    def test_call_with_executor(self):
        class Object(object):
            def __init__(self):
                self.__executor = futures.thread.ThreadPoolExecutor(1)