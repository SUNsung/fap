
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
        def test_pbs(self):
        # https://github.com/rg3/youtube-dl/issues/2350
        self.assertMatch('http://video.pbs.org/viralplayer/2365173446/', ['pbs'])
        self.assertMatch('http://video.pbs.org/widget/partnerplayer/980042464/', ['pbs'])
    
        def test_func(self):
        as_file = os.path.join(TEST_DIR, testfile)
        swf_file = os.path.join(TEST_DIR, test_id + '.swf')
        if ((not os.path.exists(swf_file)) or
                os.path.getmtime(swf_file) < os.path.getmtime(as_file)):
            # Recompile
            try:
                subprocess.check_call([
                    'mxmlc', '-output', swf_file,
                    '-static-link-runtime-shared-libraries', as_file])
            except OSError as ose:
                if ose.errno == errno.ENOENT:
                    print('mxmlc not found! Skipping test.')
                    return
                raise
    
    from .nuevo import NuevoBaseIE
    
                for video_version in json_data.get('video_versions'):
                video_version_url = video_version.get('download_url') or video_version.get('stream_url')
                if not video_version_url:
                    continue
                f = {
                    'url': video_version_url,
                    'width': int_or_none(video_version.get('width')),
                    'height': int_or_none(video_version.get('height')),
                    'abr': int_or_none(video_version.get('audio_bitrate')),
                    'vbr': int_or_none(video_version.get('video_bitrate')),
                }
                bitrate = self._search_regex(r'(\d+)k', video_version_url, 'bitrate', default=None)
                if bitrate:
                    f.update({
                        'format_id': 'http-%s' % bitrate,
                    })
                formats.append(f)
            self._sort_formats(formats)
    
            page = self._download_json(
            'http://vxml.56.com/json/%s/' % text_id, text_id, 'Downloading video info')
    
    # TODO: response is the only one
    
                handler_result = self.handler(sock)
    
        @possible_keys
    def test_getitem(self, key):
        assert self.case_insensitive_dict[key] == 'application/json'
    
        def current_subdomain(self):
        return self.stacked_proxy_safe_get(c, 'subdomain')
    
    from r2.config import hooks
from r2.config.environment import load_environment
from r2.config.extensions import extension_mapping, set_extension
from r2.lib.utils import is_subdomain, is_language_subdomain
from r2.lib import csrf, filters
    
            AJAX login handler, used by both login and register to set the
        user cookie and send back a redirect.
        '''
        c.user = user
        c.user_is_loggedin = True
        self.login(user, rem=rem)
    
        @validate(VAdmin(),
              award = VAwardByCodename('awardcn'))
    def GET_winners(self, award):
        if award is None:
            abort(404, 'page not found')
    
                if links:
                kw = {}
                if wrapper:
                    links = wrap_links(links, wrapper = wrapper)
                else:
                    links = wrap_links(links)
                links = list(links)
                links = max(links, key = lambda x: x._score) if links else None
            if not links and wrapper:
                return wrapper(None)
            return links
            # note: even if _by_url successed or a link was passed in,
            # it is possible link_listing.things is empty if the
            # link(s) is/are members of a private reddit
            # return the link with the highest score (if more than 1)
        except:
            #we don't want to return 500s in other people's pages.
            import traceback
            g.log.debug('FULLPATH: get_link error in buttons code')
            g.log.debug(traceback.format_exc())
            if wrapper:
                return wrapper(None)
    
        def send404(self):
        if 'usable_error_content' in request.environ:
            return request.environ['usable_error_content']
        return pages.RedditError(_('page not found'),
                                 _('the page you requested does not exist')).render()
    
    print('Counting to five...')
for number in count_to_five():
    print(number, end=' ')