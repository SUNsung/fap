
        
                # In case just a slash was appended we can be extra helpful
        if request.base_url + '/' == exc.new_url.split('?')[0]:
            buf.append('  The URL was defined with a trailing slash so '
                       'Flask will automatically redirect to the URL '
                       'with the trailing slash if it was accessed '
                       'without one.')
    
    :copyright: © 2010 by the Pallets team.
:license: BSD, see LICENSE for more details.
'''
    
        #: Some implementations can detect when session data is read or
    #: written and set this when that happens. The mixin default is hard
    #: coded to ``True``.
    accessed = True
    
        #: Setting this disables or force-enables the automatic options handling.
    provide_automatic_options = None
    
        from installed_package import app
    assert app.instance_path == \
        modules_tmpdir.join('var').join('installed_package-instance')
    
        Tests the request context.
    
        @possible_keys
    def test_delitem(self, key):
        del self.case_insensitive_dict[key]
        assert key not in self.case_insensitive_dict
    
    from .compat import urlparse, str, basestring
from .cookies import extract_cookies_to_jar
from ._internal_utils import to_native_string
from .utils import parse_dict_header
    
        @property
    def origin_req_host(self):
        return self.get_origin_req_host()
    
    from . import utils
from . import packages
from .models import Request, Response, PreparedRequest
from .api import request, get, head, post, patch, put, delete, options
from .sessions import session, Session
from .status_codes import codes
from .exceptions import (
    RequestException, Timeout, URLRequired,
    TooManyRedirects, HTTPError, ConnectionError,
    FileModeWarning, ConnectTimeout, ReadTimeout
)
    
        def test_valid(self):
        assert is_valid_cidr('192.168.1.0/24')
    
        def test_HTTP_302_TOO_MANY_REDIRECTS(self, httpbin):
        try:
            requests.get(httpbin('relative-redirect', '50'))
        except TooManyRedirects as e:
            url = httpbin('relative-redirect', '20')
            assert e.request.url == url
            assert e.response.url == url
            assert len(e.response.history) == 30
        else:
            pytest.fail('Expected redirect to raise TooManyRedirects but it did not')
    
    
def secure_hash_s(data, hash_func=sha1):
    ''' Return a secure hash hex digest of data. '''
    
        if result is None:
        return '{}'
    
        history = model.fit(x_train, y_train, batch_size=batch_size,
                        epochs=epochs // 3, verbose=0,
                        sample_weight=sample_weight)
    
        if not blocks:
        raise RuntimeError('Found no content for page ' +
                           page_data['page'])
    
        # a Sequential inside a Sequential
    inner_model = Sequential()
    inner_model.add(Dense(2, input_dim=1))
    outer_model = Sequential()
    outer_model.add(inner_model)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
    
@pytest.mark.parametrize('tensor_shape', [(100, 100), (1, 2, 3, 4)], ids=['FC', 'CONV'])
def test_identity(tensor_shape):
    if len(tensor_shape) > 2:
        with pytest.raises(ValueError):
            _runner(initializers.identity(), tensor_shape,
                    target_mean=1. / tensor_shape[0], target_max=1.)
    else:
        _runner(initializers.identity(), tensor_shape,
                target_mean=1. / tensor_shape[0], target_max=1.)
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        left = Sequential()
    left.add(Dense(num_hidden, input_shape=(input_dim,)))
    left.add(Activation('relu'))
    
    # we start off with an efficient embedding layer which maps
# our vocab indices into embedding_dims dimensions
model.add(Embedding(max_features,
                    embedding_dims,
                    input_length=maxlen))
model.add(Dropout(0.2))
    
    site = Bigthink()
download = site.download_by_url

    
    def kuwo_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    if 'www.kuwo.cn/yinyue' in url:
        rid=match1(url,'yinyue/(\d+)')
        kuwo_download_by_rid(rid,output_dir, merge, info_only)
    else:
        kuwo_playlist_download(url,output_dir,merge,info_only)
    
        def __init__(self, HierachicalStateMachine):
        self._hsm = HierachicalStateMachine
    
        @classmethod
    def setUpClass(self):
        '''
        - Create a temporary directory and file
        /test_command
           /foo.txt
        - get the temporary test directory
        - and initializes the command stack.
        '''
        os.mkdir('tests/test_command')
        open('tests/test_command/foo.txt', 'w').close()
        self.__get_test_directory()
        self.command_stack = []
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'foo.txt'), os.path.join(self.test_dir, 'bar.txt')))
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'bar.txt'), os.path.join(self.test_dir, 'baz.txt')))
    
    
class ProxyTest(unittest.TestCase):
    
        @classmethod
    def setUpClass(self):
        self.radio = Radio()
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example with the time provider used in
        production. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(production_code_time_provider)
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)

    
    *TL;DR80
Traverses a container and accesses the container's elements.
'''
    
    '''
http://code.activestate.com/recipes/131499-observer-pattern/