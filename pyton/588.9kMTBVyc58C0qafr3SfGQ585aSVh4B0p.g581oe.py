
        
            if re.match(re_str, url):
        html = get_content(url)
        title = match1(html, r'<title>(.+)丨(.+)</title>')  #title
        
        # player loaded via internal iframe
        frame_url = re.search(r'<iframe src=\'(.+?)\'', html).group(1)
        logging.debug('dilidili_download: %s' % frame_url)
        
        #https://player.005.tv:60000/?vid=a8760f03fd:a04808d307&v=yun&sign=a68f8110cacd892bc5b094c8e5348432
        html = get_content(frame_url, headers=headers, decoded=False).decode('utf-8')
        
        match = re.search(r'(.+?)var video =(.+?);', html)
        vid = match1(html, r'var vid='(.+)'')
        hd2 = match1(html, r'var hd2='(.+)'')
        typ = match1(html, r'var typ='(.+)'')
        sign = match1(html, r'var sign='(.+)'')
        tmsign = match1(html, r'tmsign=([A-Za-z0-9]+)')
        ulk =  match1(html, r'var ulk='(.+)'')
    
        title = r1(r'<title id='pageTitle'>(.+)</title>', html)
    
    # looks that flickr won't return urls for all sizes
# we required in 'extras field without a acceptable header
dummy_header = {
    'User-Agent':'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:53.0) Gecko/20100101 Firefox/53.0'
}
def get_content_headered(url):
    return get_content(url, dummy_header)
    
        @classmethod
    def dec_playinfo(cls, info, coeff):
        res = None
        clear = cls.funshion_decrypt_str(info['infohash'], coeff)
        if cls.checksum(clear):
            res = dict(hashid=clear[:40], token=cls.funshion_decrypt_str(info['token'], coeff))
        else:
            clear = cls.funshion_decrypt_str(info['infohash_prev'], coeff)
            if cls.checksum(clear):
                res = dict(hashid=clear[:40], token=cls.funshion_decrypt_str(info['token_prev'], coeff))
        return res
    
            try:
            url = 'https://plus.google.com/' + r1(r'(photos/\d+/albums/\d+/\d+)\?authkey', html)
            html = get_html(url, faker=True)
            temp = re.findall(r'\[(\d+),\d+,\d+,'([^']+)'\]', html)
            temp = sorted(temp, key = lambda x : fmt_level[x[0]])
            urls = [unicodize(i[1]) for i in temp if i[0] == temp[0][0]]
            assert urls
            real_urls = urls # Look ma, there's really a video!
    
    	Arguments:
		testString {[string]} -- [message]
	'''
    
    print('finding anagrams...')
all_anagrams = {word: anagram(word)
                for word in word_list if len(anagram(word)) > 1}
    
    * @author chinmoy159
* @version 1.0 dated 10/08/2017
'''