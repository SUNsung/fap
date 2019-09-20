
        
        
class DateField(BaseTemporalField):
    widget = DateInput
    input_formats = formats.get_format_lazy('DATE_INPUT_FORMATS')
    default_error_messages = {
        'invalid': _('Enter a valid date.'),
    }
    
        def as_postgresql(self, compiler, connection, **extra_context):
        # Cast FloatField to DecimalField as PostgreSQL doesn't support the
        # following function signatures:
        # - LOG(double, double)
        # - MOD(double, double)
        output_field = DecimalField(decimal_places=sys.float_info.dig, max_digits=1000)
        clone = self.copy()
        clone.set_source_expressions([
            Cast(expression, output_field) if isinstance(expression.output_field, FloatField)
            else expression for expression in self.get_source_expressions()
        ])
        return clone.as_sql(compiler, connection, **extra_context)
    
            if ds:
            self.ptr = ds
            self.driver = Driver(ds_driver)
        else:
            # Raise an exception if the returned pointer is NULL
            raise GDALException('Invalid data source file '%s'' % ds_input)
    
        def __init__(self, feat, index):
        '''
        Initialize on the feature object and the integer index of
        the field within the feature.
        '''
        # Setting the feature pointer and index.
        self._feat = feat
        self._index = index
    
            # Construct the target warp dictionary from the virtual raster
        data = {
            'srid': srid,
            'width': target.width,
            'height': target.height,
            'origin': [target.origin.x, target.origin.y],
            'scale': [target.scale.x, target.scale.y],
            'skew': [target.skew.x, target.skew.y],
        }
    
        @property
    def local(self):
        'Return True if this SpatialReference is local (root node is LOCAL_CS).'
        return bool(capi.islocal(self.ptr))
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
    Available hooks:
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    # Keep OrderedDict for backwards compatibility.
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
            with open('Pipfile') as f:
            post2 = requests.post(url, files={'some': f})
        assert post2.status_code == 200
    
            Currently, this closes the PoolManager and any active ProxyManager,
        which closes any pooled connections.
        '''
        self.poolmanager.clear()
        for proxy in self.proxy_manager.values():
            proxy.clear()
    
        data = 'Some random stuff to read from remove server.\n'
    
    
def check_all():
    check = CheckAllIp()
    check.run()
    exit(0)
    
            txt = self.text
        if txt is not None:
            txt = txt.replace('\n','\\\\n')
            txt = txt.replace('\r','\\\\r')
            txt = txt.replace('\t','\\\\t')
        else:
            txt = '<no text>'
    
    
def gradient_check():
    '''
    梯度检查
    '''
    # 设计一个误差函数，取所有节点输出项之和
    error_function = lambda o: o.sum()
    
    rnn = RecursiveLayer(2, 2, IdentityActivator(), 1e-3)
    
        # 如果要进行矩阵运算，就必须要用这些奇异值构建出一个对角矩阵
    Sig4 = mat(eye(4) * Sigma[: 4])
    
    
class MRmean(MRJob):
    def __init__(self, *args, **kwargs):  # 对数据初始化
        super(MRmean, self).__init__(*args, **kwargs)
        self.inCount = 0
        self.inSum = 0
        self.inSqSum = 0
    
       # input value = feature vector for one training example, e.g. '3.0, 7.0, 2.0'
   featurematrix = [float(item) for item in value.split(',')]
   A = numpy.matrix(featurematrix)
    
    # Increasing --n without --keepalive will eventually run into problems
# due to TIME_WAIT sockets
define('n', type=int, default=15000)
define('c', type=int, default=25)
define('keepalive', type=bool, default=False)
define('quiet', type=bool, default=False)
    
        def finish_tree(self, tree, filename):
        if self.found_future_import:
            return
        if not isinstance(tree, pytree.Node):
            # Empty files (usually __init__.py) show up as a single Leaf
            # instead of a Node, so leave them alone
            return
        first_stmt = tree.children[0]
        if is_docstring(first_stmt):
            # Skip a line and add the import after the docstring
            tree.insert_child(1, Newline())
            pos = 2
        elif first_stmt.prefix:
            # No docstring, but an initial comment (perhaps a #! line).
            # Transfer the initial comment to a new blank line.
            newline = Newline()
            newline.prefix = first_stmt.prefix
            first_stmt.prefix = ''
            tree.insert_child(0, newline)
            pos = 1
        else:
            # No comments or docstring, just insert at the start
            pos = 0
        tree.insert_child(pos, self.new_future_import(None))
        tree.insert_child(pos + 1, Newline())  # terminates the import stmt

    
        url = options.url + '/updateReports?agent=%s' % options.name
    update_ws = yield websocket_connect(url, None)
    msg = yield update_ws.read_message()
    assert msg is None
    IOLoop.instance().stop()
    
    This module integrates Tornado with the ``asyncio`` module introduced
in Python 3.4. This makes it possible to combine the two libraries on
the same event loop.
    
        @gen.coroutine
    def resolve(
        self, host: str, port: int, family: int = 0
    ) -> 'Generator[Any, Any, List[Tuple[int, Any]]]':
        if is_valid_ip(host):
            addresses = [host]
        else:
            # gethostbyname doesn't take callback as a kwarg
            fut = Future()  # type: Future[Tuple[Any, Any]]
            self.channel.gethostbyname(
                host, family, lambda result, error: fut.set_result((result, error))
            )
            result, error = yield fut
            if error:
                raise IOError(
                    'C-Ares returned error %s: %s while resolving %s'
                    % (error, pycares.errno.strerror(error), host)
                )
            addresses = result.addresses
        addrinfo = []
        for address in addresses:
            if '.' in address:
                address_family = socket.AF_INET
            elif ':' in address:
                address_family = socket.AF_INET6
            else:
                address_family = socket.AF_UNSPEC
            if family != socket.AF_UNSPEC and family != address_family:
                raise IOError(
                    'Requested socket family %d but got %d' % (family, address_family)
                )
            addrinfo.append((typing.cast(int, address_family), (address, port)))
        return addrinfo

    
    from tornado.auth import (
    OpenIdMixin,
    OAuthMixin,
    OAuth2Mixin,
    GoogleOAuth2Mixin,
    FacebookGraphMixin,
    TwitterMixin,
)
from tornado.escape import json_decode
from tornado import gen
from tornado.httpclient import HTTPClientError
from tornado.httputil import url_concat
from tornado.log import app_log
from tornado.testing import AsyncHTTPTestCase, ExpectLog
from tornado.web import RequestHandler, Application, HTTPError