
        
            from inspect import getargspec
    from cStringIO import StringIO
    
                app.config['IMAGE_STORE_TYPE'] = 'fs'
            app.config['IMAGE_STORE_PATH'] = '/var/app/images'
            app.config['IMAGE_STORE_BASE_URL'] = 'http://img.website.com'
            image_store_config = app.config.get_namespace('IMAGE_STORE_')
    
        if not changed:
        fail('Could not find %s in %s', pattern, filename)
    
        import site_package
    assert site_package.app.instance_path == \
        modules_tmpdir.join('var').join('site_package-instance')
    
    
def test_logger(app):
    assert app.logger.name == 'flask.app'
    assert app.logger.level == logging.NOTSET
    assert app.logger.handlers == [default_handler]
    
        with app.test_client() as c:
        rv = c.get('/')
        assert rv.headers['Location'] == 'http://localhost/test'
        rv = c.get('/test')
        assert rv.data == b'42'

    
        @app.route('/')
    def index():
        1 // 0
    
        rv = client.get('/')
    assert rv.data == b'dcba'
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
    num_classes = 10
batch_size = 128
epochs = 15
weighted_class = 5
high_weight = 10
train_samples = 5000
test_samples = 1000
timesteps = 3
input_dim = 10
loss = 'mse'
loss_full_name = 'mean_squared_error'
standard_weight = 1
standard_score_sequential = 0.5
    
        old_layer = keras.layers.Deconvolution2D(5, nb_row=3, nb_col=3, output_shape=(6, 7, 5), name='deconv')
    new_layer = keras.layers.Conv2DTranspose(5, (3, 3), name='deconv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        # Create model
    model = Model(inputs, x, name='inception_resnet_v2')
    
        if input_tensor is None:
        img_input = Input(shape=input_shape)
    else:
        if not K.is_keras_tensor(input_tensor):
            img_input = Input(tensor=input_tensor, shape=input_shape)
        else:
            img_input = input_tensor
    # Block 1
    x = Conv2D(64, (3, 3), activation='relu', padding='same', name='block1_conv1')(img_input)
    x = Conv2D(64, (3, 3), activation='relu', padding='same', name='block1_conv2')(x)
    x = MaxPooling2D((2, 2), strides=(2, 2), name='block1_pool')(x)
    
        ```python
        model = Sequential()
        model.add(Conv2D(64, 3, 3,
                         border_mode='same',
                         input_shape=(3, 32, 32)))
        # now: model.output_shape == (None, 64, 32, 32)
    
        output_val = M.predict(x_val)
    
    
@keras_test
def test_saving_recurrent_layer_with_init_state():
    vector_size = 8
    input_length = 20
    
        outputs1 = Lambda(lambda x: utils.preprocess_input(x, 'channels_last'),
                      output_shape=x.shape)(inputs)
    model1 = Model(inputs, outputs1)
    out1 = model1.predict(x[np.newaxis])[0]
    x2 = np.transpose(x, (2, 0, 1))
    inputs2 = Input(shape=x2.shape)
    outputs2 = Lambda(lambda x: utils.preprocess_input(x, 'channels_first'),
                      output_shape=x2.shape)(inputs2)
    model2 = Model(inputs2, outputs2)
    out2 = model2.predict(x2[np.newaxis])[0]
    assert_allclose(out1, out2.transpose(1, 2, 0))
    
        reconstruction_loss *= original_dim
    kl_loss = 1 + z_log_var - K.square(z_mean) - K.exp(z_log_var)
    kl_loss = K.sum(kl_loss, axis=-1)
    kl_loss *= -0.5
    vae_loss = K.mean(reconstruction_loss + kl_loss)
    vae.add_loss(vae_loss)
    vae.compile(optimizer='adam')
    vae.summary()
    plot_model(vae,
               to_file='vae_mlp.png',
               show_shapes=True)
    
        def test_timeout(self):
        self.assertTrue(self.timeout.timeout)
        self.assertFalse(self.invalid.timeout)