
        
        from .theplatform import theplatform_download_by_pid
    
        def test_mismatched_bom_and_cookie_second_line_raises_syntaxerror(self):
        lines = (
            b'\xef\xbb\xbf#! something\n',
            b'# vim: set fileencoding=ascii :\n',
            b'print(something)\n',
            b'do_something(else)\n'
        )
        readline = self.get_readline(lines)
        self.assertRaises(SyntaxError, detect_encoding, readline)
    
        def _putline(self, line):
        '''Internal: send one line to the server, appending CRLF.
        The `line` must be a bytes-like object.'''
        sys.audit('nntplib.putline', self, line)
        line = line + _CRLF
        if self.debugging > 1: print('*put*', repr(line))
        self.file.write(line)
        self.file.flush()
    
                    --===--
                ''')),
    
            self.cu.execute('select name from test where id=?', (self.cu.lastrowid,))
        row = self.cu.fetchone()
        self.assertEqual(row[0], 'Hu\x00go')
    
            # asyncio issue #184: Ensure that _StreamProtocol constructor
        # retrieves the current loop if the loop parameter is not set
        reader = asyncio.Stream(mode=asyncio.StreamMode.READ,
                                _asyncio_internal=True)
        self.assertIs(reader._loop, self.loop)
    
    def _isrecursive(pattern):
    if isinstance(pattern, bytes):
        return pattern == b'**'
    else:
        return pattern == '**'
    
    
class Telnet:
    
        return error
    
        # bpo-31217: Integer pool to get a single integer object for the same
    # value. The pool is used to prevent false alarm when checking for memory
    # block leaks. Fill the pool with values in -1000..1000 which are the most
    # common (reference, memory block, file descriptor) differences.
    int_pool = {value: value for value in range(-1000, 1000)}
    def get_pooled_int(value):
        return int_pool.setdefault(value, value)
    
    
  def _GetCompletionsUserMayHaveCompleted( self ):
    completed_item = vimsupport.GetVariableValue( 'v:completed_item' )
    
        with patch( 'ycm.youcompleteme.SendCommandRequest' ) as send_request:
      ycm.SendCommandRequest( [ 'ft=ycm:ident', 'GoTo' ], '', False, 1, 1 )
      send_request.assert_called_once_with( *expected_args )
    
        for diags in itervalues( self._line_to_diags ):
      # Insert squiggles in reverse order so that errors overlap warnings.
      for diag in reversed( diags ):
        group = ( 'YcmErrorSection' if _DiagnosticIsError( diag ) else
                  'YcmWarningSection' )
    
      AddToGroupMap( 'Conditional', statement_group )
  AddToGroupMap( 'Repeat'     , statement_group )
  AddToGroupMap( 'Label'      , statement_group )
  AddToGroupMap( 'Operator'   , statement_group )
  AddToGroupMap( 'Keyword'    , statement_group )
  AddToGroupMap( 'Exception'  , statement_group )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def MockAsyncServerResponseException( exception ):
  '''Return a fake future object that is complete, but raises an exception.
  Suitable for mocking a response future within a client request. For example:
    
    class LinearUnit(Perceptron):
    '''
    Desc:
        线性单元类
    Args:
        Perceptron —— 感知器
    Returns:
        None
    '''
    def __init__(self, input_num):
        '''
        Desc:
            初始化线性单元，设置输入参数的个数
        Args:
            input_num —— 输入参数的个数
        Returns:
            None
        '''
        # 初始化我们的感知器类，设置输入参数的个数 input_num 和 激活函数 f
        Perceptron.__init__(self, input_num, f)
    
    
class LstmLayer(object):
    def __init__(self, input_width, state_width, 
                 learning_rate):
        self.input_width = input_width
        self.state_width = state_width
        self.learning_rate = learning_rate
        # 门的激活函数
        self.gate_activator = SigmoidActivator()
        # 输出的激活函数
        self.output_activator = TanhActivator()
        # 当前时刻初始化为t0
        self.times = 0       
        # 各个时刻的单元状态向量c
        self.c_list = self.init_state_vec()
        # 各个时刻的输出向量h
        self.h_list = self.init_state_vec()
        # 各个时刻的遗忘门f
        self.f_list = self.init_state_vec()
        # 各个时刻的输入门i
        self.i_list = self.init_state_vec()
        # 各个时刻的输出门o
        self.o_list = self.init_state_vec()
        # 各个时刻的即时状态c~
        self.ct_list = self.init_state_vec()
        # 遗忘门权重矩阵Wfh, Wfx, 偏置项bf
        self.Wfh, self.Wfx, self.bf = (
            self.init_weight_mat())
        # 输入门权重矩阵Wfh, Wfx, 偏置项bf
        self.Wih, self.Wix, self.bi = (
            self.init_weight_mat())
        # 输出门权重矩阵Wfh, Wfx, 偏置项bf
        self.Woh, self.Wox, self.bo = (
            self.init_weight_mat())
        # 单元状态权重矩阵Wfh, Wfx, 偏置项bf
        self.Wch, self.Wcx, self.bc = (
            self.init_weight_mat())
    
    
# 图像数据加载器
class ImageLoader(Loader):
    def get_picture(self, content, index):
        '''
        内部函数，从文件中获取图像
        '''
        start = index * 28 * 28 + 16
        picture = []
        for i in range(28):
            picture.append([])
            for j in range(28):
                picture[i].append(
                    self.to_int(content[start + i * 28 + j]))
        return picture
    
        def calc_gradient(self):
        self.gradient_list = [] # 保存各个时刻的权重梯度
        for t in range(self.times + 1):
            self.gradient_list.append(np.zeros(
                (self.state_width, self.state_width)))
        for t in range(self.times, 0, -1):
            self.calc_gradient_t(t)
        # 实际的梯度是各个时刻梯度之和
        self.gradient = reduce(
            lambda a, b: a + b, self.gradient_list,
            self.gradient_list[0]) # [0]被初始化为0且没有被修改过
    
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
    
    
# 从文本中构建矩阵，加载文本文件，然后处理
def loadDataSet(fileName):  # 通用函数，用来解析以 tab 键分隔的 floats（浮点数）
    dataSet = []
    fr = open(fileName)
    for line in fr.readlines():
        curLine = line.strip().split('\t')
        fltLine = map(float, curLine)  # 映射所有的元素为 float（浮点数）类型
        dataSet.append(fltLine)
    return dataSet