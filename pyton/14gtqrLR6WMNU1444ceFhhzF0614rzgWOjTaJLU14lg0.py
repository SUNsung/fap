
        
            Returns:
      A numpy array with the same shape as rates_bxtxd, but with the event
      counts.
    '''
    
    ## Sample Generation.
## Binary and setup FLAGS.
tf.app.flags.DEFINE_enum('sample_mode', 'TRAIN',
                         [SAMPLE_TRAIN, SAMPLE_VALIDATION],
                         'Dataset to sample from.')
tf.app.flags.DEFINE_string('output_path', '/tmp', 'Model output directory.')
tf.app.flags.DEFINE_boolean(
    'output_masked_logs', False,
    'Whether to display for human evaluation (show masking).')
tf.app.flags.DEFINE_integer('number_epochs', 1,
                            'The number of epochs to produce.')
    
      Returns:
    loss: Scalar tf.float32 total loss.
  '''
  cross_entropy_loss = tf.nn.sparse_softmax_cross_entropy_with_logits(
      labels=gen_labels, logits=gen_logits)
  gan_loss = -tf.log(dis_predictions)
  loss_matrix = tf.where(is_real_input, cross_entropy_loss, gan_loss)
  return tf.reduce_mean(loss_matrix)
    
      return variable_mapping
    
    
def _create_attention_score_fn(name,
                               num_units,
                               attention_option,
                               reuse,
                               dtype=tf.float32):
  '''Different ways to compute attention scores.