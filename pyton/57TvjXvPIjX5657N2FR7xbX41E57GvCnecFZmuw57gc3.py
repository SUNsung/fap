
        
            For complete documentation on using Sessions in your code, consult
    the sessions documentation that is shipped with Django (also available
    on the Django Web site).
    '''
    objects = SessionManager()
    
        def close_all(self):
        for alias in self:
            try:
                connection = getattr(self._connections, alias)
            except AttributeError:
                continue
            connection.close()
    
    # Read lines from the linkcheck output file
try:
    with open('build/linkcheck/output.txt') as out:
        output_lines = out.readlines()
except IOError:
    print('linkcheck output not found; please run linkcheck first.')
    exit(1)
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
        def print_items(self, lvl=None, colour=True):
        if lvl is None:
            items = [item for lst in self.items.values() for item in lst]
        else:
            items = self.items.get(lvl, [])
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'ApiGrant'
        db.create_table(
            'sentry_apigrant', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'user', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.User']
                    )
                ), (
                    'application', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ApiApplication']
                    )
                ), (
                    'code',
                    self.gf('django.db.models.fields.CharField')(max_length=64, db_index=True)
                ), ('expires_at', self.gf('django.db.models.fields.DateTimeField')(db_index=True)),
                ('redirect_uri', self.gf('django.db.models.fields.CharField')(max_length=255)),
                ('scopes', self.gf('django.db.models.fields.BigIntegerField')(default=None)),
            )
        )
        db.send_create_signal('sentry', ['ApiGrant'])
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        from sentry.utils.query import RangeQuerySetWrapperWithProgressBar
    
        complete_apps = ['sentry']

    
            # Adding field 'ReleaseFile.dist'
        db.add_column(
            'sentry_releasefile',
            'dist',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.Distribution'], null=True
            ),
            keep_default=False
        )