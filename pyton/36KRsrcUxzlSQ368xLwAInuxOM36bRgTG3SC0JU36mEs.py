
        
        
class SplitDateTimeField(MultiValueField):
    widget = SplitDateTimeWidget
    hidden_widget = SplitHiddenDateTimeWidget
    default_error_messages = {
        'invalid_date': _('Enter a valid date.'),
        'invalid_time': _('Enter a valid time.'),
    }
    
        class Media:
        js = ('my_awesome_inline_scripts.js',)
    
        def test_inlines_show_change_link_unregistered(self):
        'Inlines `show_change_link` disabled for unregistered models.'
        parent = ParentModelWithCustomPk.objects.create(my_own_pk='foo', name='Foo')
        ChildModel1.objects.create(my_own_pk='bar', name='Bar', parent=parent)
        ChildModel2.objects.create(my_own_pk='baz', name='Baz', parent=parent)
        response = self.client.get(reverse('admin:admin_inlines_parentmodelwithcustompk_change', args=('foo',)))
        self.assertFalse(response.context['inline_admin_formset'].opts.has_registered_model)
        self.assertNotContains(response, INLINE_CHANGELINK_HTML)
    
        def as_sql(self, connection, lookup, template_params, *args):
        if lookup.lhs.output_field.geography and not self.geography:
            raise ValueError('PostGIS geography does not support the '%s' '
                             'function/operator.' % (self.func or self.op,))
    
        def test_version_loose_tuple(self):
        expect = ('1.2.3b1.dev0', 1, 2, 3)
        ops = FakePostGISOperations(expect[0])
        actual = ops.postgis_version_tuple()
        self.assertEqual(expect, actual)
    
        Test classes using this mixin need to define a `work_subdir` attribute
    which designates the subdir under `tests/i18n/` that will be copied to the
    temporary tree from which its test cases will run.
    
        def test_no_wrap_enabled(self):
        management.call_command('makemessages', locale=[LOCALE], verbosity=0, no_wrap=True)
        self.assertTrue(os.path.exists(self.PO_FILE))
        with open(self.PO_FILE) as fp:
            po_contents = fp.read()
            self.assertMsgId(
                'This literal should also be included wrapped or not wrapped '
                'depending on the use of the --no-wrap option.',
                po_contents
            )
    
        def __getitem__(self, index):
        '''
        Get the Field object at the specified index, which may be either
        an integer or the Field's string label.  Note that the Field object
        is not the field's _value_ -- use the `get` method instead to
        retrieve the value (e.g. an integer) instead of a Field instance.
        '''
        if isinstance(index, str):
            i = self.index(index)
        elif 0 <= index < self.num_fields:
            i = index
        else:
            raise IndexError('Index out of range when accessing field in a feature: %s.' % index)
        return Field(self, i)
    
        # #### Field Properties ####
    @property
    def is_set(self):
        'Return True if the value of this field isn't null, False otherwise.'
        return capi.is_field_set(self._feat.ptr, self._index)
    
        @property
    def nodata_value(self):
        '''
        Return the nodata value for this band, or None if it isn't set.
        '''
        # Get value and nodata exists flag
        nodata_exists = c_int()
        value = capi.get_band_nodata_value(self._ptr, nodata_exists)
        if not nodata_exists:
            value = None
        # If the pixeltype is an integer, convert to int
        elif self.datatype() in GDAL_INTEGER_TYPES:
            value = int(value)
        return value
    
        # #### Other Routines ####
    @property
    def area(self):
        'Return the area of the Geometry.'
        return capi.geos_area(self.ptr, byref(c_double()))
    
        return project
    
    REQUESTS_IMP_ERR = None
try:
    import requests
except ImportError:
    REQUESTS_IMP_ERR = traceback.format_exc()
    REQUESTS_FOUND = False
else:
    REQUESTS_FOUND = True
    
    PASSLIB_IMP_ERR = None
try:
    from passlib.apache import HtpasswdFile, htpasswd_context
    from passlib.context import CryptContext
    import passlib
except ImportError:
    PASSLIB_IMP_ERR = traceback.format_exc()
    passlib_installed = False
else:
    passlib_installed = True
    
    # Deletes the previously created issue
- taiga_issue:
    taiga_host: https://mytaigahost.example.com
    project: myproject
    subject: An error has been found
    issue_type: Bug
    state: absent
'''
    
        return list(merged_items.values())
    
            # Change the password (or throw an exception)
        try:
            self.connection.passwd_s(self.dn, None, self.passwd)
        except ldap.LDAPError as e:
            self.fail('Unable to set password', e)
    
        # Search for given device
    if device is not None:
        devices_by_nickname = {}
        for d in pb.devices:
            devices_by_nickname[d.nickname] = d
    
    
DOCUMENTATION = '''
---
module: ipmi_power
short_description: Power management for machine
description:
  - Use this module for power management
version_added: '2.2'
options:
  name:
    description:
      - Hostname or ip address of the BMC.
    required: true
  port:
    description:
      - Remote RMCP port.
    default: 623
  user:
    description:
      - Username to use to connect to the BMC.
    required: true
  password:
    description:
      - Password to connect to the BMC.
    required: true
  state:
    description:
      - Whether to ensure that the machine in desired state.
    required: true
    choices:
        - on -- Request system turn on
        - off -- Request system turn off without waiting for OS to shutdown
        - shutdown -- Have system request OS proper shutdown
        - reset -- Request system reset without waiting for OS
        - boot -- If system is off, then 'on', else 'reset'
  timeout:
    description:
      - Maximum number of seconds before interrupt request.
    default: 300
requirements:
  - 'python >= 2.6'
  - pyghmi
author: 'Bulat Gaifullin (@bgaifullin) <gaifullinbf@gmail.com>'
'''
    
        # 读取文件
    for f in files_list:
        txt = open(f).read()
        # words = word_tokenize(txt)
        words = tokenizer.tokenize(txt)
        # creating inverted index data structure
        for word in words:
            word = word_clean(word)  # 单词清洗
            if word not in index:
                index[word] = {f}
            else:
                index[word].add(f)
    
            if n_dim == 2:
            return tf.nn.softmax(x)
        else:
            e = tf.exp(x - tf.reduce_max(x, axis=axis, keepdims=True))
            s = tf.reduce_sum(e, axis=axis, keepdims=True)
            return e / s
    '''
    return tf.nn.softmax(x, axis=axis)
    
    
def multi_highway_conv2d(x, kernel_size, n_layer,
                         act_fn=relu,
                         strides=1,
                         padding='SAME',
                         carry_bias=-1.0,
                         name=None):
    '''多层 highway_conv2d'''
    if isinstance(kernel_size, int):
        kernel_size = [kernel_size] * n_layer
    
    l1_l2_regularizer = L1L2Regularizer(l1=0.01, l2=0.01)

    
    sum_ngrams = 0
for s in sentences:
    for w in s:
        w = w.lower()
        # from gensim.models._utils_any2vec import compute_ngrams
        ret = compute_ngrams(w, min_ngrams, max_ngrams)
        print(ret)
        sum_ngrams += len(ret)
'''
['<h', 'he', 'el', 'll', 'lo', 'o>', '<he', 'hel', 'ell', 'llo', 'lo>', '<hel', 'hell', 'ello', 'llo>']
['<w', 'wo', 'or', 'rl', 'ld', 'd>', '<wo', 'wor', 'orl', 'rld', 'ld>', '<wor', 'worl', 'orld', 'rld>']
['<!', '!>', '<!>']
['<i', 'i>', '<i>']
['<a', 'am', 'm>', '<am', 'am>', '<am>']
['<h', 'hu', 'ua', 'ay', 'y>', '<hu', 'hua', 'uay', 'ay>', '<hua', 'huay', 'uay>']
['<.', '.>', '<.>']
'''
assert sum_ngrams == len(model.wv.vectors_ngrams)
print(sum_ngrams)  # 57
print()
    
        def test_str(self):
        self.assertEqual('Invalid nonce ('xxx'): error', str(self.error))
    
            # Self test
        self.assertTrue(self.addr.conflicts(self.addr))
        self.assertTrue(self.addr1.conflicts(self.addr1))
        # This is a tricky one...
        self.assertTrue(self.addr1.conflicts(self.addr2))
    
    Certbot will emit a warning if it detects that the credentials file can be
accessed by other users on your system. The warning reads 'Unsafe permissions
on credentials configuration file', followed by the path to the credentials
file. This warning will be emitted each time Certbot uses the credentials file,
including for renewal, and cannot be silenced except by addressing the issue
(e.g., by using a command like ``chmod 600`` to restrict access to the file).
    
    
@pytest.fixture()
def context(request):
    # Fixture request is a built-in pytest fixture describing current test request.
    integration_test_context = nginx_context.IntegrationTestsContext(request)
    try:
        yield integration_test_context
    finally:
        integration_test_context.cleanup()
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    
    
    
from __future__ import print_function
import numpy as np
from activators import ReluActivator, IdentityActivator
    
    # 引入 Perceptron 类
from __future__ import print_function
from perceptron import Perceptron
    
    
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
    
    
def loadDataSet(fileName, delim='\t'):
    fr = open(fileName)
    stringArr = [line.strip().split(delim) for line in fr.readlines()]
    datArr = [map(float, line) for line in stringArr]
    return mat(datArr)
    
        def __init__(self, *args, **kwargs):
        super(MRWordCountUtility, self).__init__(*args, **kwargs)
        self.chars = 0
        self.words = 0
        self.lines = 0
    
        def new_future_import(self, old):
        new = FromImport('__future__',
                         [Name('absolute_import', prefix=' '), Comma(),
                          Name('division', prefix=' '), Comma(),
                          Name('print_function', prefix=' ')])
        if old is not None:
            new.prefix = old.prefix
        return new
    
        from tornado.platform.auto import set_close_exec
'''
    
        c-ares fails to resolve some names when ``family`` is ``AF_UNSPEC``,
    so it is only recommended for use in ``AF_INET`` (i.e. IPv4).  This is
    the default for ``tornado.simple_httpclient``, but other libraries
    may default to ``AF_UNSPEC``.
    
    
class MiscFutureTest(AsyncTestCase):
    def test_future_set_result_unless_cancelled(self):
        fut = Future()  # type: Future[int]
        future_set_result_unless_cancelled(fut, 42)
        self.assertEqual(fut.result(), 42)
        self.assertFalse(fut.cancelled())