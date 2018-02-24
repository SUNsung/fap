
        
            out = issue_template_tmpl % {'version': locals()['__version__']}
    
    
total_bytes = 0
    
    from test.helper import try_rm
    
        def _real_extract(self, url):
        mobj = re.match(self._VALID_URL, url)
        video_id = mobj.group('id')
    
            # API is inconsistent with errors
        if 'url' not in api_response or not api_response['url'] or 'error' in api_response:
            raise ExtractorError('Invalid url %s' % url)
    
            info = page['info']
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
        def __init__(self, output_file=None,
                 resume=False, progress_file=sys.stderr):
        '''
        :param resume: Should the download resume if partial download
                       already exists.
        :type resume: bool
    
        # 128+2 SIGINT <http://www.tldp.org/LDP/abs/html/exitcodes.html>
    ERROR_CTRL_C = 130
    
    Py3 = sys.version_info[0] == 3
    
    
def test(model, dataset):
  '''Perform an evaluation of `model` on the examples from `dataset`.'''
  avg_loss = tfe.metrics.Mean('loss')
  accuracy = tfe.metrics.Accuracy('accuracy')
    
    import os
    
        # Get options and arguments.
    try:
        opts, args = getopt.getopt(sys.argv[1:], _short_options, _options)
    except getopt.GetoptError as e:
        log.wtf('''
    [Fatal] {}.
    Try '{} --help' for more options.'''.format(e, script_name))
    
    def kugou_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    if url.lower().find('5sing')!=-1:
        #for 5sing.kugou.com
        html=get_html(url)
        ticket=r1(r''ticket':\s*'(.*)'',html)
        j=loads(str(b64decode(ticket),encoding='utf-8'))
        url=j['file']
        title=j['songName']
        songtype, ext, size = url_info(url)
        print_info(site_info, title, songtype, size)
        if not info_only:
            download_urls([url], title, ext, size, output_dir, merge=merge)
    else:
        #for the www.kugou.com/
        return kugou_download_playlist(url, output_dir=output_dir, merge=merge, info_only=info_only)
        # raise NotImplementedError(url)       
    
    def kuwo_playlist_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html=get_content(url)
    matched=set(re.compile('yinyue/(\d+)').findall(html))#reduce duplicated
    for rid in matched:
        kuwo_download_by_rid(rid,output_dir,merge,info_only)
    
        print_info(site_info, title, ext, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir=output_dir, merge=merge)
    
    from html.parser import HTMLParser
    
        @classmethod
    def setUpClass(cls):
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
        cls.sub = Data('Data')
        # inherited behavior already tested with TestSubject
        cls.sub.attach(cls.dec_obs)
        cls.sub.attach(cls.hex_obs)
    
        def __init__(self, msg_center):
        self.provider = msg_center
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
        def test_3rd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1510'
        self.assertEqual(station, expected_station)
    
        def main_method(self):
        '''will execute either _static_method_1 or _static_method_2
    
        # 优先获取执行文件目录的配置文件
    here = sys.path[0]
    for file in os.listdir(here):
        if re.match(r'(.+)\.json', file):
            file_name = os.path.join(here, file)
            with open(file_name, 'r') as f:
                print('Load config file from {}'.format(file_name))
                return json.load(f)