
        
        
PACKAGES = [
    'httpie',
    'requests',
    'pygments',
]
    
        def __init__(self, **kwargs):
        '''
        Use keyword arguments to overwrite
        any of the class attributes for this instance.
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
        '''.format(
        default=DEFAULT_STYLE,
        available='\n'.join(
            '{0}{1}'.format(8 * ' ', line.strip())
            for line in wrap(', '.join(sorted(AVAILABLE_STYLES)), 60)
        ).rstrip(),
    )
)
    
        def _getpass(self, prompt):
        # To allow mocking.
        return getpass.getpass(str(prompt))
    
        def unregister(self, plugin):
        self._plugins.remove(plugin)
    
        requests_session.cookies = session.cookies
    
    import os
    
        indent = None
    if format:
        indent = 4
    
            # test exceptions
        no_projects_input_url = 'https://www.googleapis.com/compute/v1/not-projects/myproject/global/backendServices/mybackendservice/getHealth'
        no_resource_input_url = 'https://www.googleapis.com/compute/v1/not-projects/myproject/global'
    
        def on_open_shell(self):
        try:
            self._exec_cli_command(b'environment no more')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
    @mainpage
    
    EOF = -1
    
    	html = get_html(url)
	contentid = r1(r'<meta name='contentid' scheme='DMINSTR2' content='([^']+)' />', html)
	vid = r1(r''demand_ehow_videoid':'([^']+)'', html)
	assert vid
    
    __all__ = ['fc2video_download']
    
    def mixcloud_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url, faker=True)
    title = r1(r'<meta property='og:title' content='([^']*)'', html)
    preview_url = r1(r'm-preview=\'([^\']+)\'', html)
    preview = r1(r'previews(.*)\.mp3$', preview_url)
    
        url = sorted(
        map(lambda x: x.firstChild.nodeValue, xml.getElementsByTagName('src')),
        key=lambda x: int(match1(x, r'_(\d+?)_')))[-1]
    
        #title
    title = ''
    profile_api = 'https://www.showroom-live.com/api/room/profile?room_id={room_id}'.format(room_id = room_id)
    html = loads(get_content(profile_api))
    try:
        title = html['main_name']
    except KeyError:
        title = 'Showroom_{room_id}'.format(room_id = room_id)
    
    
def save_debug_screenshot(ts, im, piece_x, piece_y, board_x, board_y):
    '''
    对 debug 图片加上详细的注释
    
    '''
    make_debug_dir(screenshot_backup_dir)
    draw = ImageDraw.Draw(im)
    draw.line((piece_x, piece_y) + (board_x, board_y), fill=2, width=3)
    draw.line((piece_x, 0, piece_x, im.size[1]), fill=(255, 0, 0))
    draw.line((0, piece_y, im.size[0], piece_y), fill=(255, 0, 0))
    draw.line((board_x, 0, board_x, im.size[1]), fill=(0, 0, 255))
    draw.line((0, board_y, im.size[0], board_y), fill=(0, 0, 255))
    draw.ellipse((piece_x - 10, piece_y - 10, piece_x + 10, piece_y + 10), fill=(255, 0, 0))
    draw.ellipse((board_x - 10, board_y - 10, board_x + 10, board_y + 10), fill=(0, 0, 255))
    del draw
    im.save(os.path.join(os.getcwd(), screenshot_backup_dir,
                         '#' + str(ts) + '.png'))
    
    
def jump(distance, delta_piece_y):
    '''
    跳跃一定的距离
    '''
    # 计算程序长度与截图测得的距离的比例
    scale = 0.945 * 2 / head_diameter
    actual_distance = distance * scale * (math.sqrt(6) / 2)
    press_time = (-945 + math.sqrt(945 ** 2 + 4 * 105 *
                                   36 * actual_distance)) / (2 * 105) * 1000
    press_time *= press_coefficient
    press_time = max(press_time, 200)  # 设置 200ms 是最小的按压时间
    press_time = int(press_time)