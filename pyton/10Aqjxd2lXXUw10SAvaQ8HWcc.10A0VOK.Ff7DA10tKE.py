      # Finally, divide by the total number of paths.
      # The number of paths for each pair has a shape [batch_size, 1],
      # We duplicate it output_dim times along the second axis.
      self.num_paths = tf.clip_by_value(
          tf.reduce_sum(self.path_counts, 1), 1, np.inf)
      self.num_paths = tf.tile(tf.expand_dims(self.num_paths, -1),
                               [1, self.path_dim])
    
    from synthetic_data_utils import generate_data, generate_rnn
from synthetic_data_utils import get_train_n_valid_inds
from synthetic_data_utils import nparray_and_transpose
from synthetic_data_utils import spikify_data, split_list_by_inds
import tensorflow as tf
from utils import write_datasets
    
      def __init__(self, test_data_name='wsc273'):
    vocab_file = os.path.join(FLAGS.data_dir, 'vocab.txt')
    self.vocab = utils.CharsVocabulary(vocab_file, 50)
    assert test_data_name in ['pdp60', 'wsc273'], (
        'Test data must be pdp60 or wsc273, got {}'.format(test_data_name))
    self.test_data_name = test_data_name
    
      Raises:
    ValueError: if batch_size or num_steps are too high.
  '''
  raw_data = np.array(raw_data, dtype=np.int32)
    
              eval_feed = {model.inputs: x, model.targets: y, model.present: p}
    
        # We map all indices greater than the vocabulary size to an unknown
    # character.
    indices_batch = np.where(indices_batch < vocab_size, indices_batch,
                             vocab_size - 1)
    
      Returns:
    values:  tf.float32 Tensor of predictions of shape [batch_size,
      sequence_length]
  '''
  if FLAGS.baseline_method == 'critic':
    if FLAGS.discriminator_model == 'seq2seq_vd':
      values = critic_vd.critic_seq2seq_vd_derivative(
          hparams, sequence, is_training, reuse=reuse)
    else:
      raise NotImplementedError
  else:
    raise NotImplementedError
  return values

    
    
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
    
        elif (FLAGS.discriminator_model == 'bidirectional_zaremba' or
          FLAGS.discriminator_model == 'bidirectional_vd'):
      assert FLAGS.language_model_ckpt_dir_reversed is not None, (
          'Need a reversed directory to fill in the backward components.')
      load_fwd_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
      load_bwd_ckpt = tf.train.latest_checkpoint(
          FLAGS.language_model_ckpt_dir_reversed)
      print('Restoring Discriminator from %s and %s.' % (load_fwd_ckpt,
                                                         load_bwd_ckpt))
      tf.logging.info('Restoring Discriminator from %s and %s.' %
                      (load_fwd_ckpt, load_bwd_ckpt))
      dis_fwd_init_saver = init_savers['dis_fwd_init_saver']
      dis_bwd_init_saver = init_savers['dis_bwd_init_saver']
      dis_fwd_init_saver.restore(sess, load_fwd_ckpt)
      dis_bwd_init_saver.restore(sess, load_bwd_ckpt)
    
    
def gen_encoder_seq2seq_nas(hparams):
  '''Returns the NAS Variable name to MaskGAN Variable
  dictionary mapping.  This is a highly restrictive function just for testing.
  This is for the *unidirecitional* seq2seq_nas encoder.
    
    
def main():
    if len(sys.argv) < 2:
        print('No file passed (file should contain Markdown table syntax)')
        sys.exit(1)
    check_format(sys.argv[1])
    if len(errors) > 0:
        for err in errors:
            print(err)
        sys.exit(1)
    
    if __name__ == '__main__':
    num = generateLargePrime()
    print(('Prime number:', num))
    print(('isPrime:', isPrime(num)))

    
    The problem is :
Given two strings A and B. Find the minimum number of operations to string B such that A = B. The permitted operations are removal,  insertion, and substitution.
'''
from __future__ import print_function
    
    	return memo[m][m-1]
    
    	if len(bitString32) != 32:
		raise ValueError('Need length 32')
	newString = ''
	for i in [3,2,1,0]:
		newString += bitString32[8*i:8*i+8]
	return newString
    
    # Mock test below
if False: # change to true to run this test case.
    import sklearn.datasets as ds
    dataset = ds.load_iris()
    k = 3
    heterogeneity = []
    initial_centroids = get_initial_centroids(dataset['data'], k, seed=0)
    centroids, cluster_assignment = kmeans(dataset['data'], k, initial_centroids, maxiter=400,
                                        record_heterogeneity=heterogeneity, verbose=True)
    plot_heterogeneity(heterogeneity, k)

    
        log_predict = np.log(predict+1)
    log_actual = np.log(actual+1)