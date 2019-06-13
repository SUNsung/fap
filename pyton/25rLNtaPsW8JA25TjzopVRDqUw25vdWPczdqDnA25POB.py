
        
            # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
    
@bp.route('/login', methods=('GET', 'POST'))
def login():
    '''Log in a registered user by adding the user id to the session.'''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
        user = db.execute(
            'SELECT * FROM user WHERE username = ?', (username,)
        ).fetchone()
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
    
@pytest.fixture
def runner(app):
    '''A test runner for the app's Click commands.'''
    return app.test_cli_runner()
    
    
def attach_enctype_error_multidict(request):
    '''Since Flask 0.8 we're monkeypatching the files object in case a
    request is detected that does not use multipart form data but the files
    object is accessed.
    '''
    oldcls = request.files.__class__
    
    import os
import warnings
    
        # If the temperature is not a number this can cause issues
    # with Polymer components, so bail early there.
    if not isinstance(temperature, Number):
        raise TypeError(
            'Temperature is not a number: {}'.format(temperature))
    
    
def convert(value: float, unit_1: str, unit_2: str) -> float:
    '''Convert one unit of measurement to another.'''
    if unit_1 not in VALID_UNITS:
        raise ValueError(
            UNIT_NOT_RECOGNIZED_TEMPLATE.format(unit_1, LENGTH))
    if unit_2 not in VALID_UNITS:
        raise ValueError(
            UNIT_NOT_RECOGNIZED_TEMPLATE.format(unit_2, LENGTH))
    
        assert bump_version(Version('0.56.0'), 'minor') == \
        Version('0.57.0')
    assert bump_version(Version('0.56.3'), 'minor') == \
        Version('0.57.0')
    assert bump_version(Version('0.56.0.b3'), 'minor') == \
        Version('0.56.0')
    assert bump_version(Version('0.56.3.b3'), 'minor') == \
        Version('0.57.0')
    assert bump_version(Version('0.56.0.dev0'), 'minor') == \
        Version('0.56.0')
    assert bump_version(Version('0.56.2.dev0'), 'minor') == \
        Version('0.57.0')
    
    from django.conf import settings
    
    
class GroupTagKeyNotFound(Exception):
    pass
    
        project_id = BoundedBigIntegerField()
    group_id = BoundedBigIntegerField(null=True)
    event_id = BoundedBigIntegerField()
    # We want to keep this model lightweight, so lets use a pointer to
    # TagKey/TagValue
    key_id = BoundedBigIntegerField()
    value_id = BoundedBigIntegerField()
    # maintain a date column for easy removal
    date_added = models.DateTimeField(default=timezone.now, db_index=True)
    
    for i, backend in enumerate(backends):
    for prefix, path in prefix_map.items():
        if backend.startswith(prefix):
            models = __import__(path, globals(), locals(), ['models'], level=0).models
            if i == 0:
                # If this is the first iteration of the loop, we need to
                # emulate ``from x import *`` by copying the module contents
                # into the local (module) scope. This follows the same rules as
                # the import statement itself, as defined in the refrence docs:
                # https://docs.python.org/2.7/reference/simple_stmts.html#import
                if getattr(models, '__all__', None) is not None:
                    predicate = lambda name: name in models.__all__
                else:
                    predicate = lambda name: not name.startswith('_')
                locals().update({k: v for k, v in vars(models).items() if predicate(k)})
            break
    else:
        raise ImproperlyConfigured('Found unknown tagstore backend '%s'' % backend)

    
            # Removing unique constraint on 'TagValue', fields ['project_id',
        # 'environment_id', '_key', 'value']
        db.delete_unique(u'tagstore_tagvalue', ['project_id', 'environment_id', 'key', 'value'])
    
        def forwards(self, orm):
        # Adding model 'TagValue'
        db.create_table(u'tagstore_tagvalue', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('_key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key_id')),
            ('value', self.gf('django.db.models.fields.CharField')(max_length=200)),
            ('data', self.gf('sentry.db.models.fields.gzippeddict.GzippedDictField')(null=True, blank=True)),
            ('times_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('last_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
            ('first_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
        ))
        db.send_create_signal('tagstore', ['TagValue'])
    
            # Adding unique constraint on 'EventTag', fields ['event_id', 'key', 'value']
        db.create_unique(u'tagstore_eventtag', ['event_id', 'key_id', 'value_id'])