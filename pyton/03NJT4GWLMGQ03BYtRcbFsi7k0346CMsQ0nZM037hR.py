
        
            def park_vehicle(self, vehicle):
        spot = self._find_available_spot(vehicle)
        if spot is None:
            return None
        else:
            spot.park_vehicle(vehicle)
            return spot
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
    
class Node(object):
    
    
class PagesDataStore(object):
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
        def __exit__(self, exc_type, exc_value, traceback):
        self.proc.kill()
        self.proc.wait()
        time.sleep(0.2)
    
    
def _import_file(filepath):
    abspath = os.path.abspath(filepath)
    dirname, file = os.path.split(abspath)
    fname, fext = os.path.splitext(file)
    if fext != '.py':
        raise ValueError('Not a Python source file: %s' % abspath)
    if dirname:
        sys.path = [dirname] + sys.path
    try:
        module = import_module(fname)
    finally:
        if dirname:
            sys.path.pop(0)
    return module
    
        def _build_response(self, body, request):
        request.meta['download_latency'] = self.headers_time-self.start_time
        status = int(self.status)
        headers = Headers(self.response_headers)
        respcls = responsetypes.from_args(headers=headers, url=self._url)
        return respcls(url=self._url, status=status, headers=headers, body=body)
    
    def os_constant(key):
    # XXX TODO: In the future, this could return different constants
    #           based on what OS we are running under.  To see an
    #           approach to how to handle different OSes, see the
    #           apache version of this file.  Currently, we do not
    #           actually have any OS-specific constants on Nginx.
    '''
    Get a constant value for operating system
    
        # TODO: decoder/encoder should accept cls? Otherwise, subclassing
    # JSONObjectWithFields is tricky...
    header_cls = Header
    header = jose.Field(
        'header', omitempty=True, default=header_cls(),
        decoder=header_cls.from_json)
    
    	return memo[m][m-1]
    
    	Arguments:
		bitString {[string]} -- [binary string >= 512]
	'''
    
        return matchScore
    
    
def getctime(filename):
    '''Return the metadata change time of a file, reported by os.stat().'''
    return os.stat(filename).st_ctime
    
    from . import abc as resources_abc
from contextlib import contextmanager, suppress
from importlib import import_module
from importlib.abc import ResourceLoader
from io import BytesIO, TextIOWrapper
from pathlib import Path
from types import ModuleType
from typing import Iterable, Iterator, Optional, Set, Union   # noqa: F401
from typing import cast
from typing.io import BinaryIO, TextIO
from zipimport import ZipImportError
    
        def test_run_module_bug1764407(self):
        # -m and -i need to play well together
        # Runs the timeit module and checks the __main__
        # namespace has been populated appropriately
        p = spawn_python('-i', '-m', 'timeit', '-n', '1')
        p.stdin.write(b'Timer\n')
        p.stdin.write(b'exit()\n')
        data = kill_python(p)
        self.assertTrue(data.find(b'1 loop') != -1)
        self.assertTrue(data.find(b'__main__.Timer') != -1)
    
    # An imaginary module that would make this work and be safe.
from imaginary import magic_html_parser
    
        classifiers = proj_info['classifiers'],
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
            self.prepare(vid = vid, title = title, **kwargs)
    
    def fetch_photo_url_list_impl(url, size, method, id_field, id_parse_func, collection_name):
    page = get_html(url)
    api_key = get_api_key(page)
    ext_field = ''
    if id_parse_func:
        ext_field = '&%s=%s' % (id_field, id_parse_func(url, page))
    page_number = 1
    urls = []
    while True:
        call_url = tmpl_api_call % (api_key, method, ext_field, page_number)
        photoset = json.loads(get_content_headered(call_url))[collection_name]
        pagen = photoset['page']
        pages = photoset['pages']
        for info in photoset['photo']:
            url = get_url_of_largest(info, api_key, size)
            urls.append(url)
        page_number = page_number + 1
        # the typeof 'page' and 'pages' may change in different methods
        if str(pagen) == str(pages):
            break
    return urls, match1(page, pattern_inline_title)
    
            for i in range(n):  # 对每个数据
            i_score = np.inf
            i_label = -1
            for j in range(k):  # 与每个质心比较
                s_ij = score(data[i], centers[j])
                if s_ij < i_score:
                    i_score = s_ij
                    i_label = j
    
    from nltk.tokenize import RegexpTokenizer
from nltk import PorterStemmer
    
        References:
        tflearn.prelu
    '''
    if channel_shared:
        alpha_shape = get_shape(x)[-1:]
    else:
        alpha_shape = [1]
    
    
    
            # similarity matrix
        S = tf.reshape(tf.einsum('ntjd,do->ntjo', h_u_hu, W_s), [-1, T, J])  # [N, T, J]
        # 以上操作等价于
        # S = tf.reshape(tf.matmul(tf.reshape(h_u_hu, [-1, 3*d]), W_s), [-1, T, J])
    
    https://en.wikipedia.org/wiki/Lazy_evaluation
    
        products = {
        'milk': {'price': Price(1.50), 'quantity': 10},
        'eggs': {'price': Price(0.20), 'quantity': 100},
        'cheese': {'price': Price(2.00), 'quantity': 10},
    }
    
    '''
*TL;DR80
Provides an interface to resource that is expensive to duplicate.
'''
    
        def test_provider_shall_update_affected_subscribers_with_published_subscription(cls):
        pro = Provider()
        pub = Publisher(pro)
        sub1 = Subscriber('sub 1 name', pro)
        sub1.subscribe('sub 1 msg 1')
        sub1.subscribe('sub 1 msg 2')
        sub2 = Subscriber('sub 2 name', pro)
        sub2.subscribe('sub 2 msg 1')
        sub2.subscribe('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            cls.assertEqual(mock_subscriber1_run.call_count, 0)
            cls.assertEqual(mock_subscriber2_run.call_count, 0)
        pub.publish('sub 1 msg 1')
        pub.publish('sub 1 msg 2')
        pub.publish('sub 2 msg 1')
        pub.publish('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            expected_sub1_calls = [call('sub 1 msg 1'), call('sub 1 msg 2')]
            mock_subscriber1_run.assert_has_calls(expected_sub1_calls)
            expected_sub2_calls = [call('sub 2 msg 1'), call('sub 2 msg 2')]
            mock_subscriber2_run.assert_has_calls(expected_sub2_calls)

    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)