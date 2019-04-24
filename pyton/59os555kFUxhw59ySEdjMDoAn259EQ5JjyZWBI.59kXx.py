
        
            # ensure the instance folder exists
    try:
        os.makedirs(app.instance_path)
    except OSError:
        pass
    
    
def login_required(view):
    '''View decorator that redirects anonymous users to the login page.'''
    @functools.wraps(view)
    def wrapped_view(**kwargs):
        if g.user is None:
            return redirect(url_for('auth.login'))
    
    
@bp.route('/create', methods=('GET', 'POST'))
@login_required
def create():
    '''Create a new post for the current user.'''
    if request.method == 'POST':
        title = request.form['title']
        body = request.form['body']
        error = None
    
        def add_url_rule(self, rule, endpoint=None, view_func=None, **options):
        '''A helper method to register a rule (and optionally a view function)
        to the application.  The endpoint is automatically prefixed with the
        blueprint's name.
        '''
        if self.url_prefix is not None:
            if rule:
                rule = '/'.join((
                    self.url_prefix.rstrip('/'), rule.lstrip('/')))
            else:
                rule = self.url_prefix
        options.setdefault('subdomain', self.subdomain)
        if endpoint is None:
            endpoint = _endpoint_from_view_func(view_func)
        defaults = self.url_defaults
        if 'defaults' in options:
            defaults = dict(defaults, **options.pop('defaults'))
        self.app.add_url_rule(rule, '%s.%s' % (self.blueprint.name, endpoint),
                              view_func, defaults=defaults, **options)
    
    from .globals import request
    
        def __exit__(self, exc_type, exc_value, tb):
        self.preserve_context = False
    
        old_get_loader = pkgutil.get_loader
    
    
def test_clean_pop(app):
    app.testing = False
    called = []
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
Invalid choice: 'dynamdb', maybe you meant:
    
    
DOCUMENTATION = '''
---
module: elasticache_subnet_group
version_added: '2.0'
short_description: manage Elasticache subnet groups
description:
     - Creates, modifies, and deletes Elasticache subnet groups. This module has a dependency on python-boto >= 2.5.
options:
  state:
    description:
      - Specifies whether the subnet should be present or absent.
    required: true
    default: present
    choices: [ 'present' , 'absent' ]
  name:
    description:
      - Database subnet group identifier.
    required: true
  description:
    description:
      - Elasticache subnet group description. Only set when a new group is added.
  subnets:
    description:
      - List of subnet IDs that make up the Elasticache subnet group.
author: 'Tim Mahoney (@timmahoney)'
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    
def rule_to_string(rule):
    strings = list()
    for key, value in rule.items():
        strings.append('%s=%s' % (key, value))
    return ', '.join(strings)
    
        module = AnsibleModule(argument_spec=argument_spec,
                           supports_check_mode=True,
                           )
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
    
class ReturnsContract(Contract):
    ''' Contract to check the output of a callback
    
            # Changing field 'Environment.organization_id'
        db.alter_column(
            'sentry_environment', 'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
        )
    
            # User chose to not deal with backwards NULL issues for 'Environment.project_id'
        raise RuntimeError(
            'Cannot reverse this migration. 'Environment.project_id' and its values cannot be restored.'
        )
    
            db.start_transaction()
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding field 'ApiGrant.scope_list'
        db.add_column(
            'sentry_apigrant',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
            # Deleting model 'VersionDSymFile'
        db.delete_table('sentry_versiondsymfile')
    
            for model in (
            orm['sentry.ApiAuthorization'], orm['sentry.ApiGrant'], orm['sentry.ApiKey'],
            orm['sentry.ApiToken'],
        ):
            queryset = model.objects.all()
            for obj in RangeQuerySetWrapperWithProgressBar(queryset):
                if not obj.scope_list:
                    handler = make_handler(obj.scopes)
                    model.objects.filter(
                        id=obj.id,
                    ).update(
                        scope_list=[k for k, v in six.iteritems(handler) if v],
                    )