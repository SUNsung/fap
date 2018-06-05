    # Arguments
        model: Keras model instance.
        f: Keras function returning a list of tensors
        ins: List of tensors to be fed to `f`
        out_labels: List of strings, display names of
            the outputs of `f`
        batch_size: Integer batch size or None if unknown.
        epochs: Number of times to iterate over the data
        verbose: Verbosity mode, 0, 1 or 2
        callbacks: List of callbacks to be called during training
        val_f: Keras function to call for validation
        val_ins: List of tensors to be fed to `val_f`
        shuffle: Whether to shuffle the data at the beginning of each epoch
        callback_metrics: List of strings, the display names of the metrics
            passed to the callbacks. They should be the
            concatenation of list the display names of the outputs of
             `f` and the list of display names of the outputs of `f_val`.
        initial_epoch: Epoch at which to start training
            (useful for resuming a previous training run)
        steps_per_epoch: Total number of steps (batches of samples)
            before declaring one epoch finished and starting the
            next epoch. Ignored with the default value of `None`.
        validation_steps: Number of steps to run validation for
            (only if doing validation from data tensors).
            Ignored with the default value of `None`.
    
    
# reparameterization trick
# instead of sampling from Q(z|X), sample eps = N(0,I)
# z = z_mean + sqrt(var)*eps
def sampling(args):
    '''Reparameterization trick by sampling fr an isotropic unit Gaussian.
    
    model = Sequential()
model.add(Embedding(max_features, embedding_size, input_length=maxlen))
model.add(Dropout(0.25))
model.add(Conv1D(filters,
                 kernel_size,
                 padding='valid',
                 activation='relu',
                 strides=1))
model.add(MaxPooling1D(pool_size=pool_size))
model.add(LSTM(lstm_output_size))
model.add(Dense(1))
model.add(Activation('sigmoid'))
    
    
@keras_test
def test_convert_weights():
    def get_model(shape, data_format):
        model = Sequential()
        model.add(Conv2D(filters=2,
                         kernel_size=(4, 3),
                         input_shape=shape,
                         data_format=data_format))
        model.add(Flatten())
        model.add(Dense(5))
        return model
    
        model.compile(loss='hinge', optimizer='adagrad')
    history = model.fit(x_train, y_train, epochs=20, batch_size=16,
                        validation_data=(x_test, y_test), verbose=0)
    assert (history.history['val_loss'][-1] < 0.9)
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=4,
          validation_data=[x_test, y_test])

    
    from ..common import *
    
    
def huaban_download(url, output_dir='.', **kwargs):
    if re.match(r'http://huaban\.com/boards/\d+/', url):
        huaban_download_board(url, output_dir, **kwargs)
    else:
        print('Only board (画板) pages are supported currently')
        print('ex: http://huaban.com/boards/12345678/')
    
    class Infoq(VideoExtractor):
    name = 'InfoQ'
    
    def kugou_download_playlist(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html=get_html(url)
    pattern=re.compile('title='(.*?)'.* data='(\w*)\|.*?'')
    pairs=pattern.findall(html)
    for title,hash_val in pairs:
        kugou_download_by_hash(title,hash_val,output_dir,merge,info_only)
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue