
        
        def main():
    # First, we load the current README into memory as an array of lines
    with open('README.md', 'r') as read_me_file:
        read_me = read_me_file.readlines()
    
    
# Note that with N small, (as it is 25 above), the finite size effects
# will have pretty dramatic effects on the dynamics of the random RNN.
# If you want more complex dynamics, you'll have to run the script a
# lot, or increase N (or g).
    
      T = len(values_t_bxn)
  B, N = values_t_bxn[0].shape
  values_bxtxn = np.zeros([B,T,N])
  for t in range(T):
    values_bxtxn[:,t,:] = values_t_bxn[t]
    
    
def _DumpEmb(vocab):
  '''Dump the softmax weights and word embeddings to files.
    
        if FLAGS.prefix_label and use_prefix:
      label = sequence_example.context.feature['class'].int64_list.value[0]
      review_words = [EOS_INDEX + 1 + label]
    else:
      review_words = []
    review_words.extend([
        f.int64_list.value[0]
        for f in sequence_example.feature_lists.feature_list['token_id'].feature
    ])
    all_words.append(review_words)
  return all_words
    
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
    
      samples = []
  for sequence_id in xrange(min(len(arr), max_num_to_print)):
    buffer_str = ' '.join(
        [str(id_to_word[index]) for index in arr[sequence_id, :]])
    samples.append(buffer_str)
  return samples
    
    
def create_gen_pretrain_op(hparams, cross_entropy_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.gen_pretrain_learning_rate)
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    gen_grads = tf.gradients(cross_entropy_loss, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    gen_pretrain_op = optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    return gen_pretrain_op
    
        elif FLAGS.discriminator_model == 'cnn':
      dis_variable_maps = variable_mapping.cnn()
      dis_init_saver = tf.train.Saver(var_list=dis_variable_maps)
      init_savers['dis_init_saver'] = dis_init_saver
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    
def _ConvertVimDatasToCompletionDatas( response_data ):
  return [ ConvertVimDataToCompletionData( x )
           for x in response_data ]

    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def FormatDebugInfoResponse_ExtraConfFoundAndLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': True,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found and loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
      return {
    'extra_data': extra_data,
    'insertion_text': insertion_text,
    'menu_text': menu_text,
    'extra_menu_info': extra_menu_info,
    'kind': kind,
    'detailed_info': detailed_info,
  }
    
      if parsed_args.coverage:
    nosetests_args += [ '--with-coverage',
                        '--cover-erase',
                        '--cover-package=ycm',
                        '--cover-html' ]