
        
        log_file = os.path.join(data_path, 'ipv6_tunnel.log')
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
    
class ParserRuleReturnScope(RuleReturnScope):
    '''
    Rules that return more than a single value must return an object
    containing all the values.  Besides the properties defined in
    RuleLabelScope.predefinedRulePropertiesScope there may be user-defined
    return values.  This class simply defines the minimum properties that
    are always defined and methods to access the others that might be
    available depending on output option such as template and tree.
    
            if args:
            if 'gui' in conf and conf['gui']:
                # Enter GUI mode.
                from .gui import gui_main
                gui_main(*args, **conf)
            else:
                # Enter console mode.
                from .console import console_main
                console_main(*args, **conf)
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
            link_list = self.get_streams_by_id(account_number, video_id)
    
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
    
    # looks that flickr won't return urls for all sizes
# we required in 'extras field without a acceptable header
dummy_header = {
    'User-Agent':'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:53.0) Gecko/20100101 Firefox/53.0'
}
def get_content_headered(url):
    return get_content(url, dummy_header)
    
    __all__ = ['giphy_download']
    
    
def huomaotv_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    room_id_pattern = r'huomao.com/(\d+)'
    room_id = match1(url, room_id_pattern)
    html = get_content(get_mobile_room_url(room_id))
    
    def ifeng_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
# old pattern /uuid.shtml
# now it could be #uuid
    id = r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', url)
    if id:
        return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)
    
        def test_default_decoder_raises_deserialization_error(self):
        from acme.fields import RFC3339Field
        self.assertRaises(
            jose.DeserializationError, RFC3339Field.default_decoder, '')
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
        # Additional stuff for the LaTeX preamble.
    #'preamble': '',
    
    
    
    
def __meters_to_miles(meters: float) -> float:
    '''Convert meters to miles.'''
    return meters * 0.000621371