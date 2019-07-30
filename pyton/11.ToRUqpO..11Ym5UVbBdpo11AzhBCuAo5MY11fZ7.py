
        
            # test that successful registration redirects to the login page
    response = client.post('/auth/register', data={'username': 'a', 'password': 'a'})
    assert 'http://localhost/auth/login' == response.headers['Location']
    
    import pytest
    
        try:
        try:
            rv = url_adapter.build(
                endpoint, values, method=method, force_external=external
            )
        finally:
            if old_scheme is not None:
                url_adapter.url_scheme = old_scheme
    except BuildError as error:
        # We need to inject the values again so that the app callback can
        # deal with that sort of stuff.
        values['_external'] = external
        values['_anchor'] = anchor
        values['_method'] = method
        values['_scheme'] = scheme
        return appctx.app.handle_url_build_error(error, endpoint, values)
    
        return kwargs

    
        def __init__(self, orig):
        self._orig = orig
    
        def __init__(self, msg, with_headers=True, with_body=True,
                 on_body_chunk_downloaded=None):
        '''
        :param msg: a :class:`models.HTTPMessage` subclass
        :param with_headers: if `True`, headers will be included
        :param with_body: if `True`, body will be included
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_auth_plugin_parse_auth_false(httpbin):
    
        if not info_only and not dry_run:
        if not kwargs['caption']:
            print('Skipping danmaku.')
            return
        try:
            title = get_filename(title)
            print('Downloading %s ...\n' % (title + '.cmt.json'))
            cmt = get_srt_json(vid)
            with open(os.path.join(output_dir, title + '.cmt.json'), 'w', encoding='utf-8') as x:
                x.write(cmt)
        except:
            pass
    
            for stream in info['data']['vidl']:
            try:
                stream_id = self.vd_2_id[stream['vd']]
                if stream_id in self.stream_types:
                    continue
                stream_profile = self.id_2_profile[stream_id]
                self.streams[stream_id] = {'video_profile': stream_profile, 'container': 'm3u8', 'src': [stream['m3u']], 'size' : 0, 'm3u8_url': stream['m3u']}
            except Exception as e:
                log.i('vd: {} is not handled'.format(stream['vd']))
                log.i('info is {}'.format(stream))
    
    
    import urllib
    
    from ..common import *
    
    #----------------------------------------------------------------------
def ckplayer_download(url, output_dir = '.', merge = False, info_only = False, is_xml = True, **kwargs):
    if is_xml:  #URL is XML URL
        try:
            title = kwargs['title']
        except:
            title = ''
        try:
            headers = kwargs['headers']  #headers provided
            ckinfo = get_content(url, headers = headers)
        except NameError:
            ckinfo = get_content(url)
        
        ckplayer_download_by_xml(ckinfo, output_dir, merge, 
                                info_only, title = title)