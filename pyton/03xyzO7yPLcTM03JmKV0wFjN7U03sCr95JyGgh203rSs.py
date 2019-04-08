
        
        
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
    
            :param conn: The urllib3 connection object associated with the cert.
        :param url: The requested URL.
        :param verify: Either a boolean, in which case it controls whether we verify
            the server's TLS certificate, or a string, in which case it must be a path
            to a CA bundle to use
        :param cert: The SSL certificate to verify.
        '''
        if url.lower().startswith('https') and verify:
    
        def __init__(self, username, password):
        self.username = username
        self.password = password
    
    #: Python 2.x?
is_py2 = (_ver[0] == 2)
    
        @property
    def host(self):
        return self.get_host()
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        def test_server_closes(self):
        '''the server closes when leaving the context manager'''
        with Server.basic_response_server() as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
    
            ('hTTp://u:p@Some.Host/path', 'socks5://some.host.proxy', all_proxies),
        ('hTTp://u:p@Other.Host/path', 'socks5://http.proxy', all_proxies),
        ('hTTp:///path', 'socks5://http.proxy', all_proxies),
        ('hTTps://Other.Host', 'socks5://http.proxy', all_proxies),
    
                # Update self to reflect the auth changes.
            self.__dict__.update(r.__dict__)
    
                if new_key is None:
                break
    
    #Some examples
    
        for i in range(1, s+1):
        dp[0][i] = False
    
    def getFrequencyOrder(message):
    letterToFreq = getLetterCount(message)
    freqToLetter = {}
    for letter in LETTERS:
        if letterToFreq[letter] not in freqToLetter:
            freqToLetter[letterToFreq[letter]] = [letter]
        else:
            freqToLetter[letterToFreq[letter]].append(letter)
    
    
class TestGetProfile(unittest.TestCase):
    def setUp(self):
        sys.setprofile(None)
    
    import pickle
import sqlite3
from collections import namedtuple
    
    def worker(input, output):
    for func, args in iter(input.get, 'STOP'):
        result = calculate(func, args)
        output.put(result)