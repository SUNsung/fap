
        
            def __init__(self, message, severity=SEVERITY_CRITICAL, url=None):
        assert severity in self.SEVERITY_LEVELS
        self.message = six.text_type(message)
        self.severity = severity
        self.url = url
    
            backlogged, size = None, 0
        from sentry.monitoring.queues import backend
        if backend is not None:
            size = backend.get_size('default')
            backlogged = size > 0
    
    :copyright: (c) 2010-2017 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
from __future__ import absolute_import
    
    
@instrumented_task(name='sentry.tasks.options.sync_options', queue='options')
def sync_options(cutoff=ONE_HOUR):
    '''
    Ensures all options that have been updated (within the database) since
    ``cutoff`` have their correct values stored in the cache.
    
    
def input(prompt):
    '''
    Version of input (raw_input in Python 2) which forces a flush of sys.stdout
    to avoid problems where the prompt fails to appear due to line buffering
    '''
    sys.stdout.write(prompt)
    sys.stdout.flush()
    return sys.stdin.readline().rstrip('\n')
    
        @pytest.mark.skipif(six.PY3, reason='Env values in Python 3 are already Unicode')
    def test_unicode_path_from_env(self):
        with mock.patch.dict(os.environ):
            os.environ['COMPOSE_FILE'] = b'\xe5\xb0\xb1\xe5\x90\x83\xe9\xa5\xad/docker-compose.yml'
            environment = Environment.from_env_file('.')
            assert get_config_path_from_options(
                '.', {}, environment
            ) == ['就吃饭/docker-compose.yml']

    
        def assert_failure(self, res, code=None):
        self.assertEqual(res.status, 200)
        body = res.body
        body = json.loads(body)
        self.assertTrue('json' in body)
        errors = body['json'].get('errors')
        self.assertTrue(code in [x[0] for x in errors])
        data = body['json'].get('data')
        self.assertFalse(bool(data))
    
            Will raise an AssertionError if the captcha code is called.
        '''
        return contextlib.nested(
            # ensure that a captcha is not needed
            patch.object(
                validator,
                'need_provider_captcha',
                return_value=False,
            ),
            # ensure that the captcha is unused
            patch.object(
                g.captcha_provider,
                'validate_captcha',
                side_effect=AssertionError,
            ),
        )
    
            # Scenario: call returns duplicate errors
        _response.response_code = TRANSACTION_ERROR
        _response.response_reason_code = TRANSACTION_DUPLICATE
        _request.make_request.return_value = (True, _response)
        self.assertRaises(DuplicateTransactionError, create_authorization_hold,
                          self.customer_id, self.payment_profile_id,
                          self.amount, 12345)
    
        def test_nested_url(self):
        testcase = u'*{background-image:calc(url('http://foobar/'))}'
        self.assertInvalid(testcase)
    
        def test_no_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
        url = self.provider.resize_image(image)
        self.assertEqual(url, 'http://s3.amazonaws.com/a.jpg')
    
        def test_mcreddit_detector(self):
        user_agent = 'McReddit - Reddit Client for iOS'
        outs = detect(user_agent)
        self.assertEqual(outs['browser']['name'], McRedditDetector.name)
    
        def test_future_header(self):
        body = '{'user': 'reddit', 'password': 'hunter2'}'
        self.assert_invalid(
            body,
            header='2:awesomefuturespec',
            error=signing.ERRORS.UNKOWN_GLOBAL_VERSION,
            global_version=2,
        )