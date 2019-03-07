
        
            assert proc.expect([TIMEOUT, u'test'])
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    
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
    
    parametrize_script = pytest.mark.parametrize('script, fixed', [
    ('tar xvf {}', 'mkdir -p {dir} && tar xvf {filename} -C {dir}'),
    ('tar -xvf {}', 'mkdir -p {dir} && tar -xvf {filename} -C {dir}'),
    ('tar --extract -f {}', 'mkdir -p {dir} && tar --extract -f {filename} -C {dir}')])
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
        return inner
    
        def test_GET_explicit_JSON_explicit_headers(self, httpbin):
        r = http('--json', 'GET', httpbin.url + '/headers',
                 'Accept:application/xml',
                 'Content-Type:application/xml')
        assert HTTP_OK in r
        assert ''Accept': 'application/xml'' in r
        assert ''Content-Type': 'application/xml'' in r
    
    
filenames = list(rst_filenames())
assert filenames
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    
def test_unicode_raw_json_item(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
    # Insert the project root dir as the first element in the PYTHONPATH.
# This lets us ensure that the source package is imported, and that its
# version is used.
sys.path.insert(0, project_root)
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
        pool.starmap(test_image, function_parameters)