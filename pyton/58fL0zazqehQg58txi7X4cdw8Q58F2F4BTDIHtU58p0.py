
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
        '''
    # The value that should be passed to --auth-type
    # to use this auth plugin. Eg. 'my-auth'
    auth_type = None
    
    
@mock.patch('httpie.core.get_response')
def test_error(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
        noarch_lib = os.path.abspath( os.path.join(python_path, 'lib', 'noarch'))
    sys.path.append(noarch_lib)
    
        def get(self):
        n = random.randint(2, 3)
        ws = []
        for i in range(0, n):
            w = self.slice.get()
            ws.append(w)
    
    import urllib
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
    from ..common import *
    
    site_info = 'any.any'
download = embed_download
download_playlist = playlist_not_supported('any.any')
