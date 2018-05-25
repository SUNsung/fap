
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
    import datetime
import io
import json
import textwrap
    
        infile, outfile = args
    
    import youtube_dl.extractor
from youtube_dl import YoutubeDL
from youtube_dl.compat import (
    compat_os_name,
    compat_str,
)
from youtube_dl.utils import (
    preferredencoding,
    write_string,
)
    
        def _real_extract(self, url):
        video_id = self._match_id(url)
    
    from .common import InfoExtractor
from ..utils import js_to_json
    
    
class CloserToTruthIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?closertotruth\.com/(?:[^/]+/)*(?P<id>[^/?#&]+)'
    _TESTS = [{
        'url': 'http://closertotruth.com/series/solutions-the-mind-body-problem#video-3688',
        'info_dict': {
            'id': '0_zof1ktre',
            'display_id': 'solutions-the-mind-body-problem',
            'ext': 'mov',
            'title': 'Solutions to the Mind-Body Problem?',
            'upload_date': '20140221',
            'timestamp': 1392956007,
            'uploader_id': 'CTTXML'
        },
        'params': {
            'skip_download': True,
        },
    }, {
        'url': 'http://closertotruth.com/episodes/how-do-brains-work',
        'info_dict': {
            'id': '0_iuxai6g6',
            'display_id': 'how-do-brains-work',
            'ext': 'mov',
            'title': 'How do Brains Work?',
            'upload_date': '20140221',
            'timestamp': 1392956024,
            'uploader_id': 'CTTXML'
        },
        'params': {
            'skip_download': True,
        },
    }, {
        'url': 'http://closertotruth.com/interviews/1725',
        'info_dict': {
            'id': '1725',
            'title': 'AyaFr-002',
        },
        'playlist_mincount': 2,
    }]
    
        def test_cert_file_not_found(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', '/__not_found__',
                 error_exit_ok=True)
        assert r.exit_status == ExitStatus.ERROR
        assert 'No such file or directory' in r.stderr
    
        def reducer(self, key, values):
        '''Sum values for each key.
    
        # when accessing non-existent attributes on c, return '' instead of dying
    config['pylons.strict_tmpl_context'] = False
    
    from r2.controllers.api_docs import api_doc, api_section
from r2.controllers.oauth2 import require_oauth2_scope
from r2.controllers.reddit_base import OAuth2OnlyController
from r2.lib.jsontemplates import (
    FriendTableItemJsonTemplate,
    get_usertrophies,
    IdentityJsonTemplate,
    KarmaListJsonTemplate,
    PrefsJsonTemplate,
)
from r2.lib.pages import FriendTableItem
from r2.lib.validator import (
    validate,
    VAccountByName,
    VFriendOfMine,
    VLength,
    VList,
    VUser,
    VValidatedJSON,
)
from r2.models import Account, Trophy
import r2.lib.errors as errors
import r2.lib.validator.preferences as vprefs
    
            return HelpPage(_('help'),
                        content = Embed(content=output),
                        show_sidebar = None).render()