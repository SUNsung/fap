
        
        
def findGroup(gitlab_instance, identifier):
    try:
        project = gitlab_instance.groups.get(identifier)
    except Exception as e:
        return None
    
            self.module = module
    
            # An issue is identified by the project_name, the issue_subject and the issue_type
        matching_issue_list = filter(lambda x: x.subject == issue_subject and x.type == type_id, project.list_issues())
        matching_issue_list_len = len(matching_issue_list)
    
    # Sends a push notification with title and body to a channel
- pushbullet:
    api_key: ABC123abc123ABC123abc123ABC123ab
    channel: my-awesome-channel
    title: ALERT! Signup service is down
    body: Error rate on signup service is over 90% for more than 2 minutes
'''
    
        username = module.params['username']
    password = module.params['password']
    api_key = module.params['api_key']
    bcc = module.params['bcc']
    cc = module.params['cc']
    headers = module.params['headers']
    from_name = module.params['from_name']
    from_address = module.params['from_address']
    to_addresses = module.params['to_addresses']
    subject = module.params['subject']
    body = module.params['body']
    html_body = module.params['html_body']
    attachments = module.params['attachments']
    
        # --- run command ---
    try:
        ipmi_cmd = command.Command(
            bmc=name, userid=user, password=password, port=port
        )
        module.debug('ipmi instantiated - name: '%s'' % name)
        current = ipmi_cmd.get_bootdev()
        # uefimode may not supported by BMC, so use desired value as default
        current.setdefault('uefimode', uefiboot)
        if state == 'present' and current != dict(bootdev=bootdev, persistent=persistent, uefimode=uefiboot):
            request = dict(bootdev=bootdev, uefiboot=uefiboot, persist=persistent)
        elif state == 'absent' and current['bootdev'] == bootdev:
            request = dict(bootdev='default')
        else:
            module.exit_json(changed=False, **current)
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
            # Value was changed.
        return True
    
            # Deleting model 'Nonce'
        db.delete_table(u'social_auth_nonce')
    
        models = {
        'sentry.user': {
            'Meta': {'object_name': 'User', 'db_table': ''auth_user''},
            'date_joined': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now'}),
            'email': ('django.db.models.fields.EmailField', [], {'max_length': '75', 'blank': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedAutoField', [], {'primary_key': 'True'}),
            'is_active': ('django.db.models.fields.BooleanField', [], {'default': 'True'}),
            'is_managed': ('django.db.models.fields.BooleanField', [], {'default': 'False'}),
            'is_password_expired': ('django.db.models.fields.BooleanField', [], {'default': 'False'}),
            'is_staff': ('django.db.models.fields.BooleanField', [], {'default': 'False'}),
            'is_superuser': ('django.db.models.fields.BooleanField', [], {'default': 'False'}),
            'last_login': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now'}),
            'last_password_change': ('django.db.models.fields.DateTimeField', [], {'null': 'True'}),
            'name': ('django.db.models.fields.CharField', [], {'max_length': '200', 'db_column': ''first_name'', 'blank': 'True'}),
            'password': ('django.db.models.fields.CharField', [], {'max_length': '128'}),
            'username': ('django.db.models.fields.CharField', [], {'unique': 'True', 'max_length': '128'})
        },
        'social_auth.usersocialauth': {
            'Meta': {'unique_together': '(('provider', 'uid', 'user'),)', 'object_name': 'UserSocialAuth'},
            'extra_data': ('social_auth.fields.JSONField', [], {'default': ''{}''}),
            u'id': ('django.db.models.fields.AutoField', [], {'primary_key': 'True'}),
            'provider': ('django.db.models.fields.CharField', [], {'max_length': '32'}),
            'uid': ('django.db.models.fields.CharField', [], {'max_length': '255'}),
            'user': ('django.db.models.fields.related.ForeignKey', [], {'related_name': ''social_auth'', 'to': 'orm['sentry.User']'})
        }
    }
    
        author='LittleCoder',
    author_email='i7meavnktqegm1b@qq.com',