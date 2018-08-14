'''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
    versions_info['versions'][version] = new_version
versions_info['latest'] = version
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
        def test_vimeo_matching(self):
        self.assertMatch('https://vimeo.com/channels/tributes', ['vimeo:channel'])
        self.assertMatch('https://vimeo.com/channels/31259', ['vimeo:channel'])
        self.assertMatch('https://vimeo.com/channels/31259/53576664', ['vimeo'])
        self.assertMatch('https://vimeo.com/user7108434', ['vimeo:user'])
        self.assertMatch('https://vimeo.com/user7108434/videos', ['vimeo:user'])
        self.assertMatch('https://vimeo.com/user21297594/review/75524534/3c257a1b5d', ['vimeo:review'])
    
    
from test.helper import FakeYDL
from youtube_dl.cache import Cache
    
        def test_socks4a(self):
        self.assertTrue(isinstance(self._get_ip('socks4a'), compat_str))
    
                    m = re.search(r'(?<=\s)u[\''](?!\)|,|$)', code)
                if m is not None:
                    self.assertTrue(
                        m is None,
                        'u present in %s, around %s' % (
                            fn, code[m.start() - 10:m.end() + 10]))
    
            if check_executable('mplayer', ['-h']):
            args = [
                'mplayer', '-really-quiet', '-vo', 'null', '-vc', 'dummy',
                '-dumpstream', '-dumpfile', tmpfilename, url]
        elif check_executable('mpv', ['-h']):
            args = [
                'mpv', '-really-quiet', '--vo=null', '--stream-dump=' + tmpfilename, url]
        else:
            self.report_error('MMS or RTSP download detected but neither 'mplayer' nor 'mpv' could be run. Please install any.')
            return False
    
        def _real_extract(self, url):
        title = self._match_id(url)
        webpage = self._download_webpage(url, title)
    
        code_block_index = 0
    last_header = ''
    linenum = 0
    with io.open(args.sourcefile, 'r') as read_filehandle:
        with io.open(args.targetfile, 'w') as text_filehandle:
            for line in read_filehandle:
                linenum += 1
                indent_depth = is_code(line)
                if indent_depth:
                    (line, linenum) = process_code(read_filehandle,
                                                    text_filehandle,
                                                    line, linenum,
                                                    args.sourcefile, args.codedir,
                                                    last_header, code_block_index,
                                                    indent_depth)
                    code_block_index += 1
                # reach here either line was not code, or was code
                # and we dealt with n code lines
                if indent_depth < 4 or not is_code(line, indent_depth):
                    # store header id for codeblock
                    section_id = get_marker(line)
                    if section_id is not None:
                        code_block_index = 0
                        last_header = section_id
                    sline = stripped(line)
                    text_filehandle.write(sline)