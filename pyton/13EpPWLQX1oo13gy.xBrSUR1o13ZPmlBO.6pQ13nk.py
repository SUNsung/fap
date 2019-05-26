
        
            # Define the loss function and the optimization algorithm
    self.cross_entropies = tf.nn.sparse_softmax_cross_entropy_with_logits(
        logits=self.scores, labels=tf.reduce_mean(self.batch_labels))
    self.cost = tf.reduce_sum(self.cross_entropies, name='cost')
    self.global_step = tf.Variable(0, name='global_step', trainable=False)
    self.optimizer = tf.train.AdamOptimizer()
    self.train_op = self.optimizer.minimize(self.cost,
                                            global_step=self.global_step)
    
        Args:
      data_dict: The dictionary of data (training and validation) used for
        training and evaluation of the model, respectively.
    
      keys = ['train_truth', 'train_ext_input', 'valid_data',
          'valid_truth', 'valid_ext_input', 'valid_train']
  for k in keys:
    if k not in data_dict:
      data_dict[k] = None
    
    
def _LoadModel(gd_file, ckpt_file):
  '''Load the model from GraphDef and Checkpoint.
    
      for batch in range(num_batches):
    x = np.zeros([batch_size, num_steps], dtype=np.int32)
    y = np.zeros([batch_size, num_steps], dtype=np.int32)
    w = np.zeros([batch_size, num_steps], dtype=np.float)
    
      if epoch_size == 0:
    raise ValueError('epoch_size == 0, decrease batch_size or num_steps')
    
      if FLAGS.data_set == 'ptb':
    model_str = 'Model'
  else:
    model_str = 'model'
    
    
class CompleterAvailableRequest( BaseRequest ):
  def __init__( self, filetypes ):
    super( CompleterAvailableRequest, self ).__init__()
    self.filetypes = filetypes
    self._response = None
    
    
from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
@YouCompleteMeInstance()
@patch( 'ycm.client.base_request._logger', autospec = True )
@patch( 'ycm.vimsupport.PostVimMessage', new_callable = ExtendedMock )
def SendCompletionRequest_ErrorFromServer_test( ycm,
                                                post_vim_message,
                                                logger ):
  current_buffer = VimBuffer( 'buffer' )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with MockCompletionRequest( ServerError( 'Server error' ) ):
      ycm.SendCompletionRequest()
      ok_( ycm.CompletionRequestReady() )
      response = ycm.GetCompletionResponse()
      logger.exception.assert_called_with( 'Error while handling server '
                                           'response' )
      post_vim_message.assert_has_exact_calls( [
        call( 'Server error', truncate = True )
      ] )
      assert_that(
        response,
        has_entries( {
          'completions': empty(),
          'completion_start_column': -1
        } )
      )

    
    
def MockAsyncServerResponseException( exception ):
  '''Return a fake future object that is complete, but raises an exception.
  Suitable for mocking a response future within a client request. For example:
    
    # If false, no module index is generated.
#html_use_modindex = True
    
    
if __name__ == '__main__':
    main()
    
        def insert(self, node):
        self.array.append(node)
        return self.array[-1]