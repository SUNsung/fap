
        
        
@bp.route('/')
def index():
    '''Show all the posts, most recent first.'''
    db = get_db()
    posts = db.execute(
        'SELECT p.id, title, body, created, author_id, username'
        ' FROM post p JOIN user u ON p.author_id = u.id'
        ' ORDER BY created DESC'
    ).fetchall()
    return render_template('blog/index.html', posts=posts)
    
    
def get_db():
    '''Connect to the application's configured database. The connection
    is unique for each request and will be reused if this is called
    again.
    '''
    if 'db' not in g:
        g.db = sqlite3.connect(
            current_app.config['DATABASE'],
            detect_types=sqlite3.PARSE_DECLTYPES
        )
        g.db.row_factory = sqlite3.Row
    
    # read in SQL for populating test data
with open(os.path.join(os.path.dirname(__file__), 'data.sql'), 'rb') as f:
    _data_sql = f.read().decode('utf8')
    
        def to_json(self, value):
        return http_date(value)
    
        Implements signals based on blinker if available, otherwise
    falls silently back to a noop.
    
        .. versionchanged:: 0.12
       `app.test_client()` includes preset default environment, which can be
       set after instantiation of the `app.test_client()` object in
       `client.environ_base`.
    
    
@pytest.mark.functional
def test_how_to_configure_alias(proc, TIMEOUT):
    proc.sendline(u'unfunction fuck')
    how_to_configure(proc, TIMEOUT)

    
    
@pytest.mark.parametrize('command', [
    Command('aws dynamdb scan', misspelled_command),
    Command('aws dynamodb scn', misspelled_subcommand),
    Command('aws dynamodb t-item',
            misspelled_subcommand_with_multiple_options)])
def test_match(command):
    assert match(command)
    
    You can download from:
  https://osxfuse.github.io/
Error: An unsatisfied requirement failed this build.'''
    
    
@parametrize_extensions
@parametrize_filename
@parametrize_script
def test_get_new_command(ext, tar_error, filename, unquoted, quoted, script, fixed):
    tar_error(unquoted.format(ext))
    assert (get_new_command(Command(script.format(filename.format(ext)), ''))
            == fixed.format(dir=quoted.format(''), filename=filename.format(ext)))

    
                if is_short_sha(version) or \
                    is_head_tag(version) or \
                    is_short_sha_and_date(version):
                # if projects are across multiple environments, allow 1 week difference
                if projects_split_by_env and date_diff and date_diff < 604800:
                    merge(to_release=to_release, from_releases=from_releases, sentry_models=orm)
                    continue
                # +/- 8 hours
                if date_diff and date_diff > 28800:
                    for release in releases:
                        update_version(release, orm)
                else:
                    merge(to_release=to_release, from_releases=from_releases, sentry_models=orm)
                continue
    
        complete_apps = ['sentry']

    
        complete_apps = ['sentry']

    
        def _forwards(self, orm):
        'Write your forwards methods here.'
        dupe_envs = orm.Environment.objects.values_list('name', 'organization_id')\
                                           .annotate(ecount=models.Count('id'))\
                                           .filter(ecount__gt=1)
    
            # Adding model 'ApiApplication'
        db.create_table(
            'sentry_apiapplication', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'client_id',
                    self.gf('django.db.models.fields.CharField')(unique=True, max_length=64)
                ), (
                    'client_secret',
                    self.gf('sentry.db.models.fields.encrypted.EncryptedTextField')()
                ), (
                    'owner', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.User']
                    )
                ),
                ('name', self.gf('django.db.models.fields.CharField')(max_length=64, blank=True)), (
                    'status',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(
                        default=0, db_index=True
                    )
                ), (
                    'allowed_origins',
                    self.gf('django.db.models.fields.TextField')(null=True, blank=True)
                ), ('redirect_uris', self.gf('django.db.models.fields.TextField')()), (
                    'homepage_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'privacy_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'terms_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['ApiApplication'])
    
            # Adding field 'ApiKey.scope_list'
        db.add_column(
            'sentry_apikey',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
            users = orm.User.objects.exclude(
            email__in=orm.UserEmail.objects.all().values_list('email', flat=True)
        )
    
        REGISTRY = {}
    
    
# In some very complex cases, it might be desirable to pull out the building
# logic into another function (or a method on another class), rather than being
# in the base class '__init__'. (This leaves you in the strange situation where
# a concrete class does not have a useful constructor)
    
    
class EnglishGetter(object):
    
        def __get__(self, obj, type_):
        if obj is None:
            return self
        val = self.function(obj)
        obj.__dict__[self.function.__name__] = val
        return val
    
        def __exit__(self, Type, value, traceback):
        if self.item is not None:
            self._queue.put(self.item)
            self.item = None
    
        def __init__(self):
        self.time_provider = datetime.datetime
    
        def _abort_diagnostics(self):
        return 'abort diagnostics'
    
    
# Refined Abstraction
class CircleShape(object):
    def __init__(self, x, y, radius, drawing_api):
        self._x = x
        self._y = y
        self._radius = radius
        self._drawing_api = drawing_api
    
    
class ProductModel(Model):
    class Price(float):
        '''A polymorphic way to pass a float with a particular
        __str__ functionality.'''