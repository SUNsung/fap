
        
            def score(self):
        total_value = 0
        for card in self.cards:
            total_value += card.value
        return total_value
    
    
class PrivateChat(Chat):
    
        def __init__(self, level, row, spot_number, spot_size, vehicle_size):
        self.level = level
        self.row = row
        self.spot_number = spot_number
        self.spot_size = spot_size
        self.vehicle_size = vehicle_size
        self.vehicle = None
    
        def override_category_budget(self, category, amount):
        self.categories_to_budget_map[category] = amount

    
            Emit key value pairs of the form:
    
    from .common import InfoExtractor
from .cbs import CBSIE
from ..compat import (
    compat_b64decode,
    compat_urllib_parse_unquote,
)
from ..utils import (
    parse_duration,
)
    
            formats = self._extract_m3u8_formats(
            'https://dms.redbull.tv/v3/%s/%s/playlist.m3u8' % (video_id, token),
            video_id, 'mp4', entry_protocol='m3u8_native', m3u8_id='hls')
        self._sort_formats(formats)
    
    from .common import InfoExtractor
from ..compat import (
    compat_urllib_parse_urlencode,
    compat_str,
)
from ..utils import (
    dict_get,
    ExtractorError,
    float_or_none,
    int_or_none,
    remove_start,
    try_get,
    urlencode_postdata,
)
    
            asset_types = []
        subtitles = {}
        formats = []
        last_e = None
        for item in items_data.findall('.//item'):
            asset_type = xpath_text(item, 'assetType')
            if not asset_type or asset_type in asset_types or 'HLS_FPS' in asset_type or 'DASH_CENC' in asset_type:
                continue
            asset_types.append(asset_type)
            query = {
                'mbr': 'true',
                'assetTypes': asset_type,
            }
            if asset_type.startswith('HLS') or asset_type in ('OnceURL', 'StreamPack'):
                query['formats'] = 'MPEG4,M3U'
            elif asset_type in ('RTMP', 'WIFI', '3G'):
                query['formats'] = 'MPEG4,FLV'
            try:
                tp_formats, tp_subtitles = self._extract_theplatform_smil(
                    update_url_query(tp_release_url, query), content_id,
                    'Downloading %s SMIL data' % asset_type)
            except ExtractorError as e:
                last_e = e
                continue
            formats.extend(tp_formats)
            subtitles = self._merge_subtitles(subtitles, tp_subtitles)
        if last_e and not formats:
            raise last_e
        self._sort_formats(formats)
    
            return {
            'id': video_id,
            'title': title,
            'formats': formats,
            'thumbnails': thumbnails,
            'description': video_data.get('short_description'),
            'like_count': int_or_none(video_data.get('like_count')),
            'timestamp': parse_iso8601(video_data.get('released_at')),
            'series': series,
            'episode': episode,
            'season': season,
            'season_id': season_id,
            'season_number': season_number,
            'episode_number': episode_number,
            'subtitles': subtitles,
            'age_limit': parse_age_limit(video_data.get('rating')),
        }

    
    import optparse
import os
from os.path import dirname as dirn
import sys
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    import io
import optparse
import os
import sys
    
    
parser = youtube_dl.parseOpts()[0]
build_completion(parser)

    
        def test_youtube(self):
        self._assert_restricted('07FYdnEawAQ', '07FYdnEawAQ.mp4', 10)
    
            # reset stats on high iter-request times caused by client restarts
        if delta > 3: # seconds
            self._reset_stats()
            return ''
    
            self.crawler_process.crawl(spname, **opts.spargs)
        self.crawler_process.start()
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        @classmethod
    def from_crawler(cls, crawler):
        return cls(crawler.settings)
    
                try:
                res = self.check_ip.check_ip(ip)
            except Exception as e:
                xlog.warn('check except:%r', e)
                continue
    
    site_info = 'baomihua.com'
download = baomihua_download
download_playlist = playlist_not_supported('baomihua')

    
        def prepare(self, **kwargs):
        if self.__class__.coeff is None:
            magic_list = self.__class__.fetch_magic(self.__class__.a_mobile_url)
            self.__class__.coeff = self.__class__.get_coeff(magic_list)
    
    from ..utils import get_w, get_shape
from ..initializers import constant
    
        Args:
        x(tf.Tensor):
        kernel_size(int or list of int):
        out_channels(int):
        act_fn(function):
        strides(int or list of int):
        padding(str):
        name(str):
        reuse(bool):
    
    References:
    tensorlayer.layers.DenseLayer
    keras.layers.Dense
'''
import tensorflow as tf
    
    
    
        Args:
        h: context encoding     shape: [N, T, d]
        u: question encoding    shape: [N, J, d]
        T(int): context length
        J(int): question length
        d(int): features size
        name(str):
        reuse(bool):
    
    l2_regularizer = L1L2Regularizer(l2=0.01)
    
        def setUp(self):
        from acme.errors import MissingNonce
        self.response = mock.MagicMock(headers={})
        self.response.request.method = 'FOO'
        self.error = MissingNonce(self.response)
    
            :param str domain: The domain to use to look up the managed zone.
        :param str record_name: The record name (typically beginning with '_acme-challenge.').
        :param str record_content: The record content (typically the challenge validation).
        :param int record_ttl: The record TTL (number of seconds that the record may be cached).
        :raises certbot.errors.PluginError: if an error occurs communicating with the Google API
        '''
    
        def test_perform(self):
        self.auth.perform([self.achall])
    
    
class Migration(SchemaMigration):
    
    import itertools
    
        def forwards(self, orm):
        # Removing unique constraint on 'Association', fields ['server_url', 'handle']
        db.delete_unique(u'social_auth_association', ['server_url', 'handle'])