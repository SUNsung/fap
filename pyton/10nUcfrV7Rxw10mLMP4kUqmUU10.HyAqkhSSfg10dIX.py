
        
            Ensures that the post exists and that the logged in user is the
    author of the post.
    '''
    get_post(id)
    db = get_db()
    db.execute('DELETE FROM post WHERE id = ?', (id,))
    db.commit()
    return redirect(url_for('blog.index'))

    
    
@pytest.fixture
def client(app):
    '''A test client for the app.'''
    return app.test_client()
    
        def fake_init_db():
        Recorder.called = True
    
        This will reference the index function local to the current blueprint::
    
            # Add an inline
        self.selenium.find_element_by_link_text('Add another Profile').click()
    
        def test_custom_email(self):
        user = CustomEmailField()
        self.assertEqual(user.get_email_field_name(), 'email_address')
    
    
DEFAULT_CONVERTERS = {
    'int': IntConverter(),
    'path': PathConverter(),
    'slug': SlugConverter(),
    'str': StringConverter(),
    'uuid': UUIDConverter(),
}
    
            if isinstance(value, Distance):
            if geography:
                dist_param = value.m
            elif geodetic:
                if lookup_type == 'dwithin':
                    raise ValueError('Only numeric values of degree units are '
                                     'allowed on geographic DWithin queries.')
                dist_param = value.m
            else:
                dist_param = getattr(value, Distance.unit_attname(f.units_name(self.connection)))
        else:
            # Assuming the distance is in the units of the field.
            dist_param = value
    
        def deconstruct(self):
        path, args, kwargs = super().deconstruct()
        if self.fillfactor is not None:
            kwargs['fillfactor'] = self.fillfactor
        return path, args, kwargs
    
        # Copy any attributes that a decorator adds to the function it decorates.
    for dec in decorators:
        _update_method_wrapper(_wrapper, dec)
    # Preserve any existing attributes of 'method', including the name.
    update_wrapper(_wrapper, method)
    return _wrapper
    
        @property
    def layer_name(self):
        'Return the name of the layer for the feature.'
        name = capi.get_feat_name(self._layer._ldefn)
        return force_str(name, self.encoding, strings_only=True)
    
    class Bigthink(VideoExtractor):
    name = 'Bigthink'
    
        if '_text' in dictified['video'][0]['file'][0]:  #link exist
        video_dict['links'] = [i['file'][0]['_text'].strip() for i in dictified['video']]
    
    
class CNTV(VideoExtractor):
    name = 'CNTV.com'
    stream_types = [
        {'id': '1', 'video_profile': '1280x720_2000kb/s', 'map_to': 'chapters4'},
        {'id': '2', 'video_profile': '1280x720_1200kb/s', 'map_to': 'chapters3'},
        {'id': '3', 'video_profile': '640x360_850kb/s', 'map_to': 'chapters2'},
        {'id': '4', 'video_profile': '480x270_450kb/s', 'map_to': 'chapters'},
        {'id': '5', 'video_profile': '320x180_200kb/s', 'map_to': 'lowChapters'},
    ]
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
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
    
            extractor = Funshion()
        for ep in meta['episodes']:
            title = '{}_{}_{}'.format(drama_name, ep['num'], ep['name'])
            extractor.download_by_vid(ep['id'], title=title, **kwargs)
    else:
        log.wtf('Unknown url pattern')
    
        m3u8_url = get_m3u8_url(stream_id)
    
    site_info = 'ifeng.com'
download = ifeng_download
download_playlist = playlist_not_supported('ifeng')
