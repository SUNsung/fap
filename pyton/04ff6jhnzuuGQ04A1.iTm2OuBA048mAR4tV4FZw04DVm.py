
        
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
    
    # Embedding
max_features = 20000
maxlen = 100
embedding_size = 128
    
        if member.__doc__ is None and not member_too_small(member):
        raise ValueError('{} class doesn't have any documentation'.format(name),
                         member.__module__, inspect.getmodule(member).__file__)
    for n, met in inspect.getmembers(member):
        if inspect.ismethod(met):
            handle_method(n, met)
    
            # Test equivalence of convert_dense_weights_data_format
        out1 = model1.predict(x)
        layer_utils.convert_dense_weights_data_format(model1.layers[2], prev_shape, target_data_format)
        for (src, dst) in zip(model1.layers, model2.layers):
            dst.set_weights(src.get_weights())
        out2 = model2.predict(transpose(x))
    
        '''
    model = Sequential()
    model.add(layers.Embedding(10, 10, mask_zero=True))
    model.add(layers.Activation('softmax'))
    model.compile(loss='categorical_crossentropy',
                  optimizer='adam')
    
        def fn_output_shape(tup):
        s1, s2 = tup
        return (s1[0], s1[1] + s2[1]) + s1[2:]
    
    
@keras_test
def test_vector_regression():
    '''
    Perform float data prediction (regression) using 2 layer MLP
    with tanh and sigmoid activations.
    '''
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         output_shape=(num_classes,),
                                                         classification=False)
    
    from keras.models import Sequential
from keras.layers import Dense, Activation
from keras.legacy.layers import Merge
from keras.utils import np_utils
from keras.utils.test_utils import get_test_data, keras_test
from keras.models import model_from_json, model_from_yaml
    
        def can_fit_vehicle(self, vehicle):
        if self.vehicle is not None:
            return False
        return vehicle.can_fit_in_spot(self)
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_succesful_redirect(self, mock_get_request):
        mock_get_request.return_value = create_response(
            301, {'location': 'https://test.com'})
        self.assertTrue(self.validator.redirect('test.com'))
    
    
def downgrade():
    op.drop_column('tables', 'is_featured')
    
    
def downgrade():
    op.drop_constraint(None, 'dashboards', type_='unique')
    op.drop_column('dashboards', 'slug')

    
    
def downgrade():
    pass

    
    
def downgrade():
    op.drop_column('logs', 'slice_id')
    op.drop_column('logs', 'dashboard_id')

    
    # revision identifiers, used by Alembic.
revision = '4500485bde7d'
down_revision = '41f6a59a61f2'
    
    
def downgrade():
    op.drop_table('slice_user')
    op.drop_table('dashboard_user')

    
    Revision ID: 55179c7f25c7
Revises: 315b3f4da9b0
Create Date: 2015-12-13 08:38:43.704145
    
    
def downgrade():
    op.drop_column('query', 'results_key')
