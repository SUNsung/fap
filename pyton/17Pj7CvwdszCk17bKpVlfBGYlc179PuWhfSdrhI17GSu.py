
        
        
class GroupChat(Chat):
    
        def mapper_sort(self, key, value):
        '''Construct key to ensure proper sorting.
    
      # Generating more data on train set.
  if FLAGS.sample_mode == SAMPLE_TRAIN:
    data_set = train_data
  elif FLAGS.sample_mode == SAMPLE_VALIDATION:
    data_set = valid_data
  else:
    raise NotImplementedError
    
      Returns:
    loss:  Scalar tf.float32 loss.
    
        batch_of_metrics.append(metrics)
  return batch_of_metrics
    
        baselines = []
    for t in xrange(FLAGS.sequence_length):
      # Calculate baseline only for missing tokens.
      num_missing = tf.reduce_sum(baseline_missing_list[t])
    
    
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
    
    from six.moves import xrange
    
            flash(error)
    
        rv = parse_changelog()
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
    Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
    This module provides the capabilities for the Requests hooks system.
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        Usage::
    
        def prepare_request(self, request):
        '''Constructs a :class:`PreparedRequest <PreparedRequest>` for
        transmission and returns it. The :class:`PreparedRequest` has settings
        merged from the :class:`Request <Request>` instance and those of the
        :class:`Session`.
    
        mod_params = {}
    mod_params['state'] = module.params.get('state')
    mod_params['topic'] = module.params.get('topic')
    mod_params['view'] = module.params.get('view')
    
    
if __name__ == '__main__':
    main()

    
                    _remove_firewall_server(module,
                                        oneandone_conn,
                                        firewall_policy['id'],
                                        server_ip_id)
            _check_mode(module, chk_changed)
            firewall_policy = get_firewall_policy(oneandone_conn, firewall_policy['id'], True)
            changed = True
    
    
def protocol_to_string(protocol):
    protocol = protocol_to_tuple(protocol)
    if protocol[0] is True:
        return 'Tcp'
    elif protocol[1] is True:
        return 'Udp'
    elif protocol[2] is True:
        return 'Icmp'
    elif protocol[3] is True:
        return 'Other'
    elif protocol[4] is True:
        return 'Any'
    
    # add noise
y += 0.01 * np.random.normal((n_samples,))
    
        if revision is None:
        return
    if domain not in ('py', 'pyx'):
        return
    if not info.get('module') or not info.get('fullname'):
        return
    
        output_file.close()

    
    Demonstrate how model complexity influences both prediction accuracy and
computational performance.
    
    import numpy as np
from matplotlib import pyplot as plt
    
    for connectivity in (None, knn_graph):
    for n_clusters in (30, 3):
        plt.figure(figsize=(10, 4))
        for index, linkage in enumerate(('average',
                                         'complete',
                                         'ward',
                                         'single')):
            plt.subplot(1, 4, index + 1)
            model = AgglomerativeClustering(linkage=linkage,
                                            connectivity=connectivity,
                                            n_clusters=n_clusters)
            t0 = time.time()
            model.fit(X)
            elapsed_time = time.time() - t0
            plt.scatter(X[:, 0], X[:, 1], c=model.labels_,
                        cmap=plt.cm.nipy_spectral)
            plt.title('linkage=%s\n(time %.2fs)' % (linkage, elapsed_time),
                      fontdict=dict(verticalalignment='top'))
            plt.axis('equal')
            plt.axis('off')
    
    plt.legend(loc='best')
    
    cases = [
    (KMeans, 'k-means++', {}),
    (KMeans, 'random', {}),
    (MiniBatchKMeans, 'k-means++', {'max_no_improvement': 3}),
    (MiniBatchKMeans, 'random', {'max_no_improvement': 3, 'init_size': 500}),
]
    
    from sklearn.cluster import MiniBatchKMeans, KMeans
from sklearn.metrics.pairwise import pairwise_distances_argmin
from sklearn.datasets.samples_generator import make_blobs
    
        def test_pool_behavior_with_single_object_inside(self):
        sample_queue = queue.Queue()
        sample_queue.put('yam')
        with ObjectPool(sample_queue) as obj:
            # print('Inside with: {}'.format(obj))
            self.assertEqual(obj, 'yam')
        self.assertFalse(sample_queue.empty())
        self.assertTrue(sample_queue.get() == 'yam')
        self.assertTrue(sample_queue.empty())
    
    
class BaseRegisteredClass(object):
    '''
    Any class that will inherits from BaseRegisteredClass will be included
    inside the dict RegistryHolder.REGISTRY, the key being the name of the
    class and the associated value, the class itself.
    '''
    __metaclass__ = RegistryHolder
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
    
class Card2(metaclass=FlyweightMeta):
    def __init__(self, *args, **kwargs):
        # print('Init {}: {}'.format(self.__class__, (args, kwargs)))
        pass
    
        @staticmethod
    def check_range(request):
        if 0 <= request < 10:
            print('request {} handled in handler 0'.format(request))
            return True