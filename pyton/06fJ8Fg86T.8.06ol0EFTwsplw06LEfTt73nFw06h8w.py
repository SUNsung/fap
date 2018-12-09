
        
        
def win_uninstall_service(service_name):
    manager = win_OpenSCManager()
    try:
        h = advapi32.OpenServiceW(manager, service_name, DELETE)
        if not h:
            raise OSError('Could not find service %s: %s' % (
                service_name, ctypes.FormatError()))
    
    with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
    with io.open(README_FILE, encoding='utf-8') as f:
    oldreadme = f.read()
    
    
if __name__ == '__main__':
    main()

    
    compat_print('total downloads traffic: %s' % format_size(total_bytes))

    
    import os
from os.path import dirname as dirn
import sys
    
    # The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'
    
            info_dict = _make_result(list(formats_order), extractor='youtube')
        ydl = YDL({'format': 'bestvideo+bestaudio'})
        yie = YoutubeIE(ydl)
        yie._sort_formats(info_dict['formats'])
        ydl.process_ie_result(info_dict)
        downloaded = ydl.downloaded_info_dicts[0]
        self.assertEqual(downloaded['format_id'], '137+141')
        self.assertEqual(downloaded['ext'], 'mp4')
    
        def test_youtube_extract(self):
        assertExtractId = lambda url, id: self.assertEqual(YoutubeIE.extract_id(url), id)
        assertExtractId('http://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?feature=player_embedded&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch_popup?v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('http://www.youtube.com/watch?v=BaW_jenozKcsharePLED17F32AD9753930', 'BaW_jenozKc')
        assertExtractId('BaW_jenozKc', 'BaW_jenozKc')
    
            headers.insert(0, request_line)
        headers = '\r\n'.join(headers).strip()
    
    
def test_current_version():
    version = Environment().config['__meta__']['httpie']
    assert version == __version__

    
        def test_print_only_body_when_stdout_redirected_by_default(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', httpbin.url + '/get', env=env)
        assert 'HTTP/' not in r
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
            Comment:                   'italic #8f5902', # class: 'c'
        Comment.Preproc:           'noitalic',       # class: 'cp'
    
        def handle_401(self, r, **kwargs):
        '''
        Takes the given response and tries digest-auth, if needed.
    
    This module handles import compatibility issues between Python 2 and
Python 3.
'''
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
        with server as (host, port):
        url = 'http://{}:{}/'.format(host, port)
        r = requests.get(url, auth=auth)
        # Verify server succeeded in authenticating.
        assert r.status_code == 200
        # Verify Authorization was sent in final request.
        assert 'Authorization' in r.request.headers
        assert r.request.headers['Authorization'].startswith('Digest ')
        # Verify redirect happened as we expected.
        assert r.history[0].status_code == 302
        close_server.set()
    
        def test_zipped_paths_extracted(self, tmpdir):
        zipped_py = tmpdir.join('test.zip')
        with zipfile.ZipFile(zipped_py.strpath, 'w') as f:
            f.write(__file__)