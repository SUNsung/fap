
        
          Args:
    pairs: the word pairs (list of tuple of two strings).
    labels: the gold-standard labels for these pairs (array of rel ID).
    predictions: the predicted labels for these pairs (array of rel ID).
    classes: a list of relation names.
    predictions_file: where to save the predictions.
  '''
  with open(predictions_file, 'w') as f_out:
    for pair, label, pred in zip(pairs, labels, predictions):
      w1, w2 = pair
      f_out.write('\t'.join([w1, w2, classes[label], classes[pred]]) + '\n')

    
    # General note about helping ascribe controller inputs vs dynamics:
#
# If controller is heavily penalized, then it won't have any output.
# If dynamics are heavily penalized, then generator won't make
# dynamics.  Note this l2 penalty is only on the recurrent portion of
# the RNNs, as dropout is also available, penalizing the feed-forward
# connections.
flags.DEFINE_float('l2_gen_scale', L2_GEN_SCALE,
                   'L2 regularization cost for the generator only.')
flags.DEFINE_float('l2_con_scale', L2_CON_SCALE,
                   'L2 regularization cost for the controller only.')
flags.DEFINE_float('co_mean_corr_scale', CO_MEAN_CORR_SCALE,
                   'Cost of correlation (thru time)in the means of \
                   controller output.')
    
      # Compute the PCs.
  all_data_mean_nx1 = np.mean(all_data_nxtc, axis=1, keepdims=True)
  all_data_zm_nxtc = all_data_nxtc - all_data_mean_nx1
  corr_mat_nxn = np.dot(all_data_zm_nxtc, all_data_zm_nxtc.T)
  evals_n, evecs_nxn = np.linalg.eigh(corr_mat_nxn)
  sidxs = np.flipud(np.argsort(evals_n)) # sort such that 0th is highest
  evals_n = evals_n[sidxs]
  evecs_nxn = evecs_nxn[:,sidxs]
    
        Args:
      filepattern: Dataset file pattern.
      vocab: Vocabulary.
    '''
    self._vocab = vocab
    self._all_shards = tf.gfile.Glob(filepattern)
    tf.logging.info('Found %d shards at %s', len(self._all_shards), filepattern)
    
        fname = os.path.join(FLAGS.save_dir, 'lstm_emb_step_%d.npy' % i)
    with tf.gfile.Open(fname, mode='w') as f:
      np.save(f, lstm_emb)
    sys.stderr.write('LSTM embedding step %d file saved\n' % i)
    
    EOS_INDEX = 0
    
      Returns:
    loss_matrix:  Loss matrix of shape [batch_size, sequence_length].
  '''
  cross_entropy_loss = tf.nn.sparse_softmax_cross_entropy_with_logits(
      labels=gen_labels, logits=gen_logits)
  return cross_entropy_loss
    
      # Construct the vocab_size array.
  new_arr = np.zeros(shape)
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
        # 保存结果
    # 每个结果为一个二元组 [label, score] 分别保存每个样本所在的簇及距离质心的距离
    ret = np.array([[-1, np.inf]] * n)
    
        Returns:
        dict
    '''
    tokens = tokenizer.tokenize(txt)
    tokens = [word_clean(token) for token in tokens]
    
        Args:
        x(tf.Tensor):
        n_unit(int): 
        act_fn:
        name(str):
        reuse(bool):
    '''
    # n_input = tf.shape(x)[-1]  # err: need int but tensor
    n_input = int(x.get_shape()[-1])
    with tf.variable_scope(name or 'dense', reuse=reuse):
        W, b = get_wb([n_input, n_unit])
        o = act_fn(tf.matmul(x, W) + b)
    return o
    
        Returns:
    
    
def repeat(x, n):
    '''
    Examples:
        x.shape == [batch_size, n_input]
        x = repeat(x, n_step)
        x.shape == [batch_size, n_step, n_input]