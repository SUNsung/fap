
        
        
# def get_all_subset(tokens: list):
#     '''获取 tokens 的所有非空子集'''
#     tokens = set(tokens)
#
#     ret = []
#     for i in range(1, len(tokens) + 1):
#         ret.extend(list(combinations(tokens, i)))
#
#     return ret
    
        with tf.variable_scope(name, reuse=reuse):
        alpha = get_w(alpha_shape, w_initializer=alpha_init, name='alpha')
        # o = relu(x) + 0.5 * tf.multiply(alpha, x - tf.abs(x))  # TFLearn
        o = leaky_relu(x, alpha)  # TensorLayer / <Deep Learning>
    
            a = permute(a, [0, 2, 1])  # [batch_size, n_step, n_input]
        o = tf.multiply(x, a)  # # [batch_size, n_step, n_input]
    
    References:
    keras.regularizers
'''
import tensorflow as tf
import numpy as np
    
    
def foo():
    print('foo')