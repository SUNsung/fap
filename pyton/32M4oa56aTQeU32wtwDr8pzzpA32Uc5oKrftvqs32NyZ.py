
        
                try:
            video = self._download_json(
                'https://api.redbull.tv/v3/products/' + video_id,
                video_id, note='Downloading video information',
                headers={'Authorization': token}
            )
        except ExtractorError as e:
            if isinstance(e.cause, compat_HTTPError) and e.cause.code == 404:
                error_message = self._parse_json(
                    e.cause.read().decode(), video_id)['error']
                raise ExtractorError('%s said: %s' % (
                    self.IE_NAME, error_message), expected=True)
            raise
    
    
class CBSIE(CBSBaseIE):
    _VALID_URL = r'(?:cbs:|https?://(?:www\.)?(?:cbs\.com/shows/[^/]+/video|colbertlateshow\.com/(?:video|podcasts))/)(?P<id>[\w-]+)'
    
    from .common import InfoExtractor
from ..compat import compat_HTTPError
from ..utils import (
    determine_ext,
    ExtractorError,
    int_or_none,
    parse_age_limit,
    parse_iso8601,
)
    
        _CLIPID_REGEXES = [
        r''clip_id'\s*:\s+'(\d+)'',
        r'clipid: '(\d+)'',
        r'clip[iI]d=(\d+)',
        r'clip[iI][dD]\s*=\s*['\'](\d+)',
        r''itemImageUrl'\s*:\s*'/dynamic/thumbnails/full/\d+/(\d+)',
        r'proMamsId&quot;\s*:\s*&quot;(\d+)',
        r'proMamsId'\s*:\s*'(\d+)',
    ]
    _TITLE_REGEXES = [
        r'<h2 class='subtitle' itemprop='name'>\s*(.+?)</h2>',
        r'<header class='clearfix'>\s*<h3>(.+?)</h3>',
        r'<!-- start video -->\s*<h1>(.+?)</h1>',
        r'<h1 class='att-name'>\s*(.+?)</h1>',
        r'<header class='module_header'>\s*<h2>([^<]+)</h2>\s*</header>',
        r'<h2 class='video-title' itemprop='name'>\s*(.+?)</h2>',
        r'<div[^>]+id='veeseoTitle'[^>]*>(.+?)</div>',
        r'<h2[^>]+class='subtitle'[^>]*>([^<]+)</h2>',
    ]
    _DESCRIPTION_REGEXES = [
        r'<p itemprop='description'>\s*(.+?)</p>',
        r'<div class='videoDecription'>\s*<p><strong>Beschreibung</strong>: (.+?)</p>',
        r'<div class='g-plusone' data-size='medium'></div>\s*</div>\s*</header>\s*(.+?)\s*<footer>',
        r'<p class='att-description'>\s*(.+?)\s*</p>',
        r'<p class='video-description' itemprop='description'>\s*(.+?)</p>',
        r'<div[^>]+id='veeseoDescription'[^>]*>(.+?)</div>',
    ]
    _UPLOAD_DATE_REGEXES = [
        r'<meta property='og:published_time' content='(.+?)'>',
        r'<span>\s*(\d{2}\.\d{2}\.\d{4} \d{2}:\d{2}) \|\s*<span itemprop='duration'',
        r'<footer>\s*(\d{2}\.\d{2}\.\d{4}) \d{2}:\d{2} Uhr',
        r'<span style='padding-left: 4px;line-height:20px; color:#404040'>(\d{2}\.\d{2}\.\d{4})</span>',
        r'(\d{2}\.\d{2}\.\d{4}) \| \d{2}:\d{2} Min<br/>',
    ]
    _PAGE_TYPE_REGEXES = [
        r'<meta name='page_type' content='([^']+)'>',
        r''itemType'\s*:\s*'([^']*)'',
    ]
    _PLAYLIST_ID_REGEXES = [
        r'content[iI]d=(\d+)',
        r''itemId'\s*:\s*'([^']*)'',
    ]
    _PLAYLIST_CLIP_REGEXES = [
        r'(?s)data-qvt=.+?<a href='([^']+)'',
    ]
    
    FISH_COMPLETION_FILE = 'youtube-dl.fish'
FISH_COMPLETION_TEMPLATE = 'devscripts/fish-completion.in'
    
    r = openssl_encode('aes-128-cbc', key, iv)
print('aes_cbc_decrypt')
print(repr(r))
    
    import io
import optparse
import os
import sys
    
        def test_app_alias(self, shell):
        assert 'fuck () {' in shell.app_alias('fuck')
        assert 'FUCK () {' in shell.app_alias('FUCK')
        assert 'thefuck' in shell.app_alias('fuck')
        assert 'PYTHONIOENCODING' in shell.app_alias('fuck')
    }
    }
    
        def app_alias(self, alias_name):
        # It is VERY important to have the variables declared WITHIN the function
        return '''
            {name} () {{
                TF_PYTHONIOENCODING=$PYTHONIOENCODING;
                export TF_SHELL=zsh;
                export TF_ALIAS={name};
                TF_SHELL_ALIASES=$(alias);
                export TF_SHELL_ALIASES;
                TF_HISTORY='$(fc -ln -10)';
                export TF_HISTORY;
                export PYTHONIOENCODING=utf-8;
                TF_CMD=$(
                    thefuck {argument_placeholder} $@
                ) && eval $TF_CMD;
                unset TF_HISTORY;
                export PYTHONIOENCODING=$TF_PYTHONIOENCODING;
                {alter_history}
            }}
        '''.format(
            name=alias_name,
            argument_placeholder=ARGUMENT_PLACEHOLDER,
            alter_history=('test -n '$TF_CMD' && print -s $TF_CMD'
                           if settings.alter_history else ''))
    
    
def _get_operations(app):
    proc = subprocess.Popen([app, '--help'],
                            stdout=subprocess.PIPE,
                            stderr=subprocess.PIPE)
    lines = proc.stdout.readlines()