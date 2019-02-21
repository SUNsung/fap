
        
        # write out the dataset
write_datasets(FLAGS.save_dir, FLAGS.datafile_name, datasets)
print ('Saved to ', os.path.join(FLAGS.save_dir,
                                 FLAGS.datafile_name + '_' + dataset_name))

    
      train_path = os.path.join(data_path, 'train_lm.tfrecords')
  valid_path = os.path.join(data_path, 'test_lm.tfrecords')
    
      samples = []
  for sequence_id in xrange(min(len(arr), max_num_to_print)):
    buffer_str = ' '.join(
        [str(id_to_word[index]) for index in arr[sequence_id, :]])
    samples.append(buffer_str)
  return samples
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
      if FLAGS.dis_share_embedding:
    assert hparams.dis_rnn_size == hparams.gen_rnn_size, (
        'If you wish to share Discriminator/Generator embeddings, they must be'
        ' same dimension.')
    with tf.variable_scope('gen/rnn', reuse=True):
      embedding = tf.get_variable('embedding',
                                  [FLAGS.vocab_size, hparams.gen_rnn_size])
    
    
class Server(threading.Thread):
    '''Dummy server using for unit testing'''
    WAIT_EVENT_TIMEOUT = 5
    
            for attr, value in state.items():
            setattr(self, attr, value)
    
    import sys
    
        If 'value' is None, do nothing'''
    value_changed = value is not None
    if value_changed:
        old_value = os.environ.get(env_name)
        os.environ[env_name] = value
    try:
        yield
    finally:
        if value_changed:
            if old_value is None:
                del os.environ[env_name]
            else:
                os.environ[env_name] = old_value
    
        def _colision_resolution(self, key, data=None):
        new_key = self.hash_function(key + 1)
    
    from matplotlib import pyplot as plt
def plot_heterogeneity(heterogeneity, k):
    plt.figure(figsize=(7,4))
    plt.plot(heterogeneity, linewidth=4)
    plt.xlabel('# Iterations')
    plt.ylabel('Heterogeneity')
    plt.title('Heterogeneity of clustering over time, K={0:d}'.format(k))
    plt.rcParams.update({'font.size': 16})
    plt.show()
    
        log_predict = np.log(predict+1)
    log_actual = np.log(actual+1)
    
    ### OUTPUT ###
# Floor: One | Size: Big
# Floor: More than One | Size: Small
# Floor: One | Size: Big and fancy

    
    *References:
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
https://fkromer.github.io/python-pattern-references/design/#factory-method
https://sourcemaking.com/design_patterns/factory_method
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(10, 20)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 30)
    
    
class Unit(object):
    def __init__(self, HierachicalStateMachine):
        self.hsm = HierachicalStateMachine
    
    
class BusinessLogic(object):
    ''' Business logic holding data store instances '''
    
    *TL;DR80
Provides a simpler unified interface to a complex system.
'''