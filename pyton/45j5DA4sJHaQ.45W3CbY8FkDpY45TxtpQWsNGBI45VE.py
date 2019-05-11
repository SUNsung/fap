
        
            def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
        system_ssl = ssl.OPENSSL_VERSION_NUMBER
    system_ssl_info = {
        'version': '%x' % system_ssl if system_ssl is not None else ''
    }
    
            # Verify we receive an Authorization header in response, then redirect.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert expected_digest in request_content
        sock.send(text_302)
    
    
@pytest.mark.parametrize(
    'value, expected', (
        (
            'application/xml',
            ('application/xml', {})
        ),
        (
            'application/json ; charset=utf-8',
            ('application/json', {'charset': 'utf-8'})
        ),
        (
            'application/json ; Charset=utf-8',
            ('application/json', {'charset': 'utf-8'})
        ),
        (
            'text/plain',
            ('text/plain', {})
        ),
        (
            'multipart/form-data; boundary = something ; boundary2=\'something_else\' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
                'multipart/form-data; boundary = something ; boundary2='something_else' ; no_equals ',
                ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'multipart/form-data; boundary = something ; \'boundary2=something_else\' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'multipart/form-data; boundary = something ; 'boundary2=something_else' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'application/json ; ; ',
            ('application/json', {})
        )
    ))
def test__parse_content_type_header(value, expected):
    assert _parse_content_type_header(value) == expected
    
        def prepare_method(self, method):
        '''Prepares the given HTTP method.'''
        self.method = method
        if self.method is not None:
            self.method = to_native_string(self.method.upper())
    
        def prepare_request(self, request):
        '''Constructs a :class:`PreparedRequest <PreparedRequest>` for
        transmission and returns it. The :class:`PreparedRequest` has settings
        merged from the :class:`Request <Request>` instance and those of the
        :class:`Session`.
    
            dupe_releases = orm.Release.objects.values_list('version', 'organization_id')\
                                           .annotate(vcount=models.Count('id'))\
                                           .filter(vcount__gt=1)
    
        def backwards(self, orm):
        'Write your backwards methods here.'
    
            # Adding model 'RawEvent'
        db.create_table(
            'sentry_rawevent', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), (
                    'event_id',
                    self.gf('django.db.models.fields.CharField')(max_length=32, null=True)
                ), (
                    'datetime',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
                ('data', self.gf('sentry.db.models.fields.node.NodeField')(null=True, blank=True)),
            )
        )
        db.send_create_signal('sentry', ['RawEvent'])
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        db.commit_transaction()
        try:
            self._forwards(orm)
        except Exception:
            # Explicitly resume the transaction because
            # South is going to try and roll it back, but when
            # it can't find one, it'll error itself, masking
            # the actual exception being raised
            #
            # See https://github.com/getsentry/sentry/issues/5035
            db.start_transaction()
            raise
        db.start_transaction()
    
            # Deleting model 'ApiGrant'
        db.delete_table('sentry_apigrant')
    
            # Deleting field 'CommitAuthor.external_id'
        db.delete_column('sentry_commitauthor', 'external_id')
    
      def testDefaultParseValueDict(self):
    self.assertEqual(
        parser.DefaultParseValue('{'abc': 5, '123': 1}'), {'abc': 5, '123': 1})
    
    import six
    
    import mock
import six
    
    
def Decode(data, encoding=None):
  '''Returns string with non-ascii characters decoded to UNICODE.