
        
                super(PythonBuilder, self).__init__(**kwargs)
    
    versions_info['versions'][version] = new_version
versions_info['latest'] = version
    
    import shutil
    
    
class TestCompat(unittest.TestCase):
    def test_compat_getenv(self):
        test_str = 'тест'
        compat_setenv('YOUTUBE_DL_COMPAT_GETENV', test_str)
        self.assertEqual(compat_getenv('YOUTUBE_DL_COMPAT_GETENV'), test_str)
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
        Requests does not use the dict interface internally; it's just for
    compatibility with external client code. All requests code should work
    out of the box with externally provided instances of ``CookieJar``, e.g.
    ``LWPCookieJar`` and ``FileCookieJar``.
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        def test_server_finishes_on_error(self):
        '''the server thread exits even if an exception exits the context manager'''
        server = Server.basic_response_server()
        with pytest.raises(Exception):
            with server:
                raise Exception()
    
        if K.image_data_format() == 'channels_last':
        x_train = x_train.transpose(0, 2, 3, 1)
        x_test = x_test.transpose(0, 2, 3, 1)
    
        ```python
    # Consider an array of 5 labels out of a set of 3 classes {0, 1, 2}:
    > labels
    array([0, 2, 1, 2, 0])
    # `to_categorical` converts this into a matrix with as many
    # columns as there are classes. The number of rows
    # stays the same.
    > to_categorical(labels)
    array([[ 1.,  0.,  0.],
           [ 0.,  0.,  1.],
           [ 0.,  1.,  0.],
           [ 0.,  0.,  1.],
           [ 1.,  0.,  0.]], dtype=float32)
    ```
    '''
    
        for i in range(n_samples):
        # Add 3 to 7 moving squares
        n = np.random.randint(3, 8)
    
        def set_appid_not_exist(self, appid):
        self.logger.warn('APPID_manager, set_appid_not_exist %s', appid)
        with self.lock:
            if appid not in self.not_exist_appids:
                self.not_exist_appids.append(appid)
            try:
                self.config.GAE_APPIDS.remove(appid)
            except:
                pass
    
        def _test_host(self, url):
        try:
            header = {
                'user-agent': 'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Safari/537.36',
                'accept': 'application/json, text/javascript, */*; q=0.01',
                'accept-encoding': 'gzip, deflate, sdch',
                'accept-language': 'en-US,en;q=0.8,ja;q=0.6,zh-CN;q=0.4,zh;q=0.2',
                'connection': 'keep-alive'
                }
            response = self.http_client.request('HEAD', url, header, '', read_payload=False)
            if response:
                return True
        except Exception as e:
            if __name__ == '__main__':
                xlog.exception('test %s e:%r', url, e)
    
    
    def getLine(self):
        '''ANTLR tracks the line information automatically'''
    
        '''
    
    def __init__(self, type=None, channel=DEFAULT_CHANNEL, text=None,
                 input=None, start=None, stop=None, oldToken=None):
        Token.__init__(self)
        
        if oldToken is not None:
            self.type = oldToken.type
            self.line = oldToken.line
            self.charPositionInLine = oldToken.charPositionInLine
            self.channel = oldToken.channel
            self.index = oldToken.index
            self._text = oldToken._text
            if isinstance(oldToken, CommonToken):
                self.input = oldToken.input
                self.start = oldToken.start
                self.stop = oldToken.stop
            
        else:
            self.type = type
            self.input = input
            self.charPositionInLine = -1 # set to invalid position
            self.line = 0
            self.channel = channel
            
	    #What token number is this from 0..n-1 tokens; < 0 implies invalid index
            self.index = -1
            
            # We need to be able to change the text once in a while.  If
            # this is non-null, then getText should return this.  Note that
            # start/stop are not affected by changing this.
            self._text = text
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
        :param face_image: image to search
    :param face_locations: Optionally provide a list of face locations to check.
    :param model: Optional - which model to use. 'large' (default) or 'small' which only returns 5 points but is faster.
    :return: A list of dicts of face feature locations (eyes, nose, etc)
    '''
    landmarks = _raw_face_landmarks(face_image, face_locations, model)
    landmarks_as_tuples = [[(p.x, p.y) for p in landmark.parts()] for landmark in landmarks]
    
        if len(unknown_face_encodings) > 0:
        face_found = True
        # 看看图片中的第一张脸是不是奥巴马
        match_results = face_recognition.compare_faces([known_face_encoding], unknown_face_encodings[0])
        if match_results[0]:
            is_obama = True