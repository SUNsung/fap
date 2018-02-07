
        
            with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
    header = oldreadme[:oldreadme.index('# OPTIONS')]
footer = oldreadme[oldreadme.index('# CONFIGURATION'):]
    
    for page in itertools.count(1):
    releases = json.loads(compat_urllib_request.urlopen(
        'https://api.github.com/repos/rg3/youtube-dl/releases?page=%s' % page
    ).read().decode('utf-8'))
    
                    if ''' not in code and ''' not in code:
                    continue
                assertRegexpMatches(
                    self,
                    code,
                    r'(?:(?:#.*?|\s*)\n)*from __future__ import (?:[a-z_]+,\s*)*unicode_literals',
                    'unicode_literals import  missing in %s' % fn)
    
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
    
    
class AcademicEarthCourseIE(InfoExtractor):
    _VALID_URL = r'^https?://(?:www\.)?academicearth\.org/playlists/(?P<id>[^?#/]+)'
    IE_NAME = 'AcademicEarth:Course'
    _TEST = {
        'url': 'http://academicearth.org/playlists/laws-of-nature/',
        'info_dict': {
            'id': 'laws-of-nature',
            'title': 'Laws of Nature',
            'description': 'Introduce yourself to the laws of nature with these free online college lectures from Yale, Harvard, and MIT.',
        },
        'playlist_count': 3,
    }
    
            duration = parse_duration(self._search_regex(
            r'<b>Duration:</b> (?:<q itemprop='duration'>)?(\d+:\d+)', webpage, 'duration', fatal=False))
        view_count = int_or_none(self._html_search_regex(
            r'<b>Views:</b> (\d+)', webpage, 'view count', fatal=False))
    
            mvp_id = self._search_mvp_id(webpage)
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    
        for node in doctree.traverse(settingslist_node):
        settings_list = nodes.bullet_list()
        settings_list.extend([make_setting_element(d, app, fromdocname)
                              for d in sorted(env.scrapy_all_settings,
                                              key=itemgetter('setting_name'))
                              if fromdocname != d['docname']])
        node.replace_self(settings_list)
    
                tested_methods = conman.tested_methods_from_spidercls(spidercls)
            if opts.list:
                for method in tested_methods:
                    contract_reqs[spidercls.name].append(method)
            elif tested_methods:
                self.crawler_process.crawl(spidercls)
    
                @wraps(cb)
            def wrapper(response):
                try:
                    results.startTest(self.testcase_pre)
                    self.pre_process(response)
                    results.stopTest(self.testcase_pre)
                except AssertionError:
                    results.addFailure(self.testcase_pre, sys.exc_info())
                except Exception:
                    results.addError(self.testcase_pre, sys.exc_info())
                else:
                    results.addSuccess(self.testcase_pre)
                finally:
                    return list(iterate_spider_output(cb(response)))
    
    __all__ = ['fc2video_download']
    
            # cookie handler
        ssl_context = request.HTTPSHandler(
            context=ssl.SSLContext(ssl.PROTOCOL_TLSv1))
        cookie_handler = request.HTTPCookieProcessor()
        opener = request.build_opener(ssl_context, cookie_handler)
        opener.addheaders = [
            ('Referer', self.url),
            ('Cookie',
             'CloudFront-Policy=%s;CloudFront-Signature=%s;CloudFront-Key-Pair-Id=%s' % (scp, scs, sck))
        ]
        request.install_opener(opener)
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(10, 20)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 30)
    
        def tearDown(self):
        self.out.close()
        sys.stdout = self.saved_stdout
    
    
class CatalogClass(object):
    
    ### OUTPUT ###
# request 2 handled in handler 1
# request 5 handled in handler 1
# request 14 handled in handler 2
# request 22 handled in handler 3
# request 18 handled in handler 2
# request 3 handled in handler 1
# end of chain, no handler for 35
# request 27 handled in handler 3
# request 20 handled in handler 2
# ------------------------------
# request 2 handled in coroutine 1
# request 5 handled in coroutine 1
# request 14 handled in coroutine 2
# request 22 handled in coroutine 3
# request 18 handled in coroutine 2
# request 3 handled in coroutine 1
# end of chain, no coroutine for 35
# request 27 handled in coroutine 3
# request 20 handled in coroutine 2
# (0.2369999885559082, 0.16199994087219238)
