
        
        PY2 = sys.version_info[0] == 2
_identity = lambda x: x
    
        def should_ignore_error(self, error):
        '''This is called to figure out if an error should be ignored
        or not as far as the teardown system is concerned.  If this
        function returns ``True`` then the teardown handlers will not be
        passed the error.
    
                    for line in text:
                    if re.match(r'^>', line):
                        line = line[:0] + '####' + line[1:]
                    html = markdown.markdown(line)
                    out.write(html)
                out.write(footer)
    
            for environment in RangeQuerySetWrapperWithProgressBar(orm.Environment.objects.all()):
            try:
                with transaction.atomic():
                    orm.EnvironmentProject.objects.create(
                        environment=environment, project_id=environment.project_id
                    )
            except IntegrityError:
                pass
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'VersionDSymFile'
        db.create_table(
            'sentry_versiondsymfile', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'dsym_file', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ProjectDSymFile'], null=True
                    )
                ), (
                    'dsym_app', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.DSymApp']
                    )
                ), ('version', self.gf('django.db.models.fields.CharField')(max_length=32)),
                ('build', self.gf('django.db.models.fields.CharField')(max_length=32, null=True)), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['VersionDSymFile'])
    
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
    
        def backwards(self, orm):
        # Removing unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.delete_unique('sentry_commitauthor', ['organization_id', 'external_id'])