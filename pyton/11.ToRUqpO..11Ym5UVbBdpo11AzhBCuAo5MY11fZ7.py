
        
                # Update states
        states_value = [h, c]
    
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
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_glorot_uniform(tensor_shape):
    fan_in, fan_out = initializers._compute_fans(tensor_shape)
    std = np.sqrt(2. / (fan_in + fan_out))
    _runner(initializers.glorot_uniform(), tensor_shape,
            target_mean=0., target_std=std)
    
            batch_size = K.shape(inputs)[0]
        input_num_capsule = K.shape(inputs)[1]
        hat_inputs = K.reshape(hat_inputs,
                               (batch_size, input_num_capsule,
                                self.num_capsule, self.dim_capsule))
        hat_inputs = K.permute_dimensions(hat_inputs, (0, 2, 1, 3))
    
        # Example
    ```python
        >>> keras.backend.image_data_format()
        'channels_first'
    ```
    '''
    return _IMAGE_DATA_FORMAT
    
            if self.unit_forget_bias:
            def bias_initializer(shape, *args, **kwargs):
                return K.concatenate([
                    self.bias_initializer((self.units * 5,), *args, **kwargs),
                    initializers.Ones()((self.units,), *args, **kwargs),
                    self.bias_initializer((self.units * 2,), *args, **kwargs),
                ])
        else:
            bias_initializer = self.bias_initializer
        self.bias = self.add_weight(shape=(self.units * 8,),
                                    name='bias',
                                    initializer=bias_initializer,
                                    regularizer=self.bias_regularizer,
                                    constraint=self.bias_constraint)
    
    print('Vectorization...')
x = np.zeros((len(questions), MAXLEN, len(chars)), dtype=np.bool)
y = np.zeros((len(questions), DIGITS + 1, len(chars)), dtype=np.bool)
for i, sentence in enumerate(questions):
    x[i] = ctable.encode(sentence, MAXLEN)
for i, sentence in enumerate(expected):
    y[i] = ctable.encode(sentence, DIGITS + 1)
    
    '''
*What is this pattern about?
    
    *What does this example do?
To understand the implementation of this pattern in Python, it is
important to know that, in Python, instance attributes are stored in a
attribute dictionary called __dict__. Usually, each instance will have
its own dictionary, but the Borg pattern modifies this so that all
instances have the same dictionary.
In this example, the __shared_state attribute will be the dictionary
shared between all instances, and this is ensured by assigining
__shared_state to the __dict__ variable when initializing a new
instance (i.e., in the __init__ method). Other attributes are usually
added to the instance's attribute dictionary, but, since the attribute
dictionary itself is shared (which is __shared_state), all other
attributes will also be shared.
For this reason, when the attribute self.state is modified using
instance rm2, the value of self.state in instance rm1 also changes. The
same happens if self.state is modified using rm3, which is an
instance from a subclass.
Notice that even though they share attributes, the instances are not
the same, as seen by their ids.
    
        def get_objects(self):
        '''Get all objects'''
        return self._objects
    
        def __getattr__(self, name):
        attr = getattr(self.delegate, name)
    
        data = Data()
    
    *Where is the pattern used practically?
In graphics editors a shape can be basic or complex. An example of a
simple shape is a line, where a complex shape is a rectangle which is
made of four line objects. Since shapes have many operations in common
such as rendering the shape to screen, and since shapes follow a
part-whole hierarchy, composite pattern can be used to enable the
program to deal with all shapes uniformly.
    
    
if __name__ == '__main__':
    simple_hello = TextTag('hello, world!')
    special_hello = ItalicWrapper(BoldWrapper(simple_hello))
    print('before:', simple_hello.render())
    print('after:', special_hello.render())
    
    ln = fp.readline()
while ln:
    l = ln.rstrip('\r\n')
    result = delim.join(cutfunc(ln.rstrip('\r\n'), cutall, hmm))
    if PY2:
        result = result.encode(default_encoding)
    print(result)
    ln = fp.readline()
    
    
def add_force_split(word):
    global Force_Split_Words
    Force_Split_Words.add(word)
    
            if not obs_states:
            obs_states = prev_states_expect_next if prev_states_expect_next else all_states