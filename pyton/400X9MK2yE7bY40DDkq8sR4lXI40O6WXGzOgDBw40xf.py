
        
        
@keras_test
def test_weighted_metrics_with_multiple_outputs():
    decimal = decimal_precision[K.backend()]
    
    
def render_function(function, method=True):
    subblocks = []
    signature = get_function_signature(function, method=method)
    signature = signature.replace(function.__module__ + '.', '')
    level = 3
    subblocks.append('#' * level + ' ' + function.__name__ + '\n')
    subblocks.append(code_snippet(signature))
    docstring = function.__doc__
    if docstring:
        subblocks.append(process_docstring(docstring))
    return '\n\n'.join(subblocks)
    
            layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': (3, 3),
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_first'},
                   input_shape=(num_samples, stack_size, num_row, num_col))
    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_normal(tensor_shape):
    _runner(initializers.RandomNormal(mean=0, stddev=1), tensor_shape,
            target_mean=0., target_std=1)
    
            # Test equivalence of convert_dense_weights_data_format
        out1 = model1.predict(x)
        layer_utils.convert_dense_weights_data_format(model1.layers[2], prev_shape, target_data_format)
        for (src, dst) in zip(model1.layers, model2.layers):
            dst.set_weights(src.get_weights())
        out2 = model2.predict(transpose(x))
    
    
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
    
            start_time = time.time()
        parallel_model.fit(x, y, epochs=epochs, batch_size=batch_size)
        total_time = time.time() - start_time
        print('%d gpus training:' % i, total_time)
    
    
def check_ref_out(ref):
    '''Ask git to check out the specified ref.'''
    try:
        subprocess.check_call(
            ['git', 'checkout', ref],
            stdout=DEVNULL,
            stderr=DEVNULL,
        )
    except subprocess.CalledProcessError:
        logging.error('failed to check out %s', ref)
        sys.exit(1)
    
        FRIEND_JSON_SPEC = VValidatedJSON.PartialObject({
        'name': VAccountByName('name'),
        'note': VLength('note', 300),
    })
    FRIEND_JSON_VALIDATOR = VValidatedJSON('json', spec=FRIEND_JSON_SPEC,
                                           body=True)
    @require_oauth2_scope('subscribe')
    @validate(
        VUser(),
        friend=VAccountByName('username'),
        notes_json=FRIEND_JSON_VALIDATOR,
    )
    @api_doc(api_section.users, json_model=FRIEND_JSON_VALIDATOR,
             uri='/api/v1/me/friends/{username}')
    def PUT_friends(self, friend, notes_json):
        '''Create or update a 'friend' relationship.
    
    from reddit_base import RedditController, UnloggedUser
from r2.lib.pages import (ButtonLite, ButtonDemoPanel, WidgetDemoPanel,
                          BoringPage)
from r2.lib.pages.things import wrap_links
from r2.models import *
from r2.lib.validator import *
from pylons import request, response
from pylons import tmpl_context as c
from pylons.i18n import _
    
    from r2.controllers.reddit_base import MinimalController
from r2.lib import promote, cache