
        
                for chunk in self.msg.iter_body(self.CHUNK_SIZE):
            if not converter and b'\0' in chunk:
                converter = self.conversion.get_converter(self.mime)
                if not converter:
                    raise BinarySuppressedError()
            body.extend(chunk)
    
        '''
    return path.replace('\\', '\\\\\\')
    
        def load_installed_plugins(self):
        for entry_point_name in ENTRY_POINT_NAMES:
            for entry_point in iter_entry_points(entry_point_name):
                plugin = entry_point.load()
                plugin.package_name = entry_point.dist.key
                self.register(entry_point.load())
    
            Operator:                  '#582800',   # class: 'o'
        Operator.Word:             'bold #004461',   # class: 'ow' - like keywords
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or dict()
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
    
def delete(url, **kwargs):
    r'''Sends a DELETE request.
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    
            :param url: URL for the new :class:`Request` object.
        :param \*\*kwargs: Optional arguments that ``request`` takes.
        :rtype: requests.Response
        '''
    
    - single source 'message type' for state transition changes
- message type considered, messages (comment) not considered to avoid complexity
'''
    
        def test_b_observers_shall_be_attachable(cls):
        cls.s.attach(cls.dec_obs)
        cls.assertEqual(isinstance(cls.s._observers[0], DecimalViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.attach(cls.hex_obs)
        cls.assertEqual(isinstance(cls.s._observers[1], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 2)
    
        def setUp(self):
        self.tc1 = TC1()
        self.tc2 = TC2()
        self.tc3 = TC3()
        self.average_result_tc1 = '###### In Test 1 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc2 = '###### In Test 2 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc3 = '###### In Test 3 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.runner = TestRunner()
        self.out = StringIO()
        self.saved_stdout = sys.stdout
        sys.stdout = self.out
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    class ParameterInjectionTest(unittest.TestCase):
    
        def increment(self):
        self.value += 1
    
    
def dump_device_info():
    '''
    显示设备信息
    '''
    size_str = adb.get_screen()
    device_str = adb.test_device_detail()
    phone_os_str = adb.test_device_os()
    density_str = adb.test_density()
    print('''**********
Screen: {size}
Density: {dpi}
Device: {device}
Phone OS: {phone_os}
Host OS: {host_os}
Python: {python}
**********'''.format(
        size=size_str.replace('\n', ''),
        dpi=density_str.replace('\n', ''),
        device=device_str.replace('\n', ''),
        phone_os=phone_os_str.replace('\n', ''),
        host_os=sys.platform,
        python=sys.version
    ))

    
    
fig = plt.figure()
pull_screenshot()
img = update_data()
im = plt.imshow(img, animated=True)
    
    
def check_screenshot():  # 检查获取截图的方式
    global screenshot_way
    if (screenshot_way < 0):
        print('暂不支持当前设备')
        sys.exit()
    binary_screenshot = pull_screenshot()
    try:
        Image.open(BytesIO(binary_screenshot)).load()  # 直接使用内存IO
        print('Capture Method: {}'.format(screenshot_way))
    except Exception:
        screenshot_way -= 1
        check_screenshot()
    
        # 首先找到游戏的对称中心，由对称中心做辅助线与x=board_x直线的交点即为棋盘的中心位置
    # 有了对称中心，可以知道棋子在棋盘上面的相对位置（偏高或偏低，偏高的话测量值比实际值大，
    # 偏低相反。最后通过delta_piece_y来对跳跃时间进行微调
    center_x = w / 2 + (24 / 1080) * w
    center_y = h / 2 + (17 / 1920) * h
    if piece_x > center_x:
        board_y = round((25.5 / 43.5) * (board_x - center_x) + center_y)
        delta_piece_y = piece_y - round((25.5 / 43.5) * (piece_x - center_x) + center_y)
    else:
        board_y = round(-(25.5 / 43.5) * (board_x - center_x) + center_y)
        delta_piece_y = piece_y - round(-(25.5 / 43.5) * (piece_x - center_x) + center_y)