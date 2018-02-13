
        
        
# create our blueprint :)
bp = Blueprint('flaskr', __name__)
    
    
def test_messages(client, app):
    '''Test that messages work'''
    login(client, app.config['USERNAME'],
          app.config['PASSWORD'])
    rv = client.post('/add', data=dict(
        title='<Hello>',
        text='<strong>HTML</strong> allowed here'
    ), follow_redirects=True)
    assert b'No entries here so far' not in rv.data
    assert b'&lt;Hello&gt;' in rv.data
    assert b'<strong>HTML</strong> allowed here' in rv.data

    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
        return inner
    
    
USER = PASSWORD = '%!*'();:@&=+$,/?#[] '
ENCODED_USER = compat.quote(USER, '')
ENCODED_PASSWORD = compat.quote(PASSWORD, '')
    
                if proxy:
                new_proxies.setdefault(scheme, proxy)
    
        auth = requests.auth.HTTPDigestAuth('user', 'pass')
    
            d1 = dict(jar)
        d2 = dict(jar.iteritems())
        d3 = dict(jar.items())
    
        # a Model inside a Model
    x = Input(shape=(1,))
    y = Dense(2)(x)
    inner_model = Model(x, y)
    x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
        # Normally the trailing 1 is added by standardize_weights
    weights = np.ones((3,))
    mask = np.ones((3, 4))
    mask[1, 0] = 0
    
    x_train = x_train.reshape(x_train.shape[0], -1, 1)
x_test = x_test.reshape(x_test.shape[0], -1, 1)
x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
                # check that container-level reset_states() works
            model.reset_states()
            out4 = model.predict(np.ones_like(inputs))
            assert_allclose(out3, out4, atol=1e-5)
    
    
class VirtualHostTest(unittest.TestCase):
    '''Test the VirtualHost class.'''
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_redirect_with_headers(self, mock_get_request):
        mock_get_request.return_value = create_response(
            301, {'location': 'https://test.com'})
        self.assertTrue(self.validator.redirect(
            'test.com', headers={'Host': 'test.com'}))