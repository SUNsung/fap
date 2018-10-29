
        
          return spikes_e
    
      for sequence in sequences:
    indices = []
    for embedding in sequence:
      indices.append(np.argmax(embedding))
    batch_of_indices.append(indices)
  return batch_of_indices
    
    
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
    
      Args:
    hparams:  MaskGAN hyperparameters.
  '''
  ## Dictionary of init savers.
  init_savers = {}
    
    
def find_all_ngrams(dataset, n):
  '''Generate a list of all ngrams.'''
  return zip(*[dataset[i:] for i in xrange(n)])
    
        for node in doctree.traverse(settingslist_node):
        settings_list = nodes.bullet_list()
        settings_list.extend([make_setting_element(d, app, fromdocname)
                              for d in sorted(env.scrapy_all_settings,
                                              key=itemgetter('setting_name'))
                              if fromdocname != d['docname']])
        node.replace_self(settings_list)
    
        name = 'qps'
    benchurl = 'http://localhost:8880/'
    
    from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
        requires_project = False
    crawler_process = None
    
        def short_desc(self):
        return 'Check spider contracts'
    
        def download_request(self, request, spider):
        scheme = urlparse_cached(request).scheme
        handler = self._get_handler(scheme)
        if not handler:
            raise NotSupported('Unsupported URL scheme '%s': %s' %
                               (scheme, self._notconfigured[scheme]))
        return handler.download_request(request, spider)
    
    The status of the built html response will be, by default
- 200 in case of success
- 404 in case specified file was not found in the server (ftp code 550)
    
        def get(self, msgid):
        return str(msgid)
    
    
class Delegator(object):
    '''
    >>> delegator = Delegator(Delegate())
    >>> delegator.p1
    123
    >>> delegator.p2
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'p2'
    >>> delegator.do_something('nothing')
    'Doing nothing'
    >>> delegator.do_anything()
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'do_anything'
    '''
    
    
if __name__ == '__main__':
    client1 = Client()
    client2 = ClientCoroutine()
    requests = [2, 5, 14, 22, 18, 3, 35, 27, 20]
    
        def do_action(self):
        print(self.name, self.action.name, end=' ')
        return self.action
    
    
class MoveFileCommand(object):
    def __init__(self, src, dest):
        self.src = src
        self.dest = dest
    
            return transaction
    
        print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    print(u'Setting Data 1 = 3')
    data1.data = 3
    print(u'Setting Data 2 = 5')
    data2.data = 5
    print(u'Detach HexViewer from data1 and data2.')
    data1.detach(view2)
    data2.detach(view2)
    print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
    
# Getters
def get_list():
    return ingredients.split()
    
    '''
Lazily-evaluated property pattern in Python.
    
        def test_object(queue):
        pool = ObjectPool(queue, True)
        print('Inside func: {}'.format(pool.item))
    
        def set_time_provider(self, time_provider):
        self.time_provider = time_provider
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 2)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 100)
    
        def __init__(self, graph):
        self.graph = graph
    
    
class OutOfService(Unit):
    def __init__(self, HierachicalStateMachine):
        self._hsm = HierachicalStateMachine