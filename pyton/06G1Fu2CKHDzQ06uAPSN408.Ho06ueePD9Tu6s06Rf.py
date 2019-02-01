
        
                headers = [
            '%s: %s' % (
                name,
                value if isinstance(value, str) else value.decode('utf8')
            )
            for name, value in headers.items()
        ]
    
            '''
        assert with_headers or with_body
        self.msg = msg
        self.with_headers = with_headers
        self.with_body = with_body
        self.on_body_chunk_downloaded = on_body_chunk_downloaded
    
            '''
        raise NotImplementedError()
    
    from httpie.plugins.base import AuthPlugin
    
    
class PluginManager(object):
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_POST_no_data_no_auto_headers(self, httpbin):
        # JSON headers shouldn't be automatically set for POST with no data.
        r = http('POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert ''Accept': '*/*'' in r
        assert ''Content-Type': 'application/json' not in r
    
    
def test_unicode_headers_verbose(httpbin):
    # httpbin doesn't interpret utf8 headers
    r = http('--verbose', httpbin.url + '/headers', u'Test:%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
    
    def setText(self, text):
        '''
        Set the complete text of this token; it wipes any previous
        changes to the text.
        '''
        self._state.text = text
    
        def backwards(self, orm):
        'Write your backwards methods here.'
    
            # Changing field 'Environment.organization_id'
        db.alter_column(
            'sentry_environment',
            'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)
        )
    
            # Removing unique constraint on 'VersionDSymFile', fields ['dsym_file', 'version', 'build']
        db.delete_unique('sentry_versiondsymfile', ['dsym_file_id', 'version', 'build'])
    
        complete_apps = ['sentry']
    symmetrical = True
