
        
                    if ret[i, 0] != i_label:  # 样本的类别发生了改变
                changed = True
    
    
def relu6(x):
    '''
    `o = min(max(x, 0), 6)`
    '''
    return tf.nn.relu6(x)
    
                # x = FlattenLayer(x)
            x = DenseLayer(x, n_units=1, act=tf.nn.sigmoid)
            o = x.outputs
    
            return self._call(x)

    
            with tf.variable_scope('transform'):
            W_T, b_T = get_wb([n_input, n_input], b_initializer=tf.initializers.constant(carry_bias))