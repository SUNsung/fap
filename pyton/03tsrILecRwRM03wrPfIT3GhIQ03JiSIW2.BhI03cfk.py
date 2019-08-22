
        
        
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.
    
        return o

    
        Args:
        x(tf.Tensor):
        n_unit(int):
        name(str):
        reuse(bool)
    '''
    return dense(x, n_unit, act_fn=linear, name=(name or 'linear_dense'), reuse=reuse)