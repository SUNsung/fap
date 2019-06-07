
        
        site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
    # image size suffixes used in inline json 'key' field
# listed in descending order
size_suffixes = ['o', 'k', 'h', 'l', 'c', 'z', 'm', 'n', 's', 't', 'q', 'sq']
    
        @classmethod
    def checksum(cls, sha1_str):
        if len(sha1_str) != 41:
            return False
        if not re.match(r'[0-9A-Za-z]{41}', sha1_str):
            return False
        sha1 = sha1_str[:-1]
        if (15 & sum([int(char, 16) for char in sha1])) == int(sha1_str[-1], 16):
            return True
        return False
    
        url = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'<meta property='og:video:secure_url' content='(.*?)'>', html)
    ]))
    
            else:
            # gallery image
            content = get_content(self.url)
            image = json.loads(match1(content, r'image\s*:\s*({.*}),'))
            ext = image['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (image['hash'], ext)],
                    'size': image['size'],
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (image['hash'], '.jpg')],
                    'container': 'jpg'
                }
            }
            self.title = image['title'] or image['hash']