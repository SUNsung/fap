
        
            # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
        '''
)
output_processing.add_argument(
    '--style', '-s',
    dest='style',
    metavar='STYLE',
    default=DEFAULT_STYLE,
    choices=AVAILABLE_STYLES,
    help='''
    Output coloring style (default is '{default}'). One of:
    
    import requests.auth
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_download_interrupted(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(
            url=httpbin_both.url + '/',
            headers={'Content-Length': 5}
        ))
        downloader.chunk_downloaded(b'1234')
        downloader.finish()
        assert downloader.interrupted

    
        def test_format_option(self, httpbin):
        env = MockEnvironment(colors=256)
        r = http('--print=B', '--pretty=format',
                 'GET', httpbin.url + '/get', 'a=b',
                 env=env)
        # Tests that the JSON data is formatted.
        assert r.strip().count('\n') == 2
        assert COLOR not in r
    
        name = 'qps'
    benchurl = 'http://localhost:8880/'
    
    def _get_commands_from_module(module, inproject):
    d = {}
    for cmd in _iter_command_classes(module):
        if inproject or not cmd.requires_project:
            cmdname = cmd.__module__.split('.')[-1]
            d[cmdname] = cmd()
    return d
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
        def get_callback_from_rules(self, spider, response):
        if getattr(spider, 'rules', None):
            for rule in spider.rules:
                if rule.link_extractor.matches(response.url):
                    return rule.callback or 'parse'
        else:
            logger.error('No CrawlSpider rules found in spider %(spider)r, '
                         'please specify a callback to use for parsing',
                         {'spider': spider.name})
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.utils.versions import scrapy_components_versions
    
    from . import Contract
    
    
class DownloadHandlers(object):
    
        def __init__(self, settings):
        self.default_user = settings['FTP_USER']
        self.default_password = settings['FTP_PASSWORD']
        self.passive_mode = settings['FTP_PASSIVE_MODE']
    
    
    def error(self, nvae):
        '''A hook for debugging interface'''
        pass
    
            if self.token is None:
            return 'UnwantedTokenException(found=%s%s)' % (None, exp)
    
            where <class> is the class of the generated recognizer, e.g.
        the superclass of self.
        '''
    
            if self.p - k < 0:
            return None
    
            # Changing field 'Environment.organization_id'
        db.alter_column(
            'sentry_environment',
            'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)
        )
    
            # Changing field 'Environment.project_id'
        if is_postgres():
            db.execute('ALTER TABLE sentry_environment ALTER COLUMN project_id DROP NOT NULL')
        else:
            db.alter_column(
                'sentry_environment',
                'project_id',
                self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)
            )
    
            for renv in dupe_release_envs:
            release_id = renv['release_id']
            organization_id = renv['organization_id']
            environment_id = renv['environment_id']
            renvs = list(
                orm.ReleaseEnvironment.objects.filter(
                    release_id=release_id,
                    organization_id=organization_id,
                    environment_id=environment_id,
                ).order_by('first_seen')
            )
            to_renv = renvs[0]
            from_renvs = renvs[1:]
            last_seen = max([re.last_seen for re in renvs])
            orm.ReleaseEnvironment.objects.filter(
                id=to_renv.id,
            ).update(last_seen=last_seen)
            orm.ReleaseEnvironment.objects.filter(
                id__in=[re.id for re in from_renvs],
            ).delete()
    
        complete_apps = ['sentry']
    symmetrical = True

    
            # Adding model 'DSymApp'
        db.create_table(
            'sentry_dsymapp', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), ('app_id', self.gf('django.db.models.fields.CharField')(max_length=64)),
                ('sync_id', self.gf('django.db.models.fields.CharField')(max_length=64, null=True)),
                ('data', self.gf('jsonfield.fields.JSONField')(default={})), (
                    'platform',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(
                        default=0
                    )
                ), (
                    'last_synced',
                    self.gf('django.db.models.fields.DateTimeField')()
                ), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['DSymApp'])
    
    
def make_handler(value):
    return BitHandler(
        keys=(
            'project:read', 'project:write', 'project:admin', 'project:releases', 'team:read',
            'team:write', 'team:admin', 'event:read', 'event:write', 'event:admin', 'org:read',
            'org:write', 'org:admin', 'member:read', 'member:write', 'member:admin',
        ),
        value=value,
    )