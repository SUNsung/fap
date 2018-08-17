
        
            before_render_template.send(app, template=template, context=context)
    rv = template.render(context)
    template_rendered.send(app, template=template, context=context)
    return rv
    
                def post(self):
                session['counter'] = session.get('counter', 0) + 1
                return 'OK'
    
        sys.meta_path.append(Loader())
    request.addfinalizer(sys.meta_path.pop)
    
        # This test only works on CPython 2.7.
    if sys.version_info >= (2, 7) and \
            not hasattr(sys, 'pypy_translation_info'):
        with assert_no_leak():
            for x in range(10):
                fire()
    
            assert calls == ['before-signal', 'before-handler', 'handler',
                         'after-handler', 'after-signal']
    finally:
        flask.request_started.disconnect(before_request_signal, app)
        flask.request_finished.disconnect(after_request_signal, app)
    
            with server as (host, port):
            server_url = 'http://{0}:{1}'.format(host, port)
            for _ in range(requests_to_handle):
                r = requests.get(server_url)
                assert r.status_code == 200
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
        # Informational.
    100: ('continue',),
    101: ('switching_protocols',),
    102: ('processing',),
    103: ('checkpoint',),
    122: ('uri_too_long', 'request_uri_too_long'),
    200: ('ok', 'okay', 'all_ok', 'all_okay', 'all_good', '\\o/', '✓'),
    201: ('created',),
    202: ('accepted',),
    203: ('non_authoritative_info', 'non_authoritative_information'),
    204: ('no_content',),
    205: ('reset_content', 'reset'),
    206: ('partial_content', 'partial'),
    207: ('multi_status', 'multiple_status', 'multi_stati', 'multiple_stati'),
    208: ('already_reported',),
    226: ('im_used',),
    
        def test_headers_on_session_with_None_are_not_sent(self, httpbin):
        '''Do not send headers in Session.headers with None values.'''
        ses = requests.Session()
        ses.headers['Accept-Encoding'] = None
        req = requests.Request('GET', httpbin('get'))
        prep = ses.prepare_request(req)
        assert 'Accept-Encoding' not in prep.headers
    
        author = proj_info['author'],
    author_email = proj_info['author_email'],
    url = proj_info['url'],
    license = proj_info['license'],
    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
    
def huaban_download_board(url, output_dir, **kwargs):
    kwargs['merge'] = False
    board = extract_board_data(url)
    output_dir = os.path.join(output_dir, board.title)
    print_info(site_info, board.title, 'jpg', float('Inf'))
    for pin in board.pins:
        download_urls([pin.url], pin.id, pin.ext, float('Inf'),
                      output_dir=output_dir, faker=True, **kwargs)
    
    def kuwo_playlist_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html=get_content(url)
    matched=set(re.compile('yinyue/(\d+)').findall(html))#reduce duplicated
    for rid in matched:
        kuwo_download_by_rid(rid,output_dir,merge,info_only)
    
        t = r1(r'type=(\w+)', flashvars)
    id = r1(r'vid=([^']+)', flashvars)
    if t == 'youku':
        youku_download_by_vid(id, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'tudou':
        tudou_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'sina' or t == 'video':
        fake_headers['Referer'] = url
        url = 'http://www.miomio.tv/mioplayer/mioplayerconfigfiles/sina.php?vid=' + id
        xml_data = get_content(url, headers=fake_headers, decoded=True)
        url_list = sina_xml_to_url_list(xml_data)
    
        mediatype, ext, size = 'mp4', 'mp4', 0
    print_info(site_info, title, mediatype, size)
    #
    # rtmpdump  -r 'rtmpe://cp30865.edgefcs.net/ondemand/mtviestor/_!/intlod/MTVInternational/MBUS/GeoLocals/00JP/VIAMTVI/PYC/201304/7122HVAQ4/00JPVIAMTVIPYC7122HVAQ4_640x_360_1200_m30.mp4' -o 'title.mp4' --swfVfy http://media.mtvnservices.com/player/prime/mediaplayerprime.1.10.8.swf
    #
    # because rtmpdump is unstable,may try serveral times
    #
    if not info_only:
        # import pdb
        # pdb.set_trace()
        download_rtmp_url(url=url, title=title, ext=ext, params={
                          '--swfVfy': 'http://media.mtvnservices.com/player/prime/mediaplayerprime.1.10.8.swf'}, output_dir=output_dir)
    
        def prepare(self, **kwargs):
        # scrape the html
        content = get_content(self.url)
    
        def append(self, full, file, logical):
        if os.path.isdir(full):
            return
        if not logical:
            logical = self.gen_id(file)
        self.index += 1
        self.files.append((full, logical))
        return self.index, logical
    
            tester('ntpath.join('a/b', '/x/y')', '/x/y')
        tester('ntpath.join('/a/b', '/x/y')', '/x/y')
        tester('ntpath.join('c:', '/x/y')', 'c:/x/y')
        tester('ntpath.join('c:a/b', '/x/y')', 'c:/x/y')
        tester('ntpath.join('c:/', '/x/y')', 'c:/x/y')
        tester('ntpath.join('c:/a/b', '/x/y')', 'c:/x/y')
        tester('ntpath.join('//computer/share', '/x/y')', '//computer/share/x/y')
        tester('ntpath.join('//computer/share/', '/x/y')', '//computer/share/x/y')
        tester('ntpath.join('//computer/share/a', '/x/y')', '//computer/share/x/y')
    
        def _make_self_pipe(self):
        # A self-socket, really. :-)
        self._ssock, self._csock = socket.socketpair()
        self._ssock.setblocking(False)
        self._csock.setblocking(False)
        self._internal_fds += 1
        self.call_soon(self._loop_self_reading)
    
                class X(Checker):
                pass
            for attr, obj in env.items():
                setattr(X, attr, obj)
            setattr(X, name, ErrDescr())
            self.assertRaises(MyException, runner, X())
    
    This converts ``[x for x in 1, 2]`` to ``[x for x in (1, 2)]``.'''
    
    
def extract_zip(externals_dir, zip_path):
    with zipfile.ZipFile(os.fspath(zip_path)) as zf:
        zf.extractall(os.fspath(externals_dir))
        return externals_dir / zf.namelist()[0].split('/')[0]