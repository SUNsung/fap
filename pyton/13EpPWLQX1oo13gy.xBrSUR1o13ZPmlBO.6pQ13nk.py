    # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        model = create_multi_input_model_from(*models)
    model.compile(loss='categorical_crossentropy', optimizer='sgd')
    assert len(model.losses) == 8
    
        def describe(self):
        '''Returns the existing details of the rule in AWS'''
        try:
            rule_info = self.client.describe_rule(Name=self.name)
        except botocore.exceptions.ClientError as e:
            error_code = e.response.get('Error', {}).get('Code')
            if error_code == 'ResourceNotFoundException':
                return {}
            self.module.fail_json_aws(e, msg='Could not describe rule %s' % self.name)
        except botocore.exceptions.BotoCoreError as e:
            self.module.fail_json_aws(e, msg='Could not describe rule %s' % self.name)
        return self._snakify(rule_info)
    
    options:
  query:
    description:
      - Specifies the resource type for which to gather facts.  Leave blank to retrieve all facts.
    required: true
    choices: [ 'aliases', 'all', 'config', 'mappings', 'policy', 'versions' ]
    default: 'all'
  function_name:
    description:
      - The name of the lambda function for which facts are requested.
    aliases: [ 'function', 'name']
  event_source_arn:
    description:
      - For query type 'mappings', this is the Amazon Resource Name (ARN) of the Amazon Kinesis or DynamoDB stream.
author: Pierre Jodouin (@pjodouin)
requirements:
    - boto3
extends_documentation_fragment:
  - aws
  - ec2
'''
    
        def hbacrule_add(self, name, item):
        return self._post_json(method='hbacrule_add', name=name, item=item)
    
    usage:
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
            # kept for old-style HTTP/1.0 downloader context twisted calls,
        # e.g. connectSSL()
        def getContext(self, hostname=None, port=None):
            return self.getCertificateOptions().getContext()
    
        def report_out_of_quota(self, appid):
        self.logger.warn('report_out_of_quota:%s', appid)
        with self.lock:
            if appid not in self.out_of_quota_appids:
                self.out_of_quota_appids.append(appid)
            try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
                try:
                res = self.check_ip.check_ip(ip)
            except Exception as e:
                xlog.warn('check except:%r', e)
                continue
    
    - RecognitionException
  - MismatchedRangeException
  - MismatchedSetException
    - MismatchedNotSetException
    .
  - MismatchedTokenException
  - MismatchedTreeNodeException
  - NoViableAltException
  - EarlyExitException
  - FailedPredicateException
  .
.
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
        Validation of predicates
    occurs when normally parsing the alternative just like matching a token.
    Disambiguating predicate evaluation occurs when we hoist a predicate into
    a prediction decision.
    '''
    
        def __init__(self, file, encoding=None):
        '''
        @param file A file-like object holding your input. Only the read()
           method must be implemented.
    
    CLI_DEFAULTS = dict(
    server_root=server_root_tmp,
    ctl='nginx',
)
'''CLI defaults.'''
    
        def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
            self.assertRaises(
            jose.DeserializationError, nonce_field.decode, self.wrong_nonce)
        self.assertEqual(b'foo', nonce_field.decode(self.good_nonce))
    
        def test_recovery_routine_error(self):
        self.config.reverter.recovery_routine = mock.Mock(
            side_effect=errors.ReverterError)
    
        def test_get_addrs_no_vhost_found(self):
        self.sni.configurator.choose_vhost = mock.Mock(
            side_effect=errors.MissingCommandlineFlag(
                'Failed to run Apache plugin non-interactively'))
    
    REVERSE_IMPORT_MAPPING.update({
    '_bz2': 'bz2',
    '_dbm': 'dbm',
    '_functools': 'functools',
    '_gdbm': 'gdbm',
    '_pickle': 'pickle',
})
    
    
        def _posix_spawn(self, args, executable, env, restore_signals,
                         p2cread, p2cwrite,
                         c2pread, c2pwrite,
                         errread, errwrite):
            '''Execute program using os.posix_spawn().'''
            if env is None:
                env = os.environ
    
        @classmethod
    def setUpClass(cls):
        requires('gui')
        cls.root = Tk()
        cls.root.withdraw()
        cls.dialog = About(cls.root, 'About IDLE', _utest=True)
    
        if ns.include_underpth:
        yield PYTHON_PTH_NAME, ns.temp / PYTHON_PTH_NAME
    
        def test_simple(self):
        def f(p):
            pass
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident),
                              ])
    
        Directories are *not* resources.
    '''
    package = _get_package(package)
    _normalize_path(name)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.is_resource(name)
    try:
        package_contents = set(contents(package))
    except (NotADirectoryError, FileNotFoundError):
        return False
    if name not in package_contents:
        return False
    # Just because the given file_name lives as an entry in the package's
    # contents doesn't necessarily mean it's a resource.  Directories are not
    # resources, so let's try to find out if it's a directory or not.
    path = Path(package.__spec__.origin).parent / name
    return path.is_file()
    
    '''Send the contents of a directory as a MIME message.'''