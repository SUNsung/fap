
        
          # Four initially random vectors for the special tokens: <PAD>, <UNK>, <X>, <Y>
  special_embeddings = np.random.normal(0, 0.1, (4, dim))
  embeddings = np.vstack((special_embeddings, embeddings))
  embeddings = embeddings.astype(np.float32)
    
    
# Note that with N small, (as it is 25 above), the finite size effects
# will have pretty dramatic effects on the dynamics of the random RNN.
# If you want more complex dynamics, you'll have to run the script a
# lot, or increase N (or g).
    
    
data = { 'train_truth': data_train_truth,
         'valid_truth': data_valid_truth,
         'train_data' : data_train_spiking,
         'valid_data' : data_valid_spiking,
         'train_percentage' : train_percentage,
         'nreplications' : nreplications,
         'dt' : FLAGS.dt,
         'u_std' : FLAGS.u_std,
         'max_firing_rate': FLAGS.max_firing_rate,
         'train_inputs_u': train_inputs_u,
         'valid_inputs_u': valid_inputs_u,
         'train_outputs_u': train_outputs_u,
         'valid_outputs_u': valid_outputs_u,
         'conversion_factor' : FLAGS.max_firing_rate/(1.0/FLAGS.dt) }
    
      if FLAGS.mode == 'eval':
    dataset = data_utils.LM1BDataset(FLAGS.input_data, vocab)
    _EvalModel(dataset)
  elif FLAGS.mode == 'sample':
    _SampleModel(FLAGS.prefix, vocab)
  elif FLAGS.mode == 'dump_emb':
    _DumpEmb(vocab)
  elif FLAGS.mode == 'dump_lstm_emb':
    _DumpSentenceEmbedding(FLAGS.sentence, vocab)
  else:
    raise Exception('Mode not supported.')
    
      def assign_probs(self, sentences, test_data_name='wsc273'):
    '''Return prediction accuracy using this LM for a test.'''
    
        prediction_correctness.append(
        (scoring2['joint_prob'] > scoring1['joint_prob']) ==
         scoring2['correctness'])
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
    
def create_critic_train_op(hparams, critic_loss, global_step):
  '''Create Discriminator train op.'''
  with tf.name_scope('train_critic'):
    critic_optimizer = tf.train.AdamOptimizer(hparams.critic_learning_rate)
    output_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('critic')
    ]
    
    
def gen_encoder_seq2seq_nas(hparams):
  '''Returns the NAS Variable name to MaskGAN Variable
  dictionary mapping.  This is a highly restrictive function just for testing.
  This is for the *unidirecitional* seq2seq_nas encoder.
    
      with tf.variable_scope('dis', reuse=reuse):
    cell_fwd = tf.contrib.rnn.LayerNormBasicLSTMCell(
        hparams.dis_rnn_size, forget_bias=1.0, reuse=reuse)
    cell_bwd = tf.contrib.rnn.LayerNormBasicLSTMCell(
        hparams.dis_rnn_size, forget_bias=1.0, reuse=reuse)
    if FLAGS.zoneout_drop_prob > 0.0:
      cell_fwd = zoneout.ZoneoutWrapper(
          cell_fwd,
          zoneout_drop_prob=FLAGS.zoneout_drop_prob,
          is_training=is_training)
      cell_bwd = zoneout.ZoneoutWrapper(
          cell_bwd,
          zoneout_drop_prob=FLAGS.zoneout_drop_prob,
          is_training=is_training)
    
    from .cifar import load_batch
from ..utils.data_utils import get_file
from .. import backend as K
import numpy as np
import os
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        loss = MSE_MAE_loss(0.3)
        inputs = keras.layers.Input((2,))
        outputs = keras.layers.Dense(1, name='model_output')(inputs)
        model = keras.models.Model(inputs, outputs)
        model.compile(optimizer='sgd', loss={'model_output': loss})
        model.fit(np.random.rand(256, 2), np.random.rand(256, 1))
        model.save(model_filename)
    
    batch_size = 128
num_classes = 10
epochs = 20
    
        # Returns
        Tensor with one scalar loss entry per sample.
    '''
    def _logcosh(x):
        return x + K.softplus(-2. * x) - K.log(2.)
    return K.mean(_logcosh(y_pred - y_true), axis=-1)
    
    *TL;DR80
Delays the eval of an expr until its value is needed and avoids repeated evals.
'''
    
    ### OUTPUT ###
# [{'objectb': 'b-value'}, {'default': 'default'}, {'objecta': 'a-value'}]

    
        def _send_diagnostics_request(self):
        return 'send diagnostic request'
    
    '''
*What is this pattern about?
The Decorator pattern is used to dynamically add a new feature to an
object without changing its implementation. It differs from
inheritance because the new feature is added only to that particular
object, not to the entire subclass.