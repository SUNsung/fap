
        
        
def check_format(filename):
    '''
    validates that each line is formatted correctly,
    appending to error list as needed
    '''
    with open(filename) as fp:
        lines = list(line.rstrip() for line in fp)
    check_alphabetical(lines)
    # START Check Entries
    num_in_category = min_entries_per_section + 1
    category = ''
    category_line = 0
    for line_num, line in enumerate(lines):
        if section_title_re.match(line):
            title_links.append(section_title_re.match(line).group(1))
        # check each section for the minimum number of entries
        if line.startswith(anchor):
            match = anchor_re.match(line)
            if match:
                if match.group(1) not in title_links:
                    add_error(line_num, 'section header ({}) not added as a title link'.format(match.group(1)))
            else:
                add_error(line_num, 'section header is not formatted correctly')
            if num_in_category < min_entries_per_section:
                add_error(category_line, '{} section does not have the minimum {} entries (only has {})'.format(
                    category, min_entries_per_section, num_in_category))
            category = line.split(' ')[1]
            category_line = line_num
            num_in_category = 0
            continue
        # skips lines that we do not care about
        if not line.startswith('|') or line.startswith('|---'):
            continue
        num_in_category += 1
        segments = line.split('|')[1:-1]
        if len(segments) < num_segments:
            add_error(line_num, 'entry does not have all the required sections (have {}, need {})'.format(
                len(segments), num_segments))
            continue
        # START Global
        for segment in segments:
            # every line segment should start and end with exactly 1 space
            if len(segment) - len(segment.lstrip()) != 1 or len(segment) - len(segment.rstrip()) != 1:
                add_error(line_num, 'each segment must start and end with exactly 1 space')
        # END Global
        segments = [seg.strip() for seg in segments]
        check_entry(line_num, segments)
    # END Check Entries
    
    with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
            for m3u8_file, m3u8_url, expected_formats in _TEST_CASES:
            with io.open('./test/testdata/m3u8/%s.m3u8' % m3u8_file,
                         mode='r', encoding='utf-8') as f:
                formats = self.ie._parse_m3u8_formats(
                    f.read(), m3u8_url, ext='mp4')
                self.ie._sort_formats(formats)
                expect_value(self, formats, expected_formats, None)
    
        def test_cbc_decrypt(self):
        data = bytes_to_intlist(
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd'
        )
        decrypted = intlist_to_bytes(aes_cbc_decrypt(data, self.key, self.iv))
        self.assertEqual(decrypted.rstrip(b'\x08'), self.secret_msg)
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        def test_no_duplicates(self):
        ies = gen_extractors()
        for tc in gettestcases(include_onlymatching=True):
            url = tc['url']
            for ie in ies:
                if type(ie).__name__ in ('GenericIE', tc['name'] + 'IE'):
                    self.assertTrue(ie.suitable(url), '%s should match URL %r' % (type(ie).__name__, url))
                else:
                    self.assertFalse(
                        ie.suitable(url),
                        '%s should not match URL %r . That URL belongs to %s.' % (type(ie).__name__, url, tc['name']))
    
        :param key: name of cli constant
    :return: value of constant for active os
    '''
    return CLI_DEFAULTS[key]
    
    
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
        good_nonce = jose.encode_b64jose(b'foo')
    wrong_nonce = u'F'
    # Following just makes sure wrong_nonce is wrong
    try:
        jose.b64decode(wrong_nonce)
    except (ValueError, TypeError):
        assert True
    else:
        assert False  # pragma: no cover
    
            ip_addr:* == ip_addr
    
            self.sni.configurator.parser.find_dir(
            'Include', self.sni.challenge_conf)
        vh_match = self.sni.configurator.aug.match(
            '/files' + self.sni.challenge_conf + '//VirtualHost')