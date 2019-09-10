
        
        
def search_tokens(tokens, inverse_index, word_freq=None):
    ''''''
    ret = dict()
    for term in tokens:
        if term in inverse_index:
            ret[frozenset([term])] = inverse_index[term]
        else:
            ret[frozenset([term])] = set()
    return ret
    
        in_channels = get_shape(x)[-1]
    kernel_shape = list(kernel_size) + [in_channels, out_channels]  # [kernel_h, kernel_w, in_channels, out_channels]
    
            # h_tilde(h~): question to context attended query vectors
        b = tf.reduce_max(S, axis=2)  # [N, T]
        b = softmax(b, axis=-1)  # [N, T]
        b = tf.expand_dims(b, axis=1)  # [N, 1, T]
        h_tilde = tf.matmul(b, h)  # [N, 1, d]
        h_tilde = tf.tile(h_tilde, [1, T, 1])  # [N, T, d]
    
    default_encoding = sys.getfilesystemencoding()
    
        def __init__(self):
        self.tokenizer = self.postokenizer = jieba.posseg.dt
        self.stop_words = self.STOP_WORDS.copy()
        self.pos_filt = frozenset(('ns', 'n', 'vn', 'v'))
        self.span = 5
    
        def get_idf(self):
        return self.idf_freq, self.median_idf
    
    PROB_START_P = 'prob_start.p'
PROB_TRANS_P = 'prob_trans.p'
PROB_EMIT_P = 'prob_emit.p'
    
        def _lcut_internal(self, sentence):
        return list(self.__cut_internal(sentence))
    
    print(','.join(tags))
    
    t2 = time.time()
tm_cost = t2-t1