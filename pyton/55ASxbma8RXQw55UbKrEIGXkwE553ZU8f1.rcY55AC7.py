
        
        with tf.Session() as sess:
  # restore the latest model ckpt
  if FLAGS.checkpoint_path == 'SAMPLE_CHECKPOINT':
    dir_path = os.path.dirname(os.path.realpath(__file__))
    model_checkpoint_path = os.path.join(dir_path, 'trained_itb/model-65000')
  else:
    model_checkpoint_path = FLAGS.checkpoint_path
  try:
    saver.restore(sess, model_checkpoint_path)
    print ('Model restored from', model_checkpoint_path)
  except:
    assert False, ('No checkpoints to restore from, is the path %s correct?'
                   %model_checkpoint_path)
    
      Args:
    datasets: The dictionary of dataset structures.
    npcs:  The number of pcs for each, basically like lfads factors.
    nsamples (optional): Number of samples to take for each dataset.
    ntime (optional): Number of time steps to take in each sample.
    
    
PAD = '<padding>'
    
    import tensorflow as tf
    
      # 0th token always present.
  p = np.concatenate((np.ones((FLAGS.batch_size, 1)), p), axis=1)
    
      Returns:
    loss: Scalar tf.float32 total loss.
  '''
  cross_entropy_loss = tf.nn.sparse_softmax_cross_entropy_with_logits(
      labels=gen_labels, logits=gen_logits)
  gan_loss = -tf.log(dis_predictions)
  loss_matrix = tf.where(is_real_input, cross_entropy_loss, gan_loss)
  return tf.reduce_mean(loss_matrix)
    
        for index, pred in zip(index_batch, pred_batch):
      indices_predictions.append([str(id_to_word[index]), pred])
    batch_of_indices_predictions.append(indices_predictions)
  return batch_of_indices_predictions
    
      Args:
    init_savers:  Dictionary of init_savers.  'init_saver_name': init_saver.
    sess:  tf.Session.
  '''
  ## Load Generator weights from MaskGAN checkpoint.
  if FLAGS.maskgan_ckpt:
    print('Restoring Generator from %s.' % FLAGS.maskgan_ckpt)
    tf.logging.info('Restoring Generator from %s.' % FLAGS.maskgan_ckpt)
    print('Asserting Generator is a seq2seq-variant.')
    tf.logging.info('Asserting Generator is a seq2seq-variant.')
    assert FLAGS.generator_model.startswith('seq2seq')
    init_saver = init_savers['init_saver']
    init_saver.restore(sess, FLAGS.maskgan_ckpt)
    
        yield app
    
    # the signals
from .signals import (
    signals_available,
    template_rendered,
    request_started,
    request_finished,
    got_request_exception,
    request_tearing_down,
    appcontext_tearing_down,
    appcontext_pushed,
    appcontext_popped,
    message_flashed,
    before_render_template,
)
    
            This is often useful when configuration options map directly to
        keyword arguments in functions or class constructors.
    
        def pop(self, exc=_sentinel):
        '''Pops the request context and unbinds it by doing that.  This will
        also trigger the execution of functions registered by the
        :meth:`~flask.Flask.teardown_request` decorator.
    
    from ..utils import get_wb
from ..activations import relu
from ..activations import linear
    
        return o
    
    References:
    [paper] Bidirectional Attention Flow for Machine Comprehension (https://arxiv.org/abs/1611.01603)
    [github/DuReader] https://github.com/baidu/DuReader/blob/master/tensorflow/layers/match_layer.py
    [github/BiDAF(PyTorch)] https://github.com/jojonki/BiDAF/blob/master/layers/bidaf.py
'''
    
        def __call__(self, x):
        '''
        Args:
            x: 注意 x.dtype == float32
        '''
        # x = tf.cast(x, dtype=tf.float32)  # 交给外部处理
        loss_regularization = 0.
        if self.l1:
            loss_regularization += tf.reduce_sum(self.l1 * tf.abs(x))
        if self.l2:
            loss_regularization += tf.reduce_sum(self.l2 * tf.square(x))
        return loss_regularization
    
    SPLIT_LINE = '-----------'
    
    
def permute(x, perm):
    '''
    Examples:
        x.shape == [128, 32, 1]
        x = permute(x, [0, 2, 1])
        x.shape == [128, 1, 32]
    
    
def HandlePollResponse_MultipleDiagnostics_test():
  diagnostics_handler = ExtendedMock()
  messages = [
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER1' ] },
    { 'filepath': 'bar', 'diagnostics': [ 'PLACEHOLDER2' ] },
    { 'filepath': 'baz', 'diagnostics': [ 'PLACEHOLDER3' ] },
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER4' ] },
  ]
  assert_that( _HandlePollResponse( messages, diagnostics_handler ),
               equal_to( True ) )
  diagnostics_handler.UpdateWithNewDiagnosticsForFile.assert_has_exact_calls( [
    call( 'foo', [ 'PLACEHOLDER1' ] ),
    call( 'bar', [ 'PLACEHOLDER2' ] ),
    call( 'baz', [ 'PLACEHOLDER3' ] ),
    call( 'foo', [ 'PLACEHOLDER4' ] )
  ] )