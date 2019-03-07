
        
            author = proj_info['author'],
    author_email = proj_info['author_email'],
    url = proj_info['url'],
    license = proj_info['license'],
    
        urls = matchall(content, dailymotion_embed_patterns)
    for url in urls:
        found = True
        dailymotion_download(url, output_dir=output_dir, merge=merge, info_only=info_only)
    
    def facebook_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    
    def get_orig_video_source(api_key, pid, secret):
    parsed = json.loads(get_content_headered(tmpl_api_call_video_info % (api_key, pid, secret)))
    for stream in parsed['streams']['stream']:
        if stream['type'] == 'orig':
            return stream['_content'].replace('\\', '')
    return None
    
            real_url = 'https://docs.google.com/uc?export=download&confirm=no_antivirus&id=%s' % docid
        redirected_url = get_location(real_url)
        if real_url != redirected_url:
# tiny file - get real url here
            type, ext, size = url_info(redirected_url)
            real_url = redirected_url
        else:
# huge file - the real_url is a confirm page and real url is in it
            confirm_page = get_content(real_url)
            hrefs = re.findall(r'href='(.+?)'', confirm_page)
            for u in hrefs:
                if u.startswith('/uc?export=download'):
                    rel = unescape_html(u)
            confirm_url = 'https://docs.google.com' + rel
            real_url = get_location(confirm_url)
            _, ext, size = url_info(real_url, headers=fake_headers)
            if size is None:
                size = 0
    
        clipboard_types = {'osx': init_osx_clipboard,
                       'gtk': init_gtk_clipboard,
                       'qt': init_qt_clipboard,
                       'xclip': init_xclip_clipboard,
                       'xsel': init_xsel_clipboard,
                       'klipper': init_klipper_clipboard,
                       'windows': init_windows_clipboard,
                       'no': init_no_clipboard}
    
            # object
        exp = pd.Index([pd.Timestamp('2011-01-01 09:00', tz=tz),
                        'x',
                        pd.Timestamp('2011-01-01 11:00', tz=tz)],
                       dtype=object)
        tm.assert_index_equal(idx.fillna('x'), exp)
