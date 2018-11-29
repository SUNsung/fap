
        
            Args:
      z_t_bxu: sample to compute likelihood for at time t.
      z_tm1_bxu (optional): sample condition probability of z_t upon.
    
      n_to_plot = 10
  scale = 1.0
  nrows = 7
  plt.subplot(nrows,2,1+subplot_cidx)
    
    # pick which RNN is used on each trial
rnn_to_use = rng.randint(2, size=E)
ext_input = np.repeat(np.expand_dims(rnn_to_use, axis=1), ntimesteps, axis=1)
ext_input = np.expand_dims(ext_input, axis=2)  # these are 'a's' in the paper
    
    import os
import h5py
import json
    
      if sentence.find('<S>') != 0:
    sentence = '<S> ' + sentence
    
    
def wasserstein_discriminator_loss(real_values, fake_values):
  '''Wasserstein discriminator loss.
    
    # Dependency imports
    
      real_labels = tf.ones([FLAGS.batch_size, FLAGS.sequence_length])
  dis_loss_real = tf.losses.sigmoid_cross_entropy(
      real_labels, real_predictions, weights=missing)
  dis_loss_fake = tf.losses.sigmoid_cross_entropy(
      targets_present, fake_predictions, weights=missing)
    
    
def create_dis_pretrain_op(hparams, dis_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.dis_pretrain_learning_rate)
    dis_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('dis')
    ]
    if FLAGS.dis_update_share_embedding and FLAGS.dis_share_embedding:
      shared_embedding = [
          v for v in tf.trainable_variables()
          if v.op.name == 'gen/decoder/rnn/embedding'
      ][0]
      dis_vars.append(shared_embedding)
    dis_grads = tf.gradients(dis_loss, dis_vars)
    dis_grads_clipped, _ = tf.clip_by_global_norm(dis_grads,
                                                  FLAGS.grad_clipping)
    dis_pretrain_op = optimizer.apply_gradients(
        zip(dis_grads_clipped, dis_vars), global_step=global_step)
    return dis_pretrain_op