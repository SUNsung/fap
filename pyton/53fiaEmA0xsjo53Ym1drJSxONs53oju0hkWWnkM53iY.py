
        
        print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=15,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test,
                            batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
        def get_config(self):
        config = {
            'units': self.units,
            'kernel_initializer': initializers.serialize(self.kernel_initializer),
            'recurrent_initializer':
                initializers.serialize(self.recurrent_initializer),
            'bias_initializer': initializers.serialize(self.bias_initializer),
            'kernel_regularizer': regularizers.serialize(self.kernel_regularizer),
            'recurrent_regularizer':
                regularizers.serialize(self.recurrent_regularizer),
            'bias_regularizer': regularizers.serialize(self.bias_regularizer),
            'activity_regularizer':
                regularizers.serialize(self.activity_regularizer),
            'kernel_constraint': constraints.serialize(self.kernel_constraint),
            'recurrent_constraint':
                constraints.serialize(self.recurrent_constraint),
            'bias_constraint': constraints.serialize(self.bias_constraint)}
        base_config = super(CuDNNGRU, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))
    
        def get_config(self):
        config = {
            'filters': self.filters,
            'kernel_size': self.kernel_size,
            'strides': self.strides,
            'padding': self.padding,
            'activation': activations.serialize(self.activation),
            'use_bias': self.use_bias,
            'kernel_initializer': initializers.serialize(self.kernel_initializer),
            'bias_initializer': initializers.serialize(self.bias_initializer),
            'kernel_regularizer': regularizers.serialize(self.kernel_regularizer),
            'bias_regularizer': regularizers.serialize(self.bias_regularizer),
            'activity_regularizer':
                regularizers.serialize(self.activity_regularizer),
            'kernel_constraint': constraints.serialize(self.kernel_constraint),
            'bias_constraint': constraints.serialize(self.bias_constraint)
        }
        base_config = super(LocallyConnected1D, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))
    
    # Maximum length of input is 'int + int' (e.g., '345+678'). Maximum length of
# int is DIGITS.
MAXLEN = DIGITS + 1 + DIGITS
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
        def compute_output_shape(self, input_shape):
        shape = list(input_shape)
        assert len(shape) == 2  # only valid for 2D tensors
        shape[-1] *= 2
        return tuple(shape)
    
    Output after 4 epochs on CPU: ~0.8146
Time per epoch on CPU (Core i7): ~150s.
'''
    
        def load_module(self, filename, module_path, plugin_type):
        ''' Load the defaults module and add defaults '''
        logger.debug('Adding defaults: (filename: %s, module_path: %s, plugin_type: %s',
                     filename, module_path, plugin_type)
        module = os.path.splitext(filename)[0]
        section = '.'.join((plugin_type, module.replace('_defaults', '')))
        logger.debug('Importing defaults module: %s.%s', module_path, module)
        mod = import_module('{}.{}'.format(module_path, module))
        self.add_section(title=section, info=mod._HELPTEXT)  # pylint:disable=protected-access
        for key, val in mod._DEFAULTS.items():  # pylint:disable=protected-access
            self.add_item(section=section, title=key, **val)
        logger.debug('Added defaults: %s', section)

    
        def get_mask(self):
        ''' The box for every face will be identical, so set the mask just once
            As gaussian blur technically blurs both sides of the mask, reduce the mask ratio by
            half to give a more expected box '''
        logger.debug('Building box mask')
        mask_ratio = self.config['distance'] / 200
        facesize = self.dummy.shape[0]
        erode = slice(round(facesize * mask_ratio), -round(facesize * mask_ratio))
        mask = self.dummy[:, :, -1]
        mask[erode, erode] = 1.0
    
    
class Config(FaceswapConfig):
    ''' Config File for Models '''
    
    
_HELPTEXT = (
    'S3FD Detector options.Fast on GPU, slow on CPU. Can detect more faces and fewer false '
    'positives than other GPU detectors, but is a lot more resource intensive.'
    )
    
        @staticmethod
    def gaussian(new_face, kernel_center, amount):
        ''' Sharpen using gaussian filter '''
        kernel_size = kernel_center[0]
        blur = cv2.GaussianBlur(new_face, kernel_size, 0)  # pylint: disable=no-member
        new_face = cv2.addWeighted(new_face,  # pylint: disable=no-member
                                   1.0 + (0.5 * amount),
                                   blur,
                                   -(0.5 * amount),
                                   0)
        return new_face
    
    
class Annotate():
    ''' Annotate an input image '''
    
        def test_append_last_modified_headers(self):
        xml_with_last_modified = ('<?xml version='1.0' encoding='UTF-8'?>'
                                  '<ListBucketResult xmlns='http://s3.amazonaws.com/doc/2006-03-01/'>'
                                  '  <Name>thanos/Name>'
                                  '  <Contents>'
                                  '    <LastModified>2019-05-27T19:00:16.663Z</LastModified>'
                                  '  </Contents>'
                                  '</ListBucketResult>'
                                  )
        xml_without_last_modified = ('<?xml version='1.0' encoding='UTF-8'?>'
                                     '<ListBucketResult xmlns='http://s3.amazonaws.com/doc/2006-03-01/'>'
                                     '  <Name>thanos/Name>'
                                     '  <Contents>'
                                     '    <NotLastModified>2019-05-27T19:00:16.663Z</NotLastModified>'
                                     '  </Contents>'
                                     '</ListBucketResult>'
                                     )
    
        def test_extract_path_params(self):
        params = apigateway_listener.extract_path_params('/foo/bar', '/foo/{param1}')
        self.assertEqual(params, {'param1': 'bar'})
    
            iam_client.create_user(UserName=test_user_name)
        response = iam_client.create_policy(PolicyName='test-policy',
                                            PolicyDocument=json.dumps(test_policy_document))
        test_policy_arn = response['Policy']['Arn']
        self.assertIn(TEST_AWS_ACCOUNT_ID, test_policy_arn)
        iam_client.attach_user_policy(UserName=test_user_name, PolicyArn=test_policy_arn)
        attached_user_policies = iam_client.list_attached_user_policies(UserName=test_user_name)
        self.assertEqual(len(attached_user_policies['AttachedPolicies']), 1)
        self.assertEqual(attached_user_policies['AttachedPolicies'][0]['PolicyArn'], test_policy_arn)

    
    
class ReluActivator(object):
    def forward(self, weighted_input):
        #return weighted_input
        return max(0, weighted_input)
    
    
def gradient_check_test():
    '''
    Desc:
        梯度检查测试
    Args:
        None
    Returns:
        None
    '''
    # 创建一个有 3 层的网络，每层有 2 个节点
    net = Network([2, 2, 2])
    # 样本的特征
    sample_feature = [0.9, 0.1]
    # 样本对应的标签
    sample_label = [0.9, 0.1]
    # 使用梯度检查来查看是否正确
    gradient_check(net, sample_feature, sample_label)
    
    
# 使用我们的训练数据集对线性单元进行训练
def train_linear_unit():
    '''
    Desc:
        使用训练数据集对我们的线性单元进行训练
    Args:
        None
    Returns:
        lu —— 返回训练好的线性单元
    '''
    # 创建感知器对象，输入参数的个数也就是特征数为 1（工作年限）
    lu = LinearUnit(1)
    # 获取构建的数据集
    input_vecs, labels = get_training_dataset()
    # 训练感知器，迭代 10 轮，学习率为 0.01
    lu.train(input_vecs, labels, 10, 0.01)
    # 返回训练好的线性单元
    return lu
    
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
    
        def inc(self, numOccur):
        '''inc(对count变量增加给定值)
        '''
        self.count += numOccur
    
        # -1表示倒序，返回topN的特征值[-1 到 -(topNfeat+1) 但是不包括-(topNfeat+1)本身的倒叙]
    eigValInd = eigValInd[:-(topNfeat+1):-1]
    # print 'eigValInd2=', eigValInd
    # 重组 eigVects 最大到最小
    redEigVects = eigVects[:, eigValInd]
    # print 'redEigVects=', redEigVects.T
    # 将数据转换到新空间
    # print '---', shape(meanRemoved), shape(redEigVects)
    lowDDataMat = meanRemoved * redEigVects
    reconMat = (lowDDataMat * redEigVects.T) + meanVals
    # print 'lowDDataMat=', lowDDataMat
    # print 'reconMat=', reconMat
    return lowDDataMat, reconMat
    
        def reduce(self, key, packedValues):
        cumN, cumVal, cumSumSq = 0.0, 0.0, 0.0
        for valArr in packedValues:  # 从输入流中获取值
            nj = float(valArr[0])
            cumN += nj
            cumVal += nj*float(valArr[1])
            cumSumSq += nj*float(valArr[2])
        mean = cumVal/cumN
        var = (cumSumSq - 2*mean*cumVal + cumN*mean*mean)/cumN
        yield (mean, var)  # 发出平均值和方差