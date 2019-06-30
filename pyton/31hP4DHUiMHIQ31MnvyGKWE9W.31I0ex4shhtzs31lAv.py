
        
        
def main():
    if len(sys.argv) < 2:
        print('No file passed (file should contain Markdown table syntax)')
        sys.exit(1)
    check_format(sys.argv[1])
    if len(errors) > 0:
        for err in errors:
            print(err)
        sys.exit(1)
    
        def test_default_decoder_raises_deserialization_error(self):
        from acme.fields import RFC3339Field
        self.assertRaises(
            jose.DeserializationError, RFC3339Field.default_decoder, '')
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = ['sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode']
    
    # If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#
import os
# import sys
# sys.path.insert(0, os.path.abspath('.'))
    
        return result
    
        def flush(self):
        if self.closed:
            return
    
    def test_record_simple():
    env = gym.make('CartPole-v1')
    rec = VideoRecorder(env)
    env.reset()
    rec.capture_frame()
    rec.close()
    assert not rec.empty
    assert not rec.broken
    assert os.path.exists(rec.path)
    f = open(rec.path)
    assert os.fstat(f.fileno()).st_size > 100
    
        def test_rendering(self):
        env = self.env
        obs = env.reset()
        self.assertEqual(env._get_str_obs(), 'A')
        self.assertEqual(env._get_str_obs(1), 'B')
        self.assertEqual(env._get_str_obs(-1), ' ')
        self.assertEqual(env._get_str_obs(2), ' ')
        self.assertEqual(env._get_str_target(0), 'A')
        self.assertEqual(env._get_str_target(1), 'B')
        # Test numerical alphabet rendering
        env = self.ENV_KLS(base=3, chars=False)
        imprint(env, self.CANNED_INPUT)
        env.reset()
        self.assertEqual(env._get_str_obs(), '0')
        self.assertEqual(env._get_str_obs(1), '1')
    
    
def timeparse(sval):
    '''Parse a time expression, returning it as a number of seconds.  If
    possible, the return value will be an `int`; if this is not
    possible, the return will be a `float`.  Returns `None` if a time
    expression cannot be parsed from the given string.
    
    
class NetworkTest(DockerClientTestCase):
    def test_network_default_labels(self):
        net = Network(self.client, 'composetest', 'foonet')
        net.ensure()
        net_data = net.inspect()
        labels = net_data['Labels']
        assert labels[LABEL_NETWORK] == net.name
        assert labels[LABEL_PROJECT] == net.project
    
        def create_volume(self, name, driver=None, opts=None, external=None, custom_name=False):
        if external:
            custom_name = True
            if isinstance(external, six.text_type):
                name = external
    
        def test_single_path_from_env(self):
        with mock.patch.dict(os.environ):
            os.environ['COMPOSE_FILE'] = 'one.yml'
            environment = Environment.from_env_file('.')
            assert get_config_path_from_options('.', {}, environment) == ['one.yml']
    
        def test_nested_quotes(self):
        assert unquote_path('''hello''') == ''hello''
        assert unquote_path(''hel'lo'') == 'hel'lo'
        assert unquote_path(''hello''') == 'hello''

    
    
def test_invalid_with_space():
    assert timeparse.timeparse('5h 34m 56s') is None
    
    
class TanhActivator(object):
    def forward(self, weighted_input):
        return 2.0 / (1.0 + np.exp(-2 * weighted_input)) - 1.0
    
        # eigVals为特征值， eigVects为特征向量
    eigVals, eigVects = linalg.eig(mat(covMat))
    # print 'eigVals=', eigVals
    # print 'eigVects=', eigVects
    # 对特征值，进行从小到大的排序，返回从小到大的index序号
    # 特征值的逆序就可以得到topNfeat个最大的特征向量
    '''
    >>> x = np.array([3, 1, 2])
    >>> np.argsort(x)
    array([1, 2, 0])  # index,1 = 1; index,2 = 2; index,0 = 3
    >>> y = np.argsort(x)
    >>> y[::-1]
    array([0, 2, 1])
    >>> y[:-3:-1]
    array([0, 2])  # 取出 -1, -2
    >>> y[:-6:-1]
    array([0, 2, 1])
    '''
    eigValInd = argsort(eigVals)
    # print 'eigValInd1=', eigValInd
    
    
# 基于SVD的评分估计
# 在recommend() 中，这个函数用于替换对standEst()的调用，该函数对给定用户给定物品构建了一个评分估计值
def svdEst(dataMat, user, simMeas, item):
    '''svdEst( )
    
    import matplotlib
import matplotlib.pyplot as plt
fig = plt.figure()
ax = fig.add_subplot(111)
x1 = []
y1 = []
xm1 = []
ym1 = []
for i in range(len(labelList)):
    if labelList[i] == 1.0:
        x1.append(datMat[i, 0])
        y1.append(datMat[i, 1])
    else:
        xm1.append(datMat[i, 0])
        ym1.append(datMat[i, 1])
ax.scatter(x1, y1, marker='s', s=90)
ax.scatter(xm1, ym1, marker='o', s=50, c='red')
x = arange(-6.0, 8.0, 0.1)
y = (-finalWs[0, 0]*x - 0)/finalWs[0, 1]
# y2 = (0.43799*x)/0.12316
y2 = (0.498442*x)/0.092387  # 2 iterations
ax.plot(x, y)
ax.plot(x, y2, 'g-.')
ax.axis([-6, 8, -4, 5])
ax.legend(('50 Iterations', '2 Iterations'))
plt.show()

    
        def mapper_final(self):
        yield('chars', self.chars)
        yield('words', self.words)
        yield('lines', self.lines)