
        
        
def test_compress_file(httpbin_both):
    r = http(
        '--form',
        '--compress',
        '--compress',
        'PUT',
        httpbin_both + '/put',
        'file@' + FILE_PATH,
    )
    assert HTTP_OK in r
    assert r.json['headers']['Content-Encoding'] == 'deflate'
    assert r.json['headers']['Content-Type'].startswith(
        'multipart/form-data; boundary=')
    assert r.json['files'] == {}
    assert FILE_CONTENT not in r

    
    
try:
    import curses
except ImportError:
    curses = None  # Compiled w/o curses
    
    from httpie.cli.argtypes import AuthCredentials, KeyValueArgType, parse_auth
from httpie.cli.constants import (
    HTTP_GET, HTTP_POST, OUTPUT_OPTIONS, OUTPUT_OPTIONS_DEFAULT,
    OUTPUT_OPTIONS_DEFAULT_STDOUT_REDIRECTED, OUT_RESP_BODY, PRETTY_MAP,
    PRETTY_STDOUT_TTY_ONLY, SEPARATOR_CREDENTIALS, SEPARATOR_GROUP_ALL_ITEMS,
    SEPARATOR_GROUP_DATA_ITEMS, URL_SCHEME_RE,
    OUTPUT_OPTIONS_DEFAULT_OFFLINE,
)
from httpie.cli.exceptions import ParseError
from httpie.cli.requestitems import RequestItems
from httpie.context import Environment
from httpie.plugins import plugin_manager
from httpie.utils import ExplicitNullAuth, get_content_type
    
    # Defaults
OUTPUT_OPTIONS_DEFAULT = OUT_RESP_HEAD + OUT_RESP_BODY
OUTPUT_OPTIONS_DEFAULT_STDOUT_REDIRECTED = OUT_RESP_BODY
OUTPUT_OPTIONS_DEFAULT_OFFLINE = OUT_REQ_HEAD + OUT_REQ_BODY
    
        def __init__(
        self,
        env: Environment,
        explicit_json=False,
        color_scheme=DEFAULT_STYLE,
        **kwargs
    ):
        super().__init__(**kwargs)
    
    
def build_output_stream_for_message(
    args: argparse.Namespace,
    env: Environment,
    requests_message: Union[requests.PreparedRequest, requests.Response],
    with_headers: bool,
    with_body: bool,
):
    stream_class, stream_kwargs = get_stream_type_and_kwargs(
        env=env,
        args=args,
    )
    message_class = {
        requests.PreparedRequest: HTTPRequest,
        requests.Response: HTTPResponse,
    }[type(requests_message)]
    yield from stream_class(
        msg=message_class(requests_message),
        with_headers=with_headers,
        with_body=with_body,
        **stream_kwargs,
    )
    if env.stdout_isatty and with_body:
        # Ensure a blank line after the response body.
        # For terminal output only.
        yield b'\n\n'
    
        def test_dont_expand_full_ipv6_as_shorthand(self):
        args = parser.parse_args(
            args=['0000:0000:0000:0000:0000:0000:0000:0001'],
            env=MockEnvironment()
        )
        assert args.url == 'http://0000:0000:0000:0000:0000:0000:0000:0001'
    
            # Load GoAgent CA
        with open(CertUtil.ca_keyfile, 'rb') as fp:
            content = fp.read()
        ca = OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_PEM, content)
        CertUtil.ca_privatekey = OpenSSL.crypto.load_privatekey(OpenSSL.crypto.FILETYPE_PEM, content)
        CertUtil.ca_thumbprint = ca.digest('sha1')
        CertUtil.ca_subject = ca.get_subject()
        ca_cert_error = True
        if os.path.exists(CertUtil.ca_certfile):
            with open(CertUtil.ca_certfile, 'rb') as fp:
                ca_cert_error = fp.read() not in content
        if ca_cert_error:
            with open(CertUtil.ca_certfile, 'wb') as fp:
                fp.write(OpenSSL.crypto.dump_certificate(OpenSSL.crypto.FILETYPE_PEM, ca))
    
    
def gae_application(environ, start_response):
    cookie = environ.get('HTTP_COOKIE', '')
    options = environ.get('HTTP_X_GOA_OPTIONS', '')
    if environ['REQUEST_METHOD'] == 'GET' and not cookie:
        if '204' in environ['QUERY_STRING']:
            start_response('204 No Content', [])
            yield ''
        else:
            timestamp = long(os.environ['CURRENT_VERSION_ID'].split('.')[1])/2**28
            ctime = time.strftime('%Y-%m-%d %H:%M:%S', time.gmtime(timestamp+8*3600))
            html = u'GoAgent Python Server %s \u5df2\u7ecf\u5728\u5de5\u4f5c\u4e86\uff0c\u90e8\u7f72\u65f6\u95f4 %s\n' % (__version__, ctime)
            start_response('200 OK', [('Content-Type', 'text/plain; charset=utf-8')])
            yield html.encode('utf8')
        raise StopIteration
    
    # The suffix of source filenames.
source_suffix = '.rst'
    
    # This is a very simple benchmark to give you an idea of how fast each step of face recognition will run on your system.
# Notice that face detection gets very slow at large image sizes. So you might consider running face detection on a
# scaled down version of your image and then running face encodings on the the full size image.
    
    # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
    
@click.command()
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel. -1 means 'use all in system'')
@click.option('--model', default='hog', help='Which face detection model to use. Options are 'hog' or 'cnn'.')
def main(image_to_check, cpus, model):
    # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
        for file in image_files_in_folder(known_people_folder):
        basename = os.path.splitext(os.path.basename(file))[0]
        img = face_recognition.load_image_file(file)
        encodings = face_recognition.face_encodings(img)
    
                # # If a match was found in known_face_encodings, just use the first one.
            # if True in matches:
            #     first_match_index = matches.index(True)
            #     name = known_face_names[first_match_index]
    
    
def detect_faces_in_image(file_stream):
    # 用face_recognition.face_encodings(img)接口提前把奥巴马人脸的编码录入
    known_face_encoding = [-0.09634063,  0.12095481, -0.00436332, -0.07643753,  0.0080383,
                            0.01902981, -0.07184699, -0.09383309,  0.18518871, -0.09588896,
                            0.23951106,  0.0986533 , -0.22114635, -0.1363683 ,  0.04405268,
                            0.11574756, -0.19899382, -0.09597053, -0.11969153, -0.12277931,
                            0.03416885, -0.00267565,  0.09203379,  0.04713435, -0.12731361,
                           -0.35371891, -0.0503444 , -0.17841317, -0.00310897, -0.09844551,
                           -0.06910533, -0.00503746, -0.18466514, -0.09851682,  0.02903969,
                           -0.02174894,  0.02261871,  0.0032102 ,  0.20312519,  0.02999607,
                           -0.11646006,  0.09432904,  0.02774341,  0.22102901,  0.26725179,
                            0.06896867, -0.00490024, -0.09441824,  0.11115381, -0.22592428,
                            0.06230862,  0.16559327,  0.06232892,  0.03458837,  0.09459756,
                           -0.18777156,  0.00654241,  0.08582542, -0.13578284,  0.0150229 ,
                            0.00670836, -0.08195844, -0.04346499,  0.03347827,  0.20310158,
                            0.09987706, -0.12370517, -0.06683611,  0.12704916, -0.02160804,
                            0.00984683,  0.00766284, -0.18980607, -0.19641446, -0.22800779,
                            0.09010898,  0.39178532,  0.18818057, -0.20875394,  0.03097027,
                           -0.21300618,  0.02532415,  0.07938635,  0.01000703, -0.07719778,
                           -0.12651891, -0.04318593,  0.06219772,  0.09163868,  0.05039065,
                           -0.04922386,  0.21839413, -0.02394437,  0.06173781,  0.0292527 ,
                            0.06160797, -0.15553983, -0.02440624, -0.17509389, -0.0630486 ,
                            0.01428208, -0.03637431,  0.03971229,  0.13983178, -0.23006812,
                            0.04999552,  0.0108454 , -0.03970895,  0.02501768,  0.08157793,
                           -0.03224047, -0.04502571,  0.0556995 , -0.24374914,  0.25514284,
                            0.24795187,  0.04060191,  0.17597422,  0.07966681,  0.01920104,
                           -0.01194376, -0.02300822, -0.17204897, -0.0596558 ,  0.05307484,
                            0.07417042,  0.07126575,  0.00209804]
    
                    log.println('    platform: {}'.format(platform.platform()))
                log.println('    python:   {}'.format(sys.version.split('\n')[0]))
    
    __all__ = ['cbs_download']
    
    #----------------------------------------------------------------------
def ckplayer_download(url, output_dir = '.', merge = False, info_only = False, is_xml = True, **kwargs):
    if is_xml:  #URL is XML URL
        try:
            title = kwargs['title']
        except:
            title = ''
        try:
            headers = kwargs['headers']  #headers provided
            ckinfo = get_content(url, headers = headers)
        except NameError:
            ckinfo = get_content(url)
        
        ckplayer_download_by_xml(ckinfo, output_dir, merge, 
                                info_only, title = title)
    
        else:
        titles = re.findall(r''name':'([^']*)'', html)
        real_urls = [re.sub('\\\\/', '/', i) for i in re.findall(r''rawUrl':'([^']*)'', html)]
    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
        @classmethod
    def funshion_decrypt(cls, a_bytes, coeff):
        res_list = []
        pos = 0
        while pos < len(a_bytes):
            a = a_bytes[pos]
            if pos == len(a_bytes) - 1:
                res_list.append(a)
                pos += 1
            else:
                b = a_bytes[pos + 1]
                m = a * coeff[0] + b * coeff[2]
                n = a * coeff[1] + b * coeff[3]
                res_list.append(m & 0xff)
                res_list.append(n & 0xff)
                pos += 2
        return bytes(res_list).decode('utf8')
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(url, title, ext, size, output_dir, merge=False)
    
        title = match1(html, r'<title>([^<]{1,9999})</title>')
    
    import ssl
    
    '''
Created 2017-04-25
Update  on 2017-05-18
Random Forest Algorithm on Sonar Dataset
Author: Flying_sfeng/片刻
GitHub: https://github.com/apachecn/AiLearning
---
源代码网址：http://www.tuicool.com/articles/iiUfeim
Flying_sfeng博客地址：http://blog.csdn.net/flying_sfeng/article/details/64133822 (感谢作者贡献)
'''
from __future__ import print_function
from random import seed, randrange, random
    
        def backward(self, output):
        return 1
    
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
    
        def configure_options(self):
        super(MRsvm, self).configure_options()
        self.add_passthrough_option(
            '--iterations', dest='iterations', default=2, type='int',
            help='T: number of iterations to run')
        self.add_passthrough_option(
            '--batchsize', dest='batchsize', default=100, type='int',
            help='k: number of data points in a batch')