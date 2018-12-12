# TODO: ensure that history changes.

    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    history_not_changed(proc, TIMEOUT)
    
    
@pytest.mark.parametrize('command, packages, which', [
    (Command('a_bad_cmd', 'a_bad_cmd: command not found'),
     [], None),
    (Command('vim', ''), [], None),
    (Command('', ''), [], None),
    (Command('vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim'),
    (Command('sudo vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim')])
def test_not_match(mocker, command, packages, which):
    mocker.patch('thefuck.rules.apt_get.which', return_value=which)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    from httpie.plugins import plugin_manager
from httpie.context import Environment
    
    import requests.auth
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
        def test_upload_multiple_fields_with_the_same_name(self, httpbin):
        r = http('--form', '--verbose', 'POST', httpbin.url + '/post',
                 'test-file@%s' % FILE_PATH_ARG,
                 'test-file@%s' % FILE_PATH_ARG)
        assert HTTP_OK in r
        assert r.count('Content-Disposition: form-data; name='test-file';'
                       ' filename='%s'' % os.path.basename(FILE_PATH)) == 2
        # Should be 4, but is 3 because httpbin
        # doesn't seem to support filed field lists
        assert r.count(FILE_CONTENT) in [3, 4]
        assert r.count('Content-Type: text/plain') == 2
    
        DEFAULTS = {
        'default_options': []
    }
    
    
def test_objective_shapes_3d():
    y_a = K.variable(np.random.random((5, 6, 7)))
    y_b = K.variable(np.random.random((5, 6, 7)))
    for obj in allobj:
        objective_output = obj(y_a, y_b)
        assert K.eval(objective_output).shape == (5, 6)
    
    # We create a layer which take as input movies of shape
# (n_frames, width, height, channels) and returns a movie
# of identical shape.
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
    #: Python 3.x?
is_py3 = (_ver[0] == 3)
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    import pytest
import requests
from tests.testserver.server import Server
    
        # Client Error.
    400: ('bad_request', 'bad'),
    401: ('unauthorized',),
    402: ('payment_required', 'payment'),
    403: ('forbidden',),
    404: ('not_found', '-o-'),
    405: ('method_not_allowed', 'not_allowed'),
    406: ('not_acceptable',),
    407: ('proxy_authentication_required', 'proxy_auth', 'proxy_authentication'),
    408: ('request_timeout', 'timeout'),
    409: ('conflict',),
    410: ('gone',),
    411: ('length_required',),
    412: ('precondition_failed', 'precondition'),
    413: ('request_entity_too_large',),
    414: ('request_uri_too_large',),
    415: ('unsupported_media_type', 'unsupported_media', 'media_type'),
    416: ('requested_range_not_satisfiable', 'requested_range', 'range_not_satisfiable'),
    417: ('expectation_failed',),
    418: ('im_a_teapot', 'teapot', 'i_am_a_teapot'),
    421: ('misdirected_request',),
    422: ('unprocessable_entity', 'unprocessable'),
    423: ('locked',),
    424: ('failed_dependency', 'dependency'),
    425: ('unordered_collection', 'unordered'),
    426: ('upgrade_required', 'upgrade'),
    428: ('precondition_required', 'precondition'),
    429: ('too_many_requests', 'too_many'),
    431: ('header_fields_too_large', 'fields_too_large'),
    444: ('no_response', 'none'),
    449: ('retry_with', 'retry'),
    450: ('blocked_by_windows_parental_controls', 'parental_controls'),
    451: ('unavailable_for_legal_reasons', 'legal_reasons'),
    499: ('client_closed_request',),
    
    __all__ = ['cntv_download', 'cntv_download_by_id']
    
    site_info = 'Dailymotion.com'
download = dailymotion_download
download_playlist = playlist_not_supported('dailymotion')

    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
        if int(html['status']) != 100000:
        raise Exception('API error!')
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge=merge, headers = fake_headers)
    
                    mapping = KBaseMapping(base=int(base))
                sym_to_name = {}
                for no in range(int(size), 0, -1):
                    no_in_base = mapping.mapping(no)
                    val = names[no] if no < len(names) and names[no] else no_in_base
                    sym_to_name[no_in_base] = val
    
        title = r1(r'<meta property='og:title' content='(.*?)'>', html)
    
            for (i, real_url) in enumerate(real_urls):
            title_i = '%s[%s]' % (title, i) if len(real_urls) > 1 else title
            type, ext, size = url_info(real_url)
            if ext is None: ext = 'mp4'
    
    
def setup(hass, config):
    '''Listen for browse_url events.'''
    import webbrowser
    
    
class HitronCODADeviceScanner(DeviceScanner):
    '''This class scans for devices using the CODA's web interface.'''
    
            # Check if the access point is accessible
        response = self._make_request()
        if not response.status_code == 200:
            raise ConnectionError('Cannot connect to Linksys Access Point')
    
    _LOGGER = logging.getLogger(__name__)
    
        def shutdown(self, event):
        '''Shutdown the watcher.'''
        self._observer.stop()
        self._observer.join()

    
        complete_apps = ['sentry']

    
            # User chose to not deal with backwards NULL issues for 'ReleaseEnvironment.project_id'
        raise RuntimeError(
            'Cannot reverse this migration. 'ReleaseEnvironment.project_id' and its values cannot be restored.'
        )
    
            for renv in dupe_release_envs:
            release_id = renv['release_id']
            organization_id = renv['organization_id']
            environment_id = renv['environment_id']
            renvs = list(
                orm.ReleaseEnvironment.objects.filter(
                    release_id=release_id,
                    organization_id=organization_id,
                    environment_id=environment_id,
                ).order_by('first_seen')
            )
            to_renv = renvs[0]
            from_renvs = renvs[1:]
            last_seen = max([re.last_seen for re in renvs])
            orm.ReleaseEnvironment.objects.filter(
                id=to_renv.id,
            ).update(last_seen=last_seen)
            orm.ReleaseEnvironment.objects.filter(
                id__in=[re.id for re in from_renvs],
            ).delete()
    
            # Adding field 'ApiToken.application'
        db.add_column(
            'sentry_apitoken',
            'application',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.ApiApplication'], null=True
            ),
            keep_default=False
        )
    
            # Adding field 'ApiAuthorization.scope_list'
        db.add_column(
            'sentry_apiauthorization',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
        def backwards(self, orm):
        # Removing unique constraint on 'DSymApp', fields ['project', 'platform', 'app_id']
        db.delete_unique('sentry_dsymapp', ['project_id', 'platform', 'app_id'])
    
    
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