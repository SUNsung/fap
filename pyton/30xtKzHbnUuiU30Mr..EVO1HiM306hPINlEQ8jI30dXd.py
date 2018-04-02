
        
            with open('README.md', 'w+') as sorted_file:
        sorted_file.write(final_README)
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
        def test_youtube_extract(self):
        assertExtractId = lambda url, id: self.assertEqual(YoutubeIE.extract_id(url), id)
        assertExtractId('http://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?feature=player_embedded&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch_popup?v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('http://www.youtube.com/watch?v=BaW_jenozKcsharePLED17F32AD9753930', 'BaW_jenozKc')
        assertExtractId('BaW_jenozKc', 'BaW_jenozKc')
    
            formats = [
            {
                'format_id': f['type'],
                'filesize': int(f['filesize']),
                'url': f['url']
            } for f in info['rfiles']
        ]
        self._sort_formats(formats)
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
            self.wait_to_close_event = wait_to_close_event
        self.ready_event = threading.Event()
        self.stop_event = threading.Event()
    
        @pytest.mark.parametrize(
        'stream, value', (
            (StringIO.StringIO, 'Test'),
            (BytesIO, b'Test'),
            pytest.mark.skipif('cStringIO is None')((cStringIO, 'Test')),
        ))
    def test_io_streams(self, stream, value):
        '''Ensures that we properly deal with different kinds of IO streams.'''
        assert super_len(stream()) == 0
        assert super_len(stream(value)) == 4
    
    from r2.lib.translation import I18N_PATH
from r2.lib.plugin import PluginLoader
from r2.lib import js
    
        config.init_app(global_conf, app_conf, package='r2', paths=paths)
    
    api('wikibasepage', WikiJsonTemplate)
api('wikipagerevisions', WikiJsonTemplate)
api('wikiview', WikiViewJsonTemplate)
api('wikirevision', WikiRevisionJsonTemplate)
    
                send_gift(
                buyer=buyer,
                recipient=recipient,
                months=months,
                days=months * 31,
                signed=False,
                giftmessage=None,
                thing_fullname=thing_fullname,
                note=note,
            )
    
        @validate(VAdmin(),
              award = VAwardByCodename('awardcn'),
              recipient = nop('recipient'),
              desc = nop('desc'),
              url = nop('url'),
              hours = nop('hours'))
    def GET_give(self, award, recipient, desc, url, hours):
        if award is None:
            abort(404, 'page not found')
    
    class CaptchaController(RedditController):
    @allow_oauth2_access
    @api_doc(api_section.captcha, uri='/captcha/{iden}')
    def GET_captchaimg(self, iden):
        '''
        Request a CAPTCHA image given an `iden`.
    
                    errpage = pages.InterstitialPage(
                    _('suspended'),
                    content=pages.InTimeoutInterstitial(
                        timeout_days_remaining=timeout_days_remaining,
                    ),
                )
                request.environ['usable_error_content'] = errpage.render()