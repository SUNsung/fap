
        
            This could be extended by having nested blocks, sorting them recursively
    and flattening the end structure into a list of lines. Revision 2 maybe ^.^.
'''
    
            self.assertFalse(sns_listener.get_topic_by_arn(topic_arn))
        sns_listener.do_create_topic(topic_arn)
        self.assertTrue(sns_listener.get_topic_by_arn(topic_arn) is not None)
        sns_listener.do_subscribe(
            topic_arn,
            'http://localhost:1234/listen',
            'http',
            sub_arn,
            {}
        )
        self.assertTrue(sns_listener.get_subscription_by_arn(sub_arn))
        sns_listener.do_unsubscribe(sub_arn)
        self.assertFalse(sns_listener.get_subscription_by_arn(sub_arn))
    
            part_head, _ = part.split(b'\r\n\r\n', 1)
        head_parsed = parse_data(part_head.lstrip(b'\r\n'))
    
        # make sure domain deletion works
    es_client.delete_elasticsearch_domain(DomainName=TEST_DOMAIN_NAME)
    assert_false(TEST_DOMAIN_NAME in
        [d['DomainName'] for d in es_client.list_domain_names()['DomainNames']])
    
            # Create a large amount of items
        num_items = 20
        for i in range(0, num_items):
            item = {PARTITION_KEY: 'id%s' % i, 'data1': 'foobar123 ' * 1000}
            table.put_item(Item=item)
    
    
class SigmoidActivator(object):
    def forward(self, weighted_input):
        return 1.0 / (1.0 + np.exp(-weighted_input))
    
    
# 将图像画出来
def plot(linear_unit):
    '''
    Desc:
        将我们训练好的线性单元对数据的分类情况作图画出来
    Args:
        linear_unit —— 训练好的线性单元
    Returns:
        None
    '''
    # 引入绘图的库
    import matplotlib.pyplot as plt
    # 获取训练数据：特征 input_vecs 与 对应的标签 labels
    input_vecs, labels = get_training_dataset()
    # figure() 创建一个 Figure 对象，与用户交互的整个窗口，这个 figure 中容纳着 subplots
    fig = plt.figure()
    # 在 figure 对象中创建 1行1列中的第一个图
    ax = fig.add_subplot(111)
    # scatter(x, y) 绘制散点图，其中的 x,y 是相同长度的数组序列
    ax.scatter(map(lambda x: x[0], input_vecs), labels)
    # 设置权重
    weights = linear_unit.weights
    # 设置偏置项
    bias = linear_unit.bias
    # range(start, stop, step) 从 start 开始，到 stop 结束，步长为 step
    x = range(0, 12, 1)
    # 计算感知器对输入计算得到的值
    y = map(lambda x: weights[0] * x + bias, x)
    # 将图画出来
    ax.plot(x, y)
    # 将最终的图展示出来
    plt.show()
    
        def init_state_vec(self):
        '''
        初始化保存状态的向量
        '''
        state_vec_list = []
        state_vec_list.append(np.zeros(
            (self.state_width, 1)))
        return state_vec_list
    
        def calc_delta(self, parent_delta, parent):
        '''
        计算每个节点的delta
        '''
        parent.delta = parent_delta
        if parent.children:
            # 根据式2计算每个子节点的delta
            children_delta = np.dot(self.W.T, parent_delta) * (
                self.activator.backward(parent.children_data)
            )
            # slices = [(子节点编号，子节点delta起始位置，子节点delta结束位置)]
            slices = [(i, i * self.node_width, 
                        (i + 1) * self.node_width)
                        for i in range(self.child_count)]
            # 针对每个子节点，递归调用calc_delta函数
            for s in slices:
                self.calc_delta(children_delta[s[1]:s[2]], 
                                parent.children[s[0]])
    
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
    
    
class MRmean(MRJob):
    def __init__(self, *args, **kwargs):  # 对数据初始化
        super(MRmean, self).__init__(*args, **kwargs)
        self.inCount = 0
        self.inSum = 0
        self.inSqSum = 0
    
    def reduce(key, values, mu=0.1):
  sumETE = None
  sumETDe = None