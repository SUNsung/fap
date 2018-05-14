
        
        import os
    
        host = None
    for matching in ['ipv4', 'ipv6', 'hostname']:
        m = patterns[matching].match(address)
        if m:
            host = address
            continue
    
            # global, resource, entity
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/global/urlMaps/my-url-map'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('myproject', actual['project'])
        self.assertTrue('global' in actual)
        self.assertTrue(actual['global'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('compute', actual['service'])
    
    import re
    
        classifiers = proj_info['classifiers'],
    
    from .theplatform import theplatform_download_by_pid
    
            mp3 = match1(content, r'name='filename'\s*value='([^']+\.mp3)'')
        if mp3: mp3 = 'http://res.infoq.com/downloads/mp3downloads/%s' % mp3
    
    def kuwo_download_by_rid(rid, output_dir = '.', merge = True, info_only = False):
    html=get_content('http://player.kuwo.cn/webmusic/st/getNewMuiseByRid?rid=MUSIC_%s'%rid)
    title=match1(html,r'<name>(.*)</name>')
    #to get title
    #format =aac|mp3 ->to get aac format=mp3 ->to get mp3
    url=get_content('http://antiserver.kuwo.cn/anti.s?format=mp3&rid=MUSIC_%s&type=convert_url&response=url'%rid)
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir)
    
    from .tudou import tudou_download_by_id
from .youku import youku_download_by_vid
from xml.dom.minidom import parseString
    
        def prepare(self, **kwargs):
        # scrape the html
        content = get_content(self.url)
    
    
if __name__ == '__main__':