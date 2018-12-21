
        
                '''
        assert all(hasattr(type(self), attr) for attr in kwargs.keys())
        self.__dict__.update(**kwargs)
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
        @classmethod
    def supports(cls, mime):
        raise NotImplementedError
    
        # noinspection PyUnboundLocalVariable
    return '%.*f %s' % (precision, n / factor, suffix)

    
        '''
    return path.replace('\\', '\\\\\\')
    
        def test_upload_ok(self, httpbin):
        r = http('--form', '--verbose', 'POST', httpbin.url + '/post',
                 'test-file@%s' % FILE_PATH_ARG, 'foo=bar')
        assert HTTP_OK in r
        assert 'Content-Disposition: form-data; name='foo'' in r
        assert 'Content-Disposition: form-data; name='test-file';' \
               ' filename='%s'' % os.path.basename(FILE_PATH) in r
        assert FILE_CONTENT in r
        assert ''foo': 'bar'' in r
        assert 'Content-Type: text/plain' in r
    
            if self.continue_fail_count > 10:
            # don't set network_stat to 'unknown', wait for check
            # network_stat = 'unknown'
            xlog.debug('report_connect_fail %s continue_fail_count:%d',
                       self.type, self.continue_fail_count)
            self.triger_check_network(True)
    
            self._state.lastErrorIndex = input.index()
        followSet = self.computeErrorRecoverySet()
        
        self.beginResync()
        self.consumeUntil(input, followSet)
        self.endResync()
    
                t = self.tokenSource.nextToken()
       
        # leave p pointing at first token on channel
        self.p = 0
        self.p = self.skipOffTokenChannels(self.p)
    
    __all__ = ['baomihua_download', 'baomihua_download_by_id']
    
    from ..common import *
from ..extractor import VideoExtractor
    
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
    
    from .bilibili import bilibili_download
from .dailymotion import dailymotion_download
from .iqiyi import iqiyi_download_by_vid
from .le import letvcloud_download_by_vu
from .netease import netease_download
from .qq import qq_download_by_vid
from .sina import sina_download_by_vid
from .tudou import tudou_download_by_id
from .vimeo import vimeo_download_by_id
from .yinyuetai import yinyuetai_download_by_id
from .youku import youku_download_by_vid
from . import iqiyi
from . import bokecc
    
        fantasy_download_by_id_channelId(id = tvId, channelId = channelId, output_dir = output_dir, merge = merge,
                                     info_only = info_only, **kwargs)