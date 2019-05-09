
        
                # Adding unique constraint on 'EnvironmentProject', fields ['project', 'environment']
        db.create_unique('sentry_environmentproject', ['project_id', 'environment_id'])
    
            # Changing field 'ReleaseEnvironment.project_id'
        if is_postgres():
            db.execute(
                'ALTER TABLE sentry_environmentrelease ALTER COLUMN project_id DROP NOT NULL'
            )
        else:
            db.alter_column(
                'sentry_environmentrelease',
                'project_id',
                self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)
            )
    
            # Adding model 'ApiAuthorization'
        db.create_table(
            'sentry_apiauthorization', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'application', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ApiApplication'], null=True
                    )
                ), (
                    'user', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.User']
                    )
                ), ('scopes', self.gf('django.db.models.fields.BigIntegerField')(default=None)), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['ApiAuthorization'])
    
            # Removing unique constraint on 'VersionDSymFile', fields ['dsym_file', 'version', 'build']
        db.delete_unique('sentry_versiondsymfile', ['dsym_file_id', 'version', 'build'])