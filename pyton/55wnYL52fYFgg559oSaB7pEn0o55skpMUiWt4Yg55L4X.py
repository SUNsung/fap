
        
            out = issue_template_tmpl % {'version': locals()['__version__']}
    
    
def report_warning(message):
    '''
    Print the message to stderr, it will be prefixed with 'WARNING:'
    If stderr is a tty file the 'WARNING:' will be colored
    '''
    if sys.stderr.isatty() and compat_os_name != 'nt':
        _msg_header = '\033[0;33mWARNING:\033[0m'
    else:
        _msg_header = 'WARNING:'
    output = '%s %s\n' % (_msg_header, message)
    if 'b' in getattr(sys.stderr, 'mode', '') or sys.version_info[0] < 3:
        output = output.encode(preferredencoding())
    sys.stderr.write(output)
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
    
def get_info_extractor(ie_name):
    '''Returns the info extractor class with the given ie_name'''
    return globals()[ie_name + 'IE']

    
            return {
            'id': flv_id,
            'url': rtmp_url,
            'ext': 'flv',
            'no_resume': True,
            'title': title,
            'description': description,
            'duration': duration,
            'view_count': view_count,
            'comment_count': comment_count,
            'uploader': uploader,
            'upload_date': upload_date,
        }

    
            info_dict = self._extract_from_id(mvp_id, webpage)
        info_dict['display_id'] = display_id
    
        def _real_extract(self, url):
        display_id = self._match_id(url)
    
    
class ClypIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?clyp\.it/(?P<id>[a-z0-9]+)'
    _TEST = {
        'url': 'https://clyp.it/ojz2wfah',
        'md5': '1d4961036c41247ecfdcc439c0cddcbb',
        'info_dict': {
            'id': 'ojz2wfah',
            'ext': 'mp3',
            'title': 'Krisson80 - bits wip wip',
            'description': '#Krisson80BitsWipWip #chiptune\n#wip',
            'duration': 263.21,
            'timestamp': 1443515251,
            'upload_date': '20150929',
        },
    }
    
            self.title = match1(html, r'<meta property='og:title' content='([^']*)'')
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
        title = match1(html, r'&title=([^&]+)')
    
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
    
        return None
    
    
if __name__ == '__main__':
    main()

    
            If ``max_length`` is given, some input data may be left over
        in ``unconsumed_tail``; you must retrieve this value and pass
        it back to a future call to `decompress` if it is not empty.
        '''
        return self.decompressobj.decompress(value, max_length)
    
    
class CountdownHandler(RequestHandler):
    def get(self, count):
        count = int(count)
        if count > 0:
            self.redirect(self.reverse_url('countdown', count - 1))
        else:
            self.write('Zero')
    
                def finish(self):
                event.set()
    
        def _on_authentication_verified(self, future, response_fut):
        try:
            response = response_fut.result()
        except Exception as e:
            future.set_exception(AuthError(
                'Error response %s' % e))
            return
        if b'is_valid:true' not in response.body:
            future.set_exception(AuthError(
                'Invalid OpenID response: %s' % response.body))
            return
    
            g = f()