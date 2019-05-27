
        
            def __init__(self, cards):
        self.cards = cards
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    no_match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Get:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease [89.2 kB]
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Get:4 http://security.ubuntu.com/ubuntu zesty-security InRelease [89.2 kB]
Hit:5 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Hit:6 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:7 https://download.docker.com/linux/ubuntu zesty InRelease
Get:8 http://us.archive.ubuntu.com/ubuntu zesty-updates/main i386 Packages [232 kB]
Get:9 http://us.archive.ubuntu.com/ubuntu zesty-updates/main amd64 Packages [235 kB]
Get:10 http://us.archive.ubuntu.com/ubuntu zesty-updates/main amd64 DEP-11 Metadata [55.2 kB]
Get:11 http://us.archive.ubuntu.com/ubuntu zesty-updates/main DEP-11 64x64 Icons [32.3 kB]
Get:12 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe amd64 Packages [156 kB]
Get:13 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe i386 Packages [156 kB]
Get:14 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe amd64 DEP-11 Metadata [175 kB]
Get:15 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe DEP-11 64x64 Icons [253 kB]
Get:16 http://us.archive.ubuntu.com/ubuntu zesty-updates/multiverse amd64 DEP-11 Metadata [5,840 B]
Get:17 http://us.archive.ubuntu.com/ubuntu zesty-backports/universe amd64 DEP-11 Metadata [4,588 B]
Get:18 http://security.ubuntu.com/ubuntu zesty-security/main amd64 DEP-11 Metadata [12.7 kB]
Get:19 http://security.ubuntu.com/ubuntu zesty-security/main DEP-11 64x64 Icons [17.6 kB]
Get:20 http://security.ubuntu.com/ubuntu zesty-security/universe amd64 DEP-11 Metadata [21.6 kB]
Get:21 http://security.ubuntu.com/ubuntu zesty-security/universe DEP-11 64x64 Icons [47.7 kB]
Get:22 http://security.ubuntu.com/ubuntu zesty-security/multiverse amd64 DEP-11 Metadata [208 B]
Fetched 1,673 kB in 0s (1,716 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
All packages are up to date.
'''
    
    
@pytest.mark.parametrize('command', [
    Command('aws dynamdb scan', misspelled_command),
    Command('aws dynamodb scn', misspelled_subcommand),
    Command('aws dynamodb t-item',
            misspelled_subcommand_with_multiple_options)])
def test_match(command):
    assert match(command)
    
    
@parametrize_extensions
@parametrize_filename
@parametrize_script
def test_match(ext, tar_error, filename, unquoted, quoted, script, fixed):
    tar_error(unquoted.format(ext))
    assert match(Command(script.format(filename.format(ext)), ''))
    
    '''
requests._internal_utils
~~~~~~~~~~~~~~
    
    
class ReadTimeout(Timeout):
    '''The server did not send any data in the allotted amount of time.'''
    
        def _handle_requests(self):
        for _ in range(self.requests_to_handle):
            sock = self._accept_connection()
            if not sock:
                break
    
    # Syntax sugar.
_ver = sys.version_info
    
        Wraps CookieJar.clear(), is O(n).
    '''
    clearables = []
    for cookie in cookiejar:
        if cookie.name != name:
            continue
        if domain is not None and domain != cookie.domain:
            continue
        if path is not None and path != cookie.path:
            continue
        clearables.append((cookie.domain, cookie.path, cookie.name))
    
    
@pytest.mark.parametrize('var,scheme', _proxy_combos)
def test_use_proxy_from_environment(httpbin, var, scheme):
    url = '{}://httpbin.org'.format(scheme)
    fake_proxy = Server()  # do nothing with the requests; just close the socket
    with fake_proxy as (host, port):
        proxy_url = 'socks5://{}:{}'.format(host, port)
        kwargs = {var: proxy_url}
        with override_environ(**kwargs):
            # fake proxy's lack of response will cause a ConnectionError
            with pytest.raises(requests.exceptions.ConnectionError):
                requests.get(url)
    
        def test_text_response(self):
        '''the text_response_server sends the given text'''
        server = Server.text_response_server(
            'HTTP/1.1 200 OK\r\n' +
            'Content-Length: 6\r\n' +
            '\r\nroflol'
        )
    
            # It's possible that users might accidentally send a Request object.
        # Guard against that specific failure case.
        if isinstance(request, Request):
            raise ValueError('You can only send PreparedRequests.')
    
    
def display_temp(hass: HomeAssistant, temperature: float, unit: str,
                 precision: float) -> float:
    '''Convert temperature into preferred units/precision for display.'''
    temperature_unit = unit
    ha_unit = hass.config.units.temperature_unit
    
        The name for each file chosen consists os the section id in the markdown document, a counter for the snippet inside the section.
    
            # Adding unique constraint on 'ProcessingIssue', fields ['project', 'checksum', 'type']
        db.create_unique('sentry_processingissue', ['project_id', 'checksum', 'type'])
    
                from_env_ids = [e.id for e in from_envs]
            try:
                with transaction.atomic():
                    orm.ReleaseEnvironment.objects.filter(
                        environment_id__in=from_env_ids,
                    ).update(environment_id=to_env.id)
            except IntegrityError:
                for re in orm.ReleaseEnvironment.objects.filter(environment_id__in=from_env_ids):
                    try:
                        with transaction.atomic():
                            orm.ReleaseEnvironment.objects.filter(
                                id=re.id,
                            ).update(environment_id=to_env.id)
                    except IntegrityError:
                        re.delete()
    
            # Adding field 'ApiToken.expires_at'
        db.add_column(
            'sentry_apitoken',
            'expires_at',
            self.gf('django.db.models.fields.DateTimeField')(null=True),
            keep_default=False
        )
    
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
    
            for user in RangeQuerySetWrapperWithProgressBar(users):
            orm.UserEmail.objects.get_or_create(user=user, email=user.email)
    
        def backwards(self, orm):
        # Removing unique constraint on 'Distribution', fields ['release', 'name']
        db.delete_unique('sentry_distribution', ['release_id', 'name'])