
atom_template = textwrap.dedent('''\
    <?xml version='1.0' encoding='utf-8'?>
    <feed xmlns='http://www.w3.org/2005/Atom'>
        <link rel='self' href='http://rg3.github.io/youtube-dl/update/releases.atom' />
        <title>youtube-dl releases</title>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed</id>
        <updated>@TIMESTAMP@</updated>
        @ENTRIES@
    </feed>''')
    
        infile, outfile = args
    
    
def gen_extractors():
    ''' Return a list of an instance of every supported extractor.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return [klass() for klass in gen_extractor_classes()]
    
            # Request the extended version of the api for extra fields like artist and title
        api_response = self._download_json(
            'http://www.audiomack.com/api/music/url/song/%s?extended=1&_=%d' % (
                album_url_tag, time.time()),
            album_url_tag)
    
        def _real_extract(self, url):
        mobj = re.match(self._VALID_URL, url, flags=re.VERBOSE)
        text_id = mobj.group('textid')
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME + SEP_CREDENTIALS + PASSWORD,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
        @property
    def encoding(self):
        return self._orig.encoding or 'utf8'
    
        try:
        parsed_args = parser.parse_args(args=args, env=env)
    except KeyboardInterrupt:
        env.stderr.write('\n')
        if include_traceback:
            raise
        exit_status = ExitStatus.ERROR_CTRL_C
    except SystemExit as e:
        if e.code != ExitStatus.OK:
            env.stderr.write('\n')
            if include_traceback:
                raise
            exit_status = ExitStatus.ERROR
    else:
        try:
            exit_status = program(
                args=parsed_args,
                env=env,
                log_error=log_error,
            )
        except KeyboardInterrupt:
            env.stderr.write('\n')
            if include_traceback:
                raise
            exit_status = ExitStatus.ERROR_CTRL_C
        except SystemExit as e:
            if e.code != ExitStatus.OK:
                env.stderr.write('\n')
                if include_traceback:
                    raise
                exit_status = ExitStatus.ERROR
        except requests.Timeout:
            exit_status = ExitStatus.ERROR_TIMEOUT
            log_error('Request timed out (%ss).', parsed_args.timeout)
        except requests.TooManyRedirects:
            exit_status = ExitStatus.ERROR_TOO_MANY_REDIRECTS
            log_error('Too many redirects (--max-redirects=%s).',
                      parsed_args.max_redirects)
        except Exception as e:
            # TODO: Further distinction between expected and unexpected errors.
            msg = str(e)
            if hasattr(e, 'request'):
                request = e.request
                if hasattr(request, 'url'):
                    msg += ' while doing %s request to URL: %s' % (
                        request.method, request.url)
            log_error('%s: %s', type(e).__name__, msg)
            if include_traceback:
                raise
            exit_status = ExitStatus.ERROR
    
        @pytest.mark.parametrize('verify_value', ['false', 'fALse'])
    def test_verify_false_OK(self, httpbin_secure, verify_value):
        r = http(httpbin_secure.url + '/get', '--verify', verify_value)
        assert HTTP_OK in r
    
    '''
__version__ = '1.0.0-dev'
__author__ = 'Jakub Roztocil'
__licence__ = 'BSD'
    
        def __init__(self):
        self._plugins = []
    
    
@for_app('tar')
def match(command):
    return ('-C' not in command.script
            and _is_tar_extract(command.script)
            and _tar_file(command.script_parts) is not None)
    
    # Default celery config is to use SQLA as a broker, in a production setting
# you'll want to use a proper broker as specified here:
# http://docs.celeryproject.org/en/latest/getting-started/brokers/index.html
'''
# Example:
class CeleryConfig(object):
  BROKER_URL = 'sqla+sqlite:///celerydb.sqlite'
  CELERY_IMPORTS = ('superset.sql_lab', )
  CELERY_RESULT_BACKEND = 'db+sqlite:///celery_results.sqlite'
  CELERY_ANNOTATIONS = {'tasks.add': {'rate_limit': '10/s'}}
  CELERYD_LOG_LEVEL = 'DEBUG'
  CELERYD_PREFETCH_MULTIPLIER = 1
  CELERY_ACKS_LATE = True
CELERY_CONFIG = CeleryConfig
'''
CELERY_CONFIG = None
SQL_CELERY_DB_FILE_PATH = os.path.join(DATA_DIR, 'celerydb.sqlite')
SQL_CELERY_RESULTS_DB_FILE_PATH = os.path.join(DATA_DIR, 'celery_results.sqlite')
    
        @classmethod
    def log_this(cls, f):
        '''Decorator to log user actions'''
        @functools.wraps(f)
        def wrapper(*args, **kwargs):
            start_dttm = datetime.now()
            user_id = None
            if g.user:
                user_id = g.user.get_id()
            d = request.form.to_dict() or {}
            # request parameters can overwrite post body
            request_params = request.args.to_dict()
            d.update(request_params)
            d.update(kwargs)
            slice_id = d.get('slice_id')
    
            metrics.append(M(
            metric_name='count',
            verbose_name='COUNT(*)',
            metric_type='count',
            expression='COUNT(*)',
        ))
        if not self.main_dttm_col:
            self.main_dttm_col = any_date_col
        self.add_missing_metrics(metrics)
        db.session.merge(self)
        db.session.commit()
    
        # 2. Clean up None permissions or view menues
    pvms = sm.get_session.query(sm.permissionview_model).all()
    for pvm in pvms:
        if not (pvm.view_menu and pvm.permission):
            sm.get_session.delete(pvm)
    sm.get_session.commit()
    
        __tablename__ = None  # {connector_name}_column
    
        @property
    def data(self):
        # work around for https://github.com/pandas-dev/pandas/issues/18372
        return [dict((k, _maybe_box_datetimelike(v))
                     for k, v in zip(self.__df.columns, np.atleast_1d(row)))
                for row in self.__df.values]
    
        def _send_switchover_response(self):
        return 'send switchover response'
    
        @classmethod
    def setUpClass(self):
        '''
        - Create a temporary directory and file
        /test_command
           /foo.txt
        - get the temporary test directory
        - and initializes the command stack.
        '''
        os.mkdir('tests/test_command')
        open('tests/test_command/foo.txt', 'w').close()
        self.__get_test_directory()
        self.command_stack = []
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'foo.txt'), os.path.join(self.test_dir, 'bar.txt')))
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'bar.txt'), os.path.join(self.test_dir, 'baz.txt')))
    
    
if __name__ == '__main__':
    main()
    
        '''def test_object(queue):
           queue_object = QueueObject(queue, True)
           print('Inside func: {}'.format(queue_object.object))'''
    
    if __name__ == '__main__':
    print('Before subclassing: ')
    for k in RegistryHolder.REGISTRY:
        print(k)
    
        def test_dog_eng_localization(self):
        self.assertEqual(self.e.get('dog'), 'dog')
    
    
class OrSpecification(CompositeSpecification):
    _one = Specification()
    _other = Specification()