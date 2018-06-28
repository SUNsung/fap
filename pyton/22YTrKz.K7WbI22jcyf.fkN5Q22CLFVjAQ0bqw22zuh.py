
        
        
atom_template = textwrap.dedent('''\
    <?xml version='1.0' encoding='utf-8'?>
    <feed xmlns='http://www.w3.org/2005/Atom'>
        <link rel='self' href='http://rg3.github.io/youtube-dl/update/releases.atom' />
        <title>youtube-dl releases</title>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed</id>
        <updated>@TIMESTAMP@</updated>
        @ENTRIES@
    </feed>''')
    
            swf_class = swfi.extract_class(test_id)
        func = swfi.extract_function(swf_class, 'main')
        res = func(input_args)
        self.assertEqual(res, output)
    
    
def get_info_extractor(ie_name):
    '''Returns the info extractor class with the given ie_name'''
    return globals()[ie_name + 'IE']

    
    
class CNNBlogsIE(InfoExtractor):
    _VALID_URL = r'https?://[^\.]+\.blogs\.cnn\.com/.+'
    _TEST = {
        'url': 'http://reliablesources.blogs.cnn.com/2014/02/09/criminalizing-journalism/',
        'md5': '3e56f97b0b6ffb4b79f4ea0749551084',
        'info_dict': {
            'id': 'bestoftv/2014/02/09/criminalizing-journalism.cnn',
            'ext': 'mp4',
            'title': 'Criminalizing journalism?',
            'description': 'Glenn Greenwald responds to comments made this week on Capitol Hill that journalists could be criminal accessories.',
            'upload_date': '20140209',
        },
        'expected_warnings': ['Failed to download m3u8 information'],
        'add_ie': ['CNN'],
    }
    
        'bracketed_hostport': re.compile(
        r'''^
            \[(.+)\]                    # [host identifier]
            :([0-9]+)                   # :port number
            $
        ''', re.X
    ),
    
    # Make coding more python3-ish
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
        def on_open_shell(self):
        try:
            self._exec_cli_command('screen-length 0 temporary')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')
    
        def reduce_priority_link_to_crawl(self, url):
        '''Reduce the priority of a link in `links_to_crawl` to avoid cycles.'''
        pass
    
            (2016-01, url0), 2
        (2016-01, url1), 1
        '''
        yield key, sum(values)
    
    
class Bus(Vehicle):
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
        def test_no_ask_hsts(self):
        self.config.hsts = True
        self._test_with_all_supported()
        self.client.installer.enhance.assert_called_with(
            self.domain, 'ensure-http-header', 'Strict-Transport-Security')
    
            complex_vh = VirtualHost(
            'fp', 'vhp',
            set([Addr.fromstring('*:443'), Addr.fromstring('1.2.3.4:443')]),
            False, False)
        self.assertTrue(complex_vh.conflicts([self.addr1]))
        self.assertTrue(complex_vh.conflicts([self.addr2]))
        self.assertFalse(complex_vh.conflicts([self.addr_default]))
    
    # The master toctree document.
master_doc = 'index'
    
            link_list = self.get_streams_by_id(account_number, video_id)
    
    
def huaban_download_board(url, output_dir, **kwargs):
    kwargs['merge'] = False
    board = extract_board_data(url)
    output_dir = os.path.join(output_dir, board.title)
    print_info(site_info, board.title, 'jpg', float('Inf'))
    for pin in board.pins:
        download_urls([pin.url], pin.id, pin.ext, float('Inf'),
                      output_dir=output_dir, faker=True, **kwargs)
    
    def kugou_download_by_hash(title,hash_val,output_dir = '.', merge = True, info_only = False):
    #sample
    #url_sample:http://www.kugou.com/yy/album/single/536957.html
    #hash ->key  md5(hash+kgcloud')->key  decompile swf
    #cmd 4 for mp3 cmd 3 for m4a
    key=hashlib.new('md5',(hash_val+'kgcloud').encode('utf-8')).hexdigest()
    html=get_html('http://trackercdn.kugou.com/i/?pid=6&key=%s&acceptMp3=1&cmd=4&hash=%s'%(key,hash_val))
    j=loads(html)
    url=j['url']
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
            # extract raw urls
        orig_img = match1(content,
                         r'<meta itemprop='image' content='([^']+/originals/[^']+)'')
        twit_img = match1(content,
                          r'<meta property='twitter:image:src' name='twitter:image:src' content='([^']+)'')
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
    from homeassistant.components.device_tracker import bt_home_hub_5
from homeassistant.const import CONF_HOST