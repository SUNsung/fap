
        
        import rsa
import json
from binascii import hexlify
    
    
def format_size(bytes):
    return '%s (%d bytes)' % (format_bytes(bytes), bytes)
    
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
    
                    if ''' not in code and ''' not in code:
                    continue
                assertRegexpMatches(
                    self,
                    code,
                    r'(?:(?:#.*?|\s*)\n)*from __future__ import (?:[a-z_]+,\s*)*unicode_literals',
                    'unicode_literals import  missing in %s' % fn)
    
        _ALL_CLASSES = [
        klass
        for name, klass in globals().items()
        if name.endswith('IE') and name != 'GenericIE'
    ]
    _ALL_CLASSES.append(GenericIE)
    
            formats = [
            {
                'format_id': f['type'],
                'filesize': int(f['filesize']),
                'url': f['url']
            } for f in info['rfiles']
        ]
        self._sort_formats(formats)
    
        base = 'src/sentry/locale'
    for locale in os.listdir(base):
        fn = os.path.join(base, locale, 'LC_MESSAGES', 'django.po')
        if not os.path.isfile(fn):
            continue