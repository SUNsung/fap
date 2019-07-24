
        
        flags.DEFINE_bool(
    'do_lower_case', True,
    'Whether to lower case the input text. Should be True for uncased '
    'models and False for cased models.')
    
      output_bias = tf.get_variable(
      'output_bias', [num_labels], initializer=tf.zeros_initializer())