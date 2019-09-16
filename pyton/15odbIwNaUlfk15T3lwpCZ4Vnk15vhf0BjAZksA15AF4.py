
        
        
session_json_serializer = TaggedJSONSerializer()
    
                environ['flask._preserve_context'] = self.preserve_context
        else:
            kwargs.setdefault('environ_overrides', {})[
                'flask._preserve_context'
            ] = self.preserve_context
            kwargs.setdefault('environ_base', self.environ_base)
            builder = EnvironBuilder(self.application, *args, **kwargs)
    
        app.register_blueprint(bp, url_prefix='/py')
    
        from main_app import app
    
        s.register(Tag2, index=None)
    assert isinstance(s.order[-1], Tag2)

    
        [[1,2,3],[1,2,3]]-[[1,2,3],[1,2,0]]
    (A1-A2)^2+(B1-B2)^2+(c1-c2)^2
    '''
    # 取平方
    sqDiffMat = diffMat ** 2
    # 将矩阵的每一行相加
    sqDistances = sqDiffMat.sum(axis=1)
    # 开方
    distances = sqDistances ** 0.5
    # 根据距离排序从小到大的排序，返回对应的索引位置
    # argsort() 是将x中的元素从小到大排列，提取其对应的index（索引），然后输出到y。
    # 例如：y=array([3,0,2,1,4,5]) 则，x[3]=-1最小，所以y[0]=3;x[5]=9最大，所以y[5]=5。
    # print 'distances=', distances
    sortedDistIndicies = distances.argsort()
    # print 'distances.argsort()=', sortedDistIndicies
    
        def backward(self, output):
        return output * (1 - output)
    
    
def test():
    labels, data_set = transpose(train_data_set())
    net = Network([8, 3, 8])
    rate = 0.5
    mini_batch = 20
    epoch = 10
    for i in range(epoch):
        net.train(labels, data_set, rate, mini_batch)
        print('after epoch %d loss: %f' % (
            (i + 1),
            net.loss(labels[-1], net.predict(data_set[-1]))
        ))
        rate /= 2
    correct_ratio(net)
    
           # 计算对上一次输出h的权重梯度
        for t in range(self.times, 0, -1):
            # 计算各个时刻的梯度
            (Wfh_grad, bf_grad,
            Wih_grad, bi_grad,
            Woh_grad, bo_grad,
            Wch_grad, bc_grad) = (
                self.calc_gradient_t(t))
            # 实际梯度是各时刻梯度之和
            self.Wfh_grad += Wfh_grad
            self.bf_grad += bf_grad
            self.Wih_grad += Wih_grad
            self.bi_grad += bi_grad
            self.Woh_grad += Woh_grad
            self.bo_grad += bo_grad
            self.Wch_grad += Wch_grad
            self.bc_grad += bc_grad
    
        def norm(self, label):
        '''
        内部函数，将一个值转换为10维标签向量
        '''
        label_vec = []
        label_value = self.to_int(label)
        for i in range(10):
            if i == label_value:
                label_vec.append(0.9)
            else:
                label_vec.append(0.1)
        return label_vec
    
    '''
如果上面的代码运行没有问题，说明numpy安装没有问题
'''

    
        def map_fin(self):
        labels = self.data[:, -1]
        X = self.data[:, :-1]                # 将数据重新形成 X 和 Y
        if self.w == 0:
            self.w = [0.001] * shape(X)[1]   # 在第一次迭代时，初始化 w
        for index in self.dataList:
            p = mat(self.w)*X[index, :].T    # calc p=w*dataSet[key].T
            if labels[index]*p < 1.0:
                yield (1, ['u', index])      # 确保一切数据包含相同的key
        yield (1, ['w', self.w])             # 它们将在同一个 reducer
        yield (1, ['t', self.t])