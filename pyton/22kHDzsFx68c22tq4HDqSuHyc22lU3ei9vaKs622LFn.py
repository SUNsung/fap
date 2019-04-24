
        
                inputs[i, cur_pos:next_pos] = cur_stream[i][0][:how_many]
        char_inputs[i, cur_pos:next_pos] = cur_stream[i][1][:how_many]
        global_word_ids[i, cur_pos:next_pos] = cur_stream[i][2][:how_many]
        targets[i, cur_pos:next_pos] = cur_stream[i][0][1:how_many+1]
        weights[i, cur_pos:next_pos] = 1.0
    
    import os
import pickle as pkl
import numpy as np
import tensorflow as tf
import utils
    
      Returns:
    mask1: mask for first sentence
    mask2: mask for second sentence
  '''
  mask1_start, mask2_start = [], []
  while sent1[0] == sent2[0]:
    sent1 = sent1[1:]
    sent2 = sent2[1:]
    mask1_start.append(0.)
    mask2_start.append(0.)
    
      Returns:
    loss: Scalar tf.float32 total loss.
  '''
  cross_entropy_loss = tf.nn.sparse_softmax_cross_entropy_with_logits(
      labels=gen_labels, logits=gen_logits)
  # Maximize the dis_values (minimize the negative)
  gan_loss = -dis_values
  loss_matrix = tf.where(is_real_input, cross_entropy_loss, gan_loss)
  loss = tf.reduce_mean(loss_matrix)
  return loss
    
      The `attention_decoder_fn_train` is called with a set of the user arguments
  and returns the `decoder_fn`, which can be passed to the
  `dynamic_rnn_decoder`, such that
    
        Examples:
        以下示例使用了 TensorLayer 库来快速构建模型；本来想用 Keras，但是无法完整获取中间输出的 shape
    
    print(word_vec)
print(model.wv['aam'])
'''
[ 0.02210762 -0.10488641  0.05512805  0.09150169  0.00725085]
[ 0.02210762 -0.10488641  0.05512805  0.09150169  0.00725085]
'''