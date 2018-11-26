
        
            def escalate_call(self):
        self.call.level = Rank.DIRECTOR
        self._escalate_call()
    
        def reject_friend_request(self, from_user_id, to_user_id):
        pass
    
        def spot_freed(self):
        self.available_spots += 1
    
        def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
            (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
    
class Graph(object):
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
        def logout(self):
        return self._client.get('/auth/logout')
    
    
@pytest.mark.parametrize(('username', 'password', 'message'), (
    ('a', 'test', b'Incorrect username.'),
    ('test', 'a', b'Incorrect password.'),
))
def test_login_validate_input(auth, username, password, message):
    response = auth.login(username, password)
    assert message in response.data
    
    
def test_index(client, auth):
    response = client.get('/')
    assert b'Log In' in response.data
    assert b'Register' in response.data
    
                app.config.from_object('yourapplication.default_config')
            from yourapplication import default_config
            app.config.from_object(default_config)
    
        seems_fishy = False
    if total_found == 0:
        info.append('Error: the template could not be found.')
        seems_fishy = True
    elif total_found > 1:
        info.append('Warning: multiple loaders returned a match for the template.')
        seems_fishy = True
    
        def send_static_file(self, filename):
        '''Function used internally to send static files from the static
        folder to the browser.
    
    
class PassDict(JSONTag):
    __slots__ = ()
    
    
def create_logger(app):
    '''Get the ``'flask.app'`` logger and configure it if needed.
    
            for blueprint in self.app.iter_blueprints():
            loader = blueprint.jinja_loader
            if loader is not None:
                yield blueprint, loader
    
    
def make_handler(value):
    return BitHandler(
        keys=(
            'project:read', 'project:write', 'project:admin', 'project:releases', 'team:read',
            'team:write', 'team:admin', 'event:read', 'event:write', 'event:admin', 'org:read',
            'org:write', 'org:admin', 'member:read', 'member:write', 'member:admin',
        ),
        value=value,
    )
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'ReleaseHeadCommit'
        db.create_table(
            'sentry_releaseheadcommit', (
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
                    'repository_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'release', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Release']
                    )
                ), (
                    'commit', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Commit']
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['ReleaseHeadCommit'])