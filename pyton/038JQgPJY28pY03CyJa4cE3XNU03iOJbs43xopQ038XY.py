
        
        
def redirect_view(request):
    'A view that redirects all requests to the GET view'
    if request.GET:
        query = '?' + urlencode(request.GET, True)
    else:
        query = ''
    return HttpResponseRedirect('/get_view/' + query)
    
        def validate(self, value):
        '''Validate that the input is in self.choices.'''
        super().validate(value)
        if value and not self.valid_value(value):
            raise ValidationError(
                self.error_messages['invalid_choice'],
                code='invalid_choice',
                params={'value': value},
            )
    
        def to_url(self, value):
        return str(value)
    
    from django.conf import settings
from django.contrib.gis.db.backends.base.operations import (
    BaseSpatialOperations,
)
from django.contrib.gis.db.backends.utils import SpatialOperator
from django.contrib.gis.db.models import GeometryField, RasterField
from django.contrib.gis.gdal import GDALRaster
from django.contrib.gis.geos.geometry import GEOSGeometryBase
from django.contrib.gis.geos.prototypes.io import wkb_r
from django.contrib.gis.measure import Distance
from django.core.exceptions import ImproperlyConfigured
from django.db.backends.postgresql.operations import DatabaseOperations
from django.db.models import Func, Value
from django.db.utils import NotSupportedError, ProgrammingError
from django.utils.functional import cached_property
from django.utils.version import get_version_tuple
    
        def _rmrf(self, dname):
        if os.path.commonprefix([self.test_dir, os.path.abspath(dname)]) != self.test_dir:
            return
        shutil.rmtree(dname)

    
        # #### Layer Methods ####
    def get_fields(self, field_name):
        '''
        Return a list containing the given field name for every Feature
        in the Layer.
        '''
        if field_name not in self.fields:
            raise GDALException('invalid field name: %s' % field_name)
        return [feat.get(field_name) for feat in self]
    
        def _flush(self):
        '''
        Call the flush method on the Band's parent raster and force a refresh
        of the statistics attribute when requested the next time.
        '''
        self.source._flush()
        self._stats_refresh = True
    
        def test_mark_safe_decorator_does_not_affect_dunder_html(self):
        '''
        mark_safe doesn't affect a callable that has an __html__() method.
        '''
        class SafeStringContainer:
            def __html__(self):
                return '<html></html>'
    
    
def test_unicode_url(httpbin):
    r = http(httpbin.url + u'/get?test=' + UNICODE)
    assert HTTP_OK in r
    assert r.json['args'] == {'test': UNICODE}
    
    
def test_compress_skip_negative_ratio(httpbin_both):
    r = http(
        '--compress',
        httpbin_both + '/post',
        'foo=bar',
    )
    assert HTTP_OK in r
    assert 'Content-Encoding' not in r.json['headers']
    assert r.json['json'] == {'foo': 'bar'}
    
    # Output options
OUT_REQ_HEAD = 'H'
OUT_REQ_BODY = 'B'
OUT_RESP_HEAD = 'h'
OUT_RESP_BODY = 'b'
    
            if now - self._prev_time >= self._update_interval:
            downloaded = self.status.downloaded
            try:
                speed = ((downloaded - self._prev_bytes)
                         / (now - self._prev_time))
            except ZeroDivisionError:
                speed = 0
    
        res = check_ip.check_ip(ip, host=top_domain, wait_time=wait_time)
    if not res:
        print('connect fail')
    elif res.ok:
        print('success, domain:%s handshake:%d' % (res.host, res.handshake_time))
    else:
        print('not support')
    
    
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
    
    
    def error(self, nvae):
        '''A hook for debugging interface'''
        pass
    
                    return self._state.token
    
    for i, face_distance in enumerate(face_distances):
    print('The test image has a distance of {:.2} from known image #{}'.format(face_distance, i))
    print('- With a normal cutoff of 0.6, would the test image match the known image? {}'.format(face_distance < 0.6))
    print('- With a very strict cutoff of 0.5, would the test image match the known image? {}'.format(face_distance < 0.5))
    print()

    
    
@click.command()
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel. -1 means 'use all in system'')
@click.option('--model', default='hog', help='Which face detection model to use. Options are 'hog' or 'cnn'.')
def main(image_to_check, cpus, model):
    # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
            # Draw a label with a name below the face
        cv2.rectangle(frame, (left, bottom - 25), (right, bottom), (0, 0, 255), cv2.FILLED)
        font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, name, (left + 6, bottom - 6), font, 0.5, (255, 255, 255), 1)
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
    # Show the picture
pil_image.show()

    
    # Convert the image to a PIL-format image so that we can draw on top of it with the Pillow library
# See http://pillow.readthedocs.io/ for more about PIL/Pillow
pil_image = Image.fromarray(unknown_image)
# Create a Pillow ImageDraw Draw instance to draw with
draw = ImageDraw.Draw(pil_image)
    
            self.vhost2 = VirtualHost(
            'fp', 'vhp', set([self.addr2]), False, False, 'localhost')
    
        def _test_with_all_supported(self):
        if self.client.installer is None:
            self.client.installer = mock.MagicMock()
        self.client.installer.supported_enhancements.return_value = [
            'ensure-http-header', 'redirect', 'staple-ocsp']
        self.client.enhance_config([self.domain], None)
        self.assertEqual(self.client.installer.save.call_count, 1)
        self.assertEqual(self.client.installer.restart.call_count, 1)
    
       certbot certonly \\
     --dns-rfc2136 \\
     --dns-rfc2136-credentials ~/.secrets/certbot/rfc2136.ini \\
     -d example.com \\
     -d www.example.com
    
        @mock.patch('dns.query.tcp')
    def test_del_txt_record_server_error(self, query_mock):
        query_mock.return_value.rcode.return_value = dns.rcode.NXDOMAIN
        # _find_domain | pylint: disable=protected-access
        self.rfc2136_client._find_domain = mock.MagicMock(return_value='example.com')
    
    
@pytest.fixture()
def context(request):
    # Fixture request is a built-in pytest fixture describing current test request.
    integration_test_context = nginx_context.IntegrationTestsContext(request)
    try:
        yield integration_test_context
    finally:
        integration_test_context.cleanup()