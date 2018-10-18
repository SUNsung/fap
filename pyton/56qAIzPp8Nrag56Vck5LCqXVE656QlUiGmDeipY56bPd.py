
        
        
class State(Enum):
    unvisited = 0
    visited = 1
    
        def __init__(self, url, contents, child_urls):
        self.url = url
        self.contents = contents
        self.child_urls = child_urls
        self.signature = self.create_signature()
    
        elif not RESULT and ('info_dict' in test and 'age_limit' in test['info_dict'] and
                         test['info_dict']['age_limit'] == 18):
        print('\nPotential false negative: {0}'.format(test['name']))
    
    from youtube_dl.compat import (
    compat_basestring,
    compat_input,
    compat_getpass,
    compat_print,
    compat_urllib_request,
)
from youtube_dl.utils import (
    make_HTTPS_handler,
    sanitized_Request,
)
    
    with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
    versions_info = json.load(open('update/versions.json'))
versions = list(versions_info['versions'].keys())
versions.sort()
    
    options = helptext[helptext.index('  General Options:') + 19:]
options = re.sub(r'(?m)^  (\w.+)$', r'## \1', options)
options = '# OPTIONS\n' + options + '\n'
    
            f = match_filter_func('uploader = '變態妍字幕版 太妍 тест'')
        res = get_videos(f)
        self.assertEqual(res, ['1'])
    
        def test_no_duplicated_ie_names(self):
        name_accu = collections.defaultdict(list)
        for ie in self.ies:
            name_accu[ie.IE_NAME.lower()].append(type(ie).__name__)
        for (ie_name, ie_list) in name_accu.items():
            self.assertEqual(
                len(ie_list), 1,
                'Multiple extractors with the same IE_NAME '%s' (%s)' % (ie_name, ', '.join(ie_list)))
    
    
def get_line_value(r, n):
    rls = r.split('\r\n')
    if len(rls) < n + 1:
        return None
    
        data = response.content
    response_headers = response.headers
    if 'content-encoding' not in response_headers and len(response.content) < URLFETCH_DEFLATE_MAXSIZE and response_headers.get('content-type', '').startswith(('text/', 'application/json', 'application/javascript')):
        if 'gzip' in accept_encoding:
            response_headers['Content-Encoding'] = 'gzip'
            compressobj = zlib.compressobj(zlib.Z_DEFAULT_COMPRESSION, zlib.DEFLATED, -zlib.MAX_WBITS, zlib.DEF_MEM_LEVEL, 0)
            dataio = BytesIO()
            dataio.write('\x1f\x8b\x08\x00\x00\x00\x00\x00\x02\xff')
            dataio.write(compressobj.compress(data))
            dataio.write(compressobj.flush())
            dataio.write(struct.pack('<LL', zlib.crc32(data) & 0xFFFFFFFFL, len(data) & 0xFFFFFFFFL))
            data = dataio.getvalue()
        elif 'deflate' in accept_encoding:
            response_headers['Content-Encoding'] = 'deflate'
            data = zlib.compress(data)[2:-4]
    if data:
         response_headers['Content-Length'] = str(len(data))
    response_headers_data = zlib.compress('\n'.join('%s:%s' % (k.title(), v) for k, v in response_headers.items() if not k.startswith('x-google-')))[2:-4]
    if 'rc4' not in options:
        start_response('200 OK', [('Content-Type', __content_type__)])
        yield struct.pack('!hh', int(response.status_code), len(response_headers_data))+response_headers_data
        yield data
    else:
        start_response('200 OK', [('Content-Type', __content_type__), ('X-GOA-Options', 'rc4')])
        yield struct.pack('!hh', int(response.status_code), len(response_headers_data))
        yield rc4crypt(response_headers_data, __password__)
        yield rc4crypt(data, __password__)
    
    from antlr3 import runtime_version, runtime_version_str
from antlr3.constants import DEFAULT_CHANNEL, HIDDEN_CHANNEL, EOF, \
     EOR_TOKEN_TYPE, INVALID_TOKEN_TYPE
from antlr3.exceptions import RecognitionException, MismatchedTokenException, \
     MismatchedRangeException, MismatchedTreeNodeException, \
     NoViableAltException, EarlyExitException, MismatchedSetException, \
     MismatchedNotSetException, FailedPredicateException, \
     BacktrackingFailed, UnwantedTokenException, MissingTokenException
from antlr3.tokens import CommonToken, EOF_TOKEN, SKIP_TOKEN
from antlr3.compat import set, frozenset, reversed