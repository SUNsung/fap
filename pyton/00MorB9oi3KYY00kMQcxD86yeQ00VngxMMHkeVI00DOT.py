
        
            OPERATOR = 0
    SUPERVISOR = 1
    DIRECTOR = 2
    
        def __init__(self, chat_id):
        self.chat_id = chat_id
        self.users = []
        self.messages = []
    
        def __init__(self, template_categories_to_budget_map):
        self.categories_to_budget_map = template_categories_to_budget_map
    
        def mapper(self, _, line):
        yield line, 1
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
    
def main():
    parser = optparse.OptionParser(usage='%prog CHANGELOG VERSION BUILDPATH')
    options, args = parser.parse_args()
    if len(args) != 3:
        parser.error('Expected a version and a build directory')
    
    import codecs
import subprocess
    
    new_version = {}
    
    
def main():
    with open('supportedsites.html.in', 'r', encoding='utf-8') as tmplf:
        template = tmplf.read()
    
        # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
    # NAME
    
    from __future__ import unicode_literals
    
    
from test.helper import FakeYDL
from youtube_dl.cache import Cache
    
    
@pytest.fixture(autouse=True)
def shell_config(mocker):
    path_mock = mocker.patch('thefuck.entrypoints.not_configured.Path',
                             new_callable=MagicMock)
    return path_mock.return_value \
        .expanduser.return_value \
        .open.return_value \
        .__enter__.return_value
    
        proc.sendline(u'fuck')
    assert proc.expect([TIMEOUT, u'echo test'])
    assert proc.expect([TIMEOUT, u'enter'])
    assert proc.expect_exact([TIMEOUT, u'ctrl+c'])
    proc.send('\n')
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
@pytest.mark.parametrize('command', [
    Command('apt-cache search foo', ''),
    Command('aptitude search foo', ''),
    Command('apt search foo', ''),
    Command('apt-get install foo', ''),
    Command('apt-get source foo', ''),
    Command('apt-get clean', ''),
    Command('apt-get remove', ''),
    Command('apt-get update', ''),
    Command('sudo apt update', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
        new_command = get_new_command(Command('sudo apt list --upgradable', match_output))
    assert new_command == 'sudo apt upgrade'

    
      aws help
  aws <command> help
  aws <command> <subcommand> help
aws: error: argument command: Invalid choice, valid choices are:
    
    
@pytest.fixture
def brew_already_installed():
    return '''Warning: git-2.3.5 already installed'''
    
        kwargs = {
        'stream': True,
        'method': args.method.lower(),
        'url': args.url,
        'headers': headers,
        'data': data,
        'verify': {
            'yes': True,
            'true': True,
            'no': False,
            'false': False,
        }.get(args.verify.lower(), args.verify),
        'cert': cert,
        'timeout': args.timeout,
        'auth': args.auth,
        'proxies': {p.key: p.value for p in args.proxy},
        'files': args.files,
        'allow_redirects': args.follow,
        'params': args.params,
    }
    
        def iter_lines(self, chunk_size):
        '''Return an iterator over the body yielding (`line`, `line_feed`).'''
        raise NotImplementedError()
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        def iter_body(self):
        '''Return an iterator over the message body.'''
        raise NotImplementedError()
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    import pytest
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        def load(self):
        try:
            with open(self.path, 'rt') as f:
                try:
                    data = json.load(f)
                except ValueError as e:
                    raise ValueError(
                        'Invalid %s JSON: %s [%s]' %
                        (type(self).__name__, str(e), self.path)
                    )
                self.update(data)
        except IOError as e:
            if e.errno != errno.ENOENT:
                raise
    
            if self._output_file:
            if self._resume and response.status_code == PARTIAL_CONTENT:
                total_size = parse_content_range(
                    response.headers.get('Content-Range'),
                    self._resumed_from
                )
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
        @get_item_parameters
    def test_get(self, key, value):
        assert self.lookup_dict.get(key) == value

    
                return request_content
    
        This function works best on CPython and PyPy: in particular, it probably
    doesn't work for Jython or IronPython. Future investigation should be done
    to work out the correct shape of the code for those platforms.
    '''
    implementation = platform.python_implementation()
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        def redirect_resp_handler(sock):
        consume_socket_content(sock, timeout=0.5)
        location = u'//{}:{}/{}'.format(host, port, path)
        sock.send(
            b'HTTP/1.1 301 Moved Permanently\r\n'
            b'Content-Length: 0\r\n'
            b'Location: ' + location.encode('utf8') + b'\r\n'
            b'\r\n'
        )
        redirect_request.append(consume_socket_content(sock, timeout=0.5))
        sock.send(b'HTTP/1.1 200 OK\r\n\r\n')
    
        def test_server_finishes_when_no_connections(self):
        '''the server thread exits even if there are no connections'''
        server = Server.basic_response_server()
        with server:
            pass
    
        def get_adapter(self, url):
        '''
        Returns the appropriate connection adapter for the given URL.
    
        def backwards(self, orm):
        # Removing unique constraint on 'EnvironmentProject', fields ['project', 'environment']
        db.delete_unique('sentry_environmentproject', ['project_id', 'environment_id'])
    
            db.start_transaction()
    
            # Adding model 'ApiApplication'
        db.create_table(
            'sentry_apiapplication', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'client_id',
                    self.gf('django.db.models.fields.CharField')(unique=True, max_length=64)
                ), (
                    'client_secret',
                    self.gf('sentry.db.models.fields.encrypted.EncryptedTextField')()
                ), (
                    'owner', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.User']
                    )
                ),
                ('name', self.gf('django.db.models.fields.CharField')(max_length=64, blank=True)), (
                    'status',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(
                        default=0, db_index=True
                    )
                ), (
                    'allowed_origins',
                    self.gf('django.db.models.fields.TextField')(null=True, blank=True)
                ), ('redirect_uris', self.gf('django.db.models.fields.TextField')()), (
                    'homepage_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'privacy_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'terms_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['ApiApplication'])
    
            # Adding field 'ApiAuthorization.scope_list'
        db.add_column(
            'sentry_apiauthorization',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
    
OUTPUT = '''
<Price: 100, price after discount: 100>
<Price: 100, price after discount: 90.0>
<Price: 1000, price after discount: 730.0>
'''

    
        print('rm1 id: {0}'.format(id(rm1)))
    print('rm2 id: {0}'.format(id(rm2)))
    
    In general, in Python this won't be necessary, but a second example showing
this kind of arrangement is also included.
    
    
def main():
    Jhon = Person('Jhon', 'Coder')
    print(u'Name: {0}    Occupation: {1}'.format(Jhon.name, Jhon.occupation))
    print(u'Before we access `relatives`:')
    print(Jhon.__dict__)
    print(u'Jhon's relatives: {0}'.format(Jhon.relatives))
    print(u'After we've accessed `relatives`:')
    print(Jhon.__dict__)
    print(Jhon.parents)
    print(Jhon.__dict__)
    print(Jhon.parents)
    print(Jhon.call_count2)
    
    *What does this example do?
In this example queue.Queue is used to create the pool (wrapped in a
custom ObjectPool object to use with the with statement), and it is
populated with strings.
As we can see, the first string object put in 'yam' is USED by the
with statement. But because it is released back into the pool
afterwards it is reused by the explicit call to sample_queue.get().
Same thing happens with 'sam', when the ObjectPool created insided the
function is deleted (by the GC) and the object is returned.
    
        def test_provider_shall_update_affected_subscribers_with_published_subscription(cls):
        pro = Provider()
        pub = Publisher(pro)
        sub1 = Subscriber('sub 1 name', pro)
        sub1.subscribe('sub 1 msg 1')
        sub1.subscribe('sub 1 msg 2')
        sub2 = Subscriber('sub 2 name', pro)
        sub2.subscribe('sub 2 msg 1')
        sub2.subscribe('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            cls.assertEqual(mock_subscriber1_run.call_count, 0)
            cls.assertEqual(mock_subscriber2_run.call_count, 0)
        pub.publish('sub 1 msg 1')
        pub.publish('sub 1 msg 2')
        pub.publish('sub 2 msg 1')
        pub.publish('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            expected_sub1_calls = [call('sub 1 msg 1'), call('sub 1 msg 2')]
            mock_subscriber1_run.assert_has_calls(expected_sub1_calls)
            expected_sub2_calls = [call('sub 2 msg 1'), call('sub 2 msg 2')]
            mock_subscriber2_run.assert_has_calls(expected_sub2_calls)

    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''