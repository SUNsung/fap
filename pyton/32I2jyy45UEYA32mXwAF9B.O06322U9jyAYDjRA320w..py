
        
        ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
        def test_server_closes(self):
        '''the server closes when leaving the context manager'''
        with Server.basic_response_server() as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
    
        from urllib3.packages.ordered_dict import OrderedDict
    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
#html_search_language = 'en'
    
    
def check_header_validity(header):
    '''Verifies that header value is a string which doesn't contain
    leading whitespace or return characters. This prevents unintended
    header injection.