
        
            return publicKey, privateKey
    
    #Some examples
    
            a *= a
        b >>= 1
    
    
# ALTERNATIVE METHODS  
# ctbi= characters that must be in password
# i= how many letters or characters the password length will be 
def password_generator(ctbi, i):
  # Password generator = full boot with random_number, random_letters, and random_character FUNCTIONS
  pass  # Put your code here...
    
        Code is a simple port of what is already in the /scripts directory
    
        Returns:
    
    SPLIT_LINE = '-----------'
    
    # 因为 'a', 'aa', 'aaa' 中都只含有 '<a' ，所以它们直积上都只是 '<a'
print(model.wv['a'])
print(model.wv['aa'])
print(model.wv['aaa'])
print(model.wv['<a'])
'''
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
'''
print()
    
    
def testSignedInt():
    check(b'\x99\xd0\x00\xd0\x80\xd0\xff\xd1\x00\x00\xd1\x80\x00'
          b'\xd1\xff\xff\xd2\x00\x00\x00\x00\xd2\x80\x00\x00\x00'
          b'\xd2\xff\xff\xff\xff', (0,
                                    -128,
                                    -1,
                                    0,
                                    -32768,
                                    -1,
                                    0,
                                    -2147483648,
                                    -1, ))
    
    
Your class ``TestDtype`` will inherit all the tests defined on
``BaseDtypeTests``. pytest's fixture discover will supply your ``dtype``
wherever the test requires it. You're free to implement additional tests.
    
        with tm.ensure_clean(filename) as path:
        df.to_json(path, compression=to_compression)
        result = pd.read_json(path, compression=read_compression)
        tm.assert_frame_equal(result, df)

    
    
def test_bin32():
    header = b'\xc6'
    data = b'x' * 65536
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 5
    assert b[0:1] == header
    assert b[1:5] == b'\x00\x01\x00\x00'
    assert b[5:] == data
    assert unpackb(b) == data
    
        packer = msgpack.Packer()
    
    UDF = 0  # undefined
OTH = 1  # other
ASC = 2  # ascii capital letter
ASS = 3  # ascii small letter
ACV = 4  # accent capital vowel
ACO = 5  # accent capital other
ASV = 6  # accent small vowel
ASO = 7  # accent small other
CLASS_NUM = 8  # total classes
    
            if self.state == ProbingState.DETECTING:
            if (self.distribution_analyzer.got_enough_data() and
                    (self.get_confidence() > self.SHORTCUT_THRESHOLD)):
                self._state = ProbingState.FOUND_IT
    
    EUCTW_CLS = (
    2,2,2,2,2,2,2,2,  # 00 - 07
    2,2,2,2,2,2,0,0,  # 08 - 0f
    2,2,2,2,2,2,2,2,  # 10 - 17
    2,2,2,0,2,2,2,2,  # 18 - 1f
    2,2,2,2,2,2,2,2,  # 20 - 27
    2,2,2,2,2,2,2,2,  # 28 - 2f
    2,2,2,2,2,2,2,2,  # 30 - 37
    2,2,2,2,2,2,2,2,  # 38 - 3f
    2,2,2,2,2,2,2,2,  # 40 - 47
    2,2,2,2,2,2,2,2,  # 48 - 4f
    2,2,2,2,2,2,2,2,  # 50 - 57
    2,2,2,2,2,2,2,2,  # 58 - 5f
    2,2,2,2,2,2,2,2,  # 60 - 67
    2,2,2,2,2,2,2,2,  # 68 - 6f
    2,2,2,2,2,2,2,2,  # 70 - 77
    2,2,2,2,2,2,2,2,  # 78 - 7f
    0,0,0,0,0,0,0,0,  # 80 - 87
    0,0,0,0,0,0,6,0,  # 88 - 8f
    0,0,0,0,0,0,0,0,  # 90 - 97
    0,0,0,0,0,0,0,0,  # 98 - 9f
    0,3,4,4,4,4,4,4,  # a0 - a7
    5,5,1,1,1,1,1,1,  # a8 - af
    1,1,1,1,1,1,1,1,  # b0 - b7
    1,1,1,1,1,1,1,1,  # b8 - bf
    1,1,3,1,3,3,3,3,  # c0 - c7
    3,3,3,3,3,3,3,3,  # c8 - cf
    3,3,3,3,3,3,3,3,  # d0 - d7
    3,3,3,3,3,3,3,3,  # d8 - df
    3,3,3,3,3,3,3,3,  # e0 - e7
    3,3,3,3,3,3,3,3,  # e8 - ef
    3,3,3,3,3,3,3,3,  # f0 - f7
    3,3,3,3,3,3,3,0   # f8 - ff
)
    
            self._last_char = byte_str[-1:]
    
      def run_tester(self, tester):
    with self.test_session() as sess:
      ops = tester.create_model()
      init_op = tf.group(tf.global_variables_initializer(),
                         tf.local_variables_initializer())
      sess.run(init_op)
      output_result = sess.run(ops)
      tester.check_output(output_result)
    
      if FLAGS.do_predict:
    predict_examples = processor.get_test_examples(FLAGS.data_dir)
    if FLAGS.use_tpu:
      # Discard batch remainder if running on TPU
      n = len(predict_examples)
      predict_examples = predict_examples[:(n - n % FLAGS.predict_batch_size)]
    
        orig_tokens = whitespace_tokenize(text)
    split_tokens = []
    for token in orig_tokens:
      if self.do_lower_case:
        token = token.lower()
        token = self._run_strip_accents(token)
      split_tokens.extend(self._run_split_on_punc(token))
    
    
def datingClassTest():
    '''
    对约会网站的测试方法
    :return: 错误数
    '''
    # 设置测试数据的的一个比例（训练数据集比例=1-hoRatio）
    hoRatio = 0.1  # 测试范围,一部分测试一部分作为样本
    # 从文件中加载数据
    datingDataMat, datingLabels = file2matrix('data/2.KNN/datingTestSet2.txt')  # load data setfrom file
    # 归一化数据
    normMat, ranges, minVals = autoNorm(datingDataMat)
    # m 表示数据的行数，即矩阵的第一维
    m = normMat.shape[0]
    # 设置测试的样本数量， numTestVecs:m表示训练样本的数量
    numTestVecs = int(m * hoRatio)
    print('numTestVecs=', numTestVecs)
    errorCount = 0.0
    for i in range(numTestVecs):
        # 对数据测试
        classifierResult = classify0(normMat[i, :], normMat[numTestVecs:m, :], datingLabels[numTestVecs:m], 3)
        print('the classifier came back with: %d, the real answer is: %d' % (classifierResult, datingLabels[i]))
        if (classifierResult != datingLabels[i]): errorCount += 1.0
    print('the total error rate is: %f' % (errorCount / float(numTestVecs)))
    print(errorCount)
    
        def forward(self, x):
        '''
        根据式1-式6进行前向计算
        '''
        self.times += 1
        # 遗忘门
        fg = self.calc_gate(x, self.Wfx, self.Wfh, 
            self.bf, self.gate_activator)
        self.f_list.append(fg)
        # 输入门
        ig = self.calc_gate(x, self.Wix, self.Wih,
            self.bi, self.gate_activator)
        self.i_list.append(ig)
        # 输出门
        og = self.calc_gate(x, self.Wox, self.Woh,
            self.bo, self.gate_activator)
        self.o_list.append(og)
        # 即时状态
        ct = self.calc_gate(x, self.Wcx, self.Wch,
            self.bc, self.output_activator)
        self.ct_list.append(ct)
        # 单元状态
        c = fg * self.c_list[self.times - 1] + ig * ct
        self.c_list.append(c)
        # 输出
        h = og * self.output_activator.forward(c)
        self.h_list.append(h)
    
        def _update_weights(self, input_vec, output, label, rate):
        '''
        Desc:
            按照感知器规则更新权重
        Args:
            input_vec —— 输入向量
            output —— 经过感知器规则计算得到的输出
            label —— 输入向量对应的标签
            rate —— 学习率
        Returns:
            None
        '''
        # 利用感知器规则更新权重
        delta = label - output
        # map() 接收一个函数 f 和一个 list ，并通过把函数 f 依次作用在 list 的每个元素上，得到一个新的 list 返回。比如我们的 f 函数是计算平方， map(f, [1,2,3,4,5]) ===> 返回 [1,4,9,16,25]
        # zip() 接收任意多个（包括 0 个和 1个）序列作为参数，返回一个 tuple 列表。例：x = [1,2,3] y = [4,5,6] z = [7,8,9] xyz = zip(x, y, z) ===> [(1,4,7), (2,5,8), (3,6,9)]
        self.weights = map(lambda (x, w): w + rate * delta * x, zip(input_vec, self.weights))
        # 更新 bias
        self.bias += rate * delta
    
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
    
                # 如果预测正确，并且预测结果的绝对值>=1，因为最大间隔为1, 认为没问题。
            # 否则算是预测错误, 通过预测错误的结果，来累计更新w.
            if labels[i]*p < 1:                        # mapper 代码
                wDelta += labels[i]*dataSet[i, :].A    # 累积变化
        # w通过不断的随机梯度的方式来优化
        w = (1.0 - 1/t)*w + (eta/k)*wDelta             # 在每个 T上应用更改
        # print '-----', w
    # print '++++++', w
    return w