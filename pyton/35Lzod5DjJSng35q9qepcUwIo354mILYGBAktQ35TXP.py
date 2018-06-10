
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
        infile, outfile = args
    
    header = oldreadme[:oldreadme.index('# OPTIONS')]
footer = oldreadme[oldreadme.index('# CONFIGURATION'):]
    
            with io.open(as_file, 'r', encoding='utf-8') as as_f:
            as_content = as_f.read()
    
    from .common import FileDownloader
from ..utils import (
    check_executable,
    encodeFilename,
)
    
    
class CamWithHerIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?camwithher\.tv/view_video\.php\?.*\bviewkey=(?P<id>\w+)'
    
            partner_id = self._search_regex(
            r'<script[^>]+src=['\'].*?\b(?:partner_id|p)/(\d+)',
            webpage, 'kaltura partner_id')
    
            formats = []
        for secure in ('', 'Secure'):
            for ext in ('Ogg', 'Mp3'):
                format_id = '%s%s' % (secure, ext)
                format_url = metadata.get('%sUrl' % format_id)
                if format_url:
                    formats.append({
                        'url': format_url,
                        'format_id': format_id,
                        'vcodec': 'none',
                    })
        self._sort_formats(formats)