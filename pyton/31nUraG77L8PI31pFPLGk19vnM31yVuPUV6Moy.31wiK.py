
        
        
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
    
        @property
    def body(self):
        body = self._orig.body
        if isinstance(body, str):
            # Happens with JSON/form request data parsed from the command line.
            body = body.encode('utf8')
        return body or b''

    
            '''
        assert with_headers or with_body
        self.msg = msg
        self.with_headers = with_headers
        self.with_body = with_body
        self.on_body_chunk_downloaded = on_body_chunk_downloaded
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
    
with open(BIN_FILE_PATH, 'rb') as f:
    BIN_FILE_CONTENT = f.read()
    
    import pytest
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        @property
    def auth(self):
        auth = self.get('auth', None)
        if not auth or not auth['type']:
            return
    
            self.output.write(
            CLEAR_LINE
            + ' '
            + SPINNER[self._spinner_pos]
            + ' '
            + self._status_line
        )
        self.output.flush()
    
                appid = random.choice(self.working_appid_list)
            return str(appid)
        else:
            for _ in xrange(0, 10):
                appid = self.public_appid.get()
                if appid in self.out_of_quota_appids or appid in self.not_exist_appids:
                    continue
                else:
                    return appid
            return None
    
        def __init__(self):
        ca_certs = os.path.join(current_path, 'cacert.pem')
        openssl_context = SSLContext(
            logger, ca_certs=ca_certs,
            cipher_suites=['ALL', '!RC4-SHA', '!ECDHE-RSA-RC4-SHA', '!ECDHE-RSA-AES128-GCM-SHA256',
                           '!AES128-GCM-SHA256', '!ECDHE-RSA-AES128-SHA', '!AES128-SHA']
        )
        host_manager = HostManagerBase()
        connect_creator = ConnectCreator(logger, config, openssl_context, host_manager,
                                         debug=True)
        self.check_ip = CheckIp(logger, config, connect_creator)
    
    
def test_teredo(probe_nat=True, probe_server=True):
    if pteredor_is_running:
        return 'Script is running, please retry later.'
    
    URLFETCH_MAX = 2
URLFETCH_MAXSIZE = 4*1024*1024
URLFETCH_DEFLATE_MAXSIZE = 4*1024*1024
URLFETCH_TIMEOUT = 60
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
        def setText(self, text):
        self.text = text
    
    from copy import deepcopy
from hamcrest import assert_that, contains_string, equal_to
    
    from concurrent.futures import _base
    
            Args:
            max_workers: The maximum number of threads that can be used to
                execute the given calls.
        '''
        self._max_workers = max_workers
        self._work_queue = queue.Queue()
        self._threads = set()
        self._shutdown = False
        self._shutdown_lock = threading.Lock()