
        
                return {
            'id': video_id,
            'title': title,
            'description': video.get('long_description') or video.get(
                'short_description'),
            'duration': float_or_none(video.get('duration'), scale=1000),
            'formats': formats,
            'subtitles': subtitles,
        }
    
    
class CBSBaseIE(ThePlatformFeedIE):
    def _parse_smil_subtitles(self, smil, namespace=None, subtitles_lang='en'):
        subtitles = {}
        for k, ext in [('sMPTE-TTCCURL', 'tt'), ('ClosedCaptionURL', 'ttml'), ('webVTTCaptionURL', 'vtt')]:
            cc_e = find_xpath_attr(smil, self._xpath_ns('.//param', namespace), 'name', k)
            if cc_e is not None:
                cc_url = cc_e.get('value')
                if cc_url:
                    subtitles.setdefault(subtitles_lang, []).append({
                        'ext': ext,
                        'url': cc_url,
                    })
        return subtitles
    
    if __name__ == '__main__':
    main()

    
        def test_youporn(self):
        self._assert_restricted(
            'http://www.youporn.com/watch/505835/sex-ed-is-it-safe-to-masturbate-daily/',
            '505835.mp4', 2, old_age=25)
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
        def __exit__(self, exc_type, exc_value, traceback):
        if exc_type is None:
            self.stop_event.wait(self.WAIT_EVENT_TIMEOUT)
        else:
            if self.wait_to_close_event:
                # avoid server from waiting for event timeouts
                # if an exception is found in the main thread
                self.wait_to_close_event.set()
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or {}
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
    from requests.help import info
    
            # Add new cookies from the server.
        extract_cookies_to_jar(response.cookies, req, resp)
    
            # Note that prepare_auth must be last to enable authentication schemes
        # such as OAuth to work on a fully prepared request.
    
            assert server.handler_results[0] == data
    
            self.assertEqual(result['attr1']['DataType'], 'String')
        self.assertEqual(result['attr1']['StringValue'], 'value1')
        self.assertEqual(result['attr2']['DataType'], 'Binary')
        self.assertEqual(result['attr2']['BinaryValue'], 'value2'.encode('utf-8'))
        self.assertEqual(result['attr3']['DataType'], 'Number')
        self.assertEqual(result['attr3']['StringValue'], 'value3')
    
    
def forward_event_to_target_stream(record, stream_name):
    kinesis = aws_stack.connect_to_service('kinesis')
    kinesis.put_record(StreamName=stream_name, Data=record['Data'], PartitionKey=record['PartitionKey'])

    
        # subscribe SQS to SNS, publish message
    sns_client.subscribe(TopicArn=topic_info['TopicArn'], Protocol='sqs',
        Endpoint=aws_stack.sqs_queue_arn(TEST_QUEUE_NAME_FOR_SNS))
    test_value = short_uid()
    sns_client.publish(TopicArn=topic_info['TopicArn'], Message='test message for SQS',
        MessageAttributes={'attr1': {'DataType': 'String', 'StringValue': test_value}})
    
    
class ApiGatewayPathsTest (unittest.TestCase):
    
    
class TestLambdaBaseFeatures(unittest.TestCase):