
        
            if RESULT and ('info_dict' not in test or 'age_limit' not in test['info_dict'] or
                   test['info_dict']['age_limit'] != 18):
        print('\nPotential missing age_limit check: {0}'.format(test['name']))
    
    ROOT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
README_FILE = os.path.join(ROOT_DIR, 'README.md')
    
        flags = [opt.get_opt_string() for opt in opts]
    
    from test.helper import try_rm
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
            jsi = JSInterpreter('function x3(){return 42;}')
        self.assertEqual(jsi.call_function('x3'), 42)
    
        def test_allsubtitles(self):
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertEqual(set(subtitles.keys()), set(['de', 'en', 'es', 'fr']))
        self.assertEqual(md5(subtitles['en']), '8062383cf4dec168fc40a088aa6d5888')
        self.assertEqual(md5(subtitles['fr']), 'b6191146a6c5d3a452244d853fde6dc8')
    
    import urllib
    
        #if dictify(e)['ckplayer']['info'][0]['title'][0]['_text'].strip():  #duration
        #video_dict['title'] = dictify(e)['ckplayer']['info'][0]['title'][0]['_text'].strip()
    
        type, ext, size = url_info(video_url, headers=fake_headers)
    
        print_info(site_info, title, ext, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
        def extract(self, **kwargs):
        if 'stream_id' in kwargs and kwargs['stream_id']:
            i = kwargs['stream_id']
            if 'size' not in self.streams[i]:
                self.streams[i]['size'] = urls_size(self.streams[i]['src'])