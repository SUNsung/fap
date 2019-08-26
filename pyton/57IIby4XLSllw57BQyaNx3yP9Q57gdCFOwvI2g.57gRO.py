
        
        
def clip_relu(x, max_value):
    '''截断 ReLU
    `o = min(max(0., x), max_value)`
    '''
    o = tf.nn.relu(x)
    o = tf.minimum(o, max_value)
    return o
    
    
def get_wb(shape,
           w_initializer=truncated_normal,
           b_initializer=zeros,
           w_regularizer=l2_regularizer,
           b_regularizer=None,  # 一般不对偏置做权重惩罚，可能会导致欠拟合
           name=None):
    ''''''
    name = '' if name is None else name + '_'
    W = tf.get_variable(name + 'W', shape=shape,
                        dtype=tf_float, initializer=w_initializer, regularizer=w_regularizer)
    b = tf.get_variable(name + 'b', shape=shape[-1:],
                        dtype=tf_float, initializer=b_initializer, regularizer=b_regularizer)
    return W, b