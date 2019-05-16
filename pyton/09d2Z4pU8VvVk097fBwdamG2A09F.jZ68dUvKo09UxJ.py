
        
            def test_no_upgrade_http(self):
        c.secure = False
        self._setSessionCookie(days_old=60)
        upgrade_cookie_security()
        self.assertFalse(c.cookies[g.login_cookie].dirty)
    
        def test_ftue_autocreate(self):
        request = MagicMock()
        context = MagicMock()
        request.cookies = {}
        loid = LoId.load(request, context, create=True)
        self.assertIsNotNone(loid.loid)
        self.assertIsNotNone(loid.created)
        self.assertTrue(loid.new)
    
        def test_no_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
        url = self.provider.resize_image(image)
        self.assertEqual(url, 'http://s3.amazonaws.com/a.jpg')
    
        def test_future_header(self):
        body = '{'user': 'reddit', 'password': 'hunter2'}'
        self.assert_invalid(
            body,
            header='2:awesomefuturespec',
            error=signing.ERRORS.UNKOWN_GLOBAL_VERSION,
            global_version=2,
        )
    
        def test_attr_whitelist(self):
        testcase = '<div><a><a><em onclick='alert(1)'>FOO!</em></a></a></div>'
        self.assertFragmentRaises(testcase, SoupUnsupportedAttrError)
    
    '''
如果上面的代码运行没有问题，说明numpy安装没有问题
'''

    
        # 测试 randCent() 函数是否正常运行。
    # 首先，先看一下矩阵中的最大值与最小值
    print('min(dataMat[:, 0])=', min(dataMat[:, 0]))
    print('min(dataMat[:, 1])=', min(dataMat[:, 1]))
    print('max(dataMat[:, 1])=', max(dataMat[:, 1]))
    print('max(dataMat[:, 0])=', max(dataMat[:, 0]))
    
        Args:
        dataMat         训练数据集
        user            用户编号
        simMeas         相似度计算方法
        item            未评分的物品编号
    Returns:
        ratSimTotal/simTotal     评分（0～5之间的值）
    '''
    # 得到数据集中的物品数目
    n = shape(dataMat)[1]
    # 初始化两个评分值
    simTotal = 0.0
    ratSimTotal = 0.0
    # 遍历行中的每个物品（对用户评过分的物品进行遍历，并将它与其他物品进行比较）
    for j in range(n):
        userRating = dataMat[user, j]
        # 如果某个物品的评分值为0，则跳过这个物品
        if userRating == 0:
            continue
        # 寻找两个用户都评级的物品
        # 变量 overLap 给出的是两个物品当中已经被评分的那个元素的索引ID
        # logical_and 计算x1和x2元素的真值。
        overLap = nonzero(logical_and(dataMat[:, item].A > 0, dataMat[:, j].A > 0))[0]
        # 如果相似度为0，则两着没有任何重合元素，终止本次循环
        if len(overLap) == 0:
            similarity = 0
        # 如果存在重合的物品，则基于这些重合物重新计算相似度。
        else:
            similarity = simMeas(dataMat[overLap, item], dataMat[overLap, j])
        # print 'the %d and %d similarity is : %f'(iten,j,similarity)
        # 相似度会不断累加，每次计算时还考虑相似度和当前用户评分的乘积
        # similarity  用户相似度，   userRating 用户评分
        simTotal += similarity
        ratSimTotal += similarity * userRating
    if simTotal == 0:
        return 0
    # 通过除以所有的评分总和，对上述相似度评分的乘积进行归一化，使得最后评分在0~5之间，这些评分用来对预测值进行排序
    else:
        return ratSimTotal/simTotal
    
        def map(self, mapperId, inVals):  # 需要 2 个参数
        # input: nodeId, ('w', w-vector) OR nodeId, ('x', int)
        if False:
            yield
        if inVals[0] == 'w':                  # 积累 w向量
            self.w = inVals[1]
        elif inVals[0] == 'x':
            self.dataList.append(inVals[1])   # 累积数据点计算
        elif inVals[0] == 't':                # 迭代次数
            self.t = inVals[1]
        else:
            self.eta = inVals                 # 这用于 debug， eta未在map中使用
    
    
def loadDataSet(fileName):
    dataMat = []
    labelMat = []
    fr = open(fileName)
    for line in fr.readlines():
        lineArr = line.strip().split('\t')
        # dataMat.append([float(lineArr[0]), float(lineArr[1]), float(lineArr[2])])
        dataMat.append([float(lineArr[0]), float(lineArr[1])])
        labelMat.append(float(lineArr[2]))
    return dataMat, labelMat