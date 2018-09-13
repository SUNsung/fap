
        
        from mrjob.job import MRJob
    
        def _hash_function(self, key):
        return key % self.size
    
        def __init__(self, MAX_SIZE):
        self.MAX_SIZE = MAX_SIZE
        self.size = 0
        self.lookup = {}
        self.linked_list = LinkedList()
    
    from httpie.compat import str
from httpie.context import Environment
from httpie.models import HTTPRequest, HTTPResponse
from httpie.input import (OUT_REQ_BODY, OUT_REQ_HEAD,
                          OUT_RESP_HEAD, OUT_RESP_BODY)
from httpie.output.processing import Formatting, Conversion
    
    
class PyTest(TestCommand):
    # `$ python setup.py test' simply installs minimal requirements
    # and runs the tests with no fancy stuff like parallel execution.
    def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = [
            '--doctest-modules', '--verbose',
            './httpie', './tests'
        ]
        self.test_suite = True
    
    
with open(BIN_FILE_PATH, 'rb') as f:
    BIN_FILE_CONTENT = f.read()
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
class Response(object):
    # noinspection PyDefaultArgument
    def __init__(self, url, headers={}, status_code=200):
        self.url = url
        self.headers = CaseInsensitiveDict(headers)
        self.status_code = status_code
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        r = http('GET', httpbin_both + '/headers', 'Accept;')
    assert r.json['headers']['Accept'] == ''   # Accept has no value
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
@pytest.mark.parametrize('script, output, help_text, result', [
    ('apt-get isntall vim', invalid_operation('isntall'),
     apt_get_help, 'apt-get install vim'),
    ('apt saerch vim', invalid_operation('saerch'),
     apt_help, 'apt search vim'),
])
def test_get_new_command(set_help, output, script, help_text, result):
    set_help(help_text)
    assert get_new_command(Command(script, output))[0] == result

    
    
class Overlap(PostgresSimpleLookup):
    lookup_name = 'overlap'
    operator = '&&'
    
            # No redirect was found. Return the response.
        return response

    
        def clear(self):
        # To avoid unnecessary persistent storage accesses, we set up the
        # internals directly (loading data wastes time, since we are going to
        # set it to an empty dict anyway).
        self._session_cache = {}
        self.accessed = True
        self.modified = True
    
            # Determine domain
        if site is None:
            if django_apps.is_installed('django.contrib.sites'):
                Site = django_apps.get_model('sites.Site')
                try:
                    site = Site.objects.get_current()
                except Site.DoesNotExist:
                    pass
            if site is None:
                raise ImproperlyConfigured(
                    'To use sitemaps, either enable the sites framework or pass '
                    'a Site/RequestSite object in your view.'
                )
        domain = site.domain
    
    try:
    import simplejson as json
except ImportError:
    import json
    
    
class InvalidProxyURL(InvalidURL):
    '''The proxy URL provided is invalid.'''
    
    
def default_hooks():
    return dict((event, []) for event in HOOKS)
    
        def __repr__(self):
        return str(dict(self.items()))
    
            :param conn: The urllib3 connection object associated with the cert.
        :param url: The requested URL.
        :param verify: Either a boolean, in which case it controls whether we verify
            the server's TLS certificate, or a string, in which case it must be a path
            to a CA bundle to use
        :param cert: The SSL certificate to verify.
        '''
        if url.lower().startswith('https') and verify:
    
    
def patch(url, data=None, **kwargs):
    r'''Sends a PATCH request.