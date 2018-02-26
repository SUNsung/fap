
        
        
# create our blueprint :)
bp = Blueprint('flaskr', __name__)
    
        A simple application that shows how Flask and jQuery get along.
    
        # by setting the `trainable` argument, in Sequential
    model = Sequential()
    layer = Dense(2, input_dim=1)
    model.add(layer)
    assert model.trainable_weights == layer.trainable_weights
    layer.trainable = False
    assert model.trainable_weights == []
    
    # we start off with an efficient embedding layer which maps
# our vocab indices into embedding_dims dimensions
model.add(Embedding(max_features,
                    embedding_dims,
                    input_length=maxlen))
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test, batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
    # 4D convolution in th order. This shape has the same effective shape as FC_SHAPE
CONV_SHAPE = (25, 25, 20, 20)
    
                # cntk doesn't support eval convolution with static
            # variable, will enable it later
            if K.backend() != 'cntk':
                # check regularizers
                kwargs = {'data_format': data_format,
                          'return_sequences': return_sequences,
                          'kernel_size': (num_row, num_col),
                          'stateful': True,
                          'filters': filters,
                          'batch_input_shape': inputs.shape,
                          'kernel_regularizer': regularizers.L1L2(l1=0.01),
                          'recurrent_regularizer': regularizers.L1L2(l1=0.01),
                          'bias_regularizer': 'l2',
                          'activity_regularizer': 'l2',
                          'kernel_constraint': 'max_norm',
                          'recurrent_constraint': 'max_norm',
                          'bias_constraint': 'max_norm',
                          'padding': 'same'}
    
        train_samples = 100
    test_samples = 50
    
    
def shuffle_mats_or_lists(matrix_list, stop_ind=None):
    ret = []
    assert all([len(i) == len(matrix_list[0]) for i in matrix_list])
    len_val = len(matrix_list[0])
    if stop_ind is None:
        stop_ind = len_val
    assert stop_ind <= len_val
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
    js.load_plugin_modules(plugins)
modules = dict((k, m) for k, m in js.module.iteritems())
print 'JS_MODULES := ' + ' '.join(modules.iterkeys())
outputs = []
for name, module in modules.iteritems():
    outputs.extend(module.outputs)
    print 'JS_MODULE_OUTPUTS_%s := %s' % (name, ' '.join(module.outputs))
    print 'JS_MODULE_DEPS_%s := %s' % (name, ' '.join(module.dependencies))
    
    from pylons import tmpl_context as c
    
            AJAX login handler, used by both login and register to set the
        user cookie and send back a redirect.
        '''
        c.user = user
        c.user_is_loggedin = True
        self.login(user, rem=rem)
    
        def GET_widget_demo_page(self):
        return BoringPage(_('reddit widget'),
                          show_sidebar = False, 
                          content=WidgetDemoPanel()).render()

    
    import pylibmc
from pylons import request, response
from pylons import app_globals as g
from pylons.controllers.util import abort