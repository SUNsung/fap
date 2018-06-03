def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
        type, ext, size = url_info(video_url, headers=fake_headers)
    
            # cookie handler
        ssl_context = request.HTTPSHandler(
            context=ssl.SSLContext(ssl.PROTOCOL_TLSv1))
        cookie_handler = request.HTTPCookieProcessor()
        opener = request.build_opener(ssl_context, cookie_handler)
        opener.addheaders = [
            ('Referer', self.url),
            ('Cookie',
             'CloudFront-Policy=%s;CloudFront-Signature=%s;CloudFront-Key-Pair-Id=%s' % (scp, scs, sck))
        ]
        request.install_opener(opener)
    
            # extract raw urls
        orig_img = match1(content,
                         r'<meta itemprop='image' content='([^']+/originals/[^']+)'')
        twit_img = match1(content,
                          r'<meta property='twitter:image:src' name='twitter:image:src' content='([^']+)'')
    
    def clean_text(text, replacements = {':': '_', ' ': '_', '/': '_', '.': '', ''': ''}):
    for key, rep in replacements.items():
        text = text.replace(key, rep)
    return text    
    
            #Creating directory title page for current directory
        with open('dir_title.html', 'w') as os_html:
            os_html.write(header + dir_title)
        
        group.append(HTML('dir_title.html').render())
    
    
def is_translated(msg):
    if isinstance(msg.string, basestring):
        return bool(msg.string)
    for item in msg.string:
        if not item:
            return False
    return True