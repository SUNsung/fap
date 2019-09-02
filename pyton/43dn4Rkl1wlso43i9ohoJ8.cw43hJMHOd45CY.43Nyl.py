
        
            @staticmethod
    def format_seconds(seconds):
        (mins, secs) = divmod(seconds, 60)
        (hours, mins) = divmod(mins, 60)
        if hours > 99:
            return '--:--:--'
        if hours == 0:
            return '%02d:%02d' % (mins, secs)
        else:
            return '%02d:%02d:%02d' % (hours, mins, secs)
    
        _TESTS = [{
        # episode with annual navigation
        'url': 'https://www.tvnow.de/shows/grip-das-motormagazin-1669/2017-05/episode-405-der-neue-porsche-911-gt-3-331082',
        'info_dict': {
            'id': '331082',
            'display_id': 'grip-das-motormagazin/der-neue-porsche-911-gt-3',
            'ext': 'mp4',
            'title': 'Der neue Porsche 911 GT 3',
            'description': 'md5:6143220c661f9b0aae73b245e5d898bb',
            'thumbnail': r're:^https?://.*\.jpg$',
            'timestamp': 1495994400,
            'upload_date': '20170528',
            'duration': 5283,
            'series': 'GRIP - Das Motormagazin',
            'season_number': 14,
            'episode_number': 405,
            'episode': 'Der neue Porsche 911 GT 3',
        },
    }, {
        # rtl2, episode with season navigation
        'url': 'https://www.tvnow.de/shows/armes-deutschland-11471/staffel-3/episode-14-bernd-steht-seit-der-trennung-von-seiner-frau-allein-da-526124',
        'only_matching': True,
    }, {
        # rtlnitro
        'url': 'https://www.tvnow.de/serien/alarm-fuer-cobra-11-die-autobahnpolizei-1815/staffel-13/episode-5-auf-eigene-faust-pilot-366822',
        'only_matching': True,
    }, {
        # superrtl
        'url': 'https://www.tvnow.de/shows/die-lustigsten-schlamassel-der-welt-1221/staffel-2/episode-14-u-a-ketchup-effekt-364120',
        'only_matching': True,
    }, {
        # ntv
        'url': 'https://www.tvnow.de/shows/startup-news-10674/staffel-2/episode-39-goetter-in-weiss-387630',
        'only_matching': True,
    }, {
        # vox
        'url': 'https://www.tvnow.de/shows/auto-mobil-174/2017-11/episode-46-neues-vom-automobilmarkt-2017-11-19-17-00-00-380072',
        'only_matching': True,
    }, {
        'url': 'https://www.tvnow.de/shows/grip-das-motormagazin-1669/2017-05/episode-405-der-neue-porsche-911-gt-3-331082',
        'only_matching': True,
    }]
    
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
    
        for group in opt_parser.option_groups:
        for option in group.option_list:
            long_option = option.get_opt_string().strip('-')
            complete_cmd = ['complete', '--command', 'youtube-dl', '--long-option', long_option]
            if option._short_opts:
                complete_cmd += ['--short-option', option._short_opts[0].strip('-')]
            if option.help != optparse.SUPPRESS_HELP:
                complete_cmd += ['--description', option.help]
            complete_cmd.extend(EXTRA_ARGS.get(long_option, []))
            commands.append(shell_quote(complete_cmd))
    
    import rsa
import json
from binascii import hexlify
    
        template = template.replace('@SITES@', textwrap.indent('\n'.join(ie_htmls), '\t'))
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    ie_template = '''
class {name}({bases}):
    _VALID_URL = {valid_url!r}
    _module = '{module}'
'''
    
        outfile, = args
    
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