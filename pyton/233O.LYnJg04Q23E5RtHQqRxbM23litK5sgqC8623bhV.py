
        
            plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            BASIC_AUTH_HEADER_VALUE,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
        def get_headers(self):
        '''Return the headers' bytes.'''
        return self.msg.headers.encode('utf8')
    
    
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

    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    from httpie import __version__ as httpie_version, ExitStatus
from httpie.compat import str, bytes, is_py3
from httpie.client import get_response
from httpie.downloads import Downloader
from httpie.context import Environment
from httpie.plugins import plugin_manager
from httpie.output.streams import (
    build_output_stream,
    write_stream,
    write_stream_with_colors_win_py3
)
    
            :param progress_file: Where to report download progress.
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return requests.auth.HTTPDigestAuth(username, password)

    
        def test_cert_file_invalid(self, httpbin_secure):
        with pytest.raises(SSLError):
            http(httpbin_secure + '/get',
                 '--cert', __file__)
    
        def test_filter_gcp_fields(self):
        input_data = {
            u'kind': u'compute#httpsHealthCheck',
            u'description': u'',
            u'timeoutSec': 5,
            u'checkIntervalSec': 5,
            u'port': 443,
            u'healthyThreshold': 2,
            u'host': u'',
            u'requestPath': u'/',
            u'unhealthyThreshold': 2,
            u'creationTimestamp': u'2017-05-16T15:09:36.546-07:00',
            u'id': u'8727093129334146639',
            u'selfLink': u'https://www.googleapis.com/compute/v1/projects/myproject/global/httpsHealthChecks/myhealthcheck',
            u'name': u'myhealthcheck'}
    
    
def get_group_vars(groups):
    
    # There are two options for replacing |today|: either, you set today to some
# non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'
    
    # Add any extra paths that contain custom files (such as robots.txt or
# .htaccess) here, relative to this directory. These files are copied
# directly to the root of the documentation.
#html_extra_path = []
    
    def print_title(title, pattern = '-'):
    print('\n'.join(('', title, pattern * len(title)))) 
    
            if not self.test_mode:
            if self._controllers and self._hooks_registered:
                return
    
        # 从左从右取出两个数据进行对比,选出来更接近原来老算法的那个值
    if abs(board_y - from_left_find_board_y) > abs(from_right_find_board_y):
        new_board_y = from_right_find_board_y
    else:
        new_board_y = from_left_find_board_y
    
        pixels_Widh=[]
    end_w=0
    for i in range(1,w):
        if col_pix[0,i-1]<=0 and col_pix[0,i]>=1:
            pixels_Widh.append(i-1)
        if col_pix[0,i]>=1:
            end_w=i
    pixels_Widh.append(end_w+1)
    return start_h,end_h,pixels_Widh
    
    # 截图距离 * time_coefficient = 按键时长
# time_coefficient:
#    iphonex: 0.00125
#    iphone6: 0.00196
#    iphone6s plus: 0.00120
time_coefficient = 0.00120
VERSION = '1.1.4'