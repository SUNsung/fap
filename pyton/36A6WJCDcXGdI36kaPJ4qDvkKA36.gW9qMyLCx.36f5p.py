
        
        
if __name__ == '__main__':
    main()

    
        def __init__(self, vehicle_size, license_plate, spot_size):
        self.vehicle_size = vehicle_size
        self.license_plate = license_plate
        self.spot_size
        self.spots_taken = []
    
    USERNAME = 'user'
PASSWORD = 'password'
# Basic auth encoded `USERNAME` and `PASSWORD`
# noinspection SpellCheckingInspection
BASIC_AUTH_HEADER_VALUE = 'Basic dXNlcjpwYXNzd29yZA=='
BASIC_AUTH_URL = '/basic-auth/{0}/{1}'.format(USERNAME, PASSWORD)
AUTH_OK = {'authenticated': True, 'user': USERNAME}
    
        def __str__(self):
        defaults = dict(type(self).__dict__)
        actual = dict(defaults)
        actual.update(self.__dict__)
        actual['config'] = self.config
        return repr_dict_nice(dict(
            (key, value)
            for key, value in actual.items()
            if not key.startswith('_'))
        )
    
        return chain(*output)
    
    
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
        def test_cert_file_not_found(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', '/__not_found__',
                 error_exit_ok=True)
        assert r.exit_status == ExitStatus.ERROR
        assert 'No such file or directory' in r.stderr
    
    
def test_migrate_implicit_content_type():
    config = MockEnvironment().config
    
    
def test_headers_empty_value(httpbin_both):
    r = http('GET', httpbin_both + '/headers')
    assert r.json['headers']['Accept']  # default Accept has value
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
        def __init__(self, concurrency, delay, randomize_delay):
        self.concurrency = concurrency
        self.delay = delay
        self.randomize_delay = randomize_delay
    
        def download_request(self, request, spider):
        scheme = urlparse_cached(request).scheme
        handler = self._get_handler(scheme)
        if not handler:
            raise NotSupported('Unsupported URL scheme '%s': %s' %
                               (scheme, self._notconfigured[scheme]))
        return handler.download_request(request, spider)
    
            body = tar_file.extractfile(tar_file.members[0]).read()
        respcls = responsetypes.from_args(filename=tar_file.members[0].name, body=body)
        return response.replace(body=body, cls=respcls)
    
    See documentation in docs/topics/downloader-middleware.rst
'''
    
        def open(self):  # can return deferred
        pass
    
    A tree.RewriteCardinalityException is raised, when the parsers hits a
cardinality mismatch during AST construction. Although this is basically a
bug in your grammar, it can only be detected at runtime.
    
            nvae = NoViableAltException(
            self.getDescription(),
            self.decisionNumber,
            s,
            input
            )
    
        def __init__(self, expecting, input):
        RecognitionException.__init__(self, input)
    
            try:
            domain_records = domain.get_records()
    
        def test_init_dev_mode(self):
        config = {
            'dev_mode': 1,
            'faulthandler': 1,
            'allocator': 'debug',
        }
        self.check_config('init_dev_mode', config)
    
    # Check stacktrace
def function_2():
    function_1()
    
            code = '\n'.join((
            'import socket, time',
            '',
            'host = %r' % support.HOST,
            'port = %s' % port,
            'sleep_time = %r' % self.sleep_time,
            '',
            '# let parent block on accept()',
            'time.sleep(sleep_time)',
            'with socket.create_connection((host, port)):',
            '    time.sleep(sleep_time)',
        ))
    
    
def clear_caches():
    import gc
    
        test_time = 0.0
    refleak = False  # True if the test leaked references.
    try:
        abstest = get_abs_module(ns, test)
        clear_caches()
        with saved_test_environment(test, ns.verbose, ns.quiet, pgo=ns.pgo) as environment:
            start_time = time.time()
            the_module = importlib.import_module(abstest)
            # If the test has a test_main, that will run the appropriate
            # tests.  If not, use normal unittest test loading.
            test_runner = getattr(the_module, 'test_main', None)
            if test_runner is None:
                def test_runner():
                    loader = unittest.TestLoader()
                    tests = loader.loadTestsFromModule(the_module)
                    for error in loader.errors:
                        print(error, file=sys.stderr)
                    if loader.errors:
                        raise Exception('errors while loading tests')
                    support.run_unittest(tests)
            if ns.huntrleaks:
                refleak = dash_R(the_module, test, test_runner, ns.huntrleaks)
            else:
                test_runner()
            test_time = time.time() - start_time
        post_test_cleanup()
    except support.ResourceDenied as msg:
        if not ns.quiet and not ns.pgo:
            print(test, 'skipped --', msg, flush=True)
        return RESOURCE_DENIED, test_time
    except unittest.SkipTest as msg:
        if not ns.quiet and not ns.pgo:
            print(test, 'skipped --', msg, flush=True)
        return SKIPPED, test_time
    except KeyboardInterrupt:
        raise
    except support.TestFailed as msg:
        if not ns.pgo:
            if display_failure:
                print('test', test, 'failed --', msg, file=sys.stderr,
                      flush=True)
            else:
                print('test', test, 'failed', file=sys.stderr, flush=True)
        return FAILED, test_time
    except:
        msg = traceback.format_exc()
        if not ns.pgo:
            print('test', test, 'crashed --', msg, file=sys.stderr,
                  flush=True)
        return FAILED, test_time
    else:
        if refleak:
            return FAILED, test_time
        if environment.changed:
            return ENV_CHANGED, test_time
        return PASSED, test_time