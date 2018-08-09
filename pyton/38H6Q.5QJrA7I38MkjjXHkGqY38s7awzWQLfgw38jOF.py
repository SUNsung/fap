
        
        
def test_duplicate_tag():
    class TagDict(JSONTag):
        key = ' d'
    
            for srcobj, loader in self._iter_loaders(template):
            try:
                rv = loader.get_source(environment, template)
                if trv is None:
                    trv = rv
            except TemplateNotFound:
                rv = None
            attempts.append((loader, srcobj, rv))
    
    import gc
import sys
import threading
    
        Signalling.
    
    
MIME_RE = re.compile(r'^[^/]+/[^/]+$')
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    
EXIT_STATUS_LABELS = {
    value: key
    for key, value in ExitStatus.__dict__.items()
    if key.isupper()
}

    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    