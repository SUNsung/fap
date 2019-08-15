
        
        
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
    import josepy as jose
    
            try:
            response = dns.query.tcp(update, self.server, port=self.port)
        except Exception as e:
            raise errors.PluginError('Encountered error deleting TXT record: {0}'
                                     .format(e))
        rcode = response.rcode()
    
        lineage = domains.split(',')[0]
    server_cert = ssl.get_server_certificate(('localhost', context.tls_alpn_01_port))
    with open(os.path.join(context.workspace, 'conf/live/{0}/cert.pem'.format(lineage)), 'r') as file:
        certbot_cert = file.read()
    
            linking_url = build_linking_url(
            self.integration,
            self.org,
            'new-slack-id',
            'my-channel',
            'http://example.slack.com/response_url'
        )
    
            # Adding model 'TagKey'
        db.create_table(u'tagstore_tagkey', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('key', self.gf('django.db.models.fields.CharField')(max_length=32)),
            ('values_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('status', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
        ))
        db.send_create_signal('tagstore', ['TagKey'])
    
        def forwards(self, orm):
        # Removing unique constraint on 'EventTag', fields ['event_id', 'key', 'value']
        db.delete_unique(u'tagstore_eventtag', ['event_id', 'key_id', 'value_id'])
    
            # Changing field 'EventTag.project_id'
        db.alter_column(u'tagstore_eventtag', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')())
    
        GroupResolution.objects.filter(id__in=[r.id for r in resolution_list]).update(
        release=release,
        type=GroupResolution.Type.in_release,
        status=GroupResolution.Status.resolved,
    )
    
    from django import template
    
            xpos, ypos = tip_pos_calculator(widget, label)