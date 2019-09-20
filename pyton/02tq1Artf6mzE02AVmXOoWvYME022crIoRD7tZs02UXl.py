
        
        # Create an instance of Logistic Regression Classifier and fit the data.
logreg.fit(X, Y)
    
    # Load data from https://www.openml.org/d/554
X, y = fetch_openml('mnist_784', version=1, return_X_y=True)
    
        scale : float array with shape (n_features,)
        Array of precomputed sample-wise values to use for scaling.
    '''
    if isinstance(X, sp.csc_matrix):
        inplace_csr_column_scale(X.T, scale)
    elif isinstance(X, sp.csr_matrix):
        inplace_csr_row_scale(X, scale)
    else:
        _raise_typeerror(X)
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
    ax.w_xaxis.set_ticklabels([])
ax.w_yaxis.set_ticklabels([])
ax.w_zaxis.set_ticklabels([])
ax.set_xlabel('Petal width')
ax.set_ylabel('Sepal length')
ax.set_zlabel('Petal length')
ax.set_title('Ground Truth')
ax.dist = 12
    
    This example is meant to illustrate situations where k-means will produce
unintuitive and possibly unexpected clusters. In the first three plots, the
input data does not conform to some implicit assumption that k-means makes and
undesirable clusters are produced as a result. In the last plot, k-means
returns intuitive clusters despite unevenly sized blobs.
'''
print(__doc__)
    
        def test_default_encoder_naive_fails(self):
        from acme.fields import RFC3339Field
        self.assertRaises(
            ValueError, RFC3339Field.default_encoder, datetime.datetime.now())
    
    from acme import test_util
    
    # The reST default role (used for this markup: `text`) to use for all
# documents.
default_role = 'py:obj'
    
            self.assertFalse(self.client.obtain_and_enroll_certificate(domains, None))
    
            # _query_soa | pylint: disable=protected-access
        result = self.rfc2136_client._query_soa(DOMAIN)
    
        def prepare(self):
        '''Memoized plugin preparation.'''
        assert self.initialized
        if self._prepared is None:
            try:
                self._initialized.prepare()
            except errors.MisconfigurationError as error:
                logger.debug('Misconfigured %r: %s', self, error, exc_info=True)
                self._prepared = error
            except errors.NoInstallationError as error:
                logger.debug(
                    'No installation (%r): %s', self, error, exc_info=True)
                self._prepared = error
            except errors.PluginError as error:
                logger.debug('Other error:(%r): %s', self, error, exc_info=True)
                self._prepared = error
            else:
                self._prepared = True
        return self._prepared
    
    jieba.analyse.set_idf_path('../extra_dict/idf.txt.big');
    
    USAGE = 'usage:    python extract_tags_with_weight.py [file name] -k [top k] -w [with weight=1 or 0]'
    
    if len(sys.argv)<2:
    print('usage: extract_topic.py directory [n_topic] [n_top_words]')
    sys.exit(0)
    
    
if len(args) <1:
    print(USAGE)
    sys.exit(1)
    
    log_f = open('1.log','w')
log_f.write(' / '.join(map(str, words)))
    
    
# Create child splits for a node or make terminal  # 创建子分割器，递归分类，直到分类结束
def split(node, max_depth, min_size, n_features, depth):  # max_depth = 10, min_size = 1, n_features=int(sqrt((len(dataset[0])-1)
    left, right = node['groups']
    del(node['groups'])
# check for a no split
    if not left or not right:
        node['left'] = node['right'] = to_terminal(left + right)
        return
# check for max depth
    if depth >= max_depth:   # max_depth=10 表示递归十次，若分类还未结束，则选取数据中分类标签较多的作为结果，使分类提前结束，防止过拟合
        node['left'], node['right'] = to_terminal(left), to_terminal(right)
        return
# process left child
    if len(left) <= min_size:
        node['left'] = to_terminal(left)
    else:
        node['left'] = get_split(left, n_features)  # node['left']是一个字典，形式为{'index':b_index, 'value':b_value, 'groups':b_groups}，所以node是一个多层字典
        split(node['left'], max_depth, min_size, n_features, depth+1)  # 递归，depth+1计算递归层数
# process right child
    if len(right) <= min_size:
        node['right'] = to_terminal(right)
    else:
        node['right'] = get_split(right, n_features)
        split(node['right'], max_depth, min_size, n_features, depth+1)
    
        def backward(self, output):
        return 1 if output > 0 else 0
    
    try:
    reduce         # Python 2
except NameError:  # Python 3
    from functools import reduce
    
    
    def backward(self, x, delta_h, activator):
        '''
        实现LSTM训练算法
        '''
        self.calc_delta(delta_h, activator)
        self.calc_gradient(x)
    
        def to_int(self, byte):
        '''
        将unsigned byte字符转换为整数
        '''
        return struct.unpack('B', byte)[0]
    
        # 计算forward值
    x, d = data_set()
    rl.forward(x[0])
    rl.forward(x[1])
    
    # 求取sensitivity map
    sensitivity_array = np.ones(rl.state_list[-1].shape,
                                dtype=np.float64)
    # 计算梯度
    rl.backward(sensitivity_array, IdentityActivator())
    
    # 检查梯度
    epsilon = 10e-4
    for i in range(rl.W.shape[0]):
        for j in range(rl.W.shape[1]):
            rl.W[i,j] += epsilon
            rl.reset_state()
            rl.forward(x[0])
            rl.forward(x[1])
            err1 = error_function(rl.state_list[-1])
            rl.W[i,j] -= 2*epsilon
            rl.reset_state()
            rl.forward(x[0])
            rl.forward(x[1])
            err2 = error_function(rl.state_list[-1])
            expect_grad = (err1 - err2) / (2 * epsilon)
            rl.W[i,j] += epsilon
            print('weights(%d,%d): expected - actural %f - %f' % (
                i, j, expect_grad, rl.gradient[i,j]))
    
    '''
# NumPy 矩阵和数组的区别
NumPy存在2中不同的数据类型:
    1. 矩阵 matrix
    2. 数组 array
相似点：
    都可以处理行列表示的数字元素
不同点：
    1. 2个数据类型上执行相同的数据运算可能得到不同的结果。
    2. NumPy函数库中的 matrix 与 MATLAB中 matrices 等价。
'''
    
        # 利用PCA对半导体制造数据降维
    dataMat = replaceNanWithMean()
    print(shape(dataMat))
    # 分析数据
    analyse_data(dataMat)
    # lowDmat, reconMat = pca(dataMat, 20)
    # print shape(lowDmat)
    # show_picture(dataMat, reconMat)

    
        # 利用U矩阵将物品转换到低维空间中，构建转换后的物品(物品+4个主要的特征)
    xformedItems = dataMat.T * U[:, :4] * Sig4.I
    print('dataMat', shape(dataMat))
    print('U[:, :4]', shape(U[:, :4]))
    print('Sig4.I', shape(Sig4.I))
    print('VT[:4, :]', shape(VT[:4, :]))
    print('xformedItems', shape(xformedItems))
    
        def __init__(self, *args, **kwargs):
        super(MRsvm, self).__init__(*args, **kwargs)
        self.data = pickle.load(open('/opt/git/MachineLearnidata/15.BigData_MapReduce/svmDat27'))
        self.w = 0
        self.eta = 0.69
        self.dataList = []
        self.k = self.options.batchsize
        self.numMappers = 1
        self.t = 1  # iteration number
    
        ignore_strings = [
        '^.*/assert_less_equal/.*$',
        '^.*/dilation_rate$',
        '^.*/Tensordot/concat$',
        '^.*/Tensordot/concat/axis$',
        '^testing/.*$',
    ]
    
      total_written = 0
  for (inst_index, instance) in enumerate(instances):
    input_ids = tokenizer.convert_tokens_to_ids(instance.tokens)
    input_mask = [1] * len(input_ids)
    segment_ids = list(instance.segment_ids)
    assert len(input_ids) <= max_seq_length
    
    
def model_fn_builder(bert_config, init_checkpoint, learning_rate,
                     num_train_steps, num_warmup_steps, use_tpu,
                     use_one_hot_embeddings):
  '''Returns `model_fn` closure for TPUEstimator.'''