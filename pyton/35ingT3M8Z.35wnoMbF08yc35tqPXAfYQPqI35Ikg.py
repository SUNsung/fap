
        
            assert bump_version(Version('0.56.0'), 'minor') == \
        Version('0.57.0')
    assert bump_version(Version('0.56.3'), 'minor') == \
        Version('0.57.0')
    assert bump_version(Version('0.56.0.b3'), 'minor') == \
        Version('0.56.0')
    assert bump_version(Version('0.56.3.b3'), 'minor') == \
        Version('0.57.0')
    assert bump_version(Version('0.56.0.dev0'), 'minor') == \
        Version('0.56.0')
    assert bump_version(Version('0.56.2.dev0'), 'minor') == \
        Version('0.57.0')
    
        global_steps_float = tf.cast(global_steps_int, tf.float32)
    warmup_steps_float = tf.cast(warmup_steps_int, tf.float32)