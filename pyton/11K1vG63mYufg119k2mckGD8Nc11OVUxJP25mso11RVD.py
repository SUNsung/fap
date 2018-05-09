
        
            def test_server_finishes_when_no_connections(self):
        '''the server thread exits even if there are no connections'''
        server = Server.basic_response_server()
        with server:
            pass
    
    
class TooManyRedirects(RequestException):
    '''Too many redirects.'''
    
        def doc(code):
        names = ', '.join('``%s``' % n for n in _codes[code])
        return '* %d: %s' % (code, names)
    
    shutil.copyfile('../CONTRIBUTING.md', 'sources/contributing.md')

    
    
def test_relu():
    x = K.placeholder(ndim=2)
    f = K.function([x], [activations.relu(x)])
    
    This network is used to predict the next frame of an artificially
generated movie which contains moving squares.
'''
from keras.models import Sequential
from keras.layers.convolutional import Conv3D
from keras.layers.convolutional_recurrent import ConvLSTM2D
from keras.layers.normalization import BatchNormalization
import numpy as np
import pylab as plt
    
    model.compile(loss='binary_crossentropy',
              optimizer='adam',
              metrics=['accuracy'])
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))

    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
            :arg Matcher matcher: a `Matcher` instance used for determining
            whether the rule should be considered a match for a specific
            request.
        :arg target: a Rule's target (typically a ``RequestHandler`` or
            `~.httputil.HTTPServerConnectionDelegate` subclass or even a nested `Router`,
            depending on routing implementation).
        :arg dict target_kwargs: a dict of parameters that can be useful
            at the moment of target instantiation (for example, ``status_code``
            for a ``RequestHandler`` subclass). They end up in
            ``target_params['target_kwargs']`` of `RuleRouter.get_target_delegate`
            method.
        :arg str name: the name of the rule that can be used to find it
            in `ReversibleRouter.reverse_url` implementation.
        '''
        if isinstance(target, str):
            # import the Module and instantiate the class
            # Must be a fully qualified name (module.ClassName)
            target = import_object(target)
    
        .. versionadded:: 4.0
    
        def test_google_login(self):
        response = self.fetch('/client/login')
        self.assertDictEqual({
            u'name': u'Foo',
            u'email': u'foo@example.com',
            u'access_token': u'fake-access-token',
        }, json_decode(response.body))

    
        def add_callback(self, callback, *args, **kwargs):
        self.io_loop.add_callback(callback, *args, **kwargs)
    
        def test_xsrf_success_short_token(self):
        response = self.fetch(
            '/', method='POST',
            body=urllib_parse.urlencode(dict(_xsrf='deadbeef')),
            headers=self.cookie_headers(token='deadbeef'))
        self.assertEqual(response.code, 200)