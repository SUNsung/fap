
        
            package_name = '(builtin)'
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
    
def test_credentials_in_url_auth_flag_has_priority(httpbin_both):
    '''When credentials are passed in URL and via -a at the same time,
     then the ones from -a are used.'''
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:wrong')
    r = http('--auth=user:password', 'GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def inner(r):
        r.headers['Authorization'] = header
        return r
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
class TestMultipartFormDataFileUpload:
    
    RETURN = '''
rule:
    description: CloudWatch Event rule data
    returned: success
    type: dict
    sample:
      arn: 'arn:aws:events:us-east-1:123456789012:rule/MyCronTask'
      description: 'Run my scheduled task'
      name: 'MyCronTask'
      schedule_expression: 'cron(0 20 * * ? *)'
      state: 'ENABLED'
targets:
    description: CloudWatch Event target(s) assigned to the rule
    returned: success
    type: list
    sample: '[{ 'arn': 'arn:aws:lambda:us-east-1:123456789012:function:MyFunction', 'id': 'MyTargetId' }]'
'''
    
        module.exit_json(changed=changed,
                     snapshot_id=snapshot.id,
                     volume_id=snapshot.volume_id,
                     volume_size=snapshot.volume_size,
                     tags=snapshot.tags.copy())
    
    try:
    from pyvcloud.schema.vcd.v1_5.schemas.vcloud.networkType import FirewallRuleType
    from pyvcloud.schema.vcd.v1_5.schemas.vcloud.networkType import ProtocolsType
except ImportError:
    # normally set a flag here but it will be caught when testing for
    # the existence of pyvcloud (see module_utils/vca.py).  This just
    # protects against generating an exception at runtime
    pass
    
    
def validate_nat_rules(nat_rules):
    for rule in nat_rules:
        if not isinstance(rule, dict):
            raise VcaError('nat rules must be a list of dictionaries, '
                           'Please check', valid_keys=VALID_RULE_KEYS)
    
        return changed, client.dnszone_find(zone_name)
    
    
DOCUMENTATION = '''
---
module: ipa_hbacrule
author: Thomas Krahn (@Nosmoht)
short_description: Manage FreeIPA HBAC rule
description:
- Add, modify or delete an IPA HBAC rule using IPA API.
options:
  cn:
    description:
    - Canonical name.
    - Can not be changed as it is the unique identifier.
    required: true
    aliases: ['name']
  description:
    description: Description
  host:
    description:
    - List of host names to assign.
    - If an empty list is passed all hosts will be removed from the rule.
    - If option is omitted hosts will not be checked or changed.
    required: false
  hostcategory:
    description: Host category
    choices: ['all']
  hostgroup:
    description:
    - List of hostgroup names to assign.
    - If an empty list is passed all hostgroups will be removed. from the rule
    - If option is omitted hostgroups will not be checked or changed.
  service:
    description:
    - List of service names to assign.
    - If an empty list is passed all services will be removed from the rule.
    - If option is omitted services will not be checked or changed.
  servicecategory:
    description: Service category
    choices: ['all']
  servicegroup:
    description:
    - List of service group names to assign.
    - If an empty list is passed all assigned service groups will be removed from the rule.
    - If option is omitted service groups will not be checked or changed.
  sourcehost:
    description:
    - List of source host names to assign.
    - If an empty list if passed all assigned source hosts will be removed from the rule.
    - If option is omitted source hosts will not be checked or changed.
  sourcehostcategory:
    description: Source host category
    choices: ['all']
  sourcehostgroup:
    description:
    - List of source host group names to assign.
    - If an empty list if passed all assigned source host groups will be removed from the rule.
    - If option is omitted source host groups will not be checked or changed.
  state:
    description: State to ensure
    default: 'present'
    choices: ['present', 'absent', 'enabled', 'disabled']
  user:
    description:
    - List of user names to assign.
    - If an empty list if passed all assigned users will be removed from the rule.
    - If option is omitted users will not be checked or changed.
  usercategory:
    description: User category
    choices: ['all']
  usergroup:
    description:
    - List of user group names to assign.
    - If an empty list if passed all assigned user groups will be removed from the rule.
    - If option is omitted user groups will not be checked or changed.
extends_documentation_fragment: ipa.documentation
version_added: '2.3'
'''
    
        if module.params['revision']:
        params['deploy[scm_revision]'] = module.params['revision']
    
        # Build the deployment object we return
    deployment = dict(token=token, url=url)
    deployment.update(body)
    if 'errorMessage' in deployment:
        message = deployment.pop('errorMessage')
        deployment['message'] = message
    
        # derive the landscape handler from the model handler of the device
    model_landscape = '0x%x' % int(int(model_handle, 16) // 0x100000 * 0x100000)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
    
class Command(ScrapyCommand):
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
            # kept for old-style HTTP/1.0 downloader context twisted calls,
        # e.g. connectSSL()
        def getContext(self, hostname=None, port=None):
            return self.getCertificateOptions().getContext()
    
            self._download_http = httpdownloadhandler(settings).download_request
    
        try:
        # XXX: this try-except is not needed in Twisted 17.0.0+ because
        # it requires pyOpenSSL 0.16+.
        from OpenSSL.SSL import SSL_CB_HANDSHAKE_DONE, SSL_CB_HANDSHAKE_START
    except ImportError:
        SSL_CB_HANDSHAKE_START = 0x10
        SSL_CB_HANDSHAKE_DONE = 0x20
    
        def _has_ajax_crawlable_variant(self, response):
        '''
        Return True if a page without hash fragment could be 'AJAX crawlable'
        according to https://developers.google.com/webmasters/ajax-crawling/docs/getting-started.
        '''
        body = response.text[:self.lookup_bytes]
        return _has_ajaxcrawlable_meta(body)
    
    
class ResourceTest(unittest.TestCase):
    '''Tests for acme.fields.Resource.'''
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
        def setup_variables(self):
        '''Set up variables for parser.'''
        self.parser.variables.update(
            {
                'COMPLEX': '',
                'tls_port': '1234',
                'fnmatch_filename': 'test_fnmatch.conf',
                'tls_port_str': '1234'
            }
        )
    
    from certbot import errors
    
            try:
            subprocess.check_call('service nginx reload'.split())
        except errors.Error:
            raise errors.Error(
                'Nginx failed to load {0} before tests started'.format(
                    config))
    
    def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % (name)) or os.path.exists('%s_privkey.txt' % (name)):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \nUse a different name or delete these files and re-run this program.' % (name, name))
        sys.exit()
    
    def rearrange(bitString32):
	'''[summary]
	Regroups the given binary string.
	
	Arguments:
		bitString32 {[string]} -- [32 bit binary]
	
	Raises:
		ValueError -- [if the given string not are 32 bit binary string]
	
	Returns:
		[string] -- [32 bit binary string]
	'''
    
            if self.depth == 1:
            self.prediction = np.mean(y)
            return
    
    # Mock test below
if False: # change to true to run this test case.
    import sklearn.datasets as ds
    dataset = ds.load_iris()
    k = 3
    heterogeneity = []
    initial_centroids = get_initial_centroids(dataset['data'], k, seed=0)
    centroids, cluster_assignment = kmeans(dataset['data'], k, initial_centroids, maxiter=400,
                                        record_heterogeneity=heterogeneity, verbose=True)
    plot_heterogeneity(heterogeneity, k)

    
        difference = log_predict - log_actual
    square_diff = np.square(difference)
    mean_square_diff = square_diff.mean()
    
            # Adding unique constraint on 'GroupCommitResolution', fields ['group_id', 'commit_id']
        db.create_unique('sentry_groupcommitresolution', ['group_id', 'commit_id'])
    
            # User chose to not deal with backwards NULL issues for 'Environment.project_id'
        raise RuntimeError(
            'Cannot reverse this migration. 'Environment.project_id' and its values cannot be restored.'
        )
    
            # Adding field 'ApiToken.expires_at'
        db.add_column(
            'sentry_apitoken',
            'expires_at',
            self.gf('django.db.models.fields.DateTimeField')(null=True),
            keep_default=False
        )
    
            # Adding unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.create_unique('sentry_commitauthor', ['organization_id', 'external_id'])
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'Distribution'
        db.create_table(
            'sentry_distribution', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'organization_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(
                        db_index=True
                    )
                ), (
                    'release', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Release']
                    )
                ), ('name', self.gf('django.db.models.fields.CharField')(max_length=64)), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['Distribution'])