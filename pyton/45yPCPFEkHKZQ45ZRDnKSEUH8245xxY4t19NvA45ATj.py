
        
            Checks that the id exists and optionally that the current user is
    the author.
    
    
@click.command('init-db')
@with_appcontext
def init_db_command():
    '''Clear existing data and create new tables.'''
    init_db()
    click.echo('Initialized the database.')
    
        # test that the user was inserted into the database
    with app.app_context():
        assert (
            get_db().execute('select * from user where username = 'a'').fetchone()
            is not None
        )
    
            # Check cert keyfile exists
        if hasattr(OpenSSL.crypto, 'load_publickey'):
            if os.path.exists(CertUtil.cert_keyfile):
                with open(CertUtil.cert_keyfile, 'rb') as fp:
                    CertUtil.cert_publickey = OpenSSL.crypto.load_publickey(OpenSSL.crypto.FILETYPE_PEM, fp.read())
            else:
                CertUtil.generate_cert_keyfile()
        else:
            CertUtil.cert_keyfile = None
    
        if len(sys.argv) > 1:
        ip = sys.argv[1]
    else:
        ip = '46.134.208.94'
        ip = '2001:ee0:3203:a::12'
        print('Usage: check_ip.py [ip] [top_domain] [wait_time=0]')
    print('test ip:%s' % ip)
    
    
if __name__ == '__main__':
    print IPv6._test_host('http://[2804:10:4068::202:82]')
    
    
    def endResync(self):
        '''
        A hook to listen in on the token consumption during error recovery.
        The DebugParser subclasses this to fire events to the listenter.
        '''
    
            raise NotImplementedError
    
    def setChannel(self, channel):
        '''@brief Set the channel of the token
    
    
class TanhActivator(object):
    def forward(self, weighted_input):
        return 2.0 / (1.0 + np.exp(-2 * weighted_input)) - 1.0
    
        def dump(self):
        '''
        Desc:
            打印出我们的网络信息
        Args:
            None
        Returns:
            None
        '''
        # 遍历所有的 layers
        for layer in self.layers:
            # 将所有的层的信息打印出来
            layer.dump()
    
    
from __future__ import print_function
import numpy as np
from activators import ReluActivator, IdentityActivator
    
        # 测试基础的函数
    # testBasicFunc()
    
    
if __name__ == '__main__':
    # rootNode = treeNode('pyramid', 9, None)
    # rootNode.children['eye'] = treeNode('eye', 13, None)
    # rootNode.children['phoenix'] = treeNode('phoenix', 3, None)
    # # 将树以文本形式显示
    # # print rootNode.disp()
    
        # 利用PCA对半导体制造数据降维
    dataMat = replaceNanWithMean()
    print(shape(dataMat))
    # 分析数据
    analyse_data(dataMat)
    # lowDmat, reconMat = pca(dataMat, 20)
    # print shape(lowDmat)
    # show_picture(dataMat, reconMat)

    
    
def loadExData():
    '''
    # 推荐引擎示例矩阵
    return[[4, 4, 0, 2, 2],
           [4, 0, 0, 3, 3],
           [4, 0, 0, 1, 1],
           [1, 1, 1, 2, 0],
           [2, 2, 2, 0, 0],
           [1, 1, 1, 0, 0],
           [5, 5, 5, 0, 0]]
    '''
    # # 原矩阵
    # return[[1, 1, 1, 0, 0],
    #        [2, 2, 2, 0, 0],
    #        [1, 1, 1, 0, 0],
    #        [5, 5, 5, 0, 0],
    #        [1, 1, 0, 2, 2],
    #        [0, 0, 0, 3, 3],
    #        [0, 0, 0, 1, 1]]
    
        # 接受输入数据流
    def map(self, key, val):  # 需要 2 个参数，求数据的和与平方和
        if False:
            yield
        inVal = float(val)
        self.inCount += 1
        self.inSum += inVal
        self.inSqSum += inVal*inVal
    
        def __init__(self, *args, **kwargs):
        super(MRsvm, self).__init__(*args, **kwargs)
        self.data = pickle.load(open('/opt/git/MachineLearnidata/15.BigData_MapReduce/svmDat27'))
        self.w = 0
        self.eta = 0.69
        self.dataList = []
        self.k = self.options.batchsize
        self.numMappers = 1
        self.t = 1  # iteration number
    
        classifiers=[
        'Development Status :: 3 - Alpha',
    
    def upload_chunk_file(core, fileDir, fileSymbol, fileSize,
        file_, chunk, chunks, uploadMediaRequest):
    url = core.loginInfo.get('fileUrl', core.loginInfo['url']) + \
        '/webwxuploadmedia?f=json'
    # save it on server
    cookiesList = {name:data for name,data in core.s.cookies.items()}
    fileType = mimetypes.guess_type(fileDir)[0] or 'application/octet-stream'
    fileName = utils.quote(os.path.basename(fileDir))
    files = OrderedDict([
        ('id', (None, 'WU_FILE_0')),
        ('name', (None, fileName)),
        ('type', (None, fileType)),
        ('lastModifiedDate', (None, time.strftime('%a %b %d %Y %H:%M:%S GMT+0800 (CST)'))),
        ('size', (None, str(fileSize))),
        ('chunks', (None, None)),
        ('chunk', (None, None)),
        ('mediatype', (None, fileSymbol)),
        ('uploadmediarequest', (None, uploadMediaRequest)),
        ('webwx_data_ticket', (None, cookiesList['webwx_data_ticket'])),
        ('pass_ticket', (None, core.loginInfo['pass_ticket'])),
        ('filename' , (fileName, file_.read(524288), 'application/octet-stream'))])
    if chunks == 1:
        del files['chunk']; del files['chunks']
    else:
        files['chunk'], files['chunks'] = (None, str(chunk)), (None, str(chunks))
    headers = { 'User-Agent' : config.USER_AGENT }
    return core.s.post(url, files=files, headers=headers, timeout=config.TIMEOUT)
    
        @property
    def is_logic_error(self):
        ''' ``True`` for validation errors against different schemas with
            *of-rules. '''
        return bool(self.code & LOGICAL.code - ERROR_GROUP.code)
    
    
def test_docstring(validator):
    assert validator.__doc__
    
    
@mark.parametrize(
    'default', ({'default': 'bar_value'}, {'default_setter': lambda doc: 'bar_value'})
)
def test_default_missing_in_subschema(default):
    bar_schema = {'type': 'string'}
    bar_schema.update(default)
    schema = {
        'thing': {
            'type': 'dict',
            'schema': {'foo': {'type': 'string'}, 'bar': bar_schema},
        }
    }
    document = {'thing': {'foo': 'foo_value'}}
    expected = {'thing': {'foo': 'foo_value', 'bar': 'bar_value'}}
    assert_normalized(document, expected, schema)