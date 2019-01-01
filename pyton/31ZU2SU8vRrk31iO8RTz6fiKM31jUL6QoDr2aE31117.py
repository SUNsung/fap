
        
        index_title = 0
index_desc = 1
index_auth = 2
index_https = 3
index_cors = 4
index_link = 5
num_segments = 5
    
    
class TestLookupDict:
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
                # Release the connection back into the pool.
            resp.close()
    
    from setuptools import setup, find_packages
setup(
    name = proj_info['name'],
    version = VERSION,
    
    site_info = 'baomihua.com'
download = baomihua_download
download_playlist = playlist_not_supported('baomihua')

    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
    __all__ = ['cntv_download', 'cntv_download_by_id']
    
        else:
        titles = re.findall(r''name':'([^']*)'', html)
        real_urls = [re.sub('\\\\/', '/', i) for i in re.findall(r''rawUrl':'([^']*)'', html)]
    
        # Try harder, check all iframes
    if 'recur_lv' not in kwargs or kwargs['recur_lv'] < recur_limit:
        r = kwargs.get('recur_lv')
        if r is None:
            r = 1
        else:
            r += 1
        iframes = matchall(content, [r'<iframe.+?src=(?:\'|\')(.+?)(?:\'|\')'])
        for iframe in iframes:
            if not iframe.startswith('http'):
                src = urllib.parse.urljoin(url, iframe)
            else:
                src = iframe
            found = embed_download(src, output_dir=output_dir, merge=merge, info_only=info_only, recur_lv=r, **kwargs)
            if found:
                return True
    
    
def fantasy_download_by_id_channelId(id = 0, channelId = 0, output_dir = '.', merge = True, info_only = False,
                                     **kwargs):
    api_url = 'http://www.fantasy.tv/tv/playDetails.action?' \
              'myChannelId=1&id={id}&channelId={channelId}&t={t}'.format(id = id,
                                                                         channelId = channelId,
                                                                         t = str(random.random())
                                                                         )
    html = get_content(api_url)
    html = json.loads(html)
    
    def flickr_download_main(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    urls = None
    size = 'o' # works for collections only
    title = None
    if 'stream_id' in kwargs:
        size = kwargs['stream_id']
    if match1(url, pattern_url_single_photo):
        url, title = get_single_photo_url(url)
        urls = [url]
    else:
        urls, title = fetch_photo_url_list(url, size)
    index = 0
    for url in urls:
        mime, ext, size = url_info(url)
        print_info('Flickr.com', title, mime, size)
        if not info_only:
            suffix = '[%d]' % index
            download_urls([url], title + suffix, ext, False, output_dir, None, False, False)
            index = index + 1
    
    from ..common import *
import json