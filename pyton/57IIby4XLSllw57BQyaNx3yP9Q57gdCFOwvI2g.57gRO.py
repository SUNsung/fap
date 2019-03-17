
        
            if not opts and not args:
        # Display help.
        print(_help)
        # Enter GUI mode.
        #from .gui import gui_main
        #gui_main()
    else:
        conf = {}
        for opt, arg in opts:
            if opt in ('-h', '--help'):
                # Display help.
                print(_help)
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
        ep = 'http://vdn.apps.cntv.cn/api/getHttpVideoInfo.do?pid={}'
    
        # Try harder, check all iframes
    if 'recur_lv' not in kwargs or kwargs['recur_lv'] < recur_limit:
        r = kwargs.get('recur_lv')
        if r is None:
            r = 1
        else:
            r += 1
        iframes = matchall(content, [r'<iframe.+?src=(?:\'|\')(.+?)(?:\'|\')'])
        for iframe in iframes:
            if not iframe.startswith('http'):
                src = urllib.parse.urljoin(url, iframe)
            else:
                src = iframe
            found = embed_download(src, output_dir=output_dir, merge=merge, info_only=info_only, recur_lv=r, **kwargs)
            if found:
                return True
    
    
def huomaotv_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    room_id_pattern = r'huomao.com/(\d+)'
    room_id = match1(url, room_id_pattern)
    html = get_content(get_mobile_room_url(room_id))
    
    
def icourses_playlist_download(url, output_dir='.', **kwargs):
    page_type_patt = r'showSectionNode\(this,(\d+),(\d+)\)'
    resid_courseid_patt = r'changeforvideo\(\'(\d+)\',\'(\d+)\',\'(\d+)\'\)'
    ep = 'http://www.icourses.cn/jpk/viewCharacterDetail.action?sectionId={}&courseId={}'
    change_for_video_ip = 'http://www.icourses.cn/jpk/changeforVideo.action?resId={}&courseId={}'
    video_list = []