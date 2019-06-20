
        
                When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup.get(query)
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        MOTORCYCLE = 0
    COMPACT = 1
    LARGE = 2
    
    
class SpendingByCategory(MRJob):
    
    
class State(Enum):
    unvisited = 0
    visited = 1
    
     update - update list of available packages
    
    
def test_get_new_command():
    new_command = get_new_command(Command('sudo apt update', match_output))
    assert new_command == 'sudo apt list --upgradable'
    
      aws help
  aws <command> help
  aws <command> <subcommand> help
aws: error: argument operation: Invalid choice, valid choices are:
    
    
no_such_subcommand_old = '''No such subcommand
    
    
@parametrize_extensions
@parametrize_filename
@parametrize_script
def test_side_effect(ext, tar_error, filename, unquoted, quoted, script, fixed):
    tar_error(unquoted.format(ext))
    side_effect(Command(script.format(filename.format(ext)), ''), None)
    assert set(os.listdir('.')) == {unquoted.format(ext), 'd'}
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'home-assistant', 'Home Assistant Documentation',
     [author], 1)
]
    
    
class OutOfData(UnpackException):
    pass
    
    
def check(length, obj):
    v = packb(obj)
    assert len(v) == length, \
        '%r length should be %r but get %r' % (obj, length, len(v))
    assert unpackb(v, use_list=0) == obj
    
    
def testMap():
    check(b'\x96'
          b'\xde\x00\x00'
          b'\xde\x00\x01\xc0\xc2'
          b'\xde\x00\x02\xc0\xc2\xc3\xc2'
          b'\xdf\x00\x00\x00\x00'
          b'\xdf\x00\x00\x00\x01\xc0\xc2'
          b'\xdf\x00\x00\x00\x02\xc0\xc2\xc3\xc2', ({}, {None: False},
                                                    {True: False,
                                                     None: False}, {},
                                                    {None: False},
                                                    {True: False,
                                                     None: False}))

    
        with tm.assert_produces_warning(CSSWarning):
        assert_resolves(
            '{shorthand}: 1pt 1pt 1pt 1pt 1pt'.format(shorthand=shorthand), {})
    
    
def test_correct_type_nested_array():
    unpacker = Unpacker()
    unpacker.feed(packb({'a': ['b', 'c', 'd']}))
    try:
        unpacker.read_array_header()
        assert 0, 'should raise exception'
    except UnexpectedTypeException:
        assert 1, 'okay'
    
        qxyz = _quat[:, 2:]
    qxyz[np.squeeze(np.abs(np.sin(angle/2))) >= 1e-5] = (qxyz * np.sin(angle/2))[np.squeeze(np.abs(np.sin(angle/2))) >= 1e-5]
    return np.concatenate([qw, qxyz], axis=-1)
    
    def rollout(env):
    global human_agent_action, human_wants_restart, human_sets_pause
    human_wants_restart = False
    obser = env.reset()
    skip = 0
    total_reward = 0
    total_timesteps = 0
    while 1:
        if not skip:
            #print('taking action {}'.format(human_agent_action))
            a = human_agent_action
            total_timesteps += 1
            skip = SKIP_CONTROL
        else:
            skip -= 1
    
        def test_successful_interaction(self):
        obs = self.env.reset()
        self.assertEqual(obs, 0)
        obs, reward, done, _ = self.env.step([self.RIGHT, 1, 0])
        self.assertEqual(obs, 1)
        self.assertGreater(reward, 0)
        self.assertFalse(done)
        obs, reward, done, _ = self.env.step([self.LEFT, 1, 1])
        self.assertTrue(done)
        self.assertGreater(reward, 0)
    
    
def train_and_evaluate():
    last_error_ratio = 1.0
    epoch = 0
    train_data_set, train_labels = transpose(get_training_data_set())
    test_data_set, test_labels = transpose(get_test_data_set())
    network = Network([784, 100, 10])
    while True:
        epoch += 1
        network.train(train_labels, train_data_set, 0.01, 1)
        print('%s epoch %d finished, loss %f' % (now(), epoch, 
            network.loss(train_labels[-1], network.predict(train_data_set[-1]))))
        if epoch % 2 == 0:
            error_ratio = evaluate(network, test_data_set, test_labels)
            print('%s after epoch %d, error ratio is %f' % (now(), epoch, error_ratio))
            if error_ratio > last_error_ratio:
                break
            else:
                last_error_ratio = error_ratio
    
    
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
    
    # 转化关系， 数组转化为矩阵
randMat = mat(randArray)
'''
.I 表示对矩阵求逆(可以利用矩阵的初等变换)
   意义：逆矩阵是一个判断相似性的工具。逆矩阵A与列向量p相乘后，将得到列向量q，q的第i个分量表示p与A的第i个列向量的相似度。
   参考案例链接：
   https://www.zhihu.com/question/33258489
   http://blog.csdn.net/vernice/article/details/48506027
.T 表示对矩阵转置(行列颠倒)
    * 等同于: .transpose()
.A 返回矩阵基于的数组
    参考案例链接：
    http://blog.csdn.net/qq403977698/article/details/47254539
'''
invRandMat = randMat.I
TraRandMat = randMat.T
ArrRandMat = randMat.A
# 输出结果
print('randArray=(%s) \n' % type(randArray), randArray)
print('randMat=(%s) \n' % type(randMat), randMat)
print('invRandMat=(%s) \n' % type(invRandMat), invRandMat)
print('TraRandMat=(%s) \n' % type(TraRandMat), TraRandMat)
print('ArrRandMat=(%s) \n' % type(ArrRandMat), ArrRandMat)
# 矩阵和逆矩阵 进行求积 (单位矩阵，对角线都为1嘛，理论上4*4的矩阵其他的都为0)
myEye = randMat*invRandMat
# 误差
print(myEye - eye(4))
    
    
def show_picture(dataMat, reconMat):
    fig = plt.figure()
    ax = fig.add_subplot(111)
    ax.scatter(dataMat[:, 0].flatten().A[0], dataMat[:, 1].flatten().A[0], marker='^', s=90)
    ax.scatter(reconMat[:, 0].flatten().A[0], reconMat[:, 1].flatten().A[0], marker='o', s=50, c='red')
    plt.show()
    
        SigRecon = mat(eye(numSV) * Sigma[: numSV])
    reconMat = U[:, :numSV] * SigRecon * VT[:numSV, :]
    print('****reconstructed matrix using %d singular values *****' % numSV)
    printMat(reconMat, thresh)
    
    
def map(key, value):
   # input key= class for one training example, e.g. '-1.0'
   classes = [float(item) for item in key.split(',')]   # e.g. [-1.0]
   D = numpy.diag(classes)