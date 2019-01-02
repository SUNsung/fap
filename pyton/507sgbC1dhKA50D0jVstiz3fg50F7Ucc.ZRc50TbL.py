
        
            # Define the loss function and the optimization algorithm
    self.cross_entropies = tf.nn.sparse_softmax_cross_entropy_with_logits(
        logits=self.scores, labels=self.labels)
    self.cost = tf.reduce_sum(self.cross_entropies, name='cost')
    self.global_step = tf.Variable(0, name='global_step', trainable=False)
    self.optimizer = tf.train.AdamOptimizer()
    self.train_op = self.optimizer.minimize(
        self.cost, global_step=self.global_step)
    
        # L2 regularization on the generator, normalized by number of parameters.
    self.l2_cost = tf.constant(0.0)
    if self.hps.l2_gen_scale > 0.0 or self.hps.l2_con_scale > 0.0:
      l2_costs = []
      l2_numels = []
      l2_reg_var_lists = [tf.get_collection('l2_gen_reg'),
                          tf.get_collection('l2_con_reg')]
      l2_reg_scales = [self.hps.l2_gen_scale, self.hps.l2_con_scale]
      for l2_reg_vars, l2_scale in zip(l2_reg_var_lists, l2_reg_scales):
        for v in l2_reg_vars:
          numel = tf.reduce_prod(tf.concat(axis=0, values=tf.shape(v)))
          numel_f = tf.cast(numel, tf.float32)
          l2_numels.append(numel_f)
          v_l2 = tf.reduce_sum(v*v)
          l2_costs.append(0.5 * l2_scale * v_l2)
      self.l2_cost = tf.add_n(l2_costs) / tf.add_n(l2_numels)
    
    # Check to make sure the RNN is the one we used in the paper.
if N == 50:
  assert abs(rnn['W'][0,0] - 0.06239899) < 1e-8, 'Error in random seed?'
  rem_check = nreplications * train_percentage
  assert  abs(rem_check - int(rem_check)) < 1e-8, \
    'Train percentage  * nreplications should be integral number.'
    
    # not the best way to do this but E is small enough
rates = []
spikes = []
for trial in xrange(E):
  if rnn_to_use[trial] == 0:
    rates.append(rates_a[trial])
    spikes.append(spikes_a[trial])
  else:
    rates.append(rates_b[trial])
    spikes.append(spikes_b[trial])
    
            how_many = min(len(cur_stream[i][0]) - 1, num_steps - cur_pos)
        next_pos = cur_pos + how_many
    
      def word_to_id(self, word):
    if word in self._word_to_id:
      return self._word_to_id[word]
    else:
      if word.lower() in self._word_to_id:
        return self._word_to_id[word.lower()]
    return self.unk
    
    
def wasserstein_discriminator_loss_intrabatch(values, is_real_input):
  '''Wasserstein discriminator loss.  This is an odd variant where the value
  difference is between the real tokens and the fake tokens within a single
  batch.
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
        return g.db
    
    import pytest
from flaskr import create_app
from flaskr.db import get_db, init_db
    
    
@implements_to_string
class DebugFilesKeyError(KeyError, AssertionError):
    '''Raised from request.files during debugging.  The idea is that it can
    provide a better error message than just a generic KeyError/BadRequest.
    '''
    
        def dispatch_request(self):
        '''Subclasses have to override this method to implement the
        actual view function code.  This method is called with all
        the arguments from the URL rule.
        '''
        raise NotImplementedError()