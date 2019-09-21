
        
        
class FormatterPlugin(BasePlugin):
    group_name = 'format'
    
        def unregister(self, plugin: Type[BasePlugin]):
        self.remove(plugin)
    
    
PACKAGES = [
    'httpie',
    'Pygments',
    'requests',
    'certifi',
    'urllib3',
    'idna',
    'chardet',
    'PySocks',
]
    
    from setuptools import setup, find_packages
from setuptools.command.test import test as TestCommand
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
        file_path = './data.txt'
    data = load_data(file_path)
    
            o = tf.nn.conv2d(x, W, strides=strides, padding=padding) + b
        o = act_fn(o)
    
    
# TODO(huay): char_cnn_embedding
def char_cnn_embedding(x, c_embed_size=8, share_cnn_weights=True, name='char_cnn_embedding', reuse=None):
    '''
    In:  [N, max_n_word, max_n_char]
    Out: [N, max_n_word, c_embed_size]
    
    
def classify0(inX, dataSet, labels, k):
    '''
    inx[1,2,3]
    DS=[[1,2,3],[1,2,0]]
    inX: 用于分类的输入向量
    dataSet: 输入的训练样本集
    labels: 标签向量
    k: 选择最近邻居的数目
    注意：labels元素数目和dataSet行数相同；程序使用欧式距离公式.
    
    
class ReluActivator(object):
    def forward(self, weighted_input):
        #return weighted_input
        return max(0, weighted_input)
    
            # 计算对本次输入x的权重梯度
        xt = x.transpose()
        self.Wfx_grad = np.dot(self.delta_f_list[-1], xt)
        self.Wix_grad = np.dot(self.delta_i_list[-1], xt)
        self.Wox_grad = np.dot(self.delta_o_list[-1], xt)
        self.Wcx_grad = np.dot(self.delta_ct_list[-1], xt)
    
        Args:
        numSV       Sigma长度   
        thresh      判断的阈值
    '''
    # 构建一个列表
    myMat = imgLoadData('data/14.SVD/0_5.txt')
    
        # 接受输入数据流
    def map(self, key, val):  # 需要 2 个参数，求数据的和与平方和
        if False:
            yield
        inVal = float(val)
        self.inCount += 1
        self.inSum += inVal
        self.inSqSum += inVal*inVal
    
    
def batchPegasos(dataSet, labels, lam, T, k):
    '''batchPegasos()