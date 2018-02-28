
        
            params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
            if check_executable('mplayer', ['-h']):
            args = [
                'mplayer', '-really-quiet', '-vo', 'null', '-vc', 'dummy',
                '-dumpstream', '-dumpfile', tmpfilename, url]
        elif check_executable('mpv', ['-h']):
            args = [
                'mpv', '-really-quiet', '--vo=null', '--stream-dump=' + tmpfilename, url]
        else:
            self.report_error('MMS or RTSP download detected but neither 'mplayer' nor 'mpv' could be run. Please install any.')
            return False
    
            raw_payload = self._search_regex([
            r'class='amtv-embed'[^>]+id='([^']+)'',
            r'class=\\'amtv-embed\\'[^>]+id=\\'([^']+)\\'',
        ], webpage, 'raw payload')
        _, stage_mode, video_id, lang = raw_payload.split('-')
    
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

    
            return info_dict

    
    site_info = 'MioMio.tv'
download = miomio_download
download_playlist = playlist_not_supported('miomio')

    
    #----------------------------------------------------------------------
def showroom_get_roomid_by_room_url_key(room_url_key):
    '''str->str'''
    fake_headers_mobile = {
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
        'Accept-Charset': 'UTF-8,*;q=0.5',
        'Accept-Encoding': 'gzip,deflate,sdch',
        'Accept-Language': 'en-US,en;q=0.8',
        'User-Agent': 'Mozilla/5.0 (Linux; Android 4.4.2; Nexus 4 Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/34.0.1847.114 Mobile Safari/537.36'
    }
    webpage_url = 'https://www.showroom-live.com/' + room_url_key
    html = get_content(webpage_url, headers = fake_headers_mobile)
    roomid = match1(html, r'room\?room_id\=(\d+)')
    assert roomid
    return roomid
    
    
class TestNaitivePool(unittest.TestCase):
    
        def test_parrot_eng_localization(self):
        self.assertEqual(self.e.get('parrot'), 'parrot')
    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
        def main_method(self):
        '''will execute either _instance_method_1 or _instance_method_2
    
        def publishReport(self):
        self._db.update()
        self._reporter.report()
    
    
class CompositeSpecification(Specification):
    
    print 'PLUGIN_I18N_PATHS := ' + ','.join(os.path.relpath(plugin.path)
                                         for plugin in plugins
                                         if plugin.needs_translation)
    
        def live_config_iteritems(self):
        live = self.stacked_proxy_safe_get(g, 'live_config', {})
        return live.iteritems()
    
    api('organiclisting',       OrganicListingJsonTemplate)
api('subreddittraffic', TrafficJsonTemplate)
api('takedownpane', TakedownJsonTemplate)
api('policyview', PolicyViewJsonTemplate)
    
    from r2.config.extensions import set_extension
from r2.controllers.reddit_base import RedditController, generate_modhash
from r2.controllers.login import handle_login, handle_register
from r2.lib.csrf import csrf_exempt
from r2.lib.validator import (
    json_validate,
    ValidEmail,
    VPasswordChange,
    VRatelimit,
    VSigned,
    VThrottledLogin,
    VUname,
)
    
            # See if the target is already an existing friend.
        # If not, create the friend relationship.
        friend_rel = Account.get_friend(c.user, friend)
        rel_exists = bool(friend_rel)
        if not friend_rel:
            friend_rel = c.user.add_friend(friend)
            response.status = 201
    
            def builder_wrapper(thing = None):
            kw = {}
            if not thing:
                kw['url'] = url
                kw['title'] = title
            return ButtonLite(thing,
                              image = 1 if buttonimage is None else buttonimage,
                              target = '_new' if newwindow else '_parent',
                              styled = styled, **kw)
    
            To request a new CAPTCHA,
        use [/api/new_captcha](#POST_api_new_captcha).
        '''
        image = captcha.get_image(iden)
        f = StringIO.StringIO()
        image.save(f, 'PNG')
        response.content_type = 'image/png;'
        return f.getvalue()
    

    
    
    def send400(self):
        if 'usable_error_content' in request.environ:
            return request.environ['usable_error_content']
        else:
            res = pages.RedditError(
                title=_('bad request (%(domain)s)') % dict(domain=g.domain),
                message=_('you sent an invalid request'),
                explanation=request.GET.get('explanation'))
            return res.render()
    
    from r2.controllers.reddit_base import MinimalController
from r2.lib.pages import (
    GoogleTagManagerJail,
    GoogleTagManager,
)
from r2.lib.validator import (
    validate,
    VGTMContainerId,
)
    
        def GET_promohealth(self):
        response.content_type = 'application/json'
        return json.dumps(promote.health_check())