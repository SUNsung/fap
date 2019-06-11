
        
                self.title = match1(html, r'<meta property='og:title' content='([^']*)'')
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
        def to_sec(course_id, chap_id, mod):
        ep = 'http://www.icourses.cn/jpk/viewCharacterDetail2.action?courseId={}&characId={}&mod={}'
        req = post_content(ep.format(course_id, chap_id, mod), post_data={})
        return req
    
            elif re.search(r'i\.imgur\.com/', self.url):
            # direct image
            _, container, size = url_info(self.url)
            self.streams = {
                'original': {
                    'src': [self.url],
                    'size': size,
                    'container': container
                }
            }
            self.title = r1(r'i\.imgur\.com/([^./]*)', self.url)
    
    class Infoq(VideoExtractor):
    name = 'InfoQ'
    
                if ret[i, 0] != i_label:  # 样本的类别发生了改变
                changed = True
    
        return o