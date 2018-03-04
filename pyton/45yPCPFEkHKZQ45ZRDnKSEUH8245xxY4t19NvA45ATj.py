
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
    
def extract_board_data(url):
    json_data = extract_json_data(url, limit=LIMIT)
    pin_list = json_data['pins']
    title = json_data['title']
    pin_count = json_data['pin_count']
    pin_count -= len(pin_list)
    
        # mgid%3Auma%3Avideo%3Amtv81.com%3A897974
    vid = match1(html, r'getTheVideo\('(.*?)'')
    xml = parseString(
        get_content('http://intl.esperanto.mtvi.com/www/xml/media/mediaGen.jhtml?uri={}&flashPlayer=LNX%2013,0,0,206&geo=CN&sid=123456'.format(vid)))