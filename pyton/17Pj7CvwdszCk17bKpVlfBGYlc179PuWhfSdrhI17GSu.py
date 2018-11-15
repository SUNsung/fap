
        
        Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
        All keys are expected to be strings. The structure remembers the
    case of the last key to be set, and ``iter(instance)``,
    ``keys()``, ``items()``, ``iterkeys()``, and ``iteritems()``
    will contain case-sensitive keys. However, querying and contains
    testing is case insensitive::
    
        def test_list(self):
        assert list(self.case_insensitive_dict) == ['Accept']
    
        def get_dict(self, domain=None, path=None):
        '''Takes as an argument an optional domain and path and returns a plain
        old Python dict of name-value pairs of cookies that meet the
        requirements.
    
    Available hooks:
    
            assert status_line == b'GET /path/to/thing/ HTTP/1.1'
        for frag in (b'view', b'edit', b'token', b'hunter2'):
            assert frag not in headers
            assert frag not in body
    
        def test_text_response(self):
        '''the text_response_server sends the given text'''
        server = Server.text_response_server(
            'HTTP/1.1 200 OK\r\n' +
            'Content-Length: 6\r\n' +
            '\r\nroflol'
        )
    
    # A sequence of (type, uri, title) tuples for the guide element of content.opf.
#epub_guide = ()
    
        @staticmethod
    def import_ubuntu_system_ca(common_name, certfile):
        import platform
        platform_distname = platform.dist()[0]
        if platform_distname != 'Ubuntu':
            return
    
        if len(sys.argv) > 1:
        ip = sys.argv[1]
    else:
        ip = '46.134.208.94'
        ip = '2001:ee0:3203:a::12'
        print('Usage: check_ip.py [ip] [top_domain] [wait_time=0]')
    print('test ip:%s' % ip)
    
    
class SniManager(object):
    plus = ['-', '', '.']
    end = ['com', 'net', 'ml', 'org', 'us']
    
        major = int(m.group(1))
    minor = int(m.group(2))
    patch = int(m.group(4) or 0)
    beta = int(m.group(6) or sys.maxint)
    
                elif opt in ('-g', '--gui'):
                # Run using GUI.
                conf['gui'] = True
    
        stream_types = [  # we do now know for now, as we have to check the
                      # output from the API
    ]
    
    __all__ = ['cbs_download']
    
        def prepare(self, **kwargs):
        self.api_data = json.loads(get_content(self.__class__.ep.format(self.vid)))
        self.title = self.api_data['title']
        for s in self.api_data['video']:
            for st in self.__class__.stream_types:
                if st['map_to'] == s:
                    urls = self.api_data['video'][s]
                    src = [u['url'] for u in urls]
                    stream_data = dict(src=src, size=0, container='mp4', video_profile=st['video_profile'])
                    self.streams[st['id']] = stream_data
    
    
def write_loop_file(records_number, loop_file_path, file_name):
    with open(loop_file_path, 'a') as file:
        for i in range(records_number):
            file.write('file '{}'\n'.format(file_name))
    
        if re.match(r'https?://movie', url):
        title = match1(html, 'name='description' content='([^']+)')
        tid = match1(url, 'trailer/(\d+)')
        real_url = 'https://movie.douban.com/trailer/video_url?tid=%s' % tid
        type, ext, size = url_info(real_url)
    
        urls = matchall(content, netease_embed_patterns)
    for url in urls:
        found = True
        netease_download(url, output_dir=output_dir, merge=merge, info_only=info_only)