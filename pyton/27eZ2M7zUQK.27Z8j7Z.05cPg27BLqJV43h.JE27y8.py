
        
        tokenizer = RegexpTokenizer(r'\w+')
''' 分词器：匹配所有连续的字母串
比如 'abc!@#def$%^gh, ijk' -> 'abc' 'def' 'gh' 'ijk'
'''
stemmer = PorterStemmer()
''' 词干提取器
'''
    
    
def identity(x):
    ''''''
    return tf.identity(x)
    
        with tf.variable_scope(name, reuse=reuse):
        alpha = get_w(alpha_shape, w_initializer=alpha_init, name='alpha')
        # o = relu(x) + 0.5 * tf.multiply(alpha, x - tf.abs(x))  # TFLearn
        o = leaky_relu(x, alpha)  # TensorLayer / <Deep Learning>
    
        with tf.variable_scope(name, reuse=reuse):
        char_embed_mat = get_w([char_vocab_size, c_embed_size], name='char_embed_matrix')
    
    
class L1L2Regularizer(object):
    '''L1 L2 正则化
    
    
def get_params_dict():
    '''以字典形式获取所有 trainable 参数'''
    param_dict = dict()
    for var in tf.trainable_variables():
        param_dict[var.name] = {'shape': list(map(int, var.shape)),
                                'number': int(reduce(mul, var.shape, 1))}
    return param_dict
    
    References:
    https://www.tensorflow.org/api_guides/python/array_ops
    keras.backend
'''
    
    if word_vec.any():  #
    word_vec = word_vec / max(1, ngrams_found)
else:  # 如果一个 ngram 都没找到，gensim 会报错；个人认为把 0 向量传出来也可以
    raise KeyError('all ngrams for word %s absent from model' % word_unk)