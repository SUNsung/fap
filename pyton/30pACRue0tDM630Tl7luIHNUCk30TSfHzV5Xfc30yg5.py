
        
        
class Resource(jose.Field):
    '''Resource MITM field.'''
    
        def test_kid_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url, kid=self.kid)
        self.assertEqual(jws.signature.combined.nonce, self.nonce)
        self.assertEqual(jws.signature.combined.url, self.url)
        self.assertEqual(jws.signature.combined.kid, self.kid)
        self.assertEqual(jws.signature.combined.jwk, None)
        # TODO: check that nonce is in protected header
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title,
#  author, documentclass [howto, manual, or own class]).
latex_documents = [
    (master_doc, 'certbot-dns-cloudxns.tex', u'certbot-dns-cloudxns Documentation',
     u'Certbot Project', 'manual'),
]
    
    .. code-block:: bash
   :caption: To acquire a single certificate for both ``example.com`` and
             ``www.example.com``
    
        def backwards(self, orm):
        # Removing unique constraint on 'GroupCommitResolution', fields ['group_id', 'commit_id']
        db.delete_unique('sentry_groupcommitresolution', ['group_id', 'commit_id'])
    
            # User chose to not deal with backwards NULL issues for 'Environment.project_id'
        raise RuntimeError(
            'Cannot reverse this migration. 'Environment.project_id' and its values cannot be restored.'
        )
    
    
def make_handler(value):
    return BitHandler(
        keys=(
            'project:read', 'project:write', 'project:admin', 'project:releases', 'team:read',
            'team:write', 'team:admin', 'event:read', 'event:write', 'event:admin', 'org:read',
            'org:write', 'org:admin', 'member:read', 'member:write', 'member:admin',
        ),
        value=value,
    )
    
        dest = pathlib.Path('dist')
    dest.mkdir(exist_ok=True)
    
        result = s[lambda x: [True, False, True, True]]
    tm.assert_series_equal(result, s.iloc[[0, 2, 3]])
    
        def __init__(self, values, dtype=None, copy=False, context=None):
        for val in values:
            if not isinstance(val, decimal.Decimal):
                raise TypeError('All values must be of type ' +
                                str(decimal.Decimal))
        values = np.asarray(values, dtype=object)
    
        ('smaller', None, '10pt'),
    ('smaller', '18pt', '15pt'),
    ('larger', None, '{pt:f}pt'.format(pt=14.4)),
    ('larger', '15pt', '18pt'),
])
def test_css_relative_font_size(size, relative_to, resolved):
    if relative_to is None:
        inherited = None
    else:
        inherited = {'font-size': relative_to}
    assert_resolves('font-size: {size}'.format(size=size),
                    {'font-size': resolved}, inherited=inherited)

    
        def to_int(self, byte):
        '''
        将unsigned byte字符转换为整数
        '''
        return struct.unpack('B', byte)[0]
    
    
class RecurrentLayer(object):
    '''
    Desc:
        用 RecurrentLayer 类来实现一个循环层。下面的代码是初始化一个循环层，可以在构造函数中设置卷积层的超参数。我们注意到，循环层有两个权重数组，U和W
    '''
    def __init__(self, input_width, state_width,
                 activator, learning_rate):
        self.input_width = input_width
        self.state_width = state_width
        self.activator = activator
        self.learning_rate = learning_rate
        self.times = 0       # 当前时刻初始化为t0
        self.state_list = [] # 保存各个时刻的state
        self.state_list.append(np.zeros(
            (state_width, 1)))           # 初始化s0
        self.U = np.random.uniform(-1e-4, 1e-4,
            (state_width, input_width))  # 初始化U
        self.W = np.random.uniform(-1e-4, 1e-4,
            (state_width, state_width))  # 初始化W
    
    
# 从文本中构建矩阵，加载文本文件，然后处理
def loadDataSet(fileName):  # 通用函数，用来解析以 tab 键分隔的 floats（浮点数）
    dataSet = []
    fr = open(fileName)
    for line in fr.readlines():
        curLine = line.strip().split('\t')
        fltLine = map(float, curLine)  # 映射所有的元素为 float（浮点数）类型
        dataSet.append(fltLine)
    return dataSet
    
    
if __name__ == '__main__':
    
        Args:
        dataMat    特征集合
        labels     分类结果集合
        lam        固定值
        T          迭代次数
        k          待处理列表大小
    Returns:
        w          回归系数
    '''
    m, n = shape(dataSet)
    w = zeros(n)  # 回归系数
    dataIndex = range(m)
    for t in range(1, T+1):
        wDelta = mat(zeros(n))  # 重置 wDelta
    
    
    y_pred = np.argmax(clf.predict(X_test), axis=1)
    X_test = X_test.reshape(-1, 8*8)
    # Reduce dimension to 2D using PCA and plot the results
    Plot().plot_in_2d(X_test, y_pred, title='Convolutional Neural Network', accuracy=accuracy, legend_labels=range(10))
    
        print ('-- Classification Tree --')
    
    
# ...........
#  LOAD DATA
# ...........
data = datasets.load_digits()
digit1 = 1
digit2 = 8
idx = np.append(np.where(data.target == digit1)[0], np.where(data.target == digit2)[0])
y = data.target[idx]
# Change labels to {0, 1}
y[y == digit1] = 0
y[y == digit2] = 1
X = data.data[idx]
X = normalize(X)
    
        accuracy = accuracy_score(y_test, y_pred)
    
        # Color map
    cmap = plt.get_cmap('viridis')
    
    # Import helper functions
from mlfromscratch.utils import make_diagonal, normalize, train_test_split, accuracy_score
from mlfromscratch.deep_learning.activation_functions import Sigmoid
from mlfromscratch.utils import Plot
from mlfromscratch.supervised_learning import LogisticRegression
    
        #-----
    # MLP
    #-----
    
        y_pred = np.argmax(clf.predict(X_test), axis=1)
    y_test = np.argmax(y_test, axis=1)