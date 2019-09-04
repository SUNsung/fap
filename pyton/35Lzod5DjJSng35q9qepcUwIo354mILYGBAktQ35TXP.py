
        
            # Flag to indicate if this migration is too risky
    # to run online and needs to be coordinated for offline
    is_dangerous = True
    
        def backwards(self, orm):
        # Removing unique constraint on 'EventTag', fields ['project_id',
        # 'event_id', 'key', 'value']
        db.delete_unique(u'tagstore_eventtag', ['project_id', 'event_id', 'key_id', 'value_id'])
    
    
class Migration(SchemaMigration):
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')(null=True))
    
            # Adding unique constraint on 'Nonce', fields ['server_url', 'timestamp', 'salt']
        db.create_unique(u'social_auth_nonce', ['server_url', 'timestamp', 'salt'])
    
    
def rxor(left, right):
    return operator.xor(right, left)

    
        strio = StringIO(s.to_json(lines=True, orient='records'))
    unchunked = pd.read_json(strio, lines=True, typ='Series')
    
                ex = DatabaseError(
                'Execution failed on sql '{sql}': {exc}'.format(sql=args[0], exc=exc)
            )
            raise_with_traceback(ex)