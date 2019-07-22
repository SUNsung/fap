
        
                if network_ok:
            self.last_check_time = time.time()
            self.report_ok()
            xlog.debug('network %s is ok, cost:%d ms', self.type, 1000 * (time.time() - time_now))
        else:
            xlog.warn('network %s fail', self.type)
            self.network_stat = 'Fail'
            self.last_check_time = time.time()
    
            if cmd.startswith('#'):
            log.write('%s' % cmd)
            continue
    
    - RecognitionException
  - MismatchedRangeException
  - MismatchedSetException
    - MismatchedNotSetException
    .
  - MismatchedTokenException
  - MismatchedTreeNodeException
  - NoViableAltException
  - EarlyExitException
  - FailedPredicateException
  .
.
    
    
class IdentityActivator(object):
    def forward(self, weighted_input):
        return weighted_input
    
    
if __name__ == '__main__':
    '''
    Desc:
        main 函数，训练我们的线性单元，并进行预测
    Args:
        None
    Returns:
        None
    '''
    # 首先训练我们的线性单元
    linear_unit = train_linear_unit()
    # 打印训练获得的权重 和 偏置
    print(linear_unit)
    # 测试
    print('Work 3.4 years, monthly salary = %.2f' % linear_unit.predict([3.4]))
    print('Work 15 years, monthly salary = %.2f' % linear_unit.predict([15]))
    print('Work 1.5 years, monthly salary = %.2f' % linear_unit.predict([1.5]))
    print('Work 6.3 years, monthly salary = %.2f' % linear_unit.predict([6.3]))
    plot(linear_unit)

    
    
def train_and_perceptron():
    '''
    Desc:
        使用 and 真值表来训练我们的感知器
    Args:
        None
    Returns:
        p —— 返回训练好的感知器
    '''
    # 创建感知器，输入参数的个数是 2 个（因为 and 是个二元函数），激活函数为 f
    p = Perceptron(2, f)
    # 进行训练，迭代 10 轮，学习速率是我们设定的 rate ，为 0.1
    input_vecs, labels = get_training_dataset()
    p.train(input_vecs, labels, 10, 0.1)
    # 返回训练好的感知器
    return p
    
        def dump(self, **kwArgs):
        print('root.data: %s' % self.root.data)
        print('root.children_data: %s' % self.root.children_data)
        if kwArgs.has_key('dump_grad'):
            print('W_grad: %s' % self.W_grad)
            print('b_grad: %s' % self.b_grad)
    
    
datArr, labelList = loadDataSet('data/15.BigData_MapReduce/testSet.txt')
datMat = mat(datArr)
# finalWs = seqPegasos(datMat, labelList, 2, 5000)
finalWs = batchPegasos(datMat, labelList, 2, 50, 100)
print(finalWs)
    
        if sumETDe == None:
      # create sumETDe with correct dimensions
      sumETDe = ETDe
    else:
      sumETDe += ETDe
    
        # Returns
        A Keras model instance.
    '''
    if weights not in {'imagenet', None}:
        raise ValueError('The `weights` argument should be either '
                         '`None` (random initialization) or `imagenet` '
                         '(pre-training on ImageNet).')
    # Determine proper input shape
    if K.image_dim_ordering() == 'th':
        if include_top:
            input_shape = (3, 224, 224)
        else:
            input_shape = (3, None, None)
    else:
        if include_top:
            input_shape = (224, 224, 3)
        else:
            input_shape = (None, None, 3)
    
        # Arguments
        include_top: whether to include the 3 fully-connected
            layers at the top of the network.
        weights: one of `None` (random initialization)
            or 'imagenet' (pre-training on ImageNet).
        input_tensor: optional Keras tensor (i.e. output of `layers.Input()`)
            to use as image input for the model.
    
    with tf.device('/cpu:0'):
  sum = tf.add_n(c1) #Addition of all elements in c1, i.e. A^n + B^n
    
            # Init params
        self.W_i = theano.shared(gauss_weight(n_in, n_h), 'W_i', borrow=True)
        self.W_f = theano.shared(gauss_weight(n_in, n_h), 'W_f', borrow=True)
        self.W_c = theano.shared(gauss_weight(n_in, n_h), 'W_c', borrow=True)
        self.W_o = theano.shared(gauss_weight(n_in, n_h), 'W_o', borrow=True)
    
    energy_exp = T.exp(energy - T.max(energy, axis=1, keepdims=True))
    
    
def step(coeff, power, prior_value, free_var):
    return prior_value + (coeff * (free_var ** power))
    
    
def sample_from_pvect(pvect):
    ''' Provided utility function: given a symbolic vector of
    probabilities (which MUST sum to 1), sample one element
    and return its index.
    '''
    onehot_sample = rng.multinomial(n=1, pvals=pvect)
    sample = onehot_sample.argmax()
    return sample
    
            TODO: Needs to combine timezone with date as one field
        '''
        date_time = None
        time_zone_parsed = None