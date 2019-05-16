from inspect import getsource
import io
import os
from os.path import dirname as dirn
import sys
    
        with open(ZSH_COMPLETION_FILE, 'w') as f:
        f.write(template)
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'youtube-dldoc'

    
        def test_cache(self):
        ydl = FakeYDL({
            'cachedir': self.test_dir,
        })
        c = Cache(ydl)
        obj = {'x': 1, 'y': ['ä', '\\a', True]}
        self.assertEqual(c.load('test_cache', 'k.'), None)
        c.store('test_cache', 'k.', obj)
        self.assertEqual(c.load('test_cache', 'k2'), None)
        self.assertFalse(_is_empty(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), obj)
        self.assertEqual(c.load('test_cache', 'y'), None)
        self.assertEqual(c.load('test_cache2', 'k.'), None)
        c.remove()
        self.assertFalse(os.path.exists(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), None)
    
            self.server_process.terminate()
        self.server_process.communicate()
    
    
def test_reuters():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = reuters.load_data()
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
        assert len(x_train) + len(x_test) == 11228
        (x_train, y_train), (x_test, y_test) = reuters.load_data(maxlen=10)
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
        word_index = reuters.get_word_index()
        assert isinstance(word_index, dict)
    
    # Display the 1st 8 corrupted and denoised images
rows, cols = 10, 30
num = rows * cols
imgs = np.concatenate([x_test[:num], x_test_noisy[:num], x_decoded[:num]])
imgs = imgs.reshape((rows * 3, cols, image_size, image_size))
imgs = np.vstack(np.split(imgs, rows, axis=1))
imgs = imgs.reshape((rows * 3, -1, image_size, image_size))
imgs = np.vstack([np.hstack(i) for i in imgs])
imgs = (imgs * 255).astype(np.uint8)
plt.figure()
plt.axis('off')
plt.title('Original images: top rows, '
          'Corrupted Input: middle rows, '
          'Denoised Input:  third rows')
plt.imshow(imgs, interpolation='none', cmap='gray')
Image.fromarray(imgs).save('corrupted_and_denoised.png')
plt.show()

    
    import urllib
    
        if re.match(r'https?://movie', url):
        title = match1(html, 'name='description' content='([^']+)')
        tid = match1(url, 'trailer/(\d+)')
        real_url = 'https://movie.douban.com/trailer/video_url?tid=%s' % tid
        type, ext, size = url_info(real_url)
    
    	html = get_html(url)
	contentid = r1(r'<meta name='contentid' scheme='DMINSTR2' content='([^']+)' />', html)
	vid = r1(r''demand_ehow_videoid':'([^']+)'', html)
	assert vid
    
    # [
# (
#   regex_match_url,
#   remote_api_method,
#   additional_query_parameter_for_method,
#   parser_for_additional_parameter,
#   field_where_photourls_are_saved
# )
# ]
url_patterns = [
    # www.flickr.com/photos/{username|NSID}/sets|albums/{album-id}
    (
        pattern_url_photoset,
        'photosets.getPhotos',
        'photoset_id',
        get_photoset_id,
        'photoset'
    ),
    # www.flickr.com/photos/{username|NSID}/{pageN}?
    (
        pattern_url_photostream,
        # according to flickr api documentation, this method needs to be
        # authenticated in order to filter photo visible to the calling user
        # but it seems works fine anonymously as well
        'people.getPhotos',
        'user_id',
        get_NSID,
        'photos'
    ),
    # www.flickr.com/photos/{username|NSID}/galleries/{gallery-id}
    (
        pattern_url_gallery,
        'galleries.getPhotos',
        'gallery_id',
        get_gallery_id,
        'photos'
    ),
    # www.flickr.com/groups/{groupname|groupNSID}/
    (
        pattern_url_group,
        'groups.pools.getPhotos',
        'group_id',
        get_NSID,
        'photos'
    ),
    # www.flickr.com/photos/{username|NSID}/favorites/*
    (
        pattern_url_favorite,
        'favorites.getList',
        'user_id',
        get_NSID,
        'photos'
    )
]
    
        @classmethod
    def funshion_decrypt_str(cls, a_str, coeff):
        # r'.{27}0' pattern, untested
        if len(a_str) == 28 and a_str[-1] == '0':
            data_bytes = base64.b64decode(a_str[:27] + '=')
            clear = cls.funshion_decrypt(data_bytes, coeff)
            return binascii.hexlify(clear.encode('utf8')).upper()
    
        def api_req(self, url):
        xml_str = get_content(url)
        dom = parseString(xml_str)
        status = dom.getElementsByTagName('result')[0].getAttribute('status')
        if status != 'success':
            raise Exception('API returned fail')