
        
            entry_points = {'console_scripts': proj_info['console_scripts']}
)

    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
        #if dictify(e)['ckplayer']['info'][0]['title'][0]['_text'].strip():  #duration
        #video_dict['title'] = dictify(e)['ckplayer']['info'][0]['title'][0]['_text'].strip()
    
    site_info = 'CNTV.com'
download = cntv_download
download_playlist = playlist_not_supported('cntv')

    
            for i in range(len(titles)):
            title = titles[i]
            datas = {
                'sid': song_id[i],
                'ssid': song_ssid[i]
            }
            post_params = urllib.parse.urlencode(datas).encode('utf-8')
            try:
                resp = urllib.request.urlopen(get_song_url, post_params)
                resp_data = json.loads(resp.read().decode('utf-8'))
                real_url = resp_data['r']
                type, ext, size = url_info(real_url)
                print_info(site_info, title, type, size)
            except:
                pass
    
    site_info = 'Giphy.com'
download = giphy_download
download_playlist = playlist_not_supported('giphy')

    
    def ifeng_download_by_id(id, title = None, output_dir = '.', merge = True, info_only = False):
    assert r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', id), id
    url = 'http://vxml.ifengimg.com/video_info_new/%s/%s/%s.xml' % (id[-2], id[-2:], id)
    xml = get_html(url, 'utf-8')
    title = r1(r'Name='([^']+)'', xml)
    title = unescape_html(title)
    url = r1(r'VideoPlayUrl='([^']+)'', xml)
    from random import randint
    r = randint(10, 19)
    url = url.replace('http://wideo.ifeng.com/', 'http://ips.ifeng.com/wideo.ifeng.com/')
    type, ext, size = url_info(url)
    
    '''
http://code.activestate.com/recipes/131499-observer-pattern/
    
            if not meth:
            meth = self.generic_visit
        return meth(node, *args, **kwargs)
    
    ### OUTPUT ###
# rm1: Running
# rm2: Running
# rm1: Zombie
# rm2: Zombie
# rm1 id: 140732837899224
# rm2 id: 140732837899296
# rm1: Init
# rm2: Init
# rm3: Init

    
    
if __name__ == '__main__':
    main()
    
    *What does this example do?
This example shows a way to add formatting options (boldface and
italic) to a text by appending the corresponding tags (<b> and
<i>). Also, we can see that decorators can be applied one after the other,
since the original text is passed to the bold wrapper, which in turn
is passed to the italic wrapper.