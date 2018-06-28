
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
    import rsa
import json
from binascii import hexlify
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
def expect_info_dict(self, got_dict, expected_dict):
    expect_dict(self, got_dict, expected_dict)
    # Check for the presence of mandatory fields
    if got_dict.get('_type') not in ('playlist', 'multi_video'):
        for key in ('id', 'url', 'title', 'ext'):
            self.assertTrue(got_dict.get(key), 'Missing mandatory field %s' % key)
    # Check for mandatory fields that are automatically set by YoutubeDL
    for key in ['webpage_url', 'extractor', 'extractor_key']:
        self.assertTrue(got_dict.get(key), 'Missing field: %s' % key)
    
            with io.open(as_file, 'r', encoding='utf-8') as as_f:
            as_content = as_f.read()
    
    
class AcademicEarthCourseIE(InfoExtractor):
    _VALID_URL = r'^https?://(?:www\.)?academicearth\.org/playlists/(?P<id>[^?#/]+)'
    IE_NAME = 'AcademicEarth:Course'
    _TEST = {
        'url': 'http://academicearth.org/playlists/laws-of-nature/',
        'info_dict': {
            'id': 'laws-of-nature',
            'title': 'Laws of Nature',
            'description': 'Introduce yourself to the laws of nature with these free online college lectures from Yale, Harvard, and MIT.',
        },
        'playlist_count': 3,
    }
    
    import re
    
    
class ClypIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?clyp\.it/(?P<id>[a-z0-9]+)'
    _TEST = {
        'url': 'https://clyp.it/ojz2wfah',
        'md5': '1d4961036c41247ecfdcc439c0cddcbb',
        'info_dict': {
            'id': 'ojz2wfah',
            'ext': 'mp3',
            'title': 'Krisson80 - bits wip wip',
            'description': '#Krisson80BitsWipWip #chiptune\n#wip',
            'duration': 263.21,
            'timestamp': 1443515251,
            'upload_date': '20150929',
        },
    }
    
        _CONFIG = {
        # http://edition.cnn.com/.element/apps/cvp/3.0/cfg/spider/cnn/expansion/config.xml
        'edition': {
            'data_src': 'http://edition.cnn.com/video/data/3.0/video/%s/index.xml',
            'media_src': 'http://pmd.cdn.turner.com/cnn/big',
        },
        # http://money.cnn.com/.element/apps/cvp2/cfg/config.xml
        'money': {
            'data_src': 'http://money.cnn.com/video/data/4.0/video/%s.xml',
            'media_src': 'http://ht3.cdn.turner.com/money/big',
        },
    }
    
    A tree.RewriteCardinalityException is raised, when the parsers hits a
cardinality mismatch during AST construction. Although this is basically a
bug in your grammar, it can only be detected at runtime.
    
    
class ANTLRInputStream(ANTLRStringStream):
    '''
    @brief CharStream that reads data from a file-like object.
    
    
@section Exceptions
    
        def amount(self, val):
        print(val, end=' ')
        return self
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def rename(self, src, dest):
        print(u'renaming %s to %s' % (src, dest))
        os.rename(src, dest)
    
        def tearDown(self):
        if not self._bProblem:
            print('Tearing down')
            time.sleep(0.1)
            self._tm.publishReport()
        else:
            print('Test not executed. No tear down required.')
    
        def and_specification(self, candidate):
        raise NotImplementedError()