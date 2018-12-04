
        
        
def pytest_addoption(parser):
    '''Adds `--enable-functional` argument.'''
    group = parser.getgroup('thefuck')
    group.addoption('--enable-functional', action='store_true', default=False,
                    help='Enable functional tests')
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
        requests_session = get_requests_session(ssl_version)
    requests_session.max_redirects = args.max_redirects
    
    
class Environment(object):
    '''
    Information about the execution context
    (standard streams, config directory, etc).
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
        if n == 1:
        return '1 B'
    
    
class PyTest(TestCommand):
    # `$ python setup.py test' simply installs minimal requirements
    # and runs the tests with no fancy stuff like parallel execution.
    def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = [
            '--doctest-modules', '--verbose',
            './httpie', './tests'
        ]
        self.test_suite = True
    
        config['implicit_content_type'] = 'json'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert not config['default_options']
    
        def test_request_body_from_file_by_path_no_field_name_allowed(
            self, httpbin):
        env = MockEnvironment(stdin_isatty=True)
        r = http('POST', httpbin.url + '/post', 'field-name@' + FILE_PATH_ARG,
                 env=env, error_exit_ok=True)
        assert 'perhaps you meant --form?' in r.stderr
    
            if self.about:
            self['__meta__']['about'] = self.about
    
            print('Success: test_sort_stack')
    
            print('Success: test_end_to_end')
    
        :param dict d: dict to match from ('got')
    :param dict expected: dict to match against ('want')
    :param prefix: key prefix (used for recursion)
    :type prefix: list or None
    :rtype: dict
    :returns: mapping of flattened keys to 2-ples of (got, want)
    '''
    prefix = prefix or []
    diffs = {}
    for k in set(d.keys() + expected.keys()):
        current_prefix = prefix + [k]
        want = d.get(k)
        got = expected.get(k)
        if isinstance(want, dict) and isinstance(got, dict):
            diffs.update(diff_dicts(got, want, prefix=current_prefix))
        elif got != want:
            key = '.'.join(current_prefix)
            diffs[key] = (got, want)
    return diffs
    
            # Scenario: call raises TransactionError
        _request.make_request.return_value = (False, Mock())
        self.assertRaises(TransactionError, refund_transaction,
                          self.customer_id, self.payment_profile_id,
                          self.amount, self.transaction_id)
    
        def test_message_event(self):
        self.patch_liveconfig('events_collector_modmail_sample_rate', 1.0)
        message = MagicMock(name='message', _date=FAKE_DATE)
        first_message = MagicMock(name='first_message')
        message_cls = self.autopatch(models, 'Message')
        message_cls._byID.return_value = first_message
        context = MagicMock(name='context')
        request = MagicMock(name='request')
        request.ip = '1.2.3.4'
        g.events.message_event(
            message, context=context, request=request
        )
    
        def test_getitem(self):
        perm_set = PermissionSet()
        perm_set[perm_set.ALL] = True
        self.assertFalse(perm_set['x'])
    
            width = 108
        url = self.provider.resize_image(image, width, max_ratio=max_ratio)
        self.assertEqual(url,
                ('https://example.com/a.jpg?fit=crop&crop=%s&arh=%s&w=%s'
                    % (crop, max_ratio, width)))
    
        def test_expired_header(self):
        body = '{'user': 'reddit', 'password': 'hunter2'}'
        platform = 'test'
        version = 1
        header = '1:%s:%s:0:deadbeef' % (platform, version)
        self.assert_invalid(
            body,
            header=header,
            error=signing.ERRORS.EXPIRED_TOKEN,
            global_version=1,
            platform=platform,
            version=version,
            has_mac=True,
        )
