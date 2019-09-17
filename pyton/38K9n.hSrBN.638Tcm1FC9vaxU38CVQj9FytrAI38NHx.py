
        
        input_characters = sorted(list(input_characters))
target_characters = sorted(list(target_characters))
num_encoder_tokens = len(input_characters)
num_decoder_tokens = len(target_characters)
max_encoder_seq_length = max([len(txt) for txt in input_texts])
max_decoder_seq_length = max([len(txt) for txt in target_texts])
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test, batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
        def __init__(self,
                 return_sequences=False,
                 return_state=False,
                 go_backwards=False,
                 stateful=False,
                 **kwargs):
        if K.backend() != 'tensorflow':
            raise RuntimeError('CuDNN RNNs are only available '
                               'with the TensorFlow backend.')
        super(RNN, self).__init__(**kwargs)
        self.return_sequences = return_sequences
        self.return_state = return_state
        self.go_backwards = go_backwards
        self.stateful = stateful
        self.supports_masking = False
        self.input_spec = [InputSpec(ndim=3)]
        if hasattr(self.cell.state_size, '__len__'):
            state_size = self.cell.state_size
        else:
            state_size = [self.cell.state_size]
        self.state_spec = [InputSpec(shape=(None, dim))
                           for dim in state_size]
        self.constants_spec = None
        self._states = None
        self._num_constants = None
    
        def compute_mask(self, inputs, mask=None):
        if not self.mask_zero:
            return None
        output_mask = K.not_equal(inputs, 0)
        return output_mask
    
        # Returns
        Layer instance (may be Model, Sequential, Layer...)
    '''
    from .. import models
    globs = globals()  # All layers.
    globs['Model'] = models.Model
    globs['Sequential'] = models.Sequential
    return deserialize_keras_object(config,
                                    module_objects=globs,
                                    custom_objects=custom_objects,
                                    printable_module_name='layer')

    
            np_output_cl = layer_test(layers.Flatten,
                                  kwargs={'data_format':
                                          'channels_last'},
                                  input_data=np_inp_channels_last)
    
    # we start off with an efficient embedding layer which maps
# our vocab indices into embedding_dims dimensions
model.add(Embedding(max_features,
                    embedding_dims,
                    input_length=maxlen))
model.add(Dropout(0.2))
    
        def compute_output_shape(self, input_shape):
        shape = list(input_shape)
        assert len(shape) == 2  # only valid for 2D tensors
        shape[-1] *= 2
        return tuple(shape)
    
    
@pytest.mark.parametrize('activation_layer',
                         [layers.LeakyReLU,
                          layers.ELU])
@pytest.mark.parametrize('alpha', [0., .5, -1.])
def test_linear_unit_activations(activation_layer,
                                 alpha):
    layer_test(activation_layer, kwargs={'alpha': alpha},
               input_shape=(2, 3, 4))
    
        z_mean, z_log_var = args
    batch = K.shape(z_mean)[0]
    dim = K.int_shape(z_mean)[1]
    # by default, random_normal has mean=0 and std=1.0
    epsilon = K.random_normal(shape=(batch, dim))
    return z_mean + K.exp(0.5 * z_log_var) * epsilon
    
            # Let's add another one to be sure
        self.selenium.find_element_by_link_text('Add another Profile').click()
        self.assertEqual(len(self.selenium.find_elements_by_css_selector('.dynamic-profile_set')), 3)
        self.assertEqual(self.selenium.find_elements_by_css_selector(
            '.dynamic-profile_set')[2].get_attribute('id'), 'profile_set-2')
        self.assertEqual(len(self.selenium.find_elements_by_css_selector(
            '.dynamic-profile_set#profile_set-2 input[name=profile_set-2-first_name]')), 1)
        self.assertEqual(len(self.selenium.find_elements_by_css_selector(
            '.dynamic-profile_set#profile_set-2 input[name=profile_set-2-last_name]')), 1)
    
    from django.core.exceptions import ImproperlyConfigured
from django.db import ProgrammingError
    
                self.assertRegex(po_contents, r'#\..+Translators: valid i18n comment #8')
            self.assertRegex(po_contents, r'#\..+Translators: valid i18n comment #9')
            self.assertMsgId('Translatable literal #9j', po_contents)
    
        @classmethod
    def ensure_registered(cls):
        '''
        Attempt to register all the data source drivers.
        '''
        # Only register all if the driver counts are 0 (or else all drivers
        # will be registered over and over again)
        if not vcapi.get_driver_count():
            vcapi.register_all()
        if not rcapi.get_driver_count():
            rcapi.register_all()
    
            else:
            # gallery image
            content = get_content(self.url)
            image = json.loads(match1(content, r'image\s*:\s*({.*}),'))
            ext = image['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (image['hash'], ext)],
                    'size': image['size'],
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (image['hash'], '.jpg')],
                    'container': 'jpg'
                }
            }
            self.title = image['title'] or image['hash']