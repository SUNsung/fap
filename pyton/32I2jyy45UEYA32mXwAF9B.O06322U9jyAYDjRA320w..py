
        
        
def md5(filename):
    if not _md5:
        raise ValueError('MD5 not available.  Possibly running in FIPS mode')
    return secure_hash(filename, _md5)

    
    
class Galaxy(object):
    ''' Keeps global galaxy info '''
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = imdb.load_data(num_words=max_features)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
print('Average train sequence length: {}'.format(np.mean(list(map(len, x_train)), dtype=int)))
print('Average test sequence length: {}'.format(np.mean(list(map(len, x_test)), dtype=int)))
    
    Gets to 0.8498 test accuracy after 2 epochs. 41s/epoch on K520 GPU.
'''
from __future__ import print_function
    
    
@keras_test
def test_temporal_regression():
    '''
    Predict float numbers (regression) based on sequences
    of float numbers of length 3 using a single layer of GRU units
    '''
    np.random.seed(1337)
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=200,
                                                         num_test=20,
                                                         input_shape=(3, 5),
                                                         output_shape=(2,),
                                                         classification=False)
    model = Sequential()
    model.add(layers.LSTM(y_train.shape[-1],
                          input_shape=(x_train.shape[1], x_train.shape[2])))
    model.compile(loss='hinge', optimizer='adam')
    history = model.fit(x_train, y_train, epochs=5, batch_size=16,
                        validation_data=(x_test, y_test), verbose=0)
    assert(history.history['loss'][-1] < 1.)
    
        def fn_output_shape(tup):
        s1, s2 = tup
        return (s1[0], s1[1] + s2[1]) + s1[2:]
    
        result = f([test_values])[0]
    expected = softsign(test_values)
    assert_allclose(result, expected, rtol=1e-05)
    
                # check state initialization
            layer = convolutional_recurrent.ConvLSTM2D(filters=filters,
                                                       kernel_size=(num_row, num_col),
                                                       data_format=data_format,
                                                       return_sequences=return_sequences)
            layer.build(inputs.shape)
            x = Input(batch_shape=inputs.shape)
            initial_state = layer.get_initial_state(x)
            y = layer(x, initial_state=initial_state)
            model = Model(x, y)
            assert model.predict(inputs).shape == layer.compute_output_shape(inputs.shape)
    
    
@keras_test
def test_merge_overlap(in_tmpdir):
    (x_train, y_train), (x_test, y_test) = _get_test_data()
    left = Sequential()
    left.add(Dense(num_hidden, input_shape=(input_dim,)))
    left.add(Activation('relu'))
    
    class MismatchedTokenException(RecognitionException):
    '''@brief A mismatched char or Token or tree node.'''
    
    def __init__(self, expecting, input):
        RecognitionException.__init__(self, input)
        self.expecting = expecting
        
    
    
    def error(self, nvae):
        '''A hook for debugging interface'''
        pass
    
    import importlib
import os
from sys import executable, platform  # Platform is set for one test.
    
        # a re to match a gzip Accept-Encoding
    aepattern = re.compile(r'''
                            \s* ([^\s;]+) \s*            #content-coding
                            (;\s* q \s*=\s* ([0-9\.]+))? #q
                            ''', re.VERBOSE | re.IGNORECASE)
    
    js.load_plugin_modules(plugins)
modules = dict((k, m) for k, m in js.module.iteritems())
print 'JS_MODULES := ' + ' '.join(modules.iterkeys())
outputs = []
for name, module in modules.iteritems():
    outputs.extend(module.outputs)
    print 'JS_MODULE_OUTPUTS_%s := %s' % (name, ' '.join(module.outputs))
    print 'JS_MODULE_DEPS_%s := %s' % (name, ' '.join(module.dependencies))
    
        paths = {
        'root': root_path,
        'controllers': os.path.join(root_path, 'controllers'),
        'templates': [os.path.join(root_path, 'templates')],
    }
    
        def url_features(self):
        return set(request.GET.getall('feature'))
    
    api('reltableitem', RelTableItemJsonTemplate)
api('bannedtableitem', BannedTableItemJsonTemplate)
api('mutedtableitem', MutedTableItemJsonTemplate)
api('invitedmodtableitem', InvitedModTableItemJsonTemplate)
api('friendtableitem', FriendTableItemJsonTemplate)
    
            self._gift_using_creddits(
            recipient=target.author_slow,
            thing_fullname=target._fullname,
            proxying_for=request.POST.get('proxying_for'),
        )
    
        @validate(VAdmin())
    def GET_index(self):
        res = AdminPage(content = AdminAwards(),
                        title = 'awards').render()
        return res
    
            def builder_wrapper(thing = None):
            kw = {}
            if not thing:
                kw['url'] = url
                kw['title'] = title
            return ButtonLite(thing,
                              image = 1 if buttonimage is None else buttonimage,
                              target = '_new' if newwindow else '_parent',
                              styled = styled, **kw)
    
    from urllib2 import HTTPError