
        
        # -- Options for LaTeX output ---------------------------------------------
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)
    
    ==========================================  ===================================
``--dns-digitalocean-credentials``          DigitalOcean credentials_ INI file.
                                            (Required)
``--dns-digitalocean-propagation-seconds``  The number of seconds to wait for
                                            DNS to propagate before asking the
                                            ACME server to verify the DNS
                                            record.
                                            (Default: 10)
==========================================  ===================================
    
    
if __name__ == '__main__':
    ''''''
    # _test()
    
        def __init__(self, n_unit, act_fn=relu, name=None):
        ''''''
        self.n_unit = n_unit
        self.act_fn = act_fn
        self.name = name
    
    
    
        References:
        K.repeat()
        tf.tile()
    '''
    assert x.get_shape().ndims == 2
    x = tf.expand_dims(x, axis=1)  # -> [batch_size, 1, n_input]
    return tf.tile(x, [1, n, 1])  # -> [batch_size, n, n_input]
    
    print(word_vec)
print(model.wv['aam'])
'''
[ 0.02210762 -0.10488641  0.05512805  0.09150169  0.00725085]
[ 0.02210762 -0.10488641  0.05512805  0.09150169  0.00725085]
'''