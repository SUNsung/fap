
        
                for i in link_list:
            self.stream_types.append({'id': str(i[0])})
            self.streams[i[0]] = {'url': i[1]}
    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
    
def download_url(url, merge, output_dir, title, info_only):
    mime, ext, size = url_info(url)
    print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
        elif 'subject' in url:
        titles = re.findall(r'data-title='([^']*)'>', html)
        song_id = re.findall(r'<li class='song-item' id='([^']*)'', html)
        song_ssid = re.findall(r'data-ssid='([^']*)'', html)
        get_song_url = 'http://music.douban.com/j/songlist/get_song_url'
    
    
def fantasy_download_by_id_channelId(id = 0, channelId = 0, output_dir = '.', merge = True, info_only = False,
                                     **kwargs):
    api_url = 'http://www.fantasy.tv/tv/playDetails.action?' \
              'myChannelId=1&id={id}&channelId={channelId}&t={t}'.format(id = id,
                                                                         channelId = channelId,
                                                                         t = str(random.random())
                                                                         )
    html = get_content(api_url)
    html = json.loads(html)
    
        type, ext, size = url_info(video_url, headers=fake_headers)
    
    
def ExtractKeywordsFromGroup_KeywordStarts_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo bar',
                   'contained boo baa',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'boo', 'baa', 'zoo', 'goo' ) )
    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
            for future in as_completed(future_to_url):
            try:
                url_to_content[future_to_url[future]] = future.result()
            except:
                pass
        return url_to_content
    finally:
        executor.shutdown()
    
    PRIMES = [
    112272535095293,
    112582705942171,
    112272535095293,
    115280095190773,
    115797848077099,
    117450548693743,
    993960000099397]