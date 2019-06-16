
        
            # create the database and load test data
    with app.app_context():
        init_db()
        get_db().executescript(_data_sql)
    
        with pytest.raises(sqlite3.ProgrammingError) as e:
        db.execute('SELECT 1')
    
                version = match.group(1).strip()
    
        def __init__(self, request):
        exc = request.routing_exception
        buf = [
            'A request was sent to this URL (%s) but a redirect was '
            'issued automatically by the routing system to '%s'.'
            % (request.url, exc.new_url)
        ]
    
    
# context locals
_request_ctx_stack = LocalStack()
_app_ctx_stack = LocalStack()
current_app = LocalProxy(_find_app)
request = LocalProxy(partial(_lookup_req_object, 'request'))
session = LocalProxy(partial(_lookup_req_object, 'session'))
g = LocalProxy(partial(_lookup_app_object, 'g'))

    
        .. versionchanged:: 1.0.3
    
    	title = video.attributes['title'].value
	assert title 
    
    # (api_key, method, ext, page)
tmpl_api_call = (
    'https://api.flickr.com/services/rest?'
    '&format=json&nojsoncallback=1'
    # UNCOMMENT FOR TESTING
    #'&per_page=5'
    '&per_page=500'
    # this parameter CANNOT take control of 'flickr.galleries.getPhotos'
    # though the doc said it should.
    # it's always considered to be 500
    '&api_key=%s'
    '&method=flickr.%s'
    '&extras=url_sq,url_q,url_t,url_s,url_n,url_m,url_z,url_c,url_l,url_h,url_k,url_o,media'
    '%s&page=%d'
)
    
        @classmethod
    def get_coeff(cls, magic_list):
        magic_set = set(magic_list)
        no_dup = []
        for item in magic_list:
            if item in magic_set:
                magic_set.remove(item)
                no_dup.append(item)
        # really necessary?
    
    Example usage:
cipher rot13 'Hello world!'  # Uryyb jbeyq!
cipher rot13 'Uryyb jbeyq!'  # Hello world!
cipher caesar-encode 1 'Hello world!'  # Ifmmp xpsme!
cipher caesar-decode 1 'Ifmmp xpsme!'  # Hello world!
'''
    
    
class DiffTest(testutils.BaseTestCase):
  '''The purpose of these tests is to ensure the difflib wrappers works.
    
      def whack(self, n=1):
    '''Prints 'whack!' n times.'''
    return ' '.join('whack!' for _ in range(n))
    
      @mock.patch(INTERACT_METHOD)
  def testInteract(self, mock_interact_method):
    self.assertFalse(mock_interact_method.called)
    interact.Embed({})
    self.assertTrue(mock_interact_method.called)
    
      def test_google_format_arg_named_args(self):
    docstring = '''
    Args:
      args: arg_description
    '''
    docstring_info = docstrings.parse(docstring)
    expected_docstring_info = DocstringInfo(
        args=[
            ArgInfo(name='args', description='arg_description'),
        ]
    )
    self.assertEqual(docstring_info, expected_docstring_info)