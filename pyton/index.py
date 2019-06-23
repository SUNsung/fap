
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
        def test_timeout(self):
        self.assertTrue(self.timeout.timeout)
        self.assertFalse(self.invalid.timeout)
    
        def setUp(self):
        from acme.fields import Resource
        self.field = Resource('x')
    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#html_use_opensearch = ''
    
            '''
        super(AugeasConfigurator, self).rollback_checkpoints(rollback)
        self.aug.load()

    
       # Cloudflare API credentials used by Certbot
   dns_cloudflare_email = cloudflare@example.com
   dns_cloudflare_api_key = 0123456789abcdef0123456789abcdef01234567
    
    ========================================  =====================================
``--dns-cloudxns-credentials``            CloudXNS credentials_ INI file.
                                          (Required)
``--dns-cloudxns-propagation-seconds``    The number of seconds to wait for DNS
                                          to propagate before asking the ACME
                                          server to verify the DNS record.
                                          (Default: 30)
========================================  =====================================
    
    site_info = 'CKPlayer General'
download = ckplayer_download
download_playlist = playlist_not_supported('ckplayer')

    
    from ..common import *
import json
    
            if self.api_data['ssl'] != 'true':
            self.enc_mode = False
            common_args.update(dict(h=h, r=r))
        else:
            self.enc_mode = True
            common_args['p'] = self.__class__.ENCRYPT_MOD_VER
        self.common_args = common_args
        return self.update_url(received)
    
        def prepare(self, **kwargs):
        if re.search(r'imgur\.com/a/', self.url):
            # album
            content = get_content(self.url)
            album = match1(content, r'album\s*:\s*({.*}),') or \
                    match1(content, r'image\s*:\s*({.*}),')
            album = json.loads(album)
            count = album['album_images']['count']
            images = album['album_images']['images']
            ext = images[0]['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (i['hash'], ext)
                            for i in images],
                    'size': sum([i['size'] for i in images]),
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (i['hash'], '.jpg')
                            for i in images],
                    'container': 'jpg'
                }
            }
            self.title = album['title']
    
    Cela ressemble à un excellent recipie[1] déjeuner.
    
            assert i == 9
        print('\tGot ZeroDivisionError as expected from IMapIterator.next()')
        print()
    
    cur.execute('insert into people (name_last, age) values ('Yeltsin',   72)')
cur.execute('insert into people (name_last, age) values ('Putin',     51)')
    
            print('Two or more elements')
        data = [5, 1, 7, 2, 6, -3, 5, 7, -10]
        assert_equal(func(data), sorted(data))
    
            print('Test: remove on a key that doesn't exist')
        assert_raises(KeyError, hash_table.remove, -1)