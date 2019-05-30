
        
                for project in RangeQuerySetWrapperWithProgressBar(orm.Project.objects.all()):
            orm.Environment.objects.filter(
                project_id=project.id, organization_id__isnull=True
            ).update(organization_id=project.organization_id)
    
            # Changing field 'Environment.organization_id'
        db.alter_column(
            'sentry_environment',
            'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)
        )
    
            # Adding field 'ApiToken.scope_list'
        db.add_column(
            'sentry_apitoken',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
            # Removing unique constraint on 'VersionDSymFile', fields ['dsym_file', 'version', 'build']
        db.delete_unique('sentry_versiondsymfile', ['dsym_file_id', 'version', 'build'])
    
            for user in RangeQuerySetWrapperWithProgressBar(users):
            orm.UserEmail.objects.get_or_create(user=user, email=user.email)
    
        def find_path(self, start, end, path=None):
        path = path or []
    
        def test_data_change_shall_notify_all_observers_once(cls):
        with patch.object(cls.dec_obs, 'update') as mock_dec_obs_update, patch.object(
            cls.hex_obs, 'update'
        ) as mock_hex_obs_update:
            cls.sub.data = 10
            cls.assertEqual(mock_dec_obs_update.call_count, 1)
            cls.assertEqual(mock_hex_obs_update.call_count, 1)
    
        def test_provider_shall_update_affected_subscribers_with_published_subscription(cls):
        pro = Provider()
        pub = Publisher(pro)
        sub1 = Subscriber('sub 1 name', pro)
        sub1.subscribe('sub 1 msg 1')
        sub1.subscribe('sub 1 msg 2')
        sub2 = Subscriber('sub 2 name', pro)
        sub2.subscribe('sub 2 msg 1')
        sub2.subscribe('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            cls.assertEqual(mock_subscriber1_run.call_count, 0)
            cls.assertEqual(mock_subscriber2_run.call_count, 0)
        pub.publish('sub 1 msg 1')
        pub.publish('sub 1 msg 2')
        pub.publish('sub 2 msg 1')
        pub.publish('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            expected_sub1_calls = [call('sub 1 msg 1'), call('sub 1 msg 2')]
            mock_subscriber1_run.assert_has_calls(expected_sub1_calls)
            expected_sub2_calls = [call('sub 2 msg 1'), call('sub 2 msg 2')]
            mock_subscriber2_run.assert_has_calls(expected_sub2_calls)

    
    
class TestDynamicExpanding(unittest.TestCase):
    def setUp(self):
        self.John = Person('John', 'Coder')
    
        def test_cat_adapter_shall_make_noise(self):
        cat = Cat()
        cat_adapter = Adapter(cat, make_noise=cat.meow)
        noise = cat_adapter.make_noise()
        expected_noise = 'meow!'
        self.assertEqual(noise, expected_noise)
    
        def tearDown(cls):
        ''' Function/test case scope teardown. '''
        cls.output.close()
        sys.stdout = cls.saved_stdout
    
    
class StandbyStateTest(unittest.TestCase):
    ''' Exemplary 2nd level state test class (here: Standby state). Add missing
    state test classes... '''
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        def add_expert(self, expert):
        self.experts.append(expert)
    
    
def main():
    '''
    >>> move = Action('move')
    >>> person = Person('Jack', move)
    >>> person.do_action().amount('5m').stop()
    Jack move 5m then stop
    '''
    
            Content-Disposition is used as a header for a multipart body:
        https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Disposition
    '''
    try:
        parse_data = email.parser.BytesHeaderParser().parsebytes
    except AttributeError:
        # Fall back in case of Python 2.x
        parse_data = email.parser.HeaderParser().parsestr
    
    
def replay(api):
    file_path = get_file_path(api)
    if not file_path:
        return
    CURRENTLY_REPLAYING.append(True)
    count = 0
    try:
        with open(file_path, 'r') as reader:
            for line in reader:
                if line.strip():
                    count += 1
                    command = json.loads(line)
                    replay_command(command)
    finally:
        CURRENTLY_REPLAYING.pop(0)
    if count:
        LOGGER.info('Restored %s API calls from persistent file: %s' % (count, file_path))
    
        def test_api_gateway_lambda_proxy_integration_any_method(self):
        self._test_api_gateway_lambda_proxy_integration_any_method(
            self.TEST_LAMBDA_PROXY_BACKEND_ANY_METHOD,
            self.API_PATH_LAMBDA_PROXY_BACKEND_ANY_METHOD)
    
        def test_is_query_allowable(self):
        self.assertTrue(s3_listener.ProxyListenerS3.is_query_allowable('POST', 'uploadId'))
        self.assertTrue(s3_listener.ProxyListenerS3.is_query_allowable('POST', ''))
        self.assertTrue(s3_listener.ProxyListenerS3.is_query_allowable('PUT', ''))
        self.assertFalse(s3_listener.ProxyListenerS3.is_query_allowable('POST', 'differentQueryString'))
        # abort multipart upload is a delete with the same query string as a complete multipart upload
        self.assertFalse(s3_listener.ProxyListenerS3.is_query_allowable('DELETE', 'uploadId'))
        self.assertFalse(s3_listener.ProxyListenerS3.is_query_allowable('DELETE', 'differentQueryString'))
        self.assertFalse(s3_listener.ProxyListenerS3.is_query_allowable('PUT', 'uploadId'))
