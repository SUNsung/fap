
        
            return out
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
    # Theme options are theme-specific and customize the look and feel of a theme
# further.  For a list of options available for each theme, see the
# documentation.
html_theme_options = {
    'show_powered_by': False,
    'github_user': 'requests',
    'github_repo': 'requests',
    'github_banner': True,
    'show_related': False,
    'note_bg': '#FFF59C'
}
    
    import urllib3
import chardet
import warnings
from .exceptions import RequestsDependencyWarning
    
            :param request: The :class:`PreparedRequest <PreparedRequest>` being sent.
        :param proxies: A dictionary of schemes or schemes and hosts to proxy URLs.
        :rtype: str
        '''
        proxy = select_proxy(request.url, proxies)
        scheme = urlparse(request.url).scheme
    
            if nonce == self._thread_local.last_nonce:
            self._thread_local.nonce_count += 1
        else:
            self._thread_local.nonce_count = 1
        ncvalue = '%08x' % self._thread_local.nonce_count
        s = str(self._thread_local.nonce_count).encode('utf-8')
        s += nonce.encode('utf-8')
        s += time.ctime().encode('utf-8')
        s += os.urandom(8)
    
                # Add content-type if it wasn't explicitly provided.
            if content_type and ('content-type' not in self.headers):
                self.headers['Content-Type'] = content_type
    
    class PyTest(TestCommand):
    user_options = [('pytest-args=', 'a', 'Arguments to pass into py.test')]
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
            # Adding field 'Environment.organization_id'
        db.add_column(
            'sentry_environment',
            'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True),
            keep_default=False
        )
    
        def backwards(self, orm):
    
            for name, organization_id in dupe_envs:
            envs = list(
                orm.Environment.objects.filter(
                    name=name,
                    organization_id=organization_id,
                ).order_by('date_added')
            )
            to_env = envs[0]
            from_envs = envs[1:]
    
        def backwards(self, orm):
        # Removing unique constraint on 'DSymApp', fields ['project', 'platform', 'app_id']
        db.delete_unique('sentry_dsymapp', ['project_id', 'platform', 'app_id'])
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        from sentry.utils.query import RangeQuerySetWrapperWithProgressBar
    
        for url in urls:
        if not url.startswith('http'):
            print('markdown file name: ' + url)
            continue
        if check_live_url(url):
            print(url)
        else:
            print(url, file=sys.stderr)