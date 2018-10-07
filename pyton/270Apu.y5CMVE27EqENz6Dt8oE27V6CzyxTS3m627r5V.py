
        
            def remove_vehicle(self):
        pass

    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
        def override_category_budget(self, category, amount):
        self.categories_to_budget_map[category] = amount

    
        releaser = GitHubReleaser()
    
    import codecs
import subprocess
    
    
if __name__ == '__main__':
    main()

    
        def test_cbc_encrypt(self):
        data = bytes_to_intlist(self.secret_msg)
        encrypted = intlist_to_bytes(aes_cbc_encrypt(data, self.key, self.iv))
        self.assertEqual(
            encrypted,
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd')
    
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