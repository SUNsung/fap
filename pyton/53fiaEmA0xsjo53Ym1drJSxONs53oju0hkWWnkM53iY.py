
        
                if n_dim == 2:
            return tf.nn.softmax(x)
        else:
            e = tf.exp(x - tf.reduce_max(x, axis=axis, keepdims=True))
            s = tf.reduce_sum(e, axis=axis, keepdims=True)
            return e / s
    '''
    return tf.nn.softmax(x, axis=axis)
    
        return o
    
    
    
    sum_ngrams = 0
for s in sentences:
    for w in s:
        w = w.lower()
        # from gensim.models._utils_any2vec import compute_ngrams
        ret = compute_ngrams(w, min_ngrams, max_ngrams)
        print(ret)
        sum_ngrams += len(ret)
'''
['<h', 'he', 'el', 'll', 'lo', 'o>', '<he', 'hel', 'ell', 'llo', 'lo>', '<hel', 'hell', 'ello', 'llo>']
['<w', 'wo', 'or', 'rl', 'ld', 'd>', '<wo', 'wor', 'orl', 'rld', 'ld>', '<wor', 'worl', 'orld', 'rld>']
['<!', '!>', '<!>']
['<i', 'i>', '<i>']
['<a', 'am', 'm>', '<am', 'am>', '<am>']
['<h', 'hu', 'ua', 'ay', 'y>', '<hu', 'hua', 'uay', 'ay>', '<hua', 'huay', 'uay>']
['<.', '.>', '<.>']
'''
assert sum_ngrams == len(model.wv.vectors_ngrams)
print(sum_ngrams)  # 57
print()